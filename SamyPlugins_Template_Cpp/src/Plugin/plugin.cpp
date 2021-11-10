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
    UA_Client_delete(samy_core_client);
    UA_Client_delete(samy_core_client_read);
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

    UA_UInt32 monId = 0;
    UA_MonitoredItemCreateResult result =
        UA_Client_MonitoredItems_createEvent(samy_core_client, subId,
                                             UA_TIMESTAMPSTORETURN_BOTH, item,
                                             (void*)(this), this->HandlerEvents, NULL);

    std::cout << "\nStatus Code result: " << result.statusCode << std::endl;
    if(result.statusCode != UA_STATUSCODE_GOOD) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Could not add the MonitoredItem with %s", UA_StatusCode_name(result.statusCode));
    } else {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Monitoring Robot, id %u", response.subscriptionId);
    }

    // TODO Not needed?
    monId = result.monitoredItemId;

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
        printf("Method call was successful, and %lu returned values available.\n",
               (unsigned long)outputSize);
        UA_Array_delete(output, outputSize, &UA_TYPES[UA_TYPES_VARIANT]);
    } else {
        printf("Method call was unsuccessful, and %x returned values available.\n", retval);
    }
    UA_Variant_clear(&input);
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
        std::cout << "Reseting Skill with Name " << skillList[i].name << std::endl;
        ResetSkill(&skillList[i].skillNodeId);
    }
    return retval;
}

UA_StatusCode Plugin::HaltAllSkills(){
    UA_StatusCode retval;
    for (int i = 0; i < skillList.size(); i++){
        printf("Skill Name %d: %s\n", i, skillList[i].name.c_str());
        HaltSkill(&skillList[i].skillNodeId);
    }
    return retval;
}

// ################ Methode Handling  ########################


void Plugin::SendCommandIsDone(){
    std::cout << "Command is finished" << std::endl;
    // Call methode finished in opcua server
}

void Plugin::HandlerEvents(UA_Client *client, UA_UInt32 subId, void *subContext,
                            UA_UInt32 monId, void *monContext,
                            size_t nEventFields, UA_Variant *eventFields) {
    Plugin* plugin;
    plugin = (Plugin*)monContext;
    std::cout << "Number of EventFields: " << nEventFields << std::endl;

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

                    std::cout << "Found Skill with NodeId " << skillList[i].skillNodeId.identifier.numeric <<
                                 " to execute" << std::endl;
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
    std::cout << "\n\n Starting to Execute Skill\n\n" << std::endl;
    std::cout << "Get ParameterSet Node" << std::endl;
    UA_NodeId paramter_node_id;
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client_read, skillNode,
                                               &paramter_node_id, "ParameterSet");

    std::cout << "ParameterSet Node: " << paramter_node_id.namespaceIndex << "  " << paramter_node_id.identifier.numeric << std::endl;

    std::cout << "Browse all parameter value nodes" << std::endl;
    UA_BrowseRequest bReq;
    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = paramter_node_id; /* browse objects folder */
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    UA_BrowseResponse bResp = UA_Client_Service_browse(samy_core_client_read, bReq);

    std::cout << "Skill has "<< bResp.results[0].referencesSize << " parameters" << std::endl;

    for(size_t i = 0; i < bResp.resultsSize; i++) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; j++) {
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            if(ref->nodeClass == UA_NODECLASS_VARIABLE) {
                std::cout << "Parameter name:" << (const char*)ref->browseName.name.data << std::endl;
                UA_Variant myVar;
                UA_Variant_init(&myVar);

                UA_Client_readValueAttribute(samy_core_client_read, ref->nodeId.nodeId, &myVar);
                std::cout << "Got value from server" << std::endl;
                std::cout << "Type Name:" << myVar.type->typeName << std::endl;
                std::cout << "Type Kind:" << myVar.type->typeKind << std::endl;
                std::cout << "Type ID:" << myVar.type->typeId.identifier.numeric << std::endl;
                std::cout << "UA_TYPE MoveTo Id: " << UA_TYPES[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE].typeId.identifier.numeric << std::endl;
                std::cout << "UA_TYPE SetEndeffector Id: " << UA_TYPES[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE].typeId.identifier.numeric << std::endl;

                std::string typeName = myVar.type->typeName;
                if (typeName.compare("MoveToParametersSetDataType") == 0){
                    std::cout << "Found MoveTo Type" << std::endl;
                    UA_MoveToParametersSetDataType* moveto = (UA_MoveToParametersSetDataType*)&myVar.data;
                    if (*signals->MoveTo(moveto) < 0){
                        std::cout << "Error while executing MoveTo" << std::endl;
                        error = true;
                        break;
                    }

                }
                else if (UA_Variant_hasScalarType(&myVar, &UA_TYPES[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE])){
                    std::cout << "Found MoveTo with good method" << std::endl;
                    UA_MoveToParametersSetDataType* moveto = (UA_MoveToParametersSetDataType*)&myVar.data;
                    signals->MoveTo(moveto);
                }
                else if (typeName.compare("SetTransSpeedParametersSetDataType") == 0){
                    std::cout << "Found SetTransSpeed Type" << std::endl;
                    UA_SetTransSpeedParametersSetDataType* setTransSpeed = (UA_SetTransSpeedParametersSetDataType*)&myVar.data;
                    signals->SetTransSpeed(setTransSpeed);
                }

            }
        }
        if (error) break;
    }
    if (!error) ResetSkill(skillNode);
    UA_BrowseRequest_clear(&bReq);
    UA_BrowseResponse_clear(&bResp);

}




//    for (int i=0; i < skillData.cRCLCommandsSize; i++){
//    UA_CRCLCommandsUnionDataType* val = &(robot.requested_skill.cRCLCommands[i]);
//    switch (val->switchField){
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_NONE:
//          {
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND:
//          {
//              UA_InitCanonDataType* initCanon = (UA_InitCanonDataType*)&(val->fields);
//              printf("Got InitCanon command!\n");
//              signals->InitCanon(initCanon);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND:
//          {
//              UA_EndCanonDataType* endCanon = (UA_EndCanonDataType*)&(val->fields);
//              printf("Got EndCanon command!\n");
//              signals->EndCanon(endCanon);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND:
//          {
//              UA_MessageDataType* message = (UA_MessageDataType*)&(val->fields);
//              printf("Got Message command!\n");
//              signals->Message(message);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND:
//          {
//              UA_MoveToDataType* moveTo = (UA_MoveToDataType*)&(val->fields);
//              printf("Got MoveTo command and going to send signal.\n");
//              signals->MoveTo(moveTo);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVESCREWCOMMAND:
//          {
//              UA_MoveScrewDataType* moveScrew = (UA_MoveScrewDataType*)&(val->fields);
//              printf("Got MoveScrew command!\n");
//              signals->MoveScrew(moveScrew);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETHROUGHTOCOMMAND:
//          {
//              UA_MoveThroughToDataType* moveThroughTo = (UA_MoveThroughToDataType*)&(val->fields);
//              printf("Got MoveThroughTo command!\n");
//              signals->MoveThroughTo(moveThroughTo);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND:
//          {
//              UA_DwellDataType* dwell = (UA_DwellDataType*)&(val->fields);
//              printf("Got Dwell comand!\n");
//              signals->Dwell(dwell);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ACTUATEJOINTSCOMMAND:
//          {
//              UA_ActuateJointsDataType* actuateJoints = (UA_ActuateJointsDataType*)&(val->fields);
//              printf("Got actuateJoints command!\n");
//              signals->ActuateJoints(actuateJoints);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND:
//          {
//              UA_ConfigureJointReportsDataType* configureJoints = (UA_ConfigureJointReportsDataType*)&(val->fields);
//              printf("Got configureJoints command!\n");
//              signals->ConfigureJointReports(configureJoints);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETDEFAULTJOINTPOSITIONSTOLERANCESCOMMAND:
//          {
//              UA_SetDefaultJointPositionsTolerancesDataType* tolernace = (UA_SetDefaultJointPositionsTolerancesDataType*)&(val->fields);
//              printf("Got SetDefaultJointPositionsTolerances command!\n");
//              signals->SetDefaultJointPositionsTolerances(tolernace);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND:
//          {
//              UA_GetStatusDataType* getStatus = (UA_GetStatusDataType*)&(val->fields);
//              printf("Got GetStatus command!\n");
//              signals->GetStatus(getStatus);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND:
//          {
//              UA_CloseToolChangerDataType* closeToolChanger = (UA_CloseToolChangerDataType*)&(val->fields);
//              printf("Got CloseToolChanger command!\n");
//              signals->CloseToolChanger(closeToolChanger);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_OPENTOOLCHANGERCOMMAND:
//          {
//              UA_OpenToolChangerDataType* openToolChanger = (UA_OpenToolChangerDataType*)&(val->fields);
//              printf("Got OpenToolChanger command!\n");
//              signals->OpenToolChanger(openToolChanger);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND:
//          {
//              UA_SetRobotParametersDataType* robotParameters = (UA_SetRobotParametersDataType*)&(val->fields);
//              printf("Got setRobotParameters command!\n");
//              signals->SetRobotParameters(robotParameters);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORPARAMETERSCOMMAND:
//          {
//              UA_SetEndeffectorParametersDataType* parameters = (UA_SetEndeffectorParametersDataType*)&(val->fields);
//              printf("Got SetEndeffectorParameters command!\n");
//              signals->SetEndeffectorParameters(parameters);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND:
//          {
//              UA_SetEndeffectorDataType* setEndeffector = (UA_SetEndeffectorDataType*)&(val->fields);
//              printf("Got SetEndeffector command!\n");
//              signals->SetEndeffector(setEndeffector);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSACCELCOMMAND:
//          {
//              UA_SetTransAccelDataType* transAccel = (UA_SetTransAccelDataType*)&(val->fields);
//              printf("Got SetTransAccel command!\n");
//              signals->SetTransAccel(transAccel);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND:
//          {
//              UA_SetTransSpeedDataType* transSpeed = (UA_SetTransSpeedDataType*)&(val->fields);
//              printf("Got SetTransSpeed command!\n");
//              signals->SetTransSpeed(transSpeed);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTACCELCOMMAND:
//          {
//              UA_SetRotAccelDataType* rotAccel = (UA_SetRotAccelDataType*)&(val->fields);
//              printf("Got SetRotAccel command!\n");
//              signals->SetRotAccel(rotAccel);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTSPEEDCOMMAND:
//          {
//              UA_SetRotSpeedDataType* rotSpeed = (UA_SetRotSpeedDataType*)&(val->fields);
//              printf("Got SetRotSpeed command!\n");
//              signals->SetRotSpeed(rotSpeed);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETANGLEUNITSCOMMAND:
//          {
//              UA_SetAngleUnitsDataType* angleUnits = (UA_SetAngleUnitsDataType*)&(val->fields);
//              printf("Got SetAngleUnits command!\n");
//              signals->SetAngleUnits(angleUnits);
//              break;
//        }
//          //........................................
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDPOSETOLERANCECOMMAND:
//          {
//              UA_SetEndPoseToleranceDataType* tolernace = (UA_SetEndPoseToleranceDataType*)&(val->fields);
//              printf("Got SetEndPoseTolerance command!\n");
//              signals->SetEndPoseTolerance(tolernace);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETFORCEUNITSCOMMAND:
//          {
//              UA_SetForceUnitsDataType* forceUnits = (UA_SetForceUnitsDataType*)&(val->fields);
//              printf("Got SetForceUnits command!\n");
//              signals->SetForceUnits(forceUnits);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETINTERMEDIATEPOSETOLERANCECOMMAND:
//          {
//              UA_SetIntermediatePoseToleranceDataType* tolerance = (UA_SetIntermediatePoseToleranceDataType*)&(val->fields);
//              printf("Got SetIntermediatePoseTolerance command!\n");
//              signals->SetIntermediatePoseTolerance(tolerance);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETLENGTHUNITSCOMMAND:
//          {
//              UA_SetLengthUnitsDataType* lengthUnits = (UA_SetLengthUnitsDataType*)&(val->fields);
//              printf("Got SetLengthUnits command!\n");
//              signals->SetLengthUnits(lengthUnits);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETMOTIONCOORDINATIONCOMMAND:
//          {
//              UA_SetMotionCoordinationDataType* motionCoordination = (UA_SetMotionCoordinationDataType*)&(val->fields);
//              printf("Got SetMotionCoordination command!\n");
//              signals->SetMotionCoordination(motionCoordination);
//              break;
//          }

//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTORQUEUNITSCOMMAND:
//          {
//              UA_SetTorqueUnitsDataType* torqueUnits = (UA_SetTorqueUnitsDataType*)&(val->fields);
//              printf("Got SetTorqueUnits command!\n");
//              signals->SetTorqueUnit(torqueUnits);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_STOPMOTIONCOMMAND:
//          {
//              UA_StopMotionDataType* stopMotion = (UA_StopMotionDataType*)&(val->fields);
//              printf("Got topMotionDat command!\n");
//              signals->StopMotion(stopMotion);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGURESTATUSREPORTCOMMAND:
//          {
//              UA_ConfigureStatusReportDataType* configStatusReport = (UA_ConfigureStatusReportDataType*)&(val->fields);
//              printf("Got ConfigureStatusReport command!\n");
//              signals->ConfigureStatusReport(configStatusReport);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLESENSORCOMMAND:
//          {
//              UA_EnableSensorDataType* enableSensor = (UA_EnableSensorDataType*)&(val->fields);
//              printf("Got EnableSensor command!\n");
//              signals->EnableSensor(enableSensor);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLESENSORCOMMAND:
//          {
//              UA_DisableSensorDataType* disableSensor = (UA_DisableSensorDataType*)&(val->fields);
//              printf("Got DisableSensor command!\n");
//              signals->DisableSensor(disableSensor);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND:
//          {
//              UA_EnableGripperDataType* enableGripper = (UA_EnableGripperDataType*)&(val->fields);
//              printf("Got EnableGripper command!\n");
//              signals->EnableGripper(enableGripper);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEGRIPPERCOMMAND:
//          {
//              UA_DisableGripperDataType* disableGripper = (UA_DisableGripperDataType*)&(val->fields);
//              printf("Got DisableGripper command!\n");
//              signals->DisableGripper(disableGripper);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEROBOTPARAMETERSTATUSCOMMAND:
//          {
//              UA_EnableRobotParameterStatusDataType* enableRobotParaStatus = (UA_EnableRobotParameterStatusDataType*)&(val->fields);
//              printf("Got EnableRobotParameterStatus command!\n");
//              signals->EnableRobotParameterStatus(enableRobotParaStatus);
//              break;
//          }
//        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEROBOTPARAMETERSTATUSCOMMAND:
//          {
//              UA_DisableRobotParameterStatusDataType* disableRobotParaStatus = (UA_DisableRobotParameterStatusDataType*)&(val->fields);
//              printf("Got DisableRobotParameterStatus command!\n");
//              signals->DisableRobotParameterStatus(disableRobotParaStatus);
//              break;
//          }
//        default:
//          {
//              break;
//          }
//    }
//    }





