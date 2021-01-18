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
static void addTemporalDataTypes(UA_Server* server){

    UA_ServerConfig *config = UA_Server_getConfig(server);

    /* Make your custom datatype known to the stack */
    UA_DataType *types = (UA_DataType*)UA_malloc((UA_TYPES_CRCL_OPCUA_COUNT+3) * sizeof(UA_DataType));

    for(int i=0; i<UA_TYPES_CRCL_OPCUA_COUNT;i++){
        types[i] = UA_TYPES_CRCL_OPCUA[i];
    }

    for(int i=0; i<UA_TYPES_CRCL_OPCUA_COUNT;i++){
        printf("%i \n", types[i].typeId.identifier.numeric);
    }

printf("aqui co \n");

    UA_DataTypeMember *CRCLCommandsUnionMembers = (UA_DataTypeMember*)UA_malloc(sizeof(UA_DataTypeMember) * 7);
    CRCLCommandsUnionMembers[0] = CRCLCommandsUnionDataType_members[0];
    CRCLCommandsUnionMembers[1] = CRCLCommandsUnionDataType_members[1];
    CRCLCommandsUnionMembers[2] = CRCLCommandsUnionDataType_members[2];
    CRCLCommandsUnionMembers[3] = CRCLCommandsUnionDataType_members[3];
    CRCLCommandsUnionMembers[4] = CRCLCommandsUnionDataType_members[4];
    CRCLCommandsUnionMembers[5] = CRCLCommandsUnionDataType_members[5];
    CRCLCommandsUnionMembers[6] = CRCLCommandsUnionDataType_members[6];

    printf("aqui co 2\n");

    types[UA_TYPES_CRCL_OPCUA_COUNT] = CRCLCommandsUnionDataTypeType;
    types[UA_TYPES_CRCL_OPCUA_COUNT].members = CRCLCommandsUnionMembers;

    types[UA_TYPES_CRCL_OPCUA_COUNT+1] = CRCLSkillDataTypeType;
    UA_DataTypeMember *skillMembers = (UA_DataTypeMember*)UA_malloc(sizeof(UA_DataTypeMember) * 3);
    skillMembers[0] = CRCLSkillDataType_members[0];
    skillMembers[1] = CRCLSkillDataType_members[1];
    skillMembers[2] = CRCLSkillDataType_members[2];

    types[UA_TYPES_CRCL_OPCUA_COUNT+1].members = skillMembers;

    types[UA_TYPES_CRCL_OPCUA_COUNT+2] = SAMYRobotDataTypeType;
    UA_DataTypeMember *samyRobotMembers = (UA_DataTypeMember*)UA_malloc(sizeof(UA_DataTypeMember) * 8);
    samyRobotMembers[0] = SAMYRobotDataType_members[0];
    samyRobotMembers[1] = SAMYRobotDataType_members[1];
    samyRobotMembers[2] = SAMYRobotDataType_members[2];
    samyRobotMembers[3] = SAMYRobotDataType_members[3];
    samyRobotMembers[4] = SAMYRobotDataType_members[4];
    samyRobotMembers[5] = SAMYRobotDataType_members[5];
    samyRobotMembers[6] = SAMYRobotDataType_members[6];
    samyRobotMembers[7] = SAMYRobotDataType_members[7];

    types[UA_TYPES_CRCL_OPCUA_COUNT+2].members = samyRobotMembers;

    printf("aqui co 3\n");


    UA_DataTypeAttributes attr = UA_DataTypeAttributes_default;

    printf("aqui co 4\n");

    for(int i=0; i<UA_TYPES_CRCL_OPCUA_COUNT+3; i++){
        UA_NodeId nodeId;
        nodeId.identifier = types[i].typeId.identifier;
        nodeId.namespaceIndex = 3;
        attr = UA_DataTypeAttributes_default;

        if(i==UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE){
                UA_Server_addDataTypeNode(
                    server, nodeId, UA_NODEID_NUMERIC(0, UA_NS0ID_UNION),
                    UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE), UA_QUALIFIEDNAME(3, types[i].typeName), attr, NULL, NULL);
        }else if(i == UA_TYPES_CRCL_OPCUA_CRCL_TORQUEUNITENUMDATATYPE ||
                 i == UA_TYPES_CRCL_OPCUA_CRCL_ANGLEUNITENUMDATATYPE ||
                 i == UA_TYPES_CRCL_OPCUA_CRCL_FORCEUNITENUMDATATYPE ||
                 i == UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATEENUMDATATYPE ||
                 i == UA_TYPES_CRCL_OPCUA_CRCL_LENGTHUNITENUMDATATYPE ||
                 i == UA_TYPES_CRCL_OPCUA_CRCL_GUARDLIMITENUMDATATYPE){
            UA_Server_addDataTypeNode(
                server, nodeId, UA_NODEID_NUMERIC(0, UA_NS0ID_ENUMERATION),
                UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE), UA_QUALIFIEDNAME(3, types[i].typeName), attr, NULL, NULL);
        }
        else{
            UA_Server_addDataTypeNode(
                server, nodeId, UA_NODEID_NUMERIC(0, UA_NS0ID_STRUCTURE),
                UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE), UA_QUALIFIEDNAME(3, types[i].typeName), attr, NULL, NULL);
        }
    }

    /* Attention! Here the custom datatypes are allocated on the stack. So they
     * cannot be accessed from parallel (worker) threads. */
    UA_DataTypeArray customDataTypes = {config->customDataTypes, (UA_TYPES_CRCL_OPCUA_COUNT+3), types};
    config->customDataTypes = &customDataTypes;

    printf("aqui co 5\n");

}

static void addCRCLCommandsUnionVariable(UA_Server* server){
    UA_ServerConfig *config = UA_Server_getConfig(server);

    UA_CRCLCommandsUnionDataType unionCommands;
    unionCommands.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND;
    UA_MoveToDataType init;
    init.commandID = 101;
    init.guardSize = 0;
    init.guard = NULL;
    init.id = 19991;
    init.name = UA_STRING("initCanon");
/*
    init.endPosition.point.x = 101.1;
    init.endPosition.point.y = 101.1;
    init.endPosition.point.z = 101.1;
*/

    unionCommands.fields.moveToCommand = init;

    UA_DataType dataType;
    dataType = config->customDataTypes->types[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE];

    UA_VariableAttributes vattr = UA_VariableAttributes_default;
    vattr.description = UA_LOCALIZEDTEXT("en-US", "CRCLCommandsUnion added from code");
    vattr.displayName = UA_LOCALIZEDTEXT("en-US", "CRCLCommandsUnionFromCode");
    vattr.dataType = dataType.typeId;
    vattr.valueRank = UA_VALUERANK_SCALAR;
    UA_Variant_setScalar(&vattr.value, &unionCommands, &(config->customDataTypes->types[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]));

    UA_StatusCode ret = UA_Server_addVariableNode(server, UA_NODEID_NUMERIC(2, 54321),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                              UA_QUALIFIEDNAME(2, "CRCLCommandsUnionFromCodeVariable"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), vattr, NULL, NULL);
}

static void readCRCLCommandsUnionVariable(UA_Server* server, void* data){
    UA_CRCLCommandsUnionDataType unionCommands;
/*
    UA_Variant var;
    UA_Variant_init(&var);

    UA_NodeId node = UA_NODEID_NUMERIC(2, 54321);
    UA_Server_readValue(server, node, &var);

    unionCommands = *((UA_CRCLCommandsUnionDataType*)var.data);

    printf("Switchfield %i", unionCommands.switchField);*/
}

int main(int argc, char** argv) {

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

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
    /* create nodes from nodeset */
    if(namespace_crcl_opcua_generated(server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the crcl opcua nodeset. "
        "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {/*If custom namespace succesfully added*/

        printf("\n ADDING NEW NAMESPACE \n");
        /* Add a new namespace to the server. Returns the index of the new namespace */
        int newNSIndex = UA_Server_addNamespace(server, "Temporal_DataTypesNamespace");
        printf("\n THE NEW ADDED NAMESPACE HAS INDEX %i \n", newNSIndex);

        addTemporalDataTypes(server);

        addCRCLCommandsUnionVariable(server);

        UA_Server_addRepeatedCallback(server, readCRCLCommandsUnionVariable, NULL, 500, NULL);

        UA_StatusCode retval = UA_Server_run(server, &running);
    }

    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}

