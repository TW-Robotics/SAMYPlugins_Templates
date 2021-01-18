#ifndef SAMYROBOT_H
#define SAMYROBOT_H

#include "crcl_opcua_nodeids.h"
#include "namespace_crcl_opcua_generated.h"

#include <Publisher.hpp>
#include <Subscriber.hpp>
//#include <Temporal_DataTypes.h>

typedef struct {
    /*The same fields than the SAMYRobot modelled in OPC UA (UA_SAMYRobot)*/
    UA_UInt16 id;
    UA_String name;
    UA_CRCLSkillDataType requested_skill;
    UA_Boolean requested_Skill_success;
    UA_Boolean active;
    UA_Boolean online;
    UA_CRCLStatusDataType robot_status;
    UA_PubSubIPAddresses ipAddresses;
    /*The same fields than the SAMYRobot modelled in OPC UA (UA_SAMYRobot)*/
    UA_NodeId SAMYRobotVariableNodeId;
    Publisher publisher; /*Publisher is a Union of Publisher_UADP and Publisher_MQTT*/
    Subscriber subscriber;
} SAMYRobot;


void configureSAMYRobotPublisherUADP(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount);
#ifdef UA_ENABLE_JSON_ENCODING
void configureSAMYRobotPublisherMQTT_WithoutLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount,
                                                UA_Boolean JSONEncoding);
void configureSAMYRobotPublisherMQTT_WithLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount,
                                            UA_Boolean JSONEncoding, MQTT_LoginData login);
#else
void configureSAMYRobotPublisherMQTT_WithoutLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount);
void configureSAMYRobotPublisherMQTT_WithLogin(SAMYRobot* robot, UA_UInt16 publishingInterval, UA_UInt32 keyFrameCount,
                                            MQTT_LoginData login);
#endif

UA_StatusCode addSAMYRobotPublisherToServer(UA_Server *server, SAMYRobot* robot);

void configureSAMYRobotSubscriberUADP(SAMYRobot* robot);
void configureSAMYRobotSubscriberMQTT(SAMYRobot* robot);
UA_StatusCode addSAMYRobotSubscriberToServer(UA_Server *server, SAMYRobot* robot);

void translateCRCLCommand( const UA_CRCLCommandsUnionDataType* const command);

void executeSkill(const UA_CRCLSkillDataType* const commands );

#endif /* SAMYROBOT_H */
