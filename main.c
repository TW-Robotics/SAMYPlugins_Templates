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
#include <pthread.h>

#include <open62541/client_subscriptions.h>

#include <mutex>

const size_t array_size = 9;
std::mutex robot_access;


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

    //pthread_exit(&running);
}

UA_StatusCode configureSamyRobot(SAMYRobot* samyRobot, UA_UInt16 id, char* robotName){
    samyRobot->id = id; /* IT MUST BE A UINT16 number, otherwise it changes the number when compiling due to overflow!!! Compile with pedantic?*/
    samyRobot->name = UA_STRING(robotName);
    samyRobot->SAMYRobotVariableNodeId = UA_NODEID_STRING(1, (char*)samyRobot->name.data);
}

UA_StatusCode addRobotToServer(UA_Server* server, SAMYRobot* samyRobot){
    UA_SAMYRobotDataType robotOPCUA;

    robotOPCUA.id = samyRobot->id;
    robotOPCUA.name = samyRobot->name;

    UA_PubSubIPAddresses pubSubAddresses;
    pubSubAddresses.iPAddress_Skill = UA_STRING("None");
    pubSubAddresses.iPAddress_Status = UA_STRING("None");
    robotOPCUA.iPAddresses = pubSubAddresses;

    robotOPCUA.requested_Skill.cRCLCommands = NULL;
    robotOPCUA.requested_Skill.cRCLCommandsSize = 0;
    robotOPCUA.requested_Skill.id = 10;
    robotOPCUA.requested_Skill.name = UA_STRING("skill");

    UA_VariableAttributes vattr = UA_VariableAttributes_default;

    vattr.description = UA_LOCALIZEDTEXT("locale", (char*)samyRobot->name.data);
    vattr.valueRank = UA_VALUERANK_ANY;
    vattr.displayName = UA_LOCALIZEDTEXT("locale", (char*)samyRobot->name.data);
    vattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE].typeId;
    UA_UInt32 myArrayDimensions[1] = {1};
    vattr.value.arrayDimensions = myArrayDimensions;
    vattr.value.arrayDimensionsSize = 1;
    vattr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_Variant_setScalar(&vattr.value, &robotOPCUA, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE]);

    UA_StatusCode retVal = UA_Server_addVariableNode(server, samyRobot->SAMYRobotVariableNodeId, UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                                       UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT), UA_QUALIFIEDNAME(1, (char*)samyRobot->name.data),
                                            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), vattr, NULL, NULL);

    if(retVal == UA_STATUSCODE_GOOD){
        printf("ROBOT CORRECTLY ADDED TO PLUGIN SERVER\n");

    }else{
        printf("ERRORR ADDING ROBOT TO PLUGIN SERVER\n");
    }
    return retVal;
}

UA_StatusCode addLastSkill_succeeded_VariableNode(UA_Server* server){
    UA_Boolean skillFinished = false;

    UA_VariableAttributes vattr = UA_VariableAttributes_default;

    vattr.description = UA_LOCALIZEDTEXT("locale", "lastSkill_succeeded Boolean");
    vattr.valueRank = UA_VALUERANK_SCALAR;
    vattr.displayName = UA_LOCALIZEDTEXT("locale", "lastSkill_succeeded Boolean");
    vattr.dataType = UA_TYPES[UA_TYPES_BOOLEAN].typeId;
    UA_UInt32 myArrayDimensions[1] = {1};
    vattr.value.arrayDimensions = myArrayDimensions;
    vattr.value.arrayDimensionsSize = 1;
    vattr.accessLevel = UA_ACCESSLEVELMASK_READ | UA_ACCESSLEVELMASK_WRITE;

    UA_Variant_setScalar(&vattr.value, &skillFinished, &UA_TYPES[UA_TYPES_BOOLEAN]);

    UA_StatusCode retVal = UA_Server_addVariableNode(server, UA_NODEID_STRING(1, "lastSkill_succeeded"), UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                                       UA_NODEID_NUMERIC(0, UA_NS0ID_HASCOMPONENT), UA_QUALIFIEDNAME(1, "lastSkill_succeeded"),
                                            UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), vattr, NULL, NULL);

    if(retVal == UA_STATUSCODE_GOOD){
        printf("lastSkill_succeeded BOOLEAN VARIABLE CORRECTLY ADDED TO PLUGIN SERVER\n");

    }else{
        printf("ERRORR ADDING lastSkill_succeeded VARIABLE TO PLUGIN SERVER\n");
    }
    return retVal;
}

void configureSAMYPluginServer(UA_Server* server, UA_UInt32 port){
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setMinimal(config, port, NULL);
}

void executeSkill(SAMYRobot* samyRobot, Robot* robot){
    for (int i=0; i < samyRobot->requested_skill.cRCLCommandsSize; i++){
        if (running == false) break;
        UA_CRCLCommandsUnionDataType* val = samyRobot->requested_skill.cRCLCommands;

        switch (val[i].switchField){
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_NONE:
            {
                UA_InitCanonDataType* canon = (UA_InitCanonDataType*)&(val->fields);
                break;
            }
        //case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND:
        //    {
        //        break;
        //    }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMETERSCOMMAND:
            {
                break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND:
            {
                break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND:
            {
                UA_MoveToDataType* moveTo = (UA_MoveToDataType*)&(val->fields);
                executeMoveToCommand(moveTo, robot, &robot_access);
                break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND:
            {
                break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND:
            {
                break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND:
            {
                break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND:
            {
                break;
            }
        case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND:
            {
                break;
            }
        default:
            {
                break;
            }
        }
    }
}

struct TwinsRobotsStrucuture{
    Robot* physicalRobot;
    SAMYRobot* digitalRobot;
};

static void
updateAndExecuteRequestedSkill(UA_Server *server, UA_UInt32 monitoredItemId,
                               void *monitoredItemContext, const UA_NodeId *nodeId,
                               void *nodeContext, UA_UInt32 attributeId,
                               const UA_DataValue *value) {
    UA_Boolean lastSkill_succeded = *(UA_Boolean*)value->value.data;
    if(lastSkill_succeded == false){

        TwinsRobotsStrucuture* twinsRobots = (TwinsRobotsStrucuture*)monitoredItemContext;
        SAMYRobot* samyRobot = twinsRobots->digitalRobot;
        Robot* robot = twinsRobots->physicalRobot;

        UA_Variant myVar;
        UA_Variant_init(&myVar);

        UA_Server_readValue(server, samyRobot->SAMYRobotVariableNodeId, &myVar);

        UA_SAMYRobotDataType* robotOPCUA = (UA_SAMYRobotDataType*)myVar.data;
        samyRobot->requested_skill = robotOPCUA->requested_Skill;

        executeSkill(samyRobot, robot);
    }
}

static void
monitorLastSkill_Succeeded_Variable(UA_Server *server, TwinsRobotsStrucuture* twinsRobots) {


    UA_NodeId currentTimeNodeId =
        UA_NODEID_NUMERIC(0, UA_NS0ID_SERVER_SERVERSTATUS_CURRENTTIME);

    UA_MonitoredItemCreateRequest monRequest =
        UA_MonitoredItemCreateRequest_default(currentTimeNodeId);

    monRequest.requestedParameters.samplingInterval = 10.0; /* 10 ms interval */

    UA_Server_createDataChangeMonitoredItem(server, UA_TIMESTAMPSTORETURN_SOURCE,
                                            monRequest, (void*)(twinsRobots), updateAndExecuteRequestedSkill);
}


int main(int argc, char** argv) {

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    SAMYRobot samyRobot;
    configureSamyRobot(&samyRobot, 1, "Robot");

    UA_Server* server = UA_Server_new();
    configureSAMYPluginServer(server, 4840);

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

    std::cout << "Conecting to Robot" << std::endl;
    Robot robot(path, ipAddress);
/*    if (!robot.initRobot()){
        printf("No connection to robot.\nExit programm...\n");
        return -1;
    }

    std::thread stop_thread(stopRobot, std::ref(robot));
    //pthread_create(&id, NULL, stopRobot, &robot);

*/
    UA_StatusCode retval = UA_STATUSCODE_GOOD;

    /* create nodes from nodeset */
    if(namespace_crcl_opcua_generated(server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the crcl opcua nodeset. "
        "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {/*If custom namespace succesfully added*/

        addRobotToServer(server, &samyRobot);
        addLastSkill_succeeded_VariableNode(server);
    	
	TwinsRobotsStrucuture twinsRobots;
	twinsRobots.digitalRobot = &samyRobot;
	twinsRobots.physicalRobot = &robot;
        monitorLastSkill_Succeeded_Variable(server, &twinsRobots);

        retval = UA_Server_run(server, &running);
    }

//    stop_thread.join();
    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}


