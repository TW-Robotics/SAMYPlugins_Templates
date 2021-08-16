#include "plugin.h"

Plugin::Plugin(Signals* signals_):
    signals(signals_)
{
    SAMY::HelperFunctions::configureSamyRobot(&robot, 1, "Robot");
}

Plugin::~Plugin()
{
    UA_Server_delete(robot.server);
}

UA_StatusCode Plugin::ConnectToCore(std::string samyCoreAddress, std::string samyCorePort){
    UA_StatusCode retval = UA_STATUSCODE_GOOD;

    robot.server = UA_Server_new();
    SAMY::HelperFunctions::configureSAMYPluginServer(robot.server, std::stoi(samyCorePort));

    /* create nodes from nodeset */
    if(namespace_crcl_generated(robot.server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the crcl opcua nodeset. "
        "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {/*If custom namespace succesfully added*/

        SAMY::HelperFunctions::addRobotToServer(robot.server, &robot);
        SAMY::HelperFunctions::addLastSkill_succeeded_VariableNode(robot.server);

        MonitorLastSkillSucceededVariable(robot.server, &robot);

        retval = UA_Server_run(robot.server, running);
    }

    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
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

void Plugin::ExecuteSkill(){
  SAMY::HelperFunctions::printCRCLSkill( &robot.requested_skill );

  for (int i=0; i < robot.requested_skill.cRCLCommandsSize; i++){
    UA_CRCLCommandsUnionDataType* val = &(robot.requested_skill.cRCLCommands[i]);
          switch (val->switchField){
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_NONE:
              {
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND:
              {
                  UA_InitCanonDataType* initCanon = (UA_InitCanonDataType*)&(val->fields);
                  printf("Got InitCanon command!\n");
                  signals->InitCanon(initCanon);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND:
              {
                  UA_EndCanonDataType* endCanon = (UA_EndCanonDataType*)&(val->fields);
                  printf("Got EndCanon command!\n");
                  signals->EndCanon(endCanon);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND:
              {
                  UA_MessageDataType* message = (UA_MessageDataType*)&(val->fields);
                  printf("Got Message command!\n");
                  signals->Message(message);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND:
              {
                  UA_MoveToDataType* moveTo = (UA_MoveToDataType*)&(val->fields);
                  printf("Got MoveTo command and going to send signal.\n");
                  signals->MoveTo(moveTo);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVESCREWCOMMAND:
              {
                  UA_MoveScrewDataType* moveScrew = (UA_MoveScrewDataType*)&(val->fields);
                  printf("Got MoveScrew command!\n");
                  signals->MoveScrew(moveScrew);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETHROUGHTOCOMMAND:
              {
                  UA_MoveThroughToDataType* moveThroughTo = (UA_MoveThroughToDataType*)&(val->fields);
                  printf("Got MoveThroughTo command!\n");
                  signals->MoveThroughTo(moveThroughTo);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND:
              {
                  UA_DwellDataType* dwell = (UA_DwellDataType*)&(val->fields);
                  printf("Got Dwell comand!\n");
                  signals->Dwell(dwell);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ACTUATEJOINTSCOMMAND:
              {
                  UA_ActuateJointsDataType* actuateJoints = (UA_ActuateJointsDataType*)&(val->fields);
                  printf("Got actuateJoints command!\n");
                  signals->ActuateJoints(actuateJoints);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND:
              {
                  UA_ConfigureJointReportsDataType* configureJoints = (UA_ConfigureJointReportsDataType*)&(val->fields);
                  printf("Got configureJoints command!\n");
                  signals->ConfigureJointReports(configureJoints);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETDEFAULTJOINTPOSITIONSTOLERANCESCOMMAND:
              {
                  UA_SetDefaultJointPositionsTolerancesDataType* tolernace = (UA_SetDefaultJointPositionsTolerancesDataType*)&(val->fields);
                  printf("Got SetDefaultJointPositionsTolerances command!\n");
                  signals->SetDefaultJointPositionsTolerances(tolernace);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND:
              {
                  UA_GetStatusDataType* getStatus = (UA_GetStatusDataType*)&(val->fields);
                  printf("Got GetStatus command!\n");
                  signals->GetStatus(getStatus);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND:
              {
                  UA_CloseToolChangerDataType* closeToolChanger = (UA_CloseToolChangerDataType*)&(val->fields);
                  printf("Got CloseToolChanger command!\n");
                  signals->CloseToolChanger(closeToolChanger);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_OPENTOOLCHANGERCOMMAND:
              {
                  UA_OpenToolChangerDataType* openToolChanger = (UA_OpenToolChangerDataType*)&(val->fields);
                  printf("Got OpenToolChanger command!\n");
                  signals->OpenToolChanger(openToolChanger);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND:
              {
                  UA_SetRobotParametersDataType* robotParameters = (UA_SetRobotParametersDataType*)&(val->fields);
                  printf("Got setRobotParameters command!\n");
                  signals->SetRobotParameters(robotParameters);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORPARAMETERSCOMMAND:
              {
                  UA_SetEndeffectorParametersDataType* parameters = (UA_SetEndeffectorParametersDataType*)&(val->fields);
                  printf("Got SetEndeffectorParameters command!\n");
                  signals->SetEndeffectorParameters(parameters);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND:
              {
                  UA_SetEndeffectorDataType* setEndeffector = (UA_SetEndeffectorDataType*)&(val->fields);
                  printf("Got SetEndeffector command!\n");
                  signals->SetEndeffector(setEndeffector);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSACCELCOMMAND:
              {
                  UA_SetTransAccelDataType* transAccel = (UA_SetTransAccelDataType*)&(val->fields);
                  printf("Got SetTransAccel command!\n");
                  signals->SetTransAccel(transAccel);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND:
              {
                  UA_SetTransSpeedDataType* transSpeed = (UA_SetTransSpeedDataType*)&(val->fields);
                  printf("Got SetTransSpeed command!\n");
                  signals->SetTransSpeed(transSpeed);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTACCELCOMMAND:
              {
                  UA_SetRotAccelDataType* rotAccel = (UA_SetRotAccelDataType*)&(val->fields);
                  printf("Got SetRotAccel command!\n");
                  signals->SetRotAccel(rotAccel);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTSPEEDCOMMAND:
              {
                  UA_SetRotSpeedDataType* rotSpeed = (UA_SetRotSpeedDataType*)&(val->fields);
                  printf("Got SetRotSpeed command!\n");
                  signals->SetRotSpeed(rotSpeed);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETANGLEUNITSCOMMAND:
              {
                  UA_SetAngleUnitsDataType* angleUnits = (UA_SetAngleUnitsDataType*)&(val->fields);
                  printf("Got SetAngleUnits command!\n");
                  signals->SetAngleUnits(angleUnits);
                  break;
          }
              //........................................
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDPOSETOLERANCECOMMAND:
              {
                  UA_SetEndPoseToleranceDataType* tolernace = (UA_SetEndPoseToleranceDataType*)&(val->fields);
                  printf("Got SetEndPoseTolerance command!\n");
                  signals->SetEndPoseTolerance(tolernace);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETFORCEUNITSCOMMAND:
              {
                  UA_SetForceUnitsDataType* forceUnits = (UA_SetForceUnitsDataType*)&(val->fields);
                  printf("Got SetForceUnits command!\n");
                  signals->SetForceUnits(forceUnits);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETINTERMEDIATEPOSETOLERANCECOMMAND:
              {
                  UA_SetIntermediatePoseToleranceDataType* tolerance = (UA_SetIntermediatePoseToleranceDataType*)&(val->fields);
                  printf("Got SetIntermediatePoseTolerance command!\n");
                  signals->SetIntermediatePoseTolerance(tolerance);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETLENGTHUNITSCOMMAND:
              {
                  UA_SetLengthUnitsDataType* lengthUnits = (UA_SetLengthUnitsDataType*)&(val->fields);
                  printf("Got SetLengthUnits command!\n");
                  signals->SetLengthUnits(lengthUnits);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETMOTIONCOORDINATIONCOMMAND:
              {
                  UA_SetMotionCoordinationDataType* motionCoordination = (UA_SetMotionCoordinationDataType*)&(val->fields);
                  printf("Got SetMotionCoordination command!\n");
                  signals->SetMotionCoordination(motionCoordination);
                  break;
              }

          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTORQUEUNITSCOMMAND:
              {
                  UA_SetTorqueUnitsDataType* torqueUnits = (UA_SetTorqueUnitsDataType*)&(val->fields);
                  printf("Got SetTorqueUnits command!\n");
                  signals->SetTorqueUnit(torqueUnits);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_STOPMOTIONCOMMAND:
              {
                  UA_StopMotionDataType* stopMotion = (UA_StopMotionDataType*)&(val->fields);
                  printf("Got topMotionDat command!\n");
                  signals->StopMotion(stopMotion);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGURESTATUSREPORTCOMMAND:
              {
                  UA_ConfigureStatusReportDataType* configStatusReport = (UA_ConfigureStatusReportDataType*)&(val->fields);
                  printf("Got ConfigureStatusReport command!\n");
                  signals->ConfigureStatusReport(configStatusReport);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLESENSORCOMMAND:
              {
                  UA_EnableSensorDataType* enableSensor = (UA_EnableSensorDataType*)&(val->fields);
                  printf("Got EnableSensor command!\n");
                  signals->EnableSensor(enableSensor);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLESENSORCOMMAND:
              {
                  UA_DisableSensorDataType* disableSensor = (UA_DisableSensorDataType*)&(val->fields);
                  printf("Got DisableSensor command!\n");
                  signals->DisableSensor(disableSensor);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND:
              {
                  UA_EnableGripperDataType* enableGripper = (UA_EnableGripperDataType*)&(val->fields);
                  printf("Got EnableGripper command!\n");
                  signals->EnableGripper(enableGripper);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEGRIPPERCOMMAND:
              {
                  UA_DisableGripperDataType* disableGripper = (UA_DisableGripperDataType*)&(val->fields);
                  printf("Got DisableGripper command!\n");
                  signals->DisableGripper(disableGripper);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEROBOTPARAMETERSTATUSCOMMAND:
              {
                  UA_EnableRobotParameterStatusDataType* enableRobotParaStatus = (UA_EnableRobotParameterStatusDataType*)&(val->fields);
                  printf("Got EnableRobotParameterStatus command!\n");
                  signals->EnableRobotParameterStatus(enableRobotParaStatus);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEROBOTPARAMETERSTATUSCOMMAND:
              {
                  UA_DisableRobotParameterStatusDataType* disableRobotParaStatus = (UA_DisableRobotParameterStatusDataType*)&(val->fields);
                  printf("Got DisableRobotParameterStatus command!\n");
                  signals->DisableRobotParameterStatus(disableRobotParaStatus);
                  break;
              }
          default:
              {
                  break;
              }
          }
      }
      UA_Boolean reset = true;
      UA_Variant var;
      UA_Variant_init(&var);
      UA_Variant_setScalar(&var, &reset, &UA_TYPES[UA_TYPES_BOOLEAN]);

      UA_Server_writeValue(robot.server, UA_NODEID_STRING(1, "lastSkill_succeeded"), var);
      printf("reset last Skill_succeded\n");
}

void Plugin::SendCommandIsDone(){
    std::cout << "Command is finished" << std::endl;
    // Call methode finished in opcua server
}
