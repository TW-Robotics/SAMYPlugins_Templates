#include "plugin.h"

std::vector<struct skill> Plugin::skillList;

Plugin::Plugin(std::string samyCoreAddress_, std::string samyCorePort_, Signals* signals_):
    signals(signals_),
    samyCoreAddress(samyCoreAddress_),
    samyCorePort(samyCorePort_),
    m_worker(boost::asio::make_work_guard(m_service))
{
    robot_node_id = UA_NodeId_new();
    robot_controller_node_id = UA_NodeId_new();
}

Plugin::~Plugin()
{
    UA_NodeId_delete(robot_node_id);
    UA_NodeId_delete(robot_controller_node_id);
    //UA_Client_delete(samy_core_client);
    //UA_Client_delete(samy_core_client_read);
}

UA_StatusCode Plugin::InitPlugin(std::string robotName){

    UA_StatusCode retval;
    retval = ConnectToCore();
    // give the client time to connect
    sleep(1);
    if (retval != UA_STATUSCODE_GOOD){
        std::cout << "Connecting to SAMY Core faild" << std::endl;
        return retval;
    }
    std::cout << "Connected to SAMY Core." << std::endl;
    retval = GetRobotNodeId(robotName);
    if (retval != UA_STATUSCODE_GOOD){
        std::cout << "Getting Robot Node Id faild" << std::endl;
        return retval;
    }
    std::cout << "Got Robot Node Id." << std::endl;
    retval = SubscribeToRobot();
    if (retval != UA_STATUSCODE_GOOD){
        std::cout << "Subscribing to Robot faild" << std::endl;
        return retval;
    }
    std::cout << "Subscribed to NextSkillNodeId." << std::endl;
    retval = GetListOfSkills();
    if (retval != UA_STATUSCODE_GOOD){
        std::cout << "Getting Lisft of Skills faild." << std::endl;
        return retval;
    }
    std::cout << "Got List of all skills." << std::endl;
    retval = ResetAllSkills();
    if (retval != UA_STATUSCODE_GOOD){
        std::cout << "Resetting all skills faild" << std::endl;
        return retval;
    }
    std::cout << "All Skills reseted" << std::endl;
    ConnectSignals();
    return retval;
}

bool Plugin::StartReadThread() {
    if (m_started)
      return true;
    m_started = true;

    // start reader thread
    m_thread = boost::thread(boost::bind(&Plugin::RunService, this));
    return m_started;
}

void Plugin::RunService(){
    // Create opcua client in thread
    samy_core_client_read = UA_Client_new();
    std::string endpoint = "opc.tcp://"+ samyCoreAddress + ":" + samyCorePort;
    UA_DataTypeArray customDataTypesCRCL{NULL, UA_TYPES_CRCL_COUNT, UA_TYPES_CRCL};

    UA_ClientConfig *cc = UA_Client_getConfig( samy_core_client_read );

    UA_ClientConfig_setDefault(cc);
    cc->customDataTypes = &customDataTypesCRCL;

    UA_StatusCode retval = UA_Client_connect( samy_core_client_read, endpoint.c_str() );

    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(samy_core_client_read);
        std::cout << "Connectiong to server faild: read client" << std::endl;
    }
    m_service.run();
    UA_Client_delete(samy_core_client_read);
}

UA_StatusCode Plugin::RunClient(int timeout){
    UA_StatusCode retval;
    while (*running){
        retval = UA_Client_run_iterate(samy_core_client, timeout);
    }
    HaltAllSkills();
    return retval;
}

UA_StatusCode Plugin::ConnectToCore(){

    samy_core_client = UA_Client_new();
    std::string endpoint = "opc.tcp://"+ samyCoreAddress + ":" + samyCorePort;
    UA_DataTypeArray customDataTypes{NULL, UA_TYPES_CRCL_COUNT, UA_TYPES_CRCL};

    UA_ClientConfig *cc = UA_Client_getConfig( samy_core_client );

    UA_ClientConfig_setDefault(cc);
    cc->customDataTypes = &customDataTypes;

    UA_StatusCode retval = UA_Client_connect( samy_core_client, endpoint.c_str() );

    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(samy_core_client);
        std::cout << "Connecting to server faild: event client" << std::endl;
        return retval;
    }
    StartReadThread();

    return retval;
}

UA_StatusCode Plugin::SubscribeToRobot(){

    UA_StatusCode retval;

    UA_CreateSubscriptionRequest request = UA_CreateSubscriptionRequest_default();
    UA_CreateSubscriptionResponse response = UA_Client_Subscriptions_create(samy_core_client, request,
                                                                                NULL, NULL, NULL);
    if(response.responseHeader.serviceResult != UA_STATUSCODE_GOOD) {
        UA_Client_disconnect(samy_core_client);
        UA_Client_delete(samy_core_client);
        return EXIT_FAILURE;
    }


    UA_UInt32 subId = response.subscriptionId;
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Create subscription succeeded, id %u", subId);

    // Add a MonitoredItem
    UA_MonitoredItemCreateRequest item;
    UA_MonitoredItemCreateRequest_init(&item);
    item.itemToMonitor.nodeId = *robot_node_id;//  UA_NODEID_NUMERIC(8, 15001);
    item.itemToMonitor.attributeId = UA_ATTRIBUTEID_EVENTNOTIFIER;
    item.monitoringMode = UA_MONITORINGMODE_REPORTING;

    UA_EventFilter filter;
    UA_EventFilter_init(&filter);
    filter.selectClauses = SAMY::HelperFunctions::setupSelectClauses();
    filter.selectClausesSize = SAMY::HelperFunctions::nSelectClauses;

    item.requestedParameters.filter.encoding = UA_EXTENSIONOBJECT_DECODED;
    item.requestedParameters.filter.content.decoded.data = &filter;
    item.requestedParameters.filter.content.decoded.type = &UA_TYPES[UA_TYPES_EVENTFILTER];

//    UA_UInt32 monId = 0;
    UA_MonitoredItemCreateResult result =
        UA_Client_MonitoredItems_createEvent(samy_core_client, subId,
                                             UA_TIMESTAMPSTORETURN_BOTH, item,
                                             (void*)(this), this->HandlerEvents, NULL);

    if(result.statusCode != UA_STATUSCODE_GOOD) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Could not add the MonitoredItem with %s", UA_StatusCode_name(result.statusCode));
    } else {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Monitoring Robot, id %u", response.subscriptionId);
    }

    // TODO Not needed?
//    monId = result.monitoredItemId;

    return retval;
}

UA_StatusCode Plugin::GetRobotNodeId(std::string robotName){
    UA_NodeId tmp_node_id;
    UA_NodeId object_node_id = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, &object_node_id,
                                               &tmp_node_id, "DeviceSet");
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, &tmp_node_id,
                                               robot_node_id, robotName);
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, robot_node_id,
                                               &tmp_node_id, "Controllers");
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, &tmp_node_id,
                                               robot_controller_node_id, robotName);
    return UA_STATUSCODE_GOOD;
}

UA_StatusCode Plugin::GetSkillNodeId(std::string skillName, UA_NodeId* skillNodeId){
    UA_NodeId tmp_node_id;
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, robot_controller_node_id,
                                               &tmp_node_id, "Skills");
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, &tmp_node_id,
                                               skillNodeId, skillName);
    return UA_STATUSCODE_GOOD;
}

UA_StatusCode Plugin::GetListOfSkills(){
    UA_NodeId skillsNodeId;
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, robot_controller_node_id,
                                               &skillsNodeId, "Skills");
    UA_BrowseRequest bReq;
    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = skillsNodeId;
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    UA_BrowseResponse bResp = UA_Client_Service_browse(samy_core_client, bReq);
    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            if (ref->nodeClass == UA_NODECLASS_OBJECT){
                struct skill skill;
                std::string name((const char*)ref->browseName.name.data);
                skill.skillNodeId = ref->nodeId.nodeId;
                skill.name = name;
                skillList.push_back(skill);
            }
        }
    }
    UA_BrowseRequest_clear(&bReq);
    UA_BrowseResponse_clear(&bResp);

    // Remove Mandatory Node
    skillList.erase(skillList.begin());

    for (int i = 0; i < skillList.size(); i++){
        printf("Skill Name %d: %s\n", i, skillList[i].name.c_str());
    }
    return UA_STATUSCODE_GOOD;
}

void Plugin::ConnectSignals(){
    signals->Halt.connect(boost::bind(&Plugin::HaltCurrentSkill, this));
    signals->Reset.connect(boost::bind(&Plugin::ResetCurrentSkill, this));
    signals->Resume.connect(boost::bind(&Plugin::ResumeCurrentSkill, this));
    signals->Suspend.connect(boost::bind(&Plugin::SuspendCurrentSkill, this));
}

// ################ Methode Handling  ########################

UA_StatusCode Plugin::CallMethod(UA_NodeId* methodNode, UA_NodeId* objectNode){
 /* Call a remote method */
    UA_StatusCode retval;
    UA_Variant input;
    UA_String argString = UA_STRING("Hello Server");
    UA_Variant_init(&input);
    UA_Variant_setScalarCopy(&input, &argString, &UA_TYPES[UA_TYPES_STRING]);
    size_t outputSize;
    UA_Variant *output;
    retval = UA_Client_call(samy_core_client_read, *objectNode,
                            *methodNode, 0, NULL, &outputSize, &output);
    if(retval == UA_STATUSCODE_GOOD) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Method call was successful, and %lu returned values available.",
                    (unsigned long)outputSize);
        UA_Array_delete(output, outputSize, &UA_TYPES[UA_TYPES_VARIANT]);
    } else {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Method call was unsuccessful, and %x returned values available.",
                    retval);
    }
    UA_Variant_clear(&input);
    return retval;
}

UA_StatusCode Plugin::GetSkillMethods(UA_NodeId* skillNode,
                                      std::unordered_map<std::string, UA_NodeId>* methods){
    UA_BrowseRequest bReq;
    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = *skillNode;
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    UA_BrowseResponse bResp = UA_Client_Service_browse(samy_core_client_read, bReq);
    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            if (ref->nodeClass == UA_NODECLASS_METHOD){
                //std::cout << (const char*)ref->browseName.name.data << std::endl;
                std::pair<std::string, UA_NodeId> method ((const char*)ref->browseName.name.data,
                                                          ref->nodeId.nodeId);
                methods->insert(method);
            }
        }
    }
    UA_BrowseRequest_clear(&bReq);
    UA_BrowseResponse_clear(&bResp);
    return UA_STATUSCODE_GOOD;
}

UA_StatusCode Plugin::ResetSkill(UA_NodeId* skillNode){
    UA_StatusCode retval;
    std::unordered_map<std::string, UA_NodeId> methods;
    GetSkillMethods(skillNode, &methods);
    retval = CallMethod(&methods.at("Reset"), skillNode);
    return retval;
}

UA_StatusCode Plugin::ResetCurrentSkill(){
    UA_StatusCode retval;
    std::unordered_map<std::string, UA_NodeId> methods;
    GetSkillMethods(&currentSkill, &methods);
    retval = CallMethod(&methods.at("Reset"), &currentSkill);
    return retval;
}

UA_StatusCode Plugin::HaltSkill(UA_NodeId* skillNode){
    UA_StatusCode retval;
    std::unordered_map<std::string, UA_NodeId> methods;
    GetSkillMethods(skillNode, &methods);
    retval = CallMethod(&methods.at("Halt"), skillNode);
    return retval;
}

UA_StatusCode Plugin::HaltCurrentSkill(){
    UA_StatusCode retval;
    std::unordered_map<std::string, UA_NodeId> methods;
    GetSkillMethods(&currentSkill, &methods);
    retval = CallMethod(&methods.at("Halt"), &currentSkill);
    return retval;
}

UA_StatusCode Plugin::ResetAllSkills(){
    UA_StatusCode retval;
    for (int i = 0; i < skillList.size(); i++){
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Reseting skill with name '%.*s'",
                    (int)skillList[i].name.length(), skillList[i].name.c_str());
        ResetSkill(&skillList[i].skillNodeId);
    }
    return retval;
}

UA_StatusCode Plugin::HaltAllSkills(){
    UA_StatusCode retval;
    for (int i = 0; i < skillList.size(); i++){
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Halting skill with name '%.*s'",
                    (int)skillList[i].name.length(), skillList[i].name.c_str());
        HaltSkill(&skillList[i].skillNodeId);
    }
    return retval;
}

UA_StatusCode Plugin::ResumeCurrentSkill(){
    UA_StatusCode retval;
    std::unordered_map<std::string, UA_NodeId> methods;
    GetSkillMethods(&currentSkill, &methods);
    retval = CallMethod(&methods.at("Resume"), &currentSkill);
    return retval;
}

UA_StatusCode Plugin::SuspendCurrentSkill(){
    UA_StatusCode retval;
    std::unordered_map<std::string, UA_NodeId> methods;
    GetSkillMethods(&currentSkill, &methods);
    retval = CallMethod(&methods.at("Suspend"), &currentSkill);
    return retval;
}

// ################ Methode Handling  ########################


void Plugin::HandlerEvents(UA_Client *client, UA_UInt32 subId, void *subContext,
                            UA_UInt32 monId, void *monContext,
                            size_t nEventFields, UA_Variant *eventFields) {
    Plugin* plugin;
    plugin = (Plugin*)monContext;
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Handler got en Event");

    for (size_t i = 0; i < nEventFields; i++){
        if (UA_Variant_hasScalarType(&eventFields[i], &UA_TYPES[UA_TYPES_LOCALIZEDTEXT])) {
            UA_LocalizedText *lt = (UA_LocalizedText *)eventFields[i].data;
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                        "Message: '%.*s'", (int)lt->text.length, lt->text.data);
            // Check if text includes a skill name from the skill list.
            std::string text((const char*)lt->text.data);
            for (int i = 0; i < skillList.size(); i++){
                if(text.find(skillList[i].name) != std::string::npos &&
                        text.find("Ready to Running") != std::string::npos){

                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found Skill with NodeId %d to execute",
                                skillList[i].skillNodeId.identifier.numeric);
                    plugin->currentSkill = skillList[i].skillNodeId;
                    plugin->m_service.post(boost::bind(&Plugin::ExecuteSkill, plugin, &skillList[i].skillNodeId));
                }
            }
        }
        else if (UA_Variant_hasScalarType(&eventFields[i], &UA_TYPES[UA_TYPES_NODEID])){
            UA_NodeId nextSkillNodeId = *(UA_NodeId *)eventFields[i].data;
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "NodeID: %d", nextSkillNodeId.identifier.numeric);
        }
        else if (UA_Variant_hasScalarType(&eventFields[i], &UA_TYPES[UA_TYPES_UINT16])){
            UA_UInt16 severity = *(UA_UInt16 *)eventFields[i].data;
        }
        else {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                                "Don't know how to handle type: '%s'", eventFields[i].type->typeName);
        }
    }
}

void Plugin::ExecuteSkill(UA_NodeId* skillNode){

    bool error = false;
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Starting to Execute Skill");
    UA_NodeId paramter_node_id;
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client_read, skillNode,
                                               &paramter_node_id, "ParameterSet");

    //std::cout << "ParameterSet Node: " << paramter_node_id.namespaceIndex << "  " << paramter_node_id.identifier.numeric << std::endl;

    //std::cout << "Browse all parameter value nodes" << std::endl;
    UA_BrowseRequest bReq;
    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = paramter_node_id; /* browse objects folder */
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    UA_BrowseResponse bResp = UA_Client_Service_browse(samy_core_client_read, bReq);

    //std::cout << "Skill has "<< bResp.results[0].referencesSize << " parameters\n" << std::endl;

    for(size_t i = 0; i < bResp.resultsSize; i++) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; j++) {
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            if(ref->nodeClass == UA_NODECLASS_VARIABLE) {
//                std::cout << "Parameter name:" << (const char*)ref->browseName.name.data << std::endl;
                UA_Variant myVar;
                UA_Variant_init(&myVar);

                UA_Client_readValueAttribute(samy_core_client_read, ref->nodeId.nodeId, &myVar);
//                std::cout << "Got value from server" << std::endl;
//                std::cout << "Type Name:" << myVar.type->typeName << std::endl;
//                std::cout << "Type Kind:" << myVar.type->typeKind << std::endl;
//                std::cout << "Type ID:" << myVar.type->typeId.identifier.numeric << std::endl;
//                std::cout << "UA_TYPE MoveTo Id: " << UA_TYPES[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE].typeId.identifier.numeric << std::endl;
//                std::cout << "UA_TYPE SetEndeffector Id: " << UA_TYPES[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE].typeId.identifier.numeric << std::endl;


                std::string typeName = myVar.type->typeName;
                //UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "TypeName '%.*s'", (int)typeName.length(), typeName.c_str());
                if (typeName.compare("InitCanonParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found InitCanon Type");
                    UA_InitCanonParametersSetDataType* InitCanon = (UA_InitCanonParametersSetDataType*)&myVar.data;
                    if (*signals->InitCanon(InitCanon) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing InitCanon");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("EndCanonParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found EndCanon Type");
                    UA_EndCanonParametersSetDataType* EndCanon = (UA_EndCanonParametersSetDataType*)&myVar.data;
                    if (*signals->EndCanon(EndCanon) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing EndCanon");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("MessageParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found Message Type");
                    UA_MessageParametersSetDataType* Message = (UA_MessageParametersSetDataType*)&myVar.data;
                    if (*signals->Message(Message) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing Message");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("MoveToParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found MoveTo Type");
                    UA_MoveToParametersSetDataType* Moveto = (UA_MoveToParametersSetDataType*)&myVar.data;
                    if (*signals->MoveTo(Moveto) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing MoveTo");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("MoveScrewParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found MoveScrew Type");
                    UA_MoveScrewParametersSetDataType* MoveScrew = (UA_MoveScrewParametersSetDataType*)&myVar.data;
                    if (*signals->MoveScrew(MoveScrew) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing MoveScrew");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("MoveThroughToParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found MoveThroughTo Type");
                    UA_MoveThroughToParametersSetDataType* MoveThroughTo = (UA_MoveThroughToParametersSetDataType*)&myVar.data;
                    if (*signals->MoveThroughTo(MoveThroughTo) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing MoveThroughTo");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("DwellParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found Dewll Type");
                    UA_DwellParametersSetDataType* Dwell = (UA_DwellParametersSetDataType*)&myVar.data;
                    if (*signals->Dwell(Dwell) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing Dwell");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("ActuateJointsParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found ActuateJoints Type");
                    UA_ActuateJointsParametersSetDataType* ActuateJoints = (UA_ActuateJointsParametersSetDataType*)&myVar.data;
                    if (*signals->ActuateJoints(ActuateJoints) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing ActuateJoints");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("ConfigureJointReportsParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found ConfigureJointReports Type");
                    UA_ConfigureJointReportsParametersSetDataType* ConfigureJointReports = (UA_ConfigureJointReportsParametersSetDataType*)&myVar.data;
                    if (*signals->ConfigureJointReports(ConfigureJointReports) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing ConfigureJointReports");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetDefaultJointPositionsTolerancesParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetDefaultJointPositionsTolerances Type");
                    UA_SetDefaultJointPositionsTolerancesParametersSetDataType* SetDefaultJointPositionsTolerances = (UA_SetDefaultJointPositionsTolerancesParametersSetDataType*)&myVar.data;
                    if (*signals->SetDefaultJointPositionsTolerances(SetDefaultJointPositionsTolerances) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetDefaultJointPositionsTolerances");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("GetStatusParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found GetStatus Type");
                    UA_GetStatusParametersSetDataType* GetStatus = (UA_GetStatusParametersSetDataType*)&myVar.data;
                    if (*signals->GetStatus(GetStatus) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing GetStatus");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("CloseToolChangerParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found CloseToolChanger Type");
                    UA_CloseToolChangerParametersSetDataType* CloseToolChanger = (UA_CloseToolChangerParametersSetDataType*)&myVar.data;
                    if (*signals->CloseToolChanger(CloseToolChanger) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing CloseToolChanger");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("OpenToolChangerParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found OpenToolChanger Type");
                    UA_OpenToolChangerParametersSetDataType* OpenToolChanger = (UA_OpenToolChangerParametersSetDataType*)&myVar.data;
                    if (*signals->OpenToolChanger(OpenToolChanger) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing OpenToolChanger");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetRobotParametersParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetRobotParameters Type");
                    UA_SetRobotParametersParametersSetDataType* SetRobotParameters = (UA_SetRobotParametersParametersSetDataType*)&myVar.data;
                    if (*signals->SetRobotParameters(SetRobotParameters) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetRobotParameters");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetEndeffectorParametersParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetEndeffectorParameters Type");
                    UA_SetEndeffectorParametersParametersSetDataType* SetEndeffectorParameters = (UA_SetEndeffectorParametersParametersSetDataType*)&myVar.data;
                    if (*signals->SetEndeffectorParameters(SetEndeffectorParameters) < 0){
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetEndeffectorParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetEndeffector Type");
                    UA_SetEndeffectorParametersSetDataType* SetEndeffector = (UA_SetEndeffectorParametersSetDataType*)&myVar.data;
                    if (*signals->SetEndeffector(SetEndeffector) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetEndeffector");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetTransAccelParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetTransAccel Type");
                    UA_SetTransAccelParametersSetDataType* SetTransAccel = (UA_SetTransAccelParametersSetDataType*)&myVar.data;
                    if (*signals->SetTransAccel(SetTransAccel) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetTransAccel");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetTransSpeedParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetTransSpeed Type");
                    UA_SetTransSpeedParametersSetDataType* SetTransSpeed = (UA_SetTransSpeedParametersSetDataType*)&myVar.data;
                    if (*signals->SetTransSpeed(SetTransSpeed) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetTransSpeed");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetRotAccelParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetRotAccel Type");
                    UA_SetRotAccelParametersSetDataType* SetRotAccel = (UA_SetRotAccelParametersSetDataType*)&myVar.data;
                    if (*signals->SetRotAccel(SetRotAccel) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetRotAccel");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetRotSpeedParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetRotSpeed Type");
                    UA_SetRotSpeedParametersSetDataType* SetRotSpeed = (UA_SetRotSpeedParametersSetDataType*)&myVar.data;
                    if (*signals->SetRotSpeed(SetRotSpeed) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetRotSpeed");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetAngleUnitsParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetAngleUnits Type");
                    UA_SetAngleUnitsParametersSetDataType* SetAngleUnits = (UA_SetAngleUnitsParametersSetDataType*)&myVar.data;
                    if (*signals->SetAngleUnits(SetAngleUnits) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetAngleUnits");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetEndPoseToleranceParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetEndPoseTolerance Type");
                    UA_SetEndPoseToleranceParametersSetDataType* SetEndPoseTolerance = (UA_SetEndPoseToleranceParametersSetDataType*)&myVar.data;
                    if (*signals->SetEndPoseTolerance(SetEndPoseTolerance) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetEndPoseTolerance");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetForceUnitsParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetForceUnits Type");
                    UA_SetForceUnitsParametersSetDataType* SetForceUnits = (UA_SetForceUnitsParametersSetDataType*)&myVar.data;
                    if (*signals->SetForceUnits(SetForceUnits) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetForceUnits");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetIntermediatePoseToleranceParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetIntermediatePoseTolerance Type");
                    UA_SetIntermediatePoseToleranceParametersSetDataType* SetIntermediatePoseTolerance = (UA_SetIntermediatePoseToleranceParametersSetDataType*)&myVar.data;
                    if (*signals->SetIntermediatePoseTolerance(SetIntermediatePoseTolerance) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetIntermediatePoseTolerance");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetLengthUnitsParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetLengthUnits Type");
                    UA_SetLengthUnitsParametersSetDataType* SetLengthUnits = (UA_SetLengthUnitsParametersSetDataType*)&myVar.data;
                    if (*signals->SetLengthUnits(SetLengthUnits) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetLengthUnits");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetMotionCoordinationParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetMotionCoordination Type");
                    UA_SetMotionCoordinationParametersSetDataType* SetMotionCoordination = (UA_SetMotionCoordinationParametersSetDataType*)&myVar.data;
                    if (*signals->SetMotionCoordination(SetMotionCoordination) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetMotionCoordination");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetMotionCoordinationParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetMotionCoordination Type");
                    UA_SetMotionCoordinationParametersSetDataType* SetMotionCoordination = (UA_SetMotionCoordinationParametersSetDataType*)&myVar.data;
                    if (*signals->SetMotionCoordination(SetMotionCoordination) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetMotionCoordination");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("SetTorqueUnitsParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found SetTorqueUnit Type");
                    UA_SetTorqueUnitsParametersSetDataType* SetTorqueUnit = (UA_SetTorqueUnitsParametersSetDataType*)&myVar.data;
                    if (*signals->SetTorqueUnit(SetTorqueUnit) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing SetTorqueUnit");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("StopMotionParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found StopMotion Type");
                    UA_StopMotionParametersSetDataType* StopMotion = (UA_StopMotionParametersSetDataType*)&myVar.data;
                    if (*signals->StopMotion(StopMotion) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing StopMotion");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("ConfigureStatusReportParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found ConfigureStatusReport Type");
                    UA_ConfigureStatusReportParametersSetDataType* ConfigureStatusReport = (UA_ConfigureStatusReportParametersSetDataType*)&myVar.data;
                    if (*signals->ConfigureStatusReport(ConfigureStatusReport) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing ConfigureStatusReport");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("EnableSensorParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found EnableSensor Type");
                    UA_EnableSensorParametersSetDataType* EnableSensor = (UA_EnableSensorParametersSetDataType*)&myVar.data;
                    if (*signals->EnableSensor(EnableSensor) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing EnableSensor");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("DisableSensorParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found DisableSensor Type");
                    UA_DisableSensorParametersSetDataType* DisableSensor = (UA_DisableSensorParametersSetDataType*)&myVar.data;
                    if (*signals->DisableSensor(DisableSensor) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing DisableSensor");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("EnableGripperParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found EnableGripper Type");
                    UA_EnableGripperParametersSetDataType* EnableGripper = (UA_EnableGripperParametersSetDataType*)&myVar.data;
                    if (*signals->EnableGripper(EnableGripper) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing EnableGripper");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("DisableGripperParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found DisableGripper Type");
                    UA_DisableGripperParametersSetDataType* DisableGripper = (UA_DisableGripperParametersSetDataType*)&myVar.data;
                    if (*signals->DisableGripper(DisableGripper) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing DisableGripper");

                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("EnableRobotParameterStatusParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found EnableRobotParameterStatus Type");
                    UA_EnableRobotParameterStatusParametersSetDataType* EnableRobotParameterStatus = (UA_EnableRobotParameterStatusParametersSetDataType*)&myVar.data;
                    if (*signals->EnableRobotParameterStatus(EnableRobotParameterStatus) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing EnableRobotParameterStatus");
                        error = true;
                        break;
                    }
                }
                else if (typeName.compare("DisableRobotParameterStatusParametersSetDataType") == 0){
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Found DisableRobotParameterStatus Type");
                    UA_DisableRobotParameterStatusParametersSetDataType* DisableRobotParameterStatus = (UA_DisableRobotParameterStatusParametersSetDataType*)&myVar.data;
                    if (*signals->DisableRobotParameterStatus(DisableRobotParameterStatus) < 0){
                        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Error while executing DisableRobotParameterStatus");
                        error = true;
                        break;
                    }
                }
                else {
                    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Unknown command");
                    error = true;
                }
            }
        }
        if (error) break;
    }
    if (!error){
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Skill finished without error");
        ResetSkill(skillNode);
    }
    UA_BrowseRequest_clear(&bReq);
    UA_BrowseResponse_clear(&bResp);

}





