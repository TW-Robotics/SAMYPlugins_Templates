
#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
/* Files namespace_foo_flt_generated.h and namespace_foo_flt_generated.c are created from FooFlt.NodeSet2.xml in the
 * /src_generated directory by CMake */

#include "SAMYRobot.h"
#include "Robot.h"
#include "SAMYPlugin_Template.h"

#include <signal.h>
#include <thread>
//#include <pthread.h>

#include <open62541/client_subscriptions.h>

#include "namespace_crcl_generated.h"
#include "types_crcl_generated_handling.h"

#include <helpers.h>

//#include <mutex>

const size_t array_size = 9;
std::mutex robot_access;
std::mutex skill;
bool updated_skill = false;
UA_Boolean running = true;

static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

void stopRobot(Robot& robot){
    bool run = true;
    while (run == true){
        if (running == false){
            run = false;
            printf("Sending stop signal!\n");
            //printf("%d", robot.online);
            robot_access.lock();
            executeStopRobot(&robot);
            robot_access.unlock();
        }
    usleep(10);
    }
}

void runSkill(SAMYRobot* samyRobot, Robot* robot){
    while (running == true){
        if (updated_skill == true){
            SAMY::HelperFunctions::printCRCLSkill( &samyRobot->requested_skill );
            for (int i=0; i < samyRobot->requested_skill.cRCLCommandsSize; i++){
                if (running == false) break;

        UA_CRCLCommandsUnionDataType* val = &(samyRobot->requested_skill.cRCLCommands[i]);
                switch (val->switchField){
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_NONE:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND:
                    {
                        UA_MoveToDataType* moveTo = (UA_MoveToDataType*)&(val->fields);
                        printf("C++ found moveto command\n");
                        executeMoveToCommand(moveTo, robot, &robot_access);
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVESCREWCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETHROUGHTOCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ACTUATEJOINTSCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGUREJOINTREPORTSCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETDEFAULTJOINTPOSITIONSTOLERANCESCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_OPENTOOLCHANGERCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND:
                    {
                        UA_SetRobotParametersDataType* robotParameters = (UA_SetRobotParametersDataType*)&(val->fields);
                        printf("C++ found setRobotParameters\n");
                        executeSetRobotParametersCommand(robotParameters, robot);
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORPARAMETERSCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDEFFECTORCOMMAND:
                    {
                        UA_SetEndeffectorDataType* setEndEffector = (UA_SetEndeffectorDataType*)&(val->fields);
                        executeSetEndeffectorCommand(setEndEffector, robot);
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSACCELCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND:
                    {
                        UA_SetTransSpeedDataType* transSpeed = (UA_SetTransSpeedDataType*)&(val->fields);
                        printf("C++: found setTransSpeed\n");
                        executeSetTransSpeedCommand(transSpeed, robot);
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTACCELCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROTSPEEDCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETANGLEUNITSCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETENDPOSETOLERANCECOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETFORCEUNITSCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETINTERMEDIATEPOSETOLERANCECOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETLENGTHUNITSCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETMOTIONCOORDINATIONCOMMAND:
                    {
                        break;
                    }

                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTORQUEUNITSCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_STOPMOTIONCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CONFIGURESTATUSREPORTCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLESENSORCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLESENSORCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEGRIPPERCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEGRIPPERCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENABLEROBOTPARAMETERSTATUSCOMMAND:
                    {
                        break;
                    }
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DISABLEROBOTPARAMETERSTATUSCOMMAND:
                    {
                        break;
                    }
                default:
                    {
                        break;
                    }
                }
            }

            updated_skill = false;
            UA_Boolean reset = true;
            UA_Variant var;
            UA_Variant_init(&var);
            UA_Variant_setScalar(&var, &reset, &UA_TYPES[UA_TYPES_BOOLEAN]);

            UA_Server_writeValue(samyRobot->server, UA_NODEID_STRING(1, "lastSkill_succeeded"), var);
            printf("reset last Skill_succeded\n");
        }
    }
}

void executeSkill(){
    updated_skill = true;
}

static void
updateAndExecuteRequestedSkill(UA_Server *server, UA_UInt32 monitoredItemId,
                               void *monitoredItemContext, const UA_NodeId *nodeId,
                               void *nodeContext, UA_UInt32 attributeId,
                               const UA_DataValue *value) {
    UA_Boolean lastSkill_succeded = *(UA_Boolean*)value->value.data;

    if(lastSkill_succeded == false){
        printf("C++ updateAndExecuteRequestedSkill\n");
        SAMYRobot* samyRobot = (SAMYRobot*)monitoredItemContext;

        UA_Variant myVar;
        UA_Variant_init(&myVar);

        UA_Server_readValue(server, samyRobot->SAMYRobotVariableNodeId, &myVar);
    UA_SAMYRobotDataType* opcuaRobot = (UA_SAMYRobotDataType*)myVar.data;
    UA_CRCLSkillDataType_copy(&(opcuaRobot->requested_Skill),
        &(samyRobot->requested_skill));

        executeSkill();
    }
}

static void
monitorLastSkill_Succeeded_Variable(UA_Server *server, SAMYRobot* samyRobot){

    UA_MonitoredItemCreateRequest requestMon;
    UA_MonitoredItemCreateRequest_init(&requestMon);
    requestMon.itemToMonitor.nodeId = UA_NODEID_STRING(1, "lastSkill_succeeded");
    requestMon.itemToMonitor.attributeId = UA_ATTRIBUTEID_VALUE;
    requestMon.monitoringMode = UA_MONITORINGMODE_REPORTING;
    requestMon.requestedParameters.samplingInterval = 10.0;
    requestMon.requestedParameters.discardOldest = true;
    requestMon.requestedParameters.queueSize = 1;

    UA_Server_createDataChangeMonitoredItem(server, UA_TIMESTAMPSTORETURN_SOURCE,
                                            requestMon, (void*)(samyRobot), updateAndExecuteRequestedSkill);
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

    // create Python/C++/C robot TODO
    std::string path; // Path to Python Code
    std::string ipAddress; // IP address of robot

    if (argc == 2){
        path = ".";
        ipAddress = argv[1];
    } else {
        path = ".";
        ipAddress = "172.16.36.128"; // IP Address for testing
    }

#ifdef USE_PYTHON
    std::cout << "Connecting to Robot" << std::endl;
    Robot robot(path, ipAddress);
    if (!robot.initRobot()){
        printf("No connection to robot.\nExit programm...\n");
        return -1;
    }
#else
#ifdef USE_CPP
    std::cout << "Conecting to Robot" << std::endl;
    Robot robot;
#endif // USE_CPP
#endif // USE PYTHON
    robot.running = &running;
    std::thread run(runSkill, &samyRobot, &robot);

    //Thread to be able to stop the robot during move commands.
 //   std::thread stop_thread(stopRobot, std::ref(robot));

    UA_StatusCode retval = UA_STATUSCODE_GOOD;

    /* create nodes from nodeset */
    if(namespace_crcl_generated(samyRobot.server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the crcl opcua nodeset. "
        "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {/*If custom namespace succesfully added*/

        SAMY::HelperFunctions::addRobotToServer(samyRobot.server, &samyRobot);
        SAMY::HelperFunctions::addLastSkill_succeeded_VariableNode(samyRobot.server);

        monitorLastSkill_Succeeded_Variable(samyRobot.server, &samyRobot);

        retval = UA_Server_run(samyRobot.server, &running);
    }

 //   stop_thread.join();
    run.join();
    UA_Server_delete(samyRobot.server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
