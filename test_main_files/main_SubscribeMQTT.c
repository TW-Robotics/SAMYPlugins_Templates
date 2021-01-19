#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
/* Files namespace_foo_flt_generated.h and namespace_foo_flt_generated.c are created from FooFlt.NodeSet2.xml in the
 * /src_generated directory by CMake */

#include "SAMYRobot.h"

#include <signal.h>

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
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), vattr, NULL, NULL);
}

int main(int argc, char **argv) {

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    /* Return value initialized to Status Good */
    UA_StatusCode retval = UA_STATUSCODE_GOOD;

    UA_Server *server = UA_Server_new();
    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setMinimal(config, 4801, NULL);

    /* create nodes from nodeset */
    if(namespace_crcl_opcua_generated(server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the crcl opcua nodeset. "
        "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {/*If custom namespace succesfully added*/


    UA_String transportProfile = UA_STRING("http://opcfoundation.org/UA-Profile/Transport/pubsub-mqtt");
    UA_NetworkAddressUrlDataType networkAddressUrl = {UA_STRING_NULL , UA_STRING("opc.mqtt://127.0.0.1:1883/")};

    /* Details about the connection configuration and handling are located in
     * the pubsub connection tutorial */
    config->pubsubTransportLayers = (UA_PubSubTransportLayer *)
        UA_malloc(1 * sizeof(UA_PubSubTransportLayer));
   if(!config->pubsubTransportLayers) {
       return -1;
   }

   config->pubsubTransportLayers[0] = UA_PubSubTransportLayerMQTT();
   config->pubsubTransportLayersSize++;

    SAMYRobot robot;
    robot.id = 456789;
    robot.name = UA_STRING("FirstRobot");
    robot.ipAddresses.iPAddress_Skill = UA_STRING("opc.mqtt://127.0.0.1:1883/");
    robot.ipAddresses.iPAddress_Status = UA_STRING("opc.mqtt://127.0.0.1:1883/");
    robot.SAMYRobotVariableNodeId = UA_NODEID_NUMERIC(2,54321);
    configureSAMYRobotSubscriberMQTT(&robot);
    addSAMYRobotSubscriberToServer(server, &robot);

    UA_Server_run(server, &running);

    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
    }
}
