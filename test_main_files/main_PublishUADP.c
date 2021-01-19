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



static void testNodeToClass(UA_Server* server, void* data ) {

    printf("\n nodeID vectorVariableType namespaceIndex: %i\n", UA_NODEID_NUMERIC(2, 15307).namespaceIndex);
    printf("\n nodeID vectorVariableType: %i\n", UA_NODEID_NUMERIC(2, 15307).identifier);

    printf("\nAqui 3\n");

    UA_NodeId* nodeID = (UA_NodeId*)data;
    printf("nodeID namespaceIndex  %i\n", nodeID->namespaceIndex);
    printf("nodeID nodeNumber   %i\n", nodeID->identifier);

 //   UA_NodeId nodeIDVariableType = UA_NODEID_NUMERIC(2, 15307);
//	UA_NodeId* outDataType = NULL;
//	UA_Server_readDataType(server, nodeIDVariableType, outDataType);
//	printf("nodeID vectorVariableType DataType namespaceIndex  %i\n", outDataType->namespaceIndex);
//	printf("nodeID vectorVariableType DataType nodeNumber   %i\n", outDataType->identifier);



    UA_Variant value;
    UA_Variant_init( &value );
    printf("\nAqui 4\n");
    /*
        if(UA_Server_readValue( server, *nodeID, &value )==UA_STATUSCODE_GOOD){
                            printf("\nAqui 5\n");
                            printf("\n Pointer value: %p\n", &value);
                            printf("\n Size of variant: %i\n", sizeof(value));
                            printf("\n arrayLength of variant: %i\n", value.arrayLength);

                            printf("\n Pointer value.type: %p\n", value.type);

                            printf("\n Pointer value.data: %p\n", value.data);


                            UA_CRCL_VectorDataType* val = (UA_CRCL_VectorDataType*)value.data;
                        //			printf("\n Pointer val: %p\n", &value);

                                printf("\nAqui 6\n");

        }
        */
    if(UA_Server_readValue( server, *nodeID, &value )==UA_STATUSCODE_GOOD){
                            printf("\nAqui 5\n");
                            printf("\n Pointer value: %p\n", &value);
                            printf("\n Size of variant: %i\n", sizeof(value));
                            printf("\n arrayLength of variant: %i\n", value.arrayLength);

                            printf("\n Pointer value.type: %p\n", value.type);

                            printf("\n Pointer value.data: %p\n", value.data);


        UA_CRCL_VectorDataType* val = (UA_CRCL_VectorDataType*)value.data;
                        //			printf("\n Pointer val: %p\n", &value);

                                printf("\nAqui 6\n");

    //	printf("name   %s\n", val->name);
        printf("id   %i\n", val->id);
        printf("i   %f\n", val->i);
        printf("j   %f\n", val->j);
        printf("k   %f\n", val->k);
        printf("\n");
    }
    else{ printf("\n Ayayayay no funcionó \n", value.data);}



    printf("\nAqui 7\n");

        UA_Variant_deleteMembers( &value );
}


static void testWriteVectorVariableNode(UA_Server* server, void* data ) {

    UA_NodeId* nodeID = (UA_NodeId*)data;

    UA_CRCL_VectorDataType vect;
//    vect.name =  NULL;
    vect.id = 3003;
    vect.i = 3.456;
    vect.j = -6.543;
    vect.k = 7.7777;

    UA_Variant myVar;
    UA_Variant_init(&myVar);
    UA_Variant_setScalar(&myVar, &vect, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE]);
    UA_StatusCode ret = UA_Server_writeValue(server, *nodeID, myVar);
}

/*
void* UA_Server_run_threadWrapper( void* data){
                    printf("\nAqui 30000\n");
    UA_Server* server = (UA_Server*)data;
                        printf("\nAqui 40000\n");

    UA_Server_run(server, &running);
                            printf("\nAqui 50000\n");

    return;
}
*/

static void testWritePoseVariableNode(UA_Server* server, void* data ) {

    UA_NodeId* nodeID = (UA_NodeId*)data;

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
    pose.name =  UA_STRING("PoseNameX");

    UA_Variant myVar;
    UA_Variant_init(&myVar);
    UA_Variant_setScalar(&myVar, &pose, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE]);

    UA_CRCL_PoseDataType* poseFromVariant = (UA_CRCL_PoseDataType*)myVar.data;

        printf("id   %i\n", poseFromVariant->id);
        printf("xAxis i   %f\n", poseFromVariant->xAxis.i);
        printf("xAxis j   %f\n", poseFromVariant->xAxis.j);
        printf("xAxis k   %f\n", poseFromVariant->xAxis.k);
        printf("\n");

    UA_StatusCode ret = UA_Server_writeValue(server, *nodeID, myVar);

    if (ret == UA_STATUSCODE_GOOD){
        printf("\nFUNCIONOOOOOOOOOOOOOOOOO\n");
        printf("\nFUNCIONOOOOOOOOOOOOOOOOO\n");
        printf("\nFUNCIONOOOOOOOOOOOOOOOOO\n");
        printf("\nFUNCIONOOOOOOOOOOOOOOOOO\n");
        printf("\nFUNCIONOOOOOOOOOOOOOOOOO\n");
        printf("\nFUNCIONOOOOOOOOOOOOOOOOO\n");

    }else{
        printf("\nNO CHUFLA\n");
        printf("\nNO CHUFLA\n");
        printf("\nNO CHUFLA\n");
        printf("\nNO CHUFLA\n");
        printf("\nNO CHUFLA\n");
        printf("\nNO CHUFLA\n");
    }

    UA_Variant variantRead;
    UA_Variant_init(&variantRead);
    UA_CRCL_PoseDataType* poseRead;

    UA_StatusCode statusRead = UA_Server_readValue(server, *nodeID, &variantRead);

    if (ret == UA_STATUSCODE_GOOD){
        printf("\nPOSEREAD FUNCIONOOOOOOOOOOOOOOOOO\n");
    }else{
        printf("\nPOSEREAD NO CHUFLA\n");
    }

    poseRead = (UA_CRCL_PoseDataType*)variantRead.data;

    printf("poseRead id   %i\n", poseRead->id);
    printf("poseRead xAxis i   %f\n", poseRead->xAxis.i);
    printf("poseRead xAxis j   %f\n", poseRead->xAxis.j);
    printf("poseRead xAxis k   %f\n", poseRead->xAxis.k);
    printf("\n");

}

static void addFiveCRCLCommands( UA_Server* server ) {

    UA_InitCanonDataType initCanon;
    initCanon.id = 88776655;
    initCanon.name = UA_STRING("InitCanonCommand");
    initCanon.commandID = 20202020;
    initCanon.guardSize = 0;
    initCanon.guard = NULL;

    UA_VariableAttributes vattr0 = UA_VariableAttributes_default;
    vattr0.description = UA_LOCALIZEDTEXT("en-US", "InitCanonCommand added from code");
    vattr0.displayName = UA_LOCALIZEDTEXT("en-US", "InitCanonCommand");
    vattr0.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE].typeId;
    vattr0.valueRank = UA_VALUERANK_SCALAR;
    UA_Variant_setScalar(&vattr0.value, &initCanon, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE]);

    UA_StatusCode ret0 = UA_Server_addVariableNode(server, UA_NODEID_NUMERIC(2, 111111),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                              UA_QUALIFIEDNAME(2, "InitCanonCommandFromCode"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), vattr0, NULL, NULL);

    if(ret0 == UA_STATUSCODE_GOOD){
        printf("\n InitCanon added succesfully \n");
    }
    else{
                printf("\n InitCanon added FAILED \n");
    }

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
    moveTo1.id = 11223344;
    moveTo1.name = UA_STRING("moveTo1Command");
    moveTo1.commandID = 10101010;
    moveTo1.guardSize = 0;
    moveTo1.guard = NULL;
    moveTo1.moveStraight = true;
    moveTo1.endPosition = pose;

    UA_VariableAttributes vattr = UA_VariableAttributes_default;
    vattr.description = UA_LOCALIZEDTEXT("en-US", "MoveToCommand added from code");
    vattr.displayName = UA_LOCALIZEDTEXT("en-US", "MoveToCommand");
    vattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETODATATYPE].typeId;
    vattr.valueRank = UA_VALUERANK_SCALAR;
    UA_Variant_setScalar(&vattr.value, &moveTo1, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETODATATYPE]);

    UA_StatusCode ret = UA_Server_addVariableNode(server, UA_NODEID_NUMERIC(2, 222222),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                              UA_QUALIFIEDNAME(2, "MoveTo1CommandFromCode"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), vattr, NULL, NULL);

    if(ret == UA_STATUSCODE_GOOD){
        printf("\n MoveToCommand1 added succesfully \n");
    }
    else{
                printf("\n MoveToCommand1 added FAILEED \n");
    }


    //Adding second moveTo Command
        UA_StatusCode ret1 = UA_Server_addVariableNode(server, UA_NODEID_NUMERIC(2, 333333),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                              UA_QUALIFIEDNAME(2, "MoveTo2CommandFromCode"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), vattr, NULL, NULL);

    if(ret1 == UA_STATUSCODE_GOOD){
        printf("\n MoveToCommand1 added succesfully \n");
    }
    else{
                printf("\n MoveToCommand1 added FAILEED \n");
    }


        //Adding third moveTo Command
        UA_StatusCode ret2 = UA_Server_addVariableNode(server, UA_NODEID_NUMERIC(2, 444444),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                              UA_QUALIFIEDNAME(2, "MoveTo3CommandFromCode"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), vattr, NULL, NULL);

    if(ret2 == UA_STATUSCODE_GOOD){
        printf("\n MoveToCommand1 added succesfully \n");
    }
    else{
                printf("\n MoveToCommand1 added FAILEED \n");
    }


    //Adding endCanon command
        UA_InitCanonDataType endCanon;
    initCanon.id = 444555;
    initCanon.name = UA_STRING("EndCanonCommand");
    initCanon.commandID = 919191;
    initCanon.guardSize = 0;
    initCanon.guard = NULL;

    UA_VariableAttributes vattr2 = UA_VariableAttributes_default;
    vattr2.description = UA_LOCALIZEDTEXT("en-US", "EndCanonCommand added from code");
    vattr2.displayName = UA_LOCALIZEDTEXT("en-US", "EndCanonCommand");
    vattr2.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE].typeId;
    vattr2.valueRank = UA_VALUERANK_SCALAR;
    UA_Variant_setScalar(&vattr2.value, &initCanon, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE]);

    UA_StatusCode ret3 = UA_Server_addVariableNode(server, UA_NODEID_NUMERIC(2, 555555),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                              UA_QUALIFIEDNAME(2, "EndCanonCommandFromCode"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE), vattr2, NULL, NULL);

    if(ret3 == UA_STATUSCODE_GOOD){
        printf("\n EndCanonCommand added succesfully \n");
    }
    else{
                printf("\n EndCanonCommand added FAILED \n");
    }

}

static void
addUnionExampleVariable(UA_Server *server) {

    UA_VariableAttributes vattr = UA_VariableAttributes_default;
    vattr.description = UA_LOCALIZEDTEXT("en-US", "Union Example");
    vattr.displayName = UA_LOCALIZEDTEXT("en-US", "Union Example");
    vattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE].typeId;
    vattr.valueRank = UA_VALUERANK_SCALAR;

    UA_StatusCode statusRead = UA_Server_addVariableNode(server, UA_NODEID_STRING(2, "Union.Value"),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER),
                              UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES),
                              UA_QUALIFIEDNAME(2, "Union Example"),
                              UA_NODEID_NUMERIC(2, 15001), vattr, NULL, NULL);

    if (statusRead == UA_STATUSCODE_GOOD){
        printf("\n addUnionExampleVariable agregarVariable FUNCIONOOOOOOOOOOOOOOOOO\n");
    }else{
        printf("\n addUnionExampleVariable agregarVariable NO CHUFLA\n");
    }
}


static void
writeUnionVariable(UA_Server *server, void* data) {
    UA_CRCLCommandsUnionDataType u;
    u.switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND;

//Leo de uno de los nodos CRCLMoveTo para ponerlo en la unión y luego agregarla
    UA_NodeId nodeID = UA_NODEID_NUMERIC( 2, 333333 );
    UA_Variant variantRead;
    UA_Variant_init(&variantRead);

    UA_StatusCode statusRead = UA_Server_readValue(server, nodeID, &variantRead);

    if (statusRead == UA_STATUSCODE_GOOD){
        printf("\n writedUnionVariable readMoveTo FUNCIONOOOOOOOOOOOOOOOOO\n");
    }else{
        printf("\n writedUnionVariable readMoveTo NO CHUFLA\n");
    }

    UA_MoveToDataType* moveTo = (UA_MoveToDataType*)variantRead.data;
    u.fields.moveToCommand = *moveTo;

    UA_Variant value;
    UA_Variant_init( &value );

    UA_Variant_setScalar(&value, &u, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);


    if(UA_Server_writeValue( server, UA_NODEID_STRING(2, "Union.Value"), value )==UA_STATUSCODE_GOOD){
    printf("\n Succesful writeValue of the union \n");
    }else{
    printf("\n writeValue  of the union FAILED! \n");
    }
}

static void
readUnionVariable(UA_Server *server, void* data) {

    UA_Variant value;
    UA_Variant_init( &value );

    if(UA_Server_readValue( server, UA_NODEID_STRING(2, "Union.Value"), &value )==UA_STATUSCODE_GOOD){
    printf("\n Succesful readValue of the union \n");
    }else{
    printf("\n readValue  of the union FAILED! \n");
    }

    UA_CRCLCommandsUnionDataType* val = (UA_CRCLCommandsUnionDataType*)value.data;

    if(val->switchField == 0){
    printf("\n switchValue empty \n");
    }else if( val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND){
        UA_MoveToDataType* moveTo = (UA_MoveToDataType*)&(val->fields);
    printf("\n %i \n", moveTo->id);
    printf("\n %i \n", moveTo->commandID);
    printf("\n %f \n", moveTo->endPosition.point.x);
    printf("\n %f \n", moveTo->endPosition.point.y);
    printf("\n %f \n", moveTo->endPosition.point.z);
    printf("\n %f \n", moveTo->endPosition.xAxis.i);
    printf("\n %f \n", moveTo->endPosition.xAxis.j);
    printf("\n %f \n", moveTo->endPosition.xAxis.k);
    printf("\n %f \n", moveTo->endPosition.zAxis.i);
    printf("\n %f \n", moveTo->endPosition.zAxis.j);
    printf("\n %f \n", moveTo->endPosition.zAxis.k);
    }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND){
        UA_CloseToolChangerDataType* vector = (UA_CloseToolChangerDataType*)&(val->fields);
    printf("\n a \n");
    }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND){
    printf("\n a \n");
    }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND){
    printf("\n a \n");
    }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND){
    printf("\n a \n");
    }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND){
    printf("\n a \n");
    }

}

static void addCRCLProgramm( UA_Server* server )
{

            printf("\n addCRCLProgramm      1       \n");

    UA_NodeId nodeID[5];
    nodeID[0] = UA_NODEID_NUMERIC(2, 111111);
    nodeID[1] = UA_NODEID_NUMERIC(2, 222222);
    nodeID[2] = UA_NODEID_NUMERIC(2, 333333);
    nodeID[3] = UA_NODEID_NUMERIC(2, 444444);
    nodeID[4] = UA_NODEID_NUMERIC(2, 555555);


    // Here is the string array. Current size is 2
    const size_t array_size = 5;
    UA_CRCLCommandsUnionDataType *commands = (UA_CRCLCommandsUnionDataType *) UA_Array_new(array_size, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);

    printf("\n addCRCLProgramm      2       \n");

    UA_Variant variantRead;
    UA_Variant_init(&variantRead);

    UA_StatusCode statusRead = UA_STATUSCODE_GOOD;
    UA_NodeId commandType;


    for (int i=0; i<5; i++){
        statusRead = UA_Server_readDataType(server, nodeID[i], &commandType);
        statusRead = UA_Server_readValue(server, nodeID[i], &variantRead);

        if(commandType.identifierType == UA_NODEIDTYPE_NUMERIC &&
                    commandType.identifier.numeric == UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE].typeId.identifier.numeric  ){
         printf("\n   Loop InitCommand  \n");
             commands[i].switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND;
             statusRead = UA_Server_readValue(server, nodeID[i], &variantRead);
             commands[i].fields.initCanonCommand = *((UA_InitCanonDataType*)variantRead.data);
             UA_Variant_clear(&variantRead);
        }else if(commandType.identifierType == UA_NODEIDTYPE_NUMERIC &&
                    commandType.identifier.numeric == UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETODATATYPE].typeId.identifier.numeric  ){
         printf("\n   Loop MoveTo  \n");
             commands[i].switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND;
             statusRead = UA_Server_readValue(server, nodeID[i], &variantRead);
             commands[i].fields.moveToCommand = *((UA_MoveToDataType*)variantRead.data);
             UA_Variant_clear(&variantRead);
        }else if(commandType.identifierType == UA_NODEIDTYPE_NUMERIC &&
                        commandType.identifier.numeric ==  UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CLOSETOOLCHANGERDATATYPE].typeId.identifier.numeric ){
         printf("\n   Loop CloseTool  \n");
             commands[i].switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND;
             statusRead = UA_Server_readValue(server, nodeID[i], &variantRead);
             commands[i].fields.closeToolChangerCommand = *((UA_CloseToolChangerDataType*)variantRead.data);
             UA_Variant_clear(&variantRead);
        }else if(commandType.identifierType == UA_NODEIDTYPE_NUMERIC &&
                        commandType.identifier.numeric ==  UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DWELLDATATYPE].typeId.identifier.numeric ){
         printf("\n   Loop DwellCommand  \n");
             commands[i].switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND;
             statusRead = UA_Server_readValue(server, nodeID[i], &variantRead);
             commands[i].fields.dwellCommand = *((UA_DwellDataType*)variantRead.data);
             UA_Variant_clear(&variantRead);
        }else if(commandType.identifierType == UA_NODEIDTYPE_NUMERIC &&
                        commandType.identifier.numeric == UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_GETSTATUSDATATYPE].typeId.identifier.numeric  ){
         printf("\n   Loop GetStatus  \n");
             commands[i].switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND;
             statusRead = UA_Server_readValue(server, nodeID[i], &variantRead);
             commands[i].fields.getStatusCommand = *((UA_GetStatusDataType*)variantRead.data);
             UA_Variant_clear(&variantRead);
        }else if(commandType.identifierType == UA_NODEIDTYPE_NUMERIC &&
                        commandType.identifier.numeric ==  UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MESSAGEDATATYPE].typeId.identifier.numeric ){
         printf("\n   Loop MessageCommand  \n");
             commands[i].switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND;
             statusRead = UA_Server_readValue(server, nodeID[i], &variantRead);
             commands[i].fields.messageCommand = *((UA_MessageDataType*)variantRead.data);
             UA_Variant_clear(&variantRead);
        }else if(commandType.identifierType == UA_NODEIDTYPE_NUMERIC &&
                        commandType.identifier.numeric == UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENDCANONDATATYPE].typeId.identifier.numeric  ){
         printf("\n   Loop EndCanon  \n");
             commands[i].switchField = UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND;
             statusRead = UA_Server_readValue(server, nodeID[i], &variantRead);
             commands[i].fields.endCanonCommand = *((UA_EndCanonDataType*)variantRead.data);
             UA_Variant_clear(&variantRead);
        }

        if (statusRead == UA_STATUSCODE_GOOD){
            printf("\n PROGRAMM READ FUNCIONOOOOOOOOOOOOOOOOO\n");
        }else{
            printf("\n PROGRAMM READ NO CHUFLA\n");
        }
    }


        for (int i=0; i<5; i++){
            printf("\n %i \n", commands[i].switchField);
                if(commands[i].switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND  ){
                    UA_InitCanonDataType init = commands[i].fields.initCanonCommand;
                    printf("\n %i \n", init.id );
                }else if(commands[i].switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND  ){
                    UA_MoveToDataType move = commands[i].fields.moveToCommand;
                    printf("\n %i \n", move.id );
                    printf("\n %f \n", move.endPosition.zAxis.k );
                }
        }

                printf("\n addCRCLProgramm      3       \n");

    UA_CRCLSkillDataType skill;
    skill.cRCLCommandsSize = 5;
    UA_Variant_setArray(&(skill.cRCLCommands), &commands, 5, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
    skill.cRCLCommands = NULL;
    skill.id = 1919191;
    skill.name = UA_STRING("skillName");

                    // Attributes for variable node
    UA_VariableAttributes vattr = UA_VariableAttributes_default;

                printf("\n addCRCLProgramm      3.5       \n");


    UA_Variant_setArray(&vattr.value, &skill, 5, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
  //  vattr.valueRank = UA_VALUERANK_SCALAR;
    // We want a 1-dimensional array with 2 values
 //   UA_UInt32 myArrayDimensions[1] = {array_size};
//    vattr.value.arrayDimensions = myArrayDimensions;
 //   vattr.value.arrayDimensionsSize = 1;
    vattr.displayName = UA_LOCALIZEDTEXT("locale","skill");
    vattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE].typeId;

                    printf("\n addCRCLProgramm      3.75       \n");

    UA_StatusCode retval = UA_Server_addVariableNode(server,
                                       UA_NODEID_STRING(1, "skill"), // new node id
                                       UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER), // parent node
                                       UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES), // reference type
                                       UA_QUALIFIEDNAME(1, "skill"), // node browse name
                                       UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                                       vattr, NULL, NULL);
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
    retval.switchField = 2;
    retval.fields.moveToCommand = moveTo1;

    return retval;
}

static void addCRCLSkill( UA_Server* server )
{
    UA_CRCLCommandsUnionDataType moveToUnion1 = getMoveToUnion();
    UA_CRCLCommandsUnionDataType moveToUnion2 = getMoveToUnion();


        printf("\n %i \n", moveToUnion1.switchField);
            if(moveToUnion1.switchField == 1  ){
                UA_InitCanonDataType init = moveToUnion1.fields.initCanonCommand;
                printf("\n %i \n", init.id );
            }else if(moveToUnion1.switchField == 2  ){
                UA_MoveToDataType move = moveToUnion1.fields.moveToCommand;
                printf("\n %i \n", move.id );
                printf("\n %f \n", move.endPosition.zAxis.k );
            }

            printf("\n %i \n", moveToUnion2.switchField);
                if(moveToUnion2.switchField == 1  ){
                    UA_InitCanonDataType init = moveToUnion2.fields.initCanonCommand;
                    printf("\n %i \n", init.id );
                }else if(moveToUnion2.switchField == 2  ){
                    UA_MoveToDataType move = moveToUnion2.fields.moveToCommand;
                    printf("\n %i \n", move.id );
                    printf("\n %f \n", move.endPosition.zAxis.k );
                }
/*
    UA_String out = UA_STRING_NULL;

    UA_DataValue dv;
    UA_DataValue_init(&dv);
    UA_Variant_setScalar(&dv.value, &moveToUnion1, &UA_TYPES_CRCL_OPCUA[UA_CRCL_OPCUAID_CRCLCOMMANDSUNIONDATATYPE]);
   // dv.value.arrayDimensions = 1;
    dv.value.arrayDimensionsSize = 1;
    dv.hasValue = true;
    dv.hasStatus = false;
    dv.hasServerTimestamp = false;
    dv.hasSourcePicoseconds = false;
 //   UA_print(&dv, &UA_TYPES[UA_TYPES_DATAVALUE], &out);
    UA_print(&moveToUnion1, &UA_TYPES_CRCL_OPCUA[UA_CRCL_OPCUAID_CRCLCOMMANDSUNIONDATATYPE], &out);
    printf("%.*s\n", (int)out.length, out.data);
    UA_String_clear(&out);
*/

    UA_CRCLCommandsUnionDataType* commandsUnionArray = (UA_CRCLCommandsUnionDataType *) UA_Array_new(2, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);    UA_CRCLSkillDataType skillaaa;
    commandsUnionArray[0] = moveToUnion1;
    commandsUnionArray[1] = moveToUnion2;


    printf("\n %i \n", commandsUnionArray[0].switchField);
        if(commandsUnionArray[0].switchField == 1  ){
            UA_InitCanonDataType init = commandsUnionArray[0].fields.initCanonCommand;
            printf("\n %i \n", init.id );
        }else if(commandsUnionArray[0].switchField == 2  ){
            UA_MoveToDataType move = commandsUnionArray[0].fields.moveToCommand;
            printf("\n %i \n", move.id );
            printf("\n %f \n", move.endPosition.zAxis.k );
        }

        printf("\n %i \n", commandsUnionArray[1].switchField);
            if(commandsUnionArray[1].switchField == 1  ){
                UA_InitCanonDataType init = commandsUnionArray[1].fields.initCanonCommand;
                printf("\n %i \n", init.id );
            }else if(commandsUnionArray[1].switchField == 2  ){
                UA_MoveToDataType move = commandsUnionArray[1].fields.moveToCommand;
                printf("\n %i \n", move.id );
                printf("\n %f \n", move.endPosition.zAxis.k );
            }


    skillaaa.id = 91827364;
    skillaaa.cRCLCommandsSize = 2;
    skillaaa.name = UA_STRING("skillName!!");
    skillaaa.cRCLCommands = commandsUnionArray;

    printf("\n %i \n", skillaaa.cRCLCommands[0].switchField);
        if(skillaaa.cRCLCommands[0].switchField == 1  ){
            UA_InitCanonDataType init = skillaaa.cRCLCommands[0].fields.initCanonCommand;
            printf("\n %i \n", init.id );
        }else if(skillaaa.cRCLCommands[0].switchField == 2  ){
            UA_MoveToDataType move = skillaaa.cRCLCommands[0].fields.moveToCommand;
            printf("\n %i \n", move.id );
            printf("\n %f \n", move.endPosition.zAxis.k );
        }

        printf("\n %i \n", skillaaa.cRCLCommands[1].switchField);
            if(skillaaa.cRCLCommands[1].switchField == 1  ){
                UA_InitCanonDataType init = skillaaa.cRCLCommands[1].fields.initCanonCommand;
                printf("\n %i \n", init.id );
            }else if(skillaaa.cRCLCommands[1].switchField == 2  ){
                UA_MoveToDataType move = skillaaa.cRCLCommands[1].fields.moveToCommand;
                printf("\n %i \n", move.id );
                printf("\n %f \n", move.endPosition.zAxis.k );
            }



        // Attributes for variable node
    UA_VariableAttributes vattr = UA_VariableAttributes_default;

    printf("\n ouh yeah addCRCLSkill      3.5       \n");


    UA_Variant_setArray(&vattr.value, skillaaa.cRCLCommands, 2, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
    //  vattr.valueRank = UA_VALUERANK_SCALAR;
    // We want a 1-dimensional array with 2 values
       UA_UInt32 myArrayDimensions[1] = {2};
        vattr.value.arrayDimensions = myArrayDimensions;
       vattr.value.arrayDimensionsSize = 1;
    vattr.displayName = UA_LOCALIZEDTEXT("locale","skill");
    vattr.dataType = UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE].typeId;

    printf("\n ouh yeah addCRCLSkill      3.75       \n");

    UA_StatusCode retval = UA_Server_addVariableNode(server,
                           UA_NODEID_STRING(1, "skill"), // new node id
                           UA_NODEID_NUMERIC(0, UA_NS0ID_OBJECTSFOLDER), // parent node
                           UA_NODEID_NUMERIC(0, UA_NS0ID_ORGANIZES), // reference type
                           UA_QUALIFIEDNAME(1, "skill"), // node browse name
                           UA_NODEID_NUMERIC(0, UA_NS0ID_BASEDATAVARIABLETYPE),
                           vattr, NULL, NULL);

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






int main(int argc, char** argv) {

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    UA_Server *server = UA_Server_new();

    UA_ServerConfig *config = UA_Server_getConfig(server);
    UA_ServerConfig_setDefault(config);

    /* Details about the connection configuration and handling are located in
     * the pubsub connection tutorial */
    config->pubsubTransportLayers =
        (UA_PubSubTransportLayer *) UA_calloc(2, sizeof(UA_PubSubTransportLayer));
    if(!config->pubsubTransportLayers) {
        UA_Server_delete(server);
        return EXIT_FAILURE;
    }
    config->pubsubTransportLayers[0] = UA_PubSubTransportLayerUDPMP();
    config->pubsubTransportLayersSize++;
#ifdef UA_ENABLE_PUBSUB_ETH_UADP
    config->pubsubTransportLayers[1] = UA_PubSubTransportLayerEthernet();
    config->pubsubTransportLayersSize++;
#endif

    UA_StatusCode retval = UA_STATUSCODE_GOOD;

    UA_NodeId nodeVectorVariable =  UA_NODEID_NUMERIC(2, 54321);

    /* create nodes from nodeset */
    if(namespace_crcl_opcua_generated(server) != UA_STATUSCODE_GOOD) {
        UA_LOG_ERROR(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "Could not add the crcl opcua nodeset. "
        "Check previous output for any error.");
        retval = UA_STATUSCODE_BADUNEXPECTEDERROR;
    } else {/*If custom namespace succesfully added*/

        addVectorVariable(server);

        SAMYRobot robot;
        robot.id = 456789;
        robot.name = UA_STRING("FirstRobot");
    	robot.ipAddresses.iPAddress_Skill = UA_STRING("opc.udp://224.0.0.22:4840");
    	robot.ipAddresses.iPAddress_Status = UA_STRING("opc.udp://224.0.0.22:4840");
        robot.SAMYRobotVariableNodeId = nodeVectorVariable;
        configureSAMYRobotPublisherUADP(&robot, 100, 10);
        addSAMYRobotPublisherToServer(server, &robot);


        addVectorVariable(server);
/*        UA_NodeId nodeVectorVariable =  UA_NODEID_NUMERIC(2, 54321);
        UA_NodeId nodePoseVariableToWrite =  UA_NODEID_NUMERIC(2, 15056);
        void* data = (void*)(&nodeVectorVariable);
        void* data2 = (void*)(&nodePoseVariableToWrite);
        testWriteVectorVariableNode(server, data );
        testWritePoseVariableNode(server, data2 );*/
        addFiveCRCLCommands( server );
//        addUnionExampleVariable(UA_Server *server);
//        addCRCLProgramm( server );
        addCRCLSkill2(server);
        UA_Server_addRepeatedCallback(server, readSkill2, NULL, 500, NULL);
        UA_StatusCode retval = UA_Server_run(server, &running);
    }

    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}

