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


static void readSAMYRobot( UA_Server* server, void* data ){

    UA_Variant value;
    UA_Variant_init( &value );
    if(UA_Server_readValue( server, UA_NODEID_STRING(1, "FirstRobot"), &value )==UA_STATUSCODE_GOOD){
    printf("\n readSAMYRobot succesful\n");
    }else{
    printf("\n readSAMYRobot FAILED! \n");
    }

    UA_ExtensionObject* rawData = (UA_ExtensionObject*)value.data;
    UA_SAMYRobotDataType* robot = (UA_SAMYRobotDataType*)(rawData->content.decoded.data);

    for (int i=0; i<5; i++){
        UA_CRCLCommandsUnionDataType* val = &(robot->requested_Skill.cRCLCommands[i]);
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


    UA_String transportProfile = UA_STRING("http://opcfoundation.org/UA-Profile/Transport/pubsub-udp-uadp");
    UA_NetworkAddressUrlDataType networkAddressUrl = {UA_STRING_NULL , UA_STRING("opc.udp://224.0.0.22:4840/")};

    config->pubsubTransportLayers = (UA_PubSubTransportLayer *)
        UA_calloc(2, sizeof(UA_PubSubTransportLayer));

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

    SAMYRobot robot;
    robot.id = 4567; /* IT MUST BE A UNINT16 number, otherwise it changes the number when compiling due to overflow!!! Compile with pedantic?*/
    robot.name = UA_STRING("FirstRobot");
    robot.ipAddresses.iPAddress_Skill = UA_STRING("opc.udp://224.0.0.22:4840/");
    robot.ipAddresses.iPAddress_Status = UA_STRING("opc.udp://224.0.0.22:4840/");
    robot.SAMYRobotVariableNodeId = UA_NODEID_NUMERIC(2,54321);
    configureSAMYRobotSubscriberUADP(&robot);
    addSAMYRobotSubscriberToServer(server, &robot);

    UA_Server_addRepeatedCallback( server, readSAMYRobot, NULL, 10000, NULL );

    UA_Server_run(server, &running);

    UA_Server_delete(server);
    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
    }
}
