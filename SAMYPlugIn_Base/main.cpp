#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
/* Files namespace_foo_flt_generated.h and namespace_foo_flt_generated.c are created from FooFlt.NodeSet2.xml in the
 * /src_generated directory by CMake */

#include "SAMYRobot.hpp"
#include "Robot.hpp"
#include "SAMYPlugin_Template.hpp"

#include <signal.h>
#include <thread>
#include<unistd.h>

UA_Boolean running = true;
static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

static void
addVectorVariable(UA_Server *server) {
    UA_CRCL_VectorDataType vect;
    vect.name =  UA_STRING("NameFromCode");
    vect.id = 1234;
    vect.i = 1.111;
    vect.j = 2.2341;
    vect.k = 5.6581;

    UA_VariableAttributes vattr = UA_VariableAttributes_default;
    vattr.description = UA_LOCALIZEDTEXT("en-US", "VectorFromCode added from code");
    vattr.displayName = UA_LOCALIZEDTEXT("en-US", "VectorFromCode");
    vattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE].typeId;
    vattr.valueRank = UA_VALUERANK_SCALAR;
    UA_Variant_setScalar(&vattr.value, &vect, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE]);

    UA_StatusCode ret = UA_Server_addVariableNode(server, UA_NODEID_NUMERIC(2, 54321),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                              UA_QUALIFIEDNAME(2, "VectorFromCode"),
                              UA_NODEID_NUMERIC(2, UA_CRCL_OPCUAID_CRCL_VECTORDATATYPE), vattr, NULL, NULL);
}

UA_StatusCode startServer(SAMYRobot *robot){

    UA_Server *server = UA_Server_new();

    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setDefault(config);

    /* Details about the connection configuration and handling are located in
     * the pubsub connection tutorial */
    config->pubsubTransportLayers = (UA_PubSubTransportLayer *)
            UA_malloc(1 * sizeof(UA_PubSubTransportLayer));
    if(!config->pubsubTransportLayers) {
       return -1;
    }

    config->pubsubTransportLayers[0] = UA_PubSubTransportLayerMQTT();
    config->pubsubTransportLayersSize++;

    UA_StatusCode retval = UA_STATUSCODE_GOOD;

    UA_NodeId nodeVectorVariable =  UA_NODEID_NUMERIC(2, 54321);

    /* create nodes from nodeset */
    if(namespace_crcl_opcua_generated(server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the crcl opcua nodeset. "
        "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
     } else {/*If custom namespace succesfully added*/

        addVectorVariable(server);


        robot->id = 456789;
        robot->name = UA_STRING("Extruder");
        robot->ipAddresses.iPAddress_Skill = UA_STRING("opc.mqtt://127.0.0.1:1883");
        robot->ipAddresses.iPAddress_Status = UA_STRING("opc.mqtt://127.0.0.1:1883");
        robot->SAMYRobotVariableNodeId = nodeVectorVariable;

        configureSAMYRobotPublisherMQTT_WithoutLogin(robot, 100, 10, UA_TRUE);

        addSAMYRobotPublisherToServer(server, robot);

        UA_PubSubConnection *connection = UA_PubSubConnection_findConnectionbyId(
                                                server, robot->publisher.publishers.publisherMQTT.connectionIdent);
        if(!connection) {
            UA_LOG_WARNING(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                           "Could not create a PubSubConnection");
            UA_Server_delete(server);
            return -1;
        }
        UA_StatusCode retval = UA_Server_run(server, &running);
    }

    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}


int main(int argc, char** argv) {

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    // create a robot object to communicate with the SAMYCore
    SAMYRobot samyRobot;
    // Start the OPCUA server in a seperate thread
    //std::thread uaServer(startServer, &robot);

    // Extruder startup
    // Create a robot object to communicate with the hardware

    // Python
#ifdef PYTHON_CODE
    std::string path; // Path to Python Code
    std::string ipAddress; // IP address of robot

    if (argc == 2){
        path = argv[0];
        ipAddress = argv[1];
    } else {
        path = ".";
        ipAddress = "172.16.36.131"; // IP Address for testing
    }

    std::cout << "Conecting to Robot" << std::endl;
    Robot robot(path, ipAddress);
    robot.initRobot();
#else
    //C++
    Robot robot;
    //robot.running = &running;
#endif

    // Go through arrays and run the commandssd
    // (for testing the created array, later the arrays in SamyRobot object)

    samyRobot.online = true; // Extruder is ready to recive CRCL commands
    //Loop with unions
    while(running){ // find better solution then infnite loop!! OPCUA events
        for(int i = 0; i < samyRobot.requested_skill.cRCLCommandsSize; i++){
            switch(samyRobot.requested_skill.cRCLCommands[i].switchField){
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND:
                     samyRobot.requested_Skill_success = executeMoveToCommand(
                                 &samyRobot.requested_skill.cRCLCommands[i].fields.moveToCommand,
                                 &robot);
                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND:{
                    std::cout << "recived initCanon command" << std::endl;
                    samyRobot.requested_Skill_success = true;
                }
//                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETTRANSSPEEDCOMMAND:
//                    samyRobot.requested_Skill_success = executeSetTransSpeedCommand(
//                                &samyRobot.requested_skill.cRCLCommands[i].fields.setTransSpeedCommand,
//                                &robot);
//                case UA_CRCLCOMMANDSUNIONDATATYPESWITCH_SETROBOTPARAMTERSCOMMAND:
//                    samyRobot.requested_Skill_success = executeSetRobotParametersCommand(
//                                &samyRobot.requested_skill.cRCLCommands[i].fields.setRobotParametersCommand,
//                                &robot);
            }
            // empty robot.requested_skill
        }
    }

    //uaServer.join();
}

