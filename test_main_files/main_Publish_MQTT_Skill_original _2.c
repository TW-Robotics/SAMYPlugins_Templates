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

static UA_CRCLCommandsUnionDataType getMoveToUnion(){
    UA_CRCL_VectorDataType vectX;
    vectX.name =  UA_STRING("PoseVectorX");
    vectX.id = 9009;
    vectX.i = 9.999;
    vectX.j = 8.888;
    vectX.k = 7.7777;

    UA_CRCL_VectorDataType vectZ;
    vectZ.name =  UA_STRING("PoseVectorZ");
    vectZ.id = 2468;
    vectZ.i = 1.3579;
    vectZ.j = 9.7531;
    vectZ.k = -5.555;

   UA_CRCL_PointDataType point;
    point.name =  UA_STRING("Point");
    point.id = 19191;
    point.x = 4.6464;
    point.y = 3.7373;
    point.z = -2.8383;

    UA_CRCL_PoseDataType pose;
    pose.name =  UA_STRING("PosePose");
    pose.xAxis = vectX;
    pose.zAxis = vectZ;
    pose.point = point;
    pose.id = 987654;
    pose.name =  UA_STRING("PoseName");

    UA_MoveToDataType moveTo1;
    moveTo1.id = 431126909;
    moveTo1.name = UA_STRING("moveTo1Command");
    moveTo1.commandID = 10101010;
    moveTo1.guardSize = 0;
    moveTo1.guard = NULL;
    moveTo1.moveStraight = true;
    moveTo1.endPosition = pose;

    UA_CRCLCommandsUnionDataType retval;
    retval.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND;
    retval.fields.moveToCommand = moveTo1;

    return retval;
}

static void addCRCLSkill2( UA_Server* server )
{
    UA_CRCLCommandsUnionDataType moveToUnion1 = getMoveToUnion();
    UA_CRCLCommandsUnionDataType moveToUnion2 = getMoveToUnion();

    UA_CRCLCommandsUnionDataType* commandsUnionArray = (UA_CRCLCommandsUnionDataType *) UA_Array_new(2, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
    UA_CRCLSkillDataType skillaaa;
    commandsUnionArray[0] = moveToUnion1;
    commandsUnionArray[1] = moveToUnion2;


    skillaaa.id = 91827364;
    skillaaa.cRCLCommandsSize = 2;
    skillaaa.name = UA_STRING("skillName!!");
    skillaaa.cRCLCommands = (UA_CRCLCommandsUnionDataType *) UA_Array_new(2, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
    skillaaa.cRCLCommands[0] = moveToUnion1;
    skillaaa.cRCLCommands[1] = moveToUnion2;

        // Attributes for variable node
    UA_VariableAttributes vattr = UA_VariableAttributes_default;

    printf("\n ouh yeah addCRCLSkill      3.5       \n");


    UA_Variant_setScalar(&vattr.value, &skillaaa, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE]);
      vattr.valueRank = UA_VALUERANK_SCALAR;
    vattr.displayName = UA_LOCALIZEDTEXT("locale","skill");
    vattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE].typeId;

    printf("\n ouh yeah addCRCLSkill      3.75       \n");

    UA_StatusCode retval = UA_Server_addVariableNode(server,
                           UA_NODEID_STRING(1, "skill"), // new node id
                           UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER), // parent node
                           UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES), // reference type
                           UA_QUALIFIEDNAME(1, "skill"), // node browse name
                           UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                           vattr, NULL, NULL);

}


static void readSkill2( UA_Server* server, void* data )
{
    UA_Variant variant;
    UA_Variant_init(&variant);

    UA_Server_readValue(server, UA_NODEID_STRING(1, "skill"), &variant);

    UA_CRCLSkillDataType* skillRead = (UA_CRCLSkillDataType*)variant.data;

    printf("\n %i \n", skillRead->cRCLCommands[0].switchField);
        if(skillRead->cRCLCommands[0].switchField == 1  ){
            UA_InitCanonDataType init = skillRead->cRCLCommands[0].fields.initCanonCommand;
            printf("\n %i \n", init.id );
        }else if(skillRead->cRCLCommands[0].switchField == 2  ){
            UA_MoveToDataType move = skillRead->cRCLCommands[0].fields.moveToCommand;
            printf("\n %i \n", move.id );
            printf("\n %f \n", move.endPosition.zAxis.k );
        }

        printf("\n %i \n", skillRead->cRCLCommands[1].switchField);
            if(skillRead->cRCLCommands[1].switchField == 1  ){
                UA_InitCanonDataType init = skillRead->cRCLCommands[1].fields.initCanonCommand;
                printf("\n %i \n", init.id );
            }else if(skillRead->cRCLCommands[1].switchField == 2  ){
                UA_MoveToDataType move = skillRead->cRCLCommands[1].fields.moveToCommand;
                printf("\n %i \n", move.id );
                printf("\n %f \n", move.endPosition.zAxis.k );
            }
}


static void conversorSAMYRobotToUASAMYRobot(UA_SAMYRobotDataType* uaRobot, SAMYRobot* robot){
    uaRobot->active = robot->active;
    uaRobot->id = robot->id;
    uaRobot->iPAddresses = robot->ipAddresses;
    uaRobot->name = robot->name;
    uaRobot->online=robot->online;
    //uaRobot->requested_Skill=robot->requested_skill;
    uaRobot->requested_Skill_Success=robot->requested_Skill_success;
   // uaRobot->robot_Status=robot->robot_status;
}
static void addSamyRobotVariableNodeToServer(UA_Server* server, SAMYRobot* robot){


    UA_SAMYRobotDataType uaRobot;
    conversorSAMYRobotToUASAMYRobot(&uaRobot, robot);

/*
    UA_CRCLCommandsUnionDataType moveToUnion1 = getMoveToUnion();
    UA_CRCLCommandsUnionDataType moveToUnion2 = getMoveToUnion();
*/

    UA_Variant variant;
    UA_Variant_init(&variant);

    UA_Server_readValue(server, UA_NODEID_STRING(1, "skill"), &variant);

    UA_CRCLSkillDataType* skillRead = (UA_CRCLSkillDataType*)variant.data;
    UA_CRCLCommandsUnionDataType moveToUnion1 = skillRead->cRCLCommands[0];
    UA_CRCLCommandsUnionDataType moveToUnion2 = skillRead->cRCLCommands[1];

    UA_CRCLCommandsUnionDataType* commandsUnionArray = (UA_CRCLCommandsUnionDataType *) UA_Array_new(2, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
    commandsUnionArray[0] = moveToUnion1;
    commandsUnionArray[1] = moveToUnion2;

    uaRobot.requested_Skill.id = skillRead->id;
    uaRobot.requested_Skill.cRCLCommandsSize = skillRead->cRCLCommandsSize;
    uaRobot.requested_Skill.name = skillRead->name;
    uaRobot.requested_Skill.cRCLCommands = (UA_CRCLCommandsUnionDataType *) UA_Array_new(2, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
    uaRobot.requested_Skill.cRCLCommands[0] = moveToUnion1;
    uaRobot.requested_Skill.cRCLCommands[1] = moveToUnion2;

            printf("\n %i \n", uaRobot.requested_Skill.cRCLCommands[0].switchField);
                if(uaRobot.requested_Skill.cRCLCommands[0].switchField == 1  ){
                    UA_InitCanonDataType init = uaRobot.requested_Skill.cRCLCommands[0].fields.initCanonCommand;
                    printf("\n %i \n", init.id );
                }else if(uaRobot.requested_Skill.cRCLCommands[0].switchField == 2  ){
                    UA_MoveToDataType move = uaRobot.requested_Skill.cRCLCommands[0].fields.moveToCommand;
                    printf("\n %i \n", move.id );
                    printf("\n %f \n", move.endPosition.zAxis.k );
                }

                printf("\n %i \n", uaRobot.requested_Skill.cRCLCommands[1].switchField);
                    if(uaRobot.requested_Skill.cRCLCommands[1].switchField == 1  ){
                        UA_InitCanonDataType init = uaRobot.requested_Skill.cRCLCommands[1].fields.initCanonCommand;
                        printf("\n %i \n", init.id );
                    }else if(uaRobot.requested_Skill.cRCLCommands[1].switchField == 2  ){
                        UA_MoveToDataType move = uaRobot.requested_Skill.cRCLCommands[1].fields.moveToCommand;
                        printf("\n %i \n", move.id );
                        printf("\n %f \n", move.endPosition.zAxis.k );
                    }

        // Attributes for variable node
    UA_VariableAttributes vattr = UA_VariableAttributes_default;

    printf("\n ouh yeah addSamyRobotVariableNodeToServer      3.5       \n");

    UA_Variant_setScalar(&vattr.value, &(uaRobot.requested_Skill), &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE]);
        vattr.valueRank = UA_VALUERANK_SCALAR;
        vattr.displayName = UA_LOCALIZEDTEXT("locale","SAMYRobot");
        vattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE].typeId;

        printf("\n ouh yeah addSamyRobotVariableNodeToServer      3.75       \n");

        UA_StatusCode retval = UA_Server_addVariableNode(server,
                               UA_NODEID_NUMERIC(1, 111222111), // new node id
                               UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER), // parent node
                               UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES), // reference type
                               UA_QUALIFIEDNAME(1, "SAMYRobot!!!"), // node browse name
                               UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                               vattr, NULL, NULL);

        if(retval == UA_STATUSCODE_GOOD){
            printf("\n SAMYRobot succesfully added!! \n");
        }else{
            printf("\n Failed adding SAMYRobot!! \n");
        }

 /*   UA_Variant_setScalar(&vattr.value, &uaRobot, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE]);
    vattr.valueRank = UA_VALUERANK_SCALAR;
    vattr.displayName = UA_LOCALIZEDTEXT("locale","SAMYRobot");
    vattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE].typeId;

    printf("\n ouh yeah addSamyRobotVariableNodeToServer      3.75       \n");

    UA_StatusCode retval = UA_Server_addVariableNode(server,
                           UA_NODEID_NUMERIC(1, 112211), // new node id
                           UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER), // parent node
                           UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES), // reference type
                           UA_QUALIFIEDNAME(1, "SAMYRobot!!!"), // node browse name
                           UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                           vattr, NULL, NULL);

    if(retval == UA_STATUSCODE_GOOD){
        printf("\n SAMYRobot succesfully added!! \n");
    }else{
        printf("\n Failed adding SAMYRobot!! \n");
    }*/
}


static void configureSamyRobot(UA_Server* server, SAMYRobot* robot){
    robot->id = 456789;
    robot->name = UA_STRING("FirstRobot");
    robot->ipAddresses.iPAddress_Skill = UA_STRING("opc.mqtt://127.0.0.1:1883");
    robot->ipAddresses.iPAddress_Status = UA_STRING("opc.mqtt://127.0.0.1:1883");
    robot->SAMYRobotVariableNodeId = UA_NODEID_NUMERIC(1, 111222111);
    robot->active = UA_TRUE;
    robot->online = UA_TRUE;
    robot->requested_Skill_success = UA_TRUE;

    configureSAMYRobotPublisherMQTT_WithoutLogin(robot, 100, 10, UA_TRUE);

    addSamyRobotVariableNodeToServer(server, robot);
}

static void
addUnionVariableType(UA_Server *server) {
    UA_VariableTypeAttributes dattr = UA_VariableTypeAttributes_default;
    dattr.description = UA_LOCALIZEDTEXT("en-US", "Union Example");
    dattr.displayName = UA_LOCALIZEDTEXT("en-US", "Union Example");
    dattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE].typeId;
    dattr.valueRank = UA_VALUERANK_SCALAR;

    UA_CRCLCommandsUnionDataType u;
    memset(&u, 0, sizeof(UA_CRCLCommandsUnionDataType));
    UA_Variant_setScalar(&dattr.value, &u, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);

    UA_Server_addVariableTypeNode(server, UA_NODEID_NUMERIC(0, 100001),
                                  UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                  UA_NODEID_NUMERIC(0, UA_NS0ID_HASSUBTYPE),
                                  UA_QUALIFIEDNAME(1, "Union Example"),
                                  UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                  dattr, NULL, NULL);
}

static void addUnion(UA_Server* server){

    UA_CRCLCommandsUnionDataType commandUnion;
commandUnion.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND;
commandUnion.fields.moveToCommand = getMoveToUnion().fields.moveToCommand;

        // Attributes for variable node
    UA_VariableAttributes vattr = UA_VariableAttributes_default;
    vattr.description = UA_LOCALIZEDTEXT("en-US", "CRCLCommandsUnion");
    vattr.displayName = UA_LOCALIZEDTEXT("en-US", "CRCLCommandsUnion");
    vattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE].typeId;
    vattr.valueRank = UA_VALUERANK_SCALAR;

    UA_Variant_setScalar(&vattr.value, &commandUnion, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);

    UA_StatusCode retval = UA_Server_addVariableNode(server,
                           UA_NODEID_STRING(1, "CRCLCommandsUnion"), // new node id
                           UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER), // parent node
                           UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES), // reference type
                           UA_QUALIFIEDNAME(1, "CRCLCommandsUnion"), // node browse name
                           UA_NODEID_NUMERIC(0, 100001),
                           vattr, NULL, NULL);
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

        addVectorVariable(server);

        addCRCLSkill2(server);
 //       UA_Server_addRepeatedCallback(server, readSkill2, NULL, 500, NULL);

        printf("Test 0 \n ");
        SAMYRobot robot;

        printf("Test 1 \n ");
        configureSamyRobot(server, &robot);

        printf("Test 2 \n ");
       // addSAMYRobotPublisherToServer(server, &robot);

addUnionVariableType(server);
        addUnion(server);

  /*      printf("Test 3 \n ");
        UA_PubSubConnection *connection = UA_PubSubConnection_findConnectionbyId(
                                                server, robot.publisher.publishers.publisherMQTT.connectionIdent);
        if(!connection) {
            UA_LOG_WARNING(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND,
                           "Could not create a PubSubConnection");
            UA_Server_delete(server);
            return -1;
        }
*/
        UA_StatusCode retval = UA_Server_run(server, &running);
    }

    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}

