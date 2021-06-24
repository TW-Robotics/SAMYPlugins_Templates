
#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
/* Files namespace_foo_flt_generated.h and namespace_foo_flt_generated.c are created from FooFlt.NodeSet2.xml in the
 * /src_generated directory by CMake */

#include "SAMYRobot.h"
#include "Robot.h"
#include "SAMYPlugin_Template.h"

#include <signal.h>

#include <open62541/client_subscriptions.h>
#include "namespace_crcl_generated.h"
#include "types_crcl_generated_handling.h"
#include <helpers.h>

//#include <mutex>

const size_t array_size = 9;
std::mutex robot_access;
UA_Boolean running = true;

static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

typedef struct {
  SAMYRobot* samyRobot;
  Robot* robot;
}Robots;

void stopRobot(Robot& robot){
    bool run = true;
    while (run == true){
        if (running == false){
            run = false;
            printf("Sending stop signal!\n");
            //printf("%d", robot.online);
            robot_access.lock();
            stopRobotCommand(&robot);
            robot_access.unlock();
        }
    usleep(10);
    }
}

void executeSkill(SAMYRobot* samyRobot, Robot* robot){
  SAMY::HelperFunctions::printCRCLSkill( &samyRobot->requested_skill );

  for (int i=0; i < samyRobot->requested_skill.cRCLCommandsSize; i++){
    UA_CRCLCommandsUnionDataType* val = &(samyRobot->requested_skill.cRCLCommands[i]);
          switch (val->switchField){
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_NONE:
              {
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND:
              {
                  UA_InitCanonDataType* initCanon = (UA_InitCanonDataType*)&(val->fields);
                  printf("Got InitCanon command!\n");
                  initCanonCommand(robot, initCanon);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND:
              {
                  UA_EndCanonDataType* endCanon = (UA_EndCanonDataType*)&(val->fields);
                  printf("Got EndCanon command!\n");
                  endCanonCommand(robot, endCanon);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND:
              {
                  UA_MessageDataType* message = (UA_MessageDataType*)&(val->fields);
                  printf("Got Message command!\n");
                  messageCommand(robot, message);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND:
              {
                  UA_MoveToDataType* moveTo = (UA_MoveToDataType*)&(val->fields);
                  printf("Got MoveTo command\n");
                  moveToCommand(robot, moveTo);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVESCREWCOMMAND:
              {
                  UA_MoveScrewDataType* moveScrew = (UA_MoveScrewDataType*)&(val->fields);
                  printf("Got MoveScrew command!\n");
                  moveScrewCommand(robot, moveScrew);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETHROUGHTOCOMMAND:
              {
                  UA_MoveThroughToDataType* moveThroughTo = (UA_MoveThroughToDataType*)&(val->fields);
                  printf("Got MoveThroughTo command!\n");
                  moveThroughToCommand(robot, moveThroughTo);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND:
              {
                  UA_DwellDataType* dwell = (UA_DwellDataType*)&(val->fields);
                  printf("Got Dwell comand!\n");
                  dwellCommand(robot, dwell);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ACTUATEJOINTSCOMMAND:
              {
                  UA_ActuateJointsDataType* actuateJoints = (UA_ActuateJointsDataType*)&(val->fields);
                  printf("Got actuateJoints command!\n");
                  actuateJointsCommand(robot, actuateJoints);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND:
              {
                  UA_ConfigureJointReportsDataType* configureJoints = (UA_ConfigureJointReportsDataType*)&(val->fields);
                  printf("Got configureJoints command!\n");
                  configureJointsReportsCommand(robot, configureJoints);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETDEFAULTJOINTPOSITIONSTOLERANCESCOMMAND:
              {
                  UA_SetDefaultJointPositionsTolerancesDataType* tolernace = (UA_SetDefaultJointPositionsTolerancesDataType*)&(val->fields);
                  printf("Got SetDefaultJointPositionsTolerances command!\n");
                  setDefaultJointPositionsToleranceCommand(robot, tolernace);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND:
              {
                  printf("Got GetStatus command!\n");
                  getStatusCommand(robot);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND:
              {
                  printf("Got CloseToolChanger command!\n");
                  closeToolChangerCommand(robot);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_OPENTOOLCHANGERCOMMAND:
              {
                  printf("Got OpenToolChanger command!\n");
                  openToolChangerCommand(robot);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND:
              {
                  UA_SetRobotParametersDataType* robotParameters = (UA_SetRobotParametersDataType*)&(val->fields);
                  printf("Got setRobotParameters command!\n");
                  setRobotParametersCommand(robot, robotParameters);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORPARAMETERSCOMMAND:
              {
                  UA_SetEndeffectorParametersDataType* parameters = (UA_SetEndeffectorParametersDataType*)&(val->fields);
                  printf("Got SetEndeffectorParameters command!\n");
                  setEndeffectorParametersCommand(robot, parameters);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND:
              {
                  UA_SetEndeffectorDataType* setEndeffector = (UA_SetEndeffectorDataType*)&(val->fields);
                  printf("Got SetEndeffector command!\n");
                  setEndeffectorCommand(robot, setEndeffector);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSACCELCOMMAND:
              {
                  UA_SetTransAccelDataType* transAccel = (UA_SetTransAccelDataType*)&(val->fields);
                  printf("Got SetTransAccel command!\n");
                  setTransAccelCommand(robot, transAccel);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND:
              {
                  UA_SetTransSpeedDataType* transSpeed = (UA_SetTransSpeedDataType*)&(val->fields);
                  printf("Got SetTransSpeed command!\n");
                  setTransSpeedCommand(robot, transSpeed);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTACCELCOMMAND:
              {
                  UA_SetRotAccelDataType* rotAccel = (UA_SetRotAccelDataType*)&(val->fields);
                  printf("Got SetRotAccel command!\n");
                  setRotAccelCommand(robot, rotAccel);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTSPEEDCOMMAND:
              {
                  UA_SetRotSpeedDataType* rotSpeed = (UA_SetRotSpeedDataType*)&(val->fields);
                  printf("Got SetRotSpeed command!\n");
                  setRotSpeedCommand(robot, rotSpeed);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETANGLEUNITSCOMMAND:
              {
                  UA_SetAngleUnitsDataType* angleUnits = (UA_SetAngleUnitsDataType*)&(val->fields);
                  printf("Got SetAngleUnits command!\n");
                  setAngleUnitsCommand(robot, angleUnits);
                  break;
          }
              //........................................
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDPOSETOLERANCECOMMAND:
              {
                  UA_SetEndPoseToleranceDataType* tolernace = (UA_SetEndPoseToleranceDataType*)&(val->fields);
                  printf("Got SetEndPoseTolerance command!\n");
                  setEndPoseToleranceCommand(robot, tolernace);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETFORCEUNITSCOMMAND:
              {
                  UA_SetForceUnitsDataType* forceUnits = (UA_SetForceUnitsDataType*)&(val->fields);
                  printf("Got SetForceUnits command!\n");
                  setForceUnitsCommand(robot, forceUnits);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETINTERMEDIATEPOSETOLERANCECOMMAND:
              {
                  UA_SetIntermediatePoseToleranceDataType* tolerance = (UA_SetIntermediatePoseToleranceDataType*)&(val->fields);
                  printf("Got SetIntermediatePoseTolerance command!\n");
                  setIntermediatePoseToleranceCommand(robot, tolerance);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETLENGTHUNITSCOMMAND:
              {
                  UA_SetLengthUnitsDataType* lengthUnits = (UA_SetLengthUnitsDataType*)&(val->fields);
                  printf("Got SetLengthUnits command!\n");
                  setLengthUnitsCommand(robot, lengthUnits);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETMOTIONCOORDINATIONCOMMAND:
              {
                  UA_SetMotionCoordinationDataType* motionCoordination = (UA_SetMotionCoordinationDataType*)&(val->fields);
                  printf("Got SetMotionCoordination command!\n");
                  setMotionCoordinationCommand(robot, motionCoordination);
                  break;
              }

          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTORQUEUNITSCOMMAND:
              {
                  UA_SetTorqueUnitsDataType* torqueUnits = (UA_SetTorqueUnitsDataType*)&(val->fields);
                  printf("Got SetTorqueUnits command!\n");
                  setTorqueUnitsCommand(robot, torqueUnits);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_STOPMOTIONCOMMAND:
              {
                  UA_StopMotionDataType* stopMotion = (UA_StopMotionDataType*)&(val->fields);
                  printf("Got topMotionDat command!\n");
                  stopMotionCommand(robot, stopMotion);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGURESTATUSREPORTCOMMAND:
              {
                  UA_ConfigureStatusReportDataType* configStatusReport = (UA_ConfigureStatusReportDataType*)&(val->fields);
                  printf("Got ConfigureStatusReport command!\n");
                  configureStatusReportCommand(robot, configStatusReport);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLESENSORCOMMAND:
              {
                  UA_EnableSensorDataType* enableSensor = (UA_EnableSensorDataType*)&(val->fields);
                  printf("Got EnableSensor command!\n");
                  enableSensorCommand(robot, enableSensor);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLESENSORCOMMAND:
              {
                  UA_DisableSensorDataType* disableSensor = (UA_DisableSensorDataType*)&(val->fields);
                  printf("Got DisableSensor command!\n");
                  disableSensorCommand(robot, disableSensor);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND:
              {
                  UA_EnableGripperDataType* enableGripper = (UA_EnableGripperDataType*)&(val->fields);
                  printf("Got EnableGripper command!\n");
                  enableGripperCommand(robot, enableGripper);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEGRIPPERCOMMAND:
              {
                  UA_DisableGripperDataType* disableGripper = (UA_DisableGripperDataType*)&(val->fields);
                  printf("Got DisableGripper command!\n");
                  disableGripperCommand(robot, disableGripper);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEROBOTPARAMETERSTATUSCOMMAND:
              {
                  UA_EnableRobotParameterStatusDataType* enableRobotParaStatus = (UA_EnableRobotParameterStatusDataType*)&(val->fields);
                  printf("Got EnableRobotParameterStatus command!\n");
                  enableRobotParamterStatusCommand(robot, enableRobotParaStatus);
                  break;
              }
          case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEROBOTPARAMETERSTATUSCOMMAND:
              {
                  UA_DisableRobotParameterStatusDataType* disableRobotParaStatus = (UA_DisableRobotParameterStatusDataType*)&(val->fields);
                  printf("Got DisableRobotParameterStatus command!\n");
                  disableRobotParamterStatusCommand(robot, disableRobotParaStatus);
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

      UA_Server_writeValue(samyRobot->server, UA_NODEID_STRING(1, "lastSkill_succeeded"), var);
      printf("reset last Skill_succeded\n");
}


static void
updateAndExecuteRequestedSkill(UA_Server *server, UA_UInt32 monitoredItemId,
                               void *monitoredItemContext, const UA_NodeId *nodeId,
                               void *nodeContext, UA_UInt32 attributeId,
                               const UA_DataValue *value) {
    UA_Boolean lastSkill_succeded = *(UA_Boolean*)value->value.data;

    if(lastSkill_succeded == false){
        printf("C++ updateAndExecuteRequestedSkill\n");
        //SAMYRobot* samyRobot = (SAMYRobot*)monitoredItemContext;
        Robots* robots;
        printf("Created Robots \n");
        robots = (Robots*)monitoredItemContext;
        printf("C++ got robots\n");

        UA_Variant myVar;
        UA_Variant_init(&myVar);

        UA_Server_readValue(server, robots->samyRobot->SAMYRobotVariableNodeId, &myVar);
    UA_SAMYRobotDataType* opcuaRobot = (UA_SAMYRobotDataType*)myVar.data;
    UA_CRCLSkillDataType_copy(&(opcuaRobot->requested_Skill),
        &(robots->samyRobot->requested_skill));

        executeSkill(robots->samyRobot, robots->robot);
    }
}

static void
monitorLastSkill_Succeeded_Variable(UA_Server *server, Robots* robots) {

    UA_MonitoredItemCreateRequest requestMon;
    UA_MonitoredItemCreateRequest_init(&requestMon);
    requestMon.itemToMonitor.nodeId = UA_NODEID_STRING(1, "lastSkill_succeeded");
    requestMon.itemToMonitor.attributeId = UA_ATTRIBUTEID_VALUE;
    requestMon.monitoringMode = UA_MONITORINGMODE_REPORTING;
    requestMon.requestedParameters.samplingInterval = 10.0;
    requestMon.requestedParameters.discardOldest = true;
    requestMon.requestedParameters.queueSize = 1;

    UA_Server_createDataChangeMonitoredItem(server, UA_TIMESTAMPSTORETURN_SOURCE,
                                            requestMon, (void*)(robots), updateAndExecuteRequestedSkill);
    printf("Monitor lastSkillSucceededVariable added\n");
}


int main(int argc, char** argv) {

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);
    printf("C++: Starting Plugin\n");

    SAMYRobot samyRobot;
    SAMY::HelperFunctions::configureSamyRobot(&samyRobot, 1, "Robot");

    samyRobot.server = UA_Server_new();
    SAMY::HelperFunctions::configureSAMYPluginServer(samyRobot.server, 4840);

    std::string address; // address of robot

    if (argc == 2){
        address = argv[1];
    } else {
        address = "127.0.0.1"; // IP Address for testing
    }

#ifdef USE_CPP
    std::cout << "Conecting to Robot" << std::endl;
    Robot robot(address);
#endif // USE_CPP
    robot.running = &running;

    Robots robots;
    robots.samyRobot = &samyRobot;
    robots.robot = &robot;

    // Thread to be able to stop the robot during move commands.
    // std::thread stop_thread(stopRobot, std::ref(robot));

    UA_StatusCode retval = UA_STATUSCODE_GOOD;

    /* create nodes from nodeset */
    if(namespace_crcl_generated(samyRobot.server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the crcl opcua nodeset. "
        "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {/*If custom namespace succesfully added*/

        SAMY::HelperFunctions::addRobotToServer(samyRobot.server, &samyRobot);
        SAMY::HelperFunctions::addLastSkill_succeeded_VariableNode(samyRobot.server);

        monitorLastSkill_Succeeded_Variable(samyRobot.server, &robots);

        retval = UA_Server_run(samyRobot.server, &running);
    }

    // stop_thread.join();
    UA_Server_delete(samyRobot.server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
