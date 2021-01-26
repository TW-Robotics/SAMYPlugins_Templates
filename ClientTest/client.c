/* This work is licensed under a Creative Commons CCZero 1.0 Universal License.
 * See http://creativecommons.org/publicdomain/zero/1.0/ for more information. */

#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>

#include <stdlib.h>

#include "crcl_opcua_nodeids.h"
#include "namespace_crcl_opcua_generated.h"

#define STRING_BUFFER_SIZE 20

static void
readUnionVariable(UA_Client *client) {

    UA_Variant value;
    UA_Variant_init( &value );

    if(UA_Client_readValueAttribute( client, UA_NODEID_STRING(2, "Union.Value"), &value )==UA_STATUSCODE_GOOD){
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
    }
}


static void readSAMYRobotNode( UA_Client* client ){

    UA_Variant value;
    UA_Variant_init( &value );
    if(UA_Client_readValueAttribute( client, UA_NODEID_STRING(1, "SAMYRobot"), &value )==UA_STATUSCODE_GOOD){
    printf("\n readSAMYRobot succesful\n");
    }else{
    printf("\n readSAMYRobot FAILED! \n");
    }

    UA_SAMYRobotDataType robot;
    robot = (*(UA_SAMYRobotDataType*)value.data);

    for (int i=0; i<5; i++){
        UA_CRCLCommandsUnionDataType* val = &(robot.requested_Skill.cRCLCommands[i]);
        printf("\n readSAMYRobot, COMMAND NUMBER %i \n", i);

        if(val->switchField == 0){
        printf("\n switchValue empty \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND){
            printf("\n readSAMYRobot, UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND");
            UA_InitCanonDataType* canon = (UA_InitCanonDataType*)&(val->fields);
            printf("\n %i \n", canon->id);
            printf("\n %i \n", canon->commandID);
            printf("\n \n \n \n \n \n \n");

        }else if( val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND){
            UA_MoveToDataType* moveTo = (UA_MoveToDataType*)&(val->fields);
            printf("\n readSAMYRobot, UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND");

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

            printf("\n \n \n \n \n \n \n");

        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND){
        printf("\n a \n");
        }else if(val->switchField == UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND){
            printf("\n readSAMYRobot, UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND");
            UA_EndCanonDataType* canon = (UA_EndCanonDataType*)&(val->fields);
            printf("\n %i \n", canon->id);
            printf("\n %i \n", canon->commandID);
            printf("\n \n \n \n \n \n \n");
        }
    }
}



int main(void) {
    /* Make your custom datatype known to the stack */
//    UA_DataType types[4];
//    types[0] = PointType;
//    types[1] = MeasurementType;
//   types[2] = OptType;
//    types[3] = UniType;

    /* Attention! Here the custom datatypes are allocated on the stack. So they
     * cannot be accessed from parallel (worker) threads. */
    UA_DataTypeArray customDataTypes = {NULL, UA_TYPES_CRCL_OPCUA_COUNT, UA_TYPES_CRCL_OPCUA};

    UA_Client *client = UA_Client_new();
    UA_ClientConfig *cc = UA_Client_getConfig(client);
    UA_ClientConfig_setDefault(cc);
    cc->customDataTypes = &customDataTypes;

	    UA_StatusCode retval = UA_Client_connect(client, "opc.tcp://localhost:4840");
	    if(retval != UA_STATUSCODE_GOOD) {
		UA_Client_delete(client);
		return (int)retval;
	    }

//	readUnionVariable(client);
readSAMYRobotNode(client);

    UA_Client_delete(client); /* Disconnects the client internally */
    return EXIT_SUCCESS;
}

