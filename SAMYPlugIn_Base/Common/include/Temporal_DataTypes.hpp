#ifndef TEMPORAL_DATATYPES_H
#define TEMPORAL_DATATYPES_H

#include "crcl_opcua_nodeids.h"
#include "namespace_crcl_opcua_generated.h"

/* The binary encoding id's for the datatypes */
#define CRCLCommandsUnionDataType_encoding_id        100001
#define CRCLSkillDataType_binary_encoding_id  100002
#define SAMYRobot_binary_encoding_id          100003
#define Uni_binary_encoding_id          100004

#include <boost/preprocessor/arithmetic/add.hpp>

#define UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE BOOST_PP_ADD(UA_TYPES_CRCL_OPCUA_COUNT, 0)
#define UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE BOOST_PP_ADD(UA_TYPES_CRCL_OPCUA_COUNT, 1)
#define UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE BOOST_PP_ADD(UA_TYPES_CRCL_OPCUA_COUNT, 2)

/**
 * CRCLCommandsUnionDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCLCommandsUnionDataType */
typedef enum {
    UA_CRCLCOMMANDSUNIONDATATYPESWITCH_NONE = 0,
    UA_CRCLCOMMANDSUNIONDATATYPESWITCH_INITCANONCOMMAND = 1,
    UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MOVETOCOMMAND = 2,
    UA_CRCLCOMMANDSUNIONDATATYPESWITCH_CLOSETOOLCHANGERCOMMAND = 3,
    UA_CRCLCOMMANDSUNIONDATATYPESWITCH_DWELLCOMMAND = 4,
    UA_CRCLCOMMANDSUNIONDATATYPESWITCH_GETSTATUSCOMMAND = 5,
    UA_CRCLCOMMANDSUNIONDATATYPESWITCH_MESSAGECOMMAND = 6,
    UA_CRCLCOMMANDSUNIONDATATYPESWITCH_ENDCANONCOMMAND = 7,
    __UA_CRCLCOMMANDSUNIONDATATYPESWITCH_FORCE32BIT = 0x7fffffff
} UA_CRCLCommandsUnionDataTypeSwitch;
UA_STATIC_ASSERT(sizeof(UA_CRCLCommandsUnionDataTypeSwitch) == sizeof(UA_Int32), enum_must_be_32bit);

typedef struct {
    UA_CRCLCommandsUnionDataTypeSwitch switchField;
    union {
        UA_InitCanonDataType initCanonCommand;
        UA_MoveToDataType moveToCommand;
        UA_CloseToolChangerDataType closeToolChangerCommand;
        UA_DwellDataType dwellCommand;
        UA_GetStatusDataType getStatusCommand;
        UA_MessageDataType messageCommand;
        UA_EndCanonDataType endCanonCommand;
    } fields;
} UA_CRCLCommandsUnionDataType;


/* CRCLCommandsUnionDataType */
static UA_DataTypeMember CRCLCommandsUnionDataType_members[7] = {
{
    UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE, /* .memberTypeIndex */
    sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InitCanonCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_MOVETODATATYPE, /* .memberTypeIndex */
    sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoveToCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CLOSETOOLCHANGERDATATYPE, /* .memberTypeIndex */
    sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CloseToolChangerCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_DWELLDATATYPE, /* .memberTypeIndex */
    sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DwellCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_GETSTATUSDATATYPE, /* .memberTypeIndex */
    sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GetStatusCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_MESSAGEDATATYPE, /* .memberTypeIndex */
    sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_ENDCANONDATATYPE, /* .memberTypeIndex */
    sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndCanonCommand") /* .memberName */
},};

/* CRCLCommandsUnionDataType */
static const UA_DataType CRCLCommandsUnionDataTypeType = {
    {3, UA_NODEIDTYPE_NUMERIC, {90000LU}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {CRCLCommandsUnionDataType_encoding_id}}, /* .binaryEncodingId */
    sizeof(UA_CRCLCommandsUnionDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UNION, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCLCommandsUnionDataType_members  /* .members */
    UA_TYPENAME("CRCLCommandsUnionDataType") /* .typeName */
};


/**
 * CRCLSkillDataType
 * ^^^^^^^^^^^^^^^^^
 * CRCLSkillDataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    size_t cRCLCommandsSize;
    UA_CRCLCommandsUnionDataType *cRCLCommands;
} UA_CRCLSkillDataType;


/* CRCLSkillDataType */
static UA_DataTypeMember CRCLSkillDataType_members[3] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Id") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCLSkillDataType, name) - offsetof(UA_CRCLSkillDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLSkillDataType, cRCLCommandsSize) - offsetof(UA_CRCLSkillDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CRCLCommands") /* .memberName */
}};

/* CRCLSkillDataType */
static const UA_DataType CRCLSkillDataTypeType = {
    {3, UA_NODEIDTYPE_NUMERIC, {91000LU}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {CRCLSkillDataType_binary_encoding_id}}, /* .binaryEncodingId */
    sizeof(UA_CRCLSkillDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCLSkillDataType_members  /* .members */
    UA_TYPENAME("CRCLSkillDataType") /* .typeName */
};




/**
 * SAMYRobotDataType
 * ^^^^^^^^^^^^^^^^^
 * CRCLProgramm */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCLSkillDataType requested_Skill;
    UA_Boolean requested_Skill_Success;
    UA_Boolean active;
    UA_Boolean online;
    UA_CRCLStatusDataType robot_Status;
    UA_PubSubIPAddresses iPAddresses;
} UA_SAMYRobotDataType;


/* SAMYRobotDataType */
static UA_DataTypeMember SAMYRobotDataType_members[8] = {
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Id") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_SAMYRobotDataType, name) - offsetof(UA_SAMYRobotDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SAMYRobotDataType, requested_Skill) - offsetof(UA_SAMYRobotDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Requested_Skill") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SAMYRobotDataType, requested_Skill_Success) - offsetof(UA_SAMYRobotDataType, requested_Skill) - sizeof(UA_CRCLSkillDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Requested_Skill_Success") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SAMYRobotDataType, active) - offsetof(UA_SAMYRobotDataType, requested_Skill_Success) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Active") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SAMYRobotDataType, online) - offsetof(UA_SAMYRobotDataType, active) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Online") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCLSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SAMYRobotDataType, robot_Status) - offsetof(UA_SAMYRobotDataType, online) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Robot_Status") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_PUBSUBIPADDRESSES, /* .memberTypeIndex */
    offsetof(UA_SAMYRobotDataType, iPAddresses) - offsetof(UA_SAMYRobotDataType, robot_Status) - sizeof(UA_CRCLStatusDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IPAddresses") /* .memberName */
}};

/* SAMYRobotDataType */
static const UA_DataType SAMYRobotDataTypeType = {
    {3, UA_NODEIDTYPE_NUMERIC, {92000LU}}, /* .typeId */
    {3, UA_NODEIDTYPE_NUMERIC, {SAMYRobot_binary_encoding_id}}, /* .binaryEncodingId */
    sizeof(UA_SAMYRobotDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    SAMYRobotDataType_members  /* .members */
    UA_TYPENAME("SAMYRobotDataType") /* .typeName */
};

#endif/*TEMPORAL_DATATYPES_H*/

