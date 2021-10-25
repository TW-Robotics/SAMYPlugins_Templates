#include "plugin.h"

std::vector<struct skill> Plugin::skillList;

Plugin::Plugin(Signals* signals_):
    signals(signals_)
{
    robot_node_id = UA_NodeId_new();
    robot_controller_node_id = UA_NodeId_new();
}

Plugin::~Plugin()
{
    UA_NodeId_delete(robot_node_id);
    UA_NodeId_delete(robot_controller_node_id);
    UA_Client_delete(samy_core_client);
}

UA_StatusCode Plugin::ConnectToCore(std::string samyCoreAddress, std::string samyCorePort){
    // Setup custom Data Types
    UA_DataTypeArray customDataTypes = {NULL, UA_TYPES_CRCL_COUNT, UA_TYPES_CRCL};

    samy_core_client = UA_Client_new();
    UA_ClientConfig *cc = UA_Client_getConfig(samy_core_client);
    UA_ClientConfig_setDefault(cc);
    cc->customDataTypes = &customDataTypes;

    /* Listing endpoints */
    UA_EndpointDescription* endpointArray = NULL;
    size_t endpointArraySize = 0;
    UA_StatusCode retval = UA_Client_getEndpoints(samy_core_client, "opc.tcp://localhost:4840",
                                                  &endpointArraySize, &endpointArray);
    if(retval != UA_STATUSCODE_GOOD) {
        UA_Array_delete(endpointArray, endpointArraySize, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]);
        UA_Client_delete(samy_core_client);
        return EXIT_FAILURE;
    }
    printf("%i endpoints found\n", (int)endpointArraySize);
    for(size_t i=0;i<endpointArraySize;i++) {
        printf("URL of endpoint %i is %.*s\n", (int)i,
               (int)endpointArray[i].endpointUrl.length,
               endpointArray[i].endpointUrl.data);
    }
    UA_Array_delete(endpointArray,endpointArraySize, &UA_TYPES[UA_TYPES_ENDPOINTDESCRIPTION]);

    std::string endpoint = "opc.tcp://"+ samyCoreAddress + ":" + samyCorePort;

    retval = UA_Client_connect(samy_core_client, endpoint.c_str());

    if(retval != UA_STATUSCODE_GOOD) {
        UA_Client_delete(samy_core_client);
    }

    return retval;
}

UA_StatusCode Plugin::GetRobotNodeId(std::string robotName){
    UA_NodeId* tmp_node_id = UA_NodeId_new();
    UA_NodeId object_node_id = UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER);
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, &object_node_id,
                                               tmp_node_id, "DeviceSet");
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, tmp_node_id,
                                               robot_node_id, robotName);
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, robot_node_id,
                                               tmp_node_id, "Controllers");
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, tmp_node_id,
                                               robot_controller_node_id, robotName);
    return UA_STATUSCODE_GOOD;
}

UA_StatusCode Plugin::GetSkillNodeId(std::string skillName, UA_NodeId* skillNodeId){
    UA_NodeId* tmp_node_id = UA_NodeId_new();
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, robot_controller_node_id,
                                               tmp_node_id, "Skills");
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, tmp_node_id,
                                               skillNodeId, skillName);
    return UA_STATUSCODE_GOOD;
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
    UA_BrowseResponse bResp = UA_Client_Service_browse(samy_core_client, bReq);
    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            if (ref->nodeClass == UA_NODECLASS_METHOD){
                std::cout << (const char*)ref->browseName.name.data << std::endl;
                std::pair<std::string, UA_NodeId> method ((const char*)ref->browseName.name.data,
                                                          ref->nodeId.nodeId);
                methods->insert(method);
            }
        }
    }
    return UA_STATUSCODE_GOOD;
}

UA_StatusCode Plugin::callMethod(UA_NodeId* methodNode, UA_NodeId* objectNode){
 /* Call a remote method */
//    retval()
//    UA_Variant input;
//    UA_String argString = UA_STRING("Hello Server");
//    UA_Variant_init(&input);
//    UA_Variant_setScalarCopy(&input, &argString, &UA_TYPES[UA_TYPES_STRING]);
//    size_t outputSize;
//    UA_Variant *output;
//    retval = UA_Client_call(samy_core_client, *objectNode,
//                            *methodNode, 1, &input, &outputSize, &output);
//    if(retval == UA_STATUSCODE_GOOD) {
//        printf("Method call was successful, and %lu returned values available.\n",
//               (unsigned long)outputSize);
//        UA_Array_delete(output, outputSize, &UA_TYPES[UA_TYPES_VARIANT]);
//    } else {
//        printf("Method call was unsuccessful, and %x returned values available.\n", retval);
//    }
//    UA_Variant_clear(&input);
}

UA_StatusCode Plugin::GetListOfSkills(){
    UA_NodeId * skillsNodeId = UA_NodeId_new();
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, robot_controller_node_id,
                                               skillsNodeId, "Skills");

    UA_BrowseRequest bReq;
    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = *skillsNodeId;
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
    // Remove Mandatory Node
    skillList.erase(skillList.begin());

    for (int i = 0; i < skillList.size(); i++){
        printf("Skill Name %d: %s\n", i, skillList[i].name.c_str());
    }
    return UA_STATUSCODE_GOOD;
}

UA_StatusCode Plugin::RunClient(int timeout){
    UA_StatusCode retval;
    while (*running){
        retval = UA_Client_run_iterate(samy_core_client, timeout);
    }
    return retval;
}

void Plugin::handler_events(UA_Client *client, UA_UInt32 subId, void *subContext,
                            UA_UInt32 monId, void *monContext,
                            size_t nEventFields, UA_Variant *eventFields) {
    Plugin* plugin;
    plugin = (Plugin*)monContext;

    printf("New Event!!\n");
    for (size_t i = 0; i < nEventFields; i++){
        if (UA_Variant_hasScalarType(&eventFields[i], &UA_TYPES[UA_TYPES_UINT16])){
            UA_UInt16 severity = *(UA_UInt16 *)eventFields[i].data;
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Severity: %u", severity);
        }
        else if (UA_Variant_hasScalarType(&eventFields[i], &UA_TYPES[UA_TYPES_LOCALIZEDTEXT])) {
            UA_LocalizedText *lt = (UA_LocalizedText *)eventFields[i].data;
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                        "Message: '%.*s'", (int)lt->text.length, lt->text.data);
            // Check if text includes a skill name from the skill list.
            std::string text((const char*)lt->text.data);
            for (int i = 0; i < skillList.size(); i++){
                if(text.find(skillList[i].name) != std::string::npos &&
                        text.find("Ready to Running") != std::string::npos){
                    printf("Found Skill with NodeId %d to execute\n", skillList[i].skillNodeId.identifier.numeric);
                    plugin->ExecuteSkill(&skillList[i].skillNodeId);
                }
            }
        }
        else if (UA_Variant_hasScalarType(&eventFields[i], &UA_TYPES[UA_TYPES_NODEID])){
            UA_NodeId nextSkillNodeId = *(UA_NodeId *)eventFields[i].data;
            UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "NodeID: %d", nextSkillNodeId.identifier.numeric);
        }
        else {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                                "Don't know how to handle type: '%s'", eventFields[i].type->typeName);
        }
    }
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
    item.itemToMonitor.nodeId = UA_NODEID_NUMERIC(9, 15001);
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
                                             (void*)(this), handler_events, NULL);

    printf("\nStatus Code result: %d\n", result.statusCode);
    printf("UA_STATUSCODE_GOOD: %d\n", UA_STATUSCODE_GOOD);
    if(result.statusCode != UA_STATUSCODE_GOOD) {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Could not add the MonitoredItem with %s", UA_StatusCode_name(result.statusCode));
    } else {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                    "Monitoring Robot, id %u", response.subscriptionId);
    }

    monId = result.monitoredItemId;

    return retval;
}

void Plugin::SendCommandIsDone(){
    std::cout << "Command is finished" << std::endl;
    // Call methode finished in opcua server
}


void Plugin::ExecuteSkill(UA_NodeId* skillNode){

    std::unordered_map<std::string, UA_NodeId> methods;
    //GetSkillMethods(skillNode, &methods);

    std::cout << "Get Paramter Node" << std::endl;
    UA_NodeId* paramter_node_id = UA_NodeId_new();
    SAMY::HelperFunctions::getNodeByBrowseName(samy_core_client, skillNode,
                                               paramter_node_id, "ParameterSet");

    std::cout << "Get node data type" << std::endl;
    UA_NodeId *node_data_type = UA_NodeId_new();
    UA_Client_readDataTypeAttribute(samy_core_client, *paramter_node_id, node_data_type);
    std::cout << "Node type:" << node_data_type->identifier.numeric << std::endl;

    std::cout << "Browse all paramter value nodes" << std::endl;
    UA_BrowseRequest bReq;
    UA_BrowseRequest_init(&bReq);
    bReq.requestedMaxReferencesPerNode = 0;
    bReq.nodesToBrowse = UA_BrowseDescription_new();
    bReq.nodesToBrowseSize = 1;
    bReq.nodesToBrowse[0].nodeId = *paramter_node_id; /* browse objects folder */
    bReq.nodesToBrowse[0].resultMask = UA_BROWSERESULTMASK_ALL; /* return everything */
    UA_BrowseResponse bResp = UA_Client_Service_browse(samy_core_client, bReq);
    for(size_t i = 0; i < bResp.resultsSize; ++i) {
        for(size_t j = 0; j < bResp.results[i].referencesSize; ++j) {
            UA_ReferenceDescription *ref = &(bResp.results[i].references[j]);
            if(ref->nodeClass == UA_NODECLASS_VARIABLE) {
                std::cout << "Skill name:" << (const char*)ref->browseName.name.data << std::endl;
                UA_Variant myVar;
                UA_Variant_init(&myVar);
                printf("Read data from core\n");
                UA_Client_readValueAttribute(samy_core_client, ref->nodeId.nodeId, &myVar);
                std::cout << "Got value from server" << std::endl;
                if (UA_Variant_hasScalarType(&myVar, &UA_TYPES[UA_TYPES_EXTENSIONOBJECT])){
                    std::cout << "Typecasting to Extension object " << std::endl;
                    UA_ExtensionObject myExtension = *(UA_ExtensionObject*)myVar.data;
                    std::cout << "Encoding: " << myExtension.encoding << std::endl;
                    UA_MoveToParametersSetDataType* data = (UA_MoveToParametersSetDataType*)&myVar.data;
                    std::cout << "MoveStraight: " << data->moveStraight << std::endl;
                }

            }
        }
    }




//    printf("Start executing Skill\n");
//    UA_Variant myVar;
//    UA_Variant_init(&myVar);
//    printf("Read data from core\n");
//    UA_Client_readValueAttribute(samy_core_client, *skillNode, &myVar);
//    printf("Finished reading data\n");
//    UA_CRCLSkillDataType* skillData = (UA_CRCLSkillDataType*)myVar.data;
//    printf("Coverted Data\n");
//    std::cout << "Number of commands in Skill: " << skillData->cRCLCommandsSize << std::endl;

//    SAMY::HelperFunctions::printCRCLSkill( skillData );

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
}

/*

UA_StatusCode Plugin::ConnectToCore(std::string samyCoreAddress, std::string samyCorePort){
    UA_StatusCode retval = UA_STATUSCODE_GOOD;

    robot.server = UA_Server_new();
    SAMY::HelperFunctions::configureSAMYPluginServer(robot.server, std::stoi(samyCorePort));

    // create nodes from nodeset
    if(namespace_crcl_generated(robot.server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the crcl opcua nodeset. "
        "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {//If custom namespace succesfully added

        SAMY::HelperFunctions::addRobotToServer(robot.server, &robot);
        SAMY::HelperFunctions::addLastSkill_succeeded_VariableNode(robot.server);

        // Change to monitor nextSkillId node
        MonitorLastSkillSucceededVariable(robot.server, &robot);

        retval = UA_Server_run(robot.server, running);
    }

    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}

void Plugin::MonitorNextSkillIdVariable(UA_Server* server, SAMYRobot* robot){
  UA_MonitoredItemCreateRequest requestMon;
  UA_MonitoredItemCreateRequest_init(&requestMon);
  requestMon.itemToMonitor.nodeId = UA_NODEID_STRING(1, "lastSkill_succeeded");
  requestMon.itemToMonitor.attributeId = UA_ATTRIBUTEID_VALUE;
  requestMon.monitoringMode = UA_MONITORINGMODE_REPORTING;
  requestMon.requestedParameters.samplingInterval = 10.0;
  requestMon.requestedParameters.discardOldest = true;
  requestMon.requestedParameters.queueSize = 1;

  UA_Server_createDataChangeMonitoredItem(server, UA_TIMESTAMPSTORETURN_SOURCE,
                                          requestMon, (void*)(this), UpdateAndExecuteRequestedSkill);
  printf("Monitor lastSkillSucceededVariable added\n");
}

void Plugin::MonitorLastSkillSucceededVariable(UA_Server *server, SAMYRobot* robot) {

    UA_MonitoredItemCreateRequest requestMon;
    UA_MonitoredItemCreateRequest_init(&requestMon);
    requestMon.itemToMonitor.nodeId = UA_NODEID_STRING(1, "lastSkill_succeeded");
    requestMon.itemToMonitor.attributeId = UA_ATTRIBUTEID_VALUE;
    requestMon.monitoringMode = UA_MONITORINGMODE_REPORTING;
    requestMon.requestedParameters.samplingInterval = 10.0;
    requestMon.requestedParameters.discardOldest = true;
    requestMon.requestedParameters.queueSize = 1;

    UA_Server_createDataChangeMonitoredItem(server, UA_TIMESTAMPSTORETURN_SOURCE,
                                            requestMon, (void*)(this), UpdateAndExecuteRequestedSkill);
    printf("Monitor lastSkillSucceededVariable added\n");
}

void Plugin::UpdateAndExecuteRequestedSkill(UA_Server *server, UA_UInt32 monitoredItemId,
                               void *monitoredItemContext, const UA_NodeId *nodeId,
                               void *nodeContext, UA_UInt32 attributeId,
                               const UA_DataValue *value) {
    UA_Boolean lastSkill_succeded = *(UA_Boolean*)value->value.data;

    if(lastSkill_succeded == false){
        printf("C++ updateAndExecuteRequestedSkill\n");
        Plugin* plugin;
        plugin = (Plugin*)monitoredItemContext;

        UA_Variant myVar;
        UA_Variant_init(&myVar);

        UA_Server_readValue(server, plugin->robot.SAMYRobotVariableNodeId, &myVar);
        UA_SAMYRobotDataType* opcuaRobot = (UA_SAMYRobotDataType*)myVar.data;
        UA_CRCLSkillDataType_copy(&(opcuaRobot->requested_Skill),
        &(plugin->robot.requested_skill));

        plugin->ExecuteSkill();
    }
}
*/



