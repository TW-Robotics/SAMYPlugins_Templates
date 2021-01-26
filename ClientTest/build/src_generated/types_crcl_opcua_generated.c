/* Generated from CRCL.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2021-01-26 09:49:51 */
#include "types_crcl_opcua_generated.h"

/* CRCL_PositiveDecimalDataType */
#define CRCL_PositiveDecimalDataType_members NULL

/* CRCL_PoseToleranceDataType */
static UA_DataTypeMember CRCL_PoseToleranceDataType_members[7] = {
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
    offsetof(UA_CRCL_PoseToleranceDataType, name) - offsetof(UA_CRCL_PoseToleranceDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseToleranceDataType, xPointTolerance) - offsetof(UA_CRCL_PoseToleranceDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("XPointTolerance") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseToleranceDataType, yPointTolerance) - offsetof(UA_CRCL_PoseToleranceDataType, xPointTolerance) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("YPointTolerance") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseToleranceDataType, zPointTolerance) - offsetof(UA_CRCL_PoseToleranceDataType, yPointTolerance) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ZPointTolerance") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseToleranceDataType, xAxisTolerance) - offsetof(UA_CRCL_PoseToleranceDataType, zPointTolerance) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("XAxisTolerance") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseToleranceDataType, zAxisTolerance) - offsetof(UA_CRCL_PoseToleranceDataType, xAxisTolerance) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ZAxisTolerance") /* .memberName */
},};

/* CRCL_ActuateJointDataType */
static UA_DataTypeMember CRCL_ActuateJointDataType_members[5] = {
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
    offsetof(UA_CRCL_ActuateJointDataType, name) - offsetof(UA_CRCL_ActuateJointDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_ActuateJointDataType, jointNumber) - offsetof(UA_CRCL_ActuateJointDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointNumber") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ActuateJointDataType, cRCLJointPosition) - offsetof(UA_CRCL_ActuateJointDataType, jointNumber) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CRCLJointPosition") /* .memberName */
},
{
    UA_TYPES_VARIANT, /* .memberTypeIndex */
    offsetof(UA_CRCL_ActuateJointDataType, cRCLJointDetails) - offsetof(UA_CRCL_ActuateJointDataType, cRCLJointPosition) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CRCLJointDetails") /* .memberName */
},};

/* UnionTestDataType */
static UA_DataTypeMember UnionTestDataType_members[3] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_UnionTestDataType, fields.stringValue), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StringValue") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_UnionTestDataType, fields.booleanValue), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("BooleanValue") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_UnionTestDataType, fields.uint32Value), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Uint32Value") /* .memberName */
},};

/* CRCL_JointDetailsDataType */
static UA_DataTypeMember CRCL_JointDetailsDataType_members[2] = {
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
    offsetof(UA_CRCL_JointDetailsDataType, name) - offsetof(UA_CRCL_JointDetailsDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},};

/* CRCL_TransAccelDataType */
static UA_DataTypeMember CRCL_TransAccelDataType_members[2] = {
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
    offsetof(UA_CRCL_TransAccelDataType, name) - offsetof(UA_CRCL_TransAccelDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},};

/* CRCL_TransAccelAbsoluteDataType */
static UA_DataTypeMember CRCL_TransAccelAbsoluteDataType_members[3] = {
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
    offsetof(UA_CRCL_TransAccelAbsoluteDataType, name) - offsetof(UA_CRCL_TransAccelAbsoluteDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TransAccelAbsoluteDataType, setting) - offsetof(UA_CRCL_TransAccelAbsoluteDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Setting") /* .memberName */
},};

/* CRCL_FractionDataType */
static UA_DataTypeMember CRCL_FractionDataType_members[3] = {
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fraction") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_FractionDataType, fractionMax) - offsetof(UA_CRCL_FractionDataType, fraction) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FractionMax") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_FractionDataType, fractionMin) - offsetof(UA_CRCL_FractionDataType, fractionMax) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("FractionMin") /* .memberName */
},};

/* CRCL_JointLimitDataType */
static UA_DataTypeMember CRCL_JointLimitDataType_members[7] = {
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
    offsetof(UA_CRCL_JointLimitDataType, name) - offsetof(UA_CRCL_JointLimitDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointLimitDataType, jointNumber) - offsetof(UA_CRCL_JointLimitDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointNumber") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointLimitDataType, jointMinPosition) - offsetof(UA_CRCL_JointLimitDataType, jointNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointMinPosition") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointLimitDataType, jointMaxPosition) - offsetof(UA_CRCL_JointLimitDataType, jointMinPosition) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointMaxPosition") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointLimitDataType, jointMaxTorqueOrForce) - offsetof(UA_CRCL_JointLimitDataType, jointMaxPosition) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointMaxTorqueOrForce") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointLimitDataType, jointMaxVelocity) - offsetof(UA_CRCL_JointLimitDataType, jointMaxTorqueOrForce) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointMaxVelocity") /* .memberName */
},};

/* CRCL_DataThingDataType */
static UA_DataTypeMember CRCL_DataThingDataType_members[2] = {
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
    offsetof(UA_CRCL_DataThingDataType, name) - offsetof(UA_CRCL_DataThingDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},};

/* CRCL_TorqueUnitEnumDataType */
#define CRCL_TorqueUnitEnumDataType_members NULL

/* CRCL_TransSpeedDataType */
static UA_DataTypeMember CRCL_TransSpeedDataType_members[2] = {
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
    offsetof(UA_CRCL_TransSpeedDataType, name) - offsetof(UA_CRCL_TransSpeedDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},};

/* CRCL_RotSpeedDataType */
static UA_DataTypeMember CRCL_RotSpeedDataType_members[2] = {
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
    offsetof(UA_CRCL_RotSpeedDataType, name) - offsetof(UA_CRCL_RotSpeedDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},};

/* CRCL_AngleUnitEnumDataType */
#define CRCL_AngleUnitEnumDataType_members NULL

/* JointSpeedAccelDataType */
static UA_DataTypeMember JointSpeedAccelDataType_members[4] = {
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
    offsetof(UA_JointSpeedAccelDataType, name) - offsetof(UA_JointSpeedAccelDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_JointSpeedAccelDataType, cRCLJointSpeed) - offsetof(UA_JointSpeedAccelDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CRCLJointSpeed") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_JointSpeedAccelDataType, cRCLJointAccel) - offsetof(UA_JointSpeedAccelDataType, cRCLJointSpeed) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CRCLJointAccel") /* .memberName */
},};

/* CRCL_JointStatusDataType */
static UA_DataTypeMember CRCL_JointStatusDataType_members[6] = {
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
    offsetof(UA_CRCL_JointStatusDataType, name) - offsetof(UA_CRCL_JointStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointStatusDataType, jointNumber) - offsetof(UA_CRCL_JointStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointNumber") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointStatusDataType, jointPosition) - offsetof(UA_CRCL_JointStatusDataType, jointNumber) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointPosition") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointStatusDataType, jointTorqueOrForce) - offsetof(UA_CRCL_JointStatusDataType, jointPosition) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointTorqueOrForce") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointStatusDataType, jointVelocity) - offsetof(UA_CRCL_JointStatusDataType, jointTorqueOrForce) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointVelocity") /* .memberName */
},};

/* CRCL_TransSpeedAbsoluteDataType */
static UA_DataTypeMember CRCL_TransSpeedAbsoluteDataType_members[3] = {
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
    offsetof(UA_CRCL_TransSpeedAbsoluteDataType, name) - offsetof(UA_CRCL_TransSpeedAbsoluteDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TransSpeedAbsoluteDataType, setting) - offsetof(UA_CRCL_TransSpeedAbsoluteDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Setting") /* .memberName */
},};

/* CRCL_ParameterSettingDataType */
static UA_DataTypeMember CRCL_ParameterSettingDataType_members[4] = {
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
    offsetof(UA_CRCL_ParameterSettingDataType, name) - offsetof(UA_CRCL_ParameterSettingDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_ParameterSettingDataType, parameterName) - offsetof(UA_CRCL_ParameterSettingDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParameterName") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_ParameterSettingDataType, parameterValue) - offsetof(UA_CRCL_ParameterSettingDataType, parameterName) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParameterValue") /* .memberName */
},};

/* CRCL_ConfigureJointReportDataType */
static UA_DataTypeMember CRCL_ConfigureJointReportDataType_members[6] = {
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
    offsetof(UA_CRCL_ConfigureJointReportDataType, name) - offsetof(UA_CRCL_ConfigureJointReportDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_ConfigureJointReportDataType, jointNumber) - offsetof(UA_CRCL_ConfigureJointReportDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointNumber") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_ConfigureJointReportDataType, reportPosition) - offsetof(UA_CRCL_ConfigureJointReportDataType, jointNumber) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportPosition") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_ConfigureJointReportDataType, reportTorqueOrForce) - offsetof(UA_CRCL_ConfigureJointReportDataType, reportPosition) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportTorqueOrForce") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_ConfigureJointReportDataType, reportVelocity) - offsetof(UA_CRCL_ConfigureJointReportDataType, reportTorqueOrForce) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportVelocity") /* .memberName */
},};

/* CRCL_ForceUnitEnumDataType */
#define CRCL_ForceUnitEnumDataType_members NULL

/* CRCL_JointPositionToleranceSettingDataType */
static UA_DataTypeMember CRCL_JointPositionToleranceSettingDataType_members[4] = {
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
    offsetof(UA_CRCL_JointPositionToleranceSettingDataType, name) - offsetof(UA_CRCL_JointPositionToleranceSettingDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointPositionToleranceSettingDataType, jointNumber) - offsetof(UA_CRCL_JointPositionToleranceSettingDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointNumber") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointPositionToleranceSettingDataType, jointPositionTolerance) - offsetof(UA_CRCL_JointPositionToleranceSettingDataType, jointNumber) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointPositionTolerance") /* .memberName */
},};

/* CRCL_RotAccelAbsoluteDataType */
static UA_DataTypeMember CRCL_RotAccelAbsoluteDataType_members[3] = {
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
    offsetof(UA_CRCL_RotAccelAbsoluteDataType, name) - offsetof(UA_CRCL_RotAccelAbsoluteDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_RotAccelAbsoluteDataType, setting) - offsetof(UA_CRCL_RotAccelAbsoluteDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Setting") /* .memberName */
},};

/* CRCL_CommandStateEnumDataType */
#define CRCL_CommandStateEnumDataType_members NULL

/* CRCL_LengthUnitEnumDataType */
#define CRCL_LengthUnitEnumDataType_members NULL

/* CRCL_VectorDataType */
static UA_DataTypeMember CRCL_VectorDataType_members[5] = {
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
    offsetof(UA_CRCL_VectorDataType, name) - offsetof(UA_CRCL_VectorDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_VectorDataType, i) - offsetof(UA_CRCL_VectorDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("I") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_VectorDataType, j) - offsetof(UA_CRCL_VectorDataType, i) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("J") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_VectorDataType, k) - offsetof(UA_CRCL_VectorDataType, j) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("K") /* .memberName */
},};

/* CRCL_GripperStatusDataType */
static UA_DataTypeMember CRCL_GripperStatusDataType_members[5] = {
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
    offsetof(UA_CRCL_GripperStatusDataType, name) - offsetof(UA_CRCL_GripperStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_GripperStatusDataType, gripperName) - offsetof(UA_CRCL_GripperStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperName") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_GripperStatusDataType, gripperOptionSize) - offsetof(UA_CRCL_GripperStatusDataType, gripperName) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperOption") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_GripperStatusDataType, holdingObject) - offsetof(UA_CRCL_GripperStatusDataType, gripperOption) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HoldingObject") /* .memberName */
},};

/* CRCL_PointDataType */
static UA_DataTypeMember CRCL_PointDataType_members[5] = {
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
    offsetof(UA_CRCL_PointDataType, name) - offsetof(UA_CRCL_PointDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PointDataType, x) - offsetof(UA_CRCL_PointDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("X") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PointDataType, y) - offsetof(UA_CRCL_PointDataType, x) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Y") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PointDataType, z) - offsetof(UA_CRCL_PointDataType, y) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Z") /* .memberName */
},};

/* JointForceTorqueDataType */
static UA_DataTypeMember JointForceTorqueDataType_members[4] = {
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
    offsetof(UA_JointForceTorqueDataType, name) - offsetof(UA_JointForceTorqueDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_JointForceTorqueDataType, cRCLSetting) - offsetof(UA_JointForceTorqueDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CRCLSetting") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_JointForceTorqueDataType, cRCLChangeRate) - offsetof(UA_JointForceTorqueDataType, cRCLSetting) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CRCLChangeRate") /* .memberName */
},};

/* CRCL_GuardLimitEnumDataType */
#define CRCL_GuardLimitEnumDataType_members NULL

/* CRCL_RotSpeedRelativeDataType */
static UA_DataTypeMember CRCL_RotSpeedRelativeDataType_members[3] = {
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
    offsetof(UA_CRCL_RotSpeedRelativeDataType, name) - offsetof(UA_CRCL_RotSpeedRelativeDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_RotSpeedRelativeDataType, fraction) - offsetof(UA_CRCL_RotSpeedRelativeDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fraction") /* .memberName */
},};

/* CRCL_RotAccelRelativeDataType */
static UA_DataTypeMember CRCL_RotAccelRelativeDataType_members[3] = {
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
    offsetof(UA_CRCL_RotAccelRelativeDataType, name) - offsetof(UA_CRCL_RotAccelRelativeDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_RotAccelRelativeDataType, fraction) - offsetof(UA_CRCL_RotAccelRelativeDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fraction") /* .memberName */
},};

/* CRCL_RotAccelDataType */
static UA_DataTypeMember CRCL_RotAccelDataType_members[2] = {
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
    offsetof(UA_CRCL_RotAccelDataType, name) - offsetof(UA_CRCL_RotAccelDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},};

/* CRCL_ScalarSensorStatusDataType */
static UA_DataTypeMember CRCL_ScalarSensorStatusDataType_members[7] = {
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
    offsetof(UA_CRCL_ScalarSensorStatusDataType, name) - offsetof(UA_CRCL_ScalarSensorStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_ScalarSensorStatusDataType, sensorID) - offsetof(UA_CRCL_ScalarSensorStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorID") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_ScalarSensorStatusDataType, readCount) - offsetof(UA_CRCL_ScalarSensorStatusDataType, sensorID) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReadCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_ScalarSensorStatusDataType, lastReadTime) - offsetof(UA_CRCL_ScalarSensorStatusDataType, readCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastReadTime") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ScalarSensorStatusDataType, sensorParameterSettingSize) - offsetof(UA_CRCL_ScalarSensorStatusDataType, lastReadTime) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorParameterSetting") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ScalarSensorStatusDataType, scalarValue) - offsetof(UA_CRCL_ScalarSensorStatusDataType, sensorParameterSetting) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ScalarValue") /* .memberName */
},};

/* PubSubIPAddresses */
static UA_DataTypeMember PubSubIPAddresses_members[2] = {
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IPAddress_Skill") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_PubSubIPAddresses, iPAddress_Status) - offsetof(UA_PubSubIPAddresses, iPAddress_Skill) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IPAddress_Status") /* .memberName */
},};

/* CRCL_JointStatusesDataType */
static UA_DataTypeMember CRCL_JointStatusesDataType_members[3] = {
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
    offsetof(UA_CRCL_JointStatusesDataType, name) - offsetof(UA_CRCL_JointStatusesDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointStatusesDataType, jointStatusSize) - offsetof(UA_CRCL_JointStatusesDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointStatus") /* .memberName */
},};

/* CRCL_StopConditionEnumDataType */
#define CRCL_StopConditionEnumDataType_members NULL

/* CRCL_RotSpeedAbsoluteDataType */
static UA_DataTypeMember CRCL_RotSpeedAbsoluteDataType_members[3] = {
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
    offsetof(UA_CRCL_RotSpeedAbsoluteDataType, name) - offsetof(UA_CRCL_RotSpeedAbsoluteDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_RotSpeedAbsoluteDataType, setting) - offsetof(UA_CRCL_RotSpeedAbsoluteDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Setting") /* .memberName */
},};

/* CRCL_GuardDataType */
static UA_DataTypeMember CRCL_GuardDataType_members[10] = {
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
    offsetof(UA_CRCL_GuardDataType, name) - offsetof(UA_CRCL_GuardDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_GuardDataType, sensorID) - offsetof(UA_CRCL_GuardDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorID") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_GuardDataType, subField) - offsetof(UA_CRCL_GuardDataType, sensorID) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SubField") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDLIMITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_GuardDataType, limitType) - offsetof(UA_CRCL_GuardDataType, subField) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LimitType") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_GuardDataType, limitValue) - offsetof(UA_CRCL_GuardDataType, limitType) - sizeof(UA_CRCL_GuardLimitEnumDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LimitValue") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_GuardDataType, recheckTimeMicroSeconds) - offsetof(UA_CRCL_GuardDataType, limitValue) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RecheckTimeMicroSeconds") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_GuardDataType, checkCount) - offsetof(UA_CRCL_GuardDataType, recheckTimeMicroSeconds) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CheckCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_GuardDataType, lastCheckTime) - offsetof(UA_CRCL_GuardDataType, checkCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastCheckTime") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_GuardDataType, lastCheckValue) - offsetof(UA_CRCL_GuardDataType, lastCheckTime) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastCheckValue") /* .memberName */
},};

/* ConfigureStatusReportDataType */
static UA_DataTypeMember ConfigureStatusReportDataType_members[10] = {
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
    offsetof(UA_ConfigureStatusReportDataType, name) - offsetof(UA_ConfigureStatusReportDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, commandID) - offsetof(UA_ConfigureStatusReportDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, guardSize) - offsetof(UA_ConfigureStatusReportDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, reportJointStatuses) - offsetof(UA_ConfigureStatusReportDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportJointStatuses") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, reportPoseStatus) - offsetof(UA_ConfigureStatusReportDataType, reportJointStatuses) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportPoseStatus") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, reportGripperStatus) - offsetof(UA_ConfigureStatusReportDataType, reportPoseStatus) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportGripperStatus") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, reportSettingsStatus) - offsetof(UA_ConfigureStatusReportDataType, reportGripperStatus) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportSettingsStatus") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, reportSensorsStatus) - offsetof(UA_ConfigureStatusReportDataType, reportSettingsStatus) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportSensorsStatus") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, reportGuardsStatus) - offsetof(UA_ConfigureStatusReportDataType, reportSensorsStatus) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportGuardsStatus") /* .memberName */
},};

/* RunProgramDataType */
static UA_DataTypeMember RunProgramDataType_members[5] = {
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
    offsetof(UA_RunProgramDataType, name) - offsetof(UA_RunProgramDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_RunProgramDataType, commandID) - offsetof(UA_RunProgramDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_RunProgramDataType, guardSize) - offsetof(UA_RunProgramDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_RunProgramDataType, programText) - offsetof(UA_RunProgramDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProgramText") /* .memberName */
},};

/* CRCL_ParallelGripperStatusDataType */
static UA_DataTypeMember CRCL_ParallelGripperStatusDataType_members[6] = {
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
    offsetof(UA_CRCL_ParallelGripperStatusDataType, name) - offsetof(UA_CRCL_ParallelGripperStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_ParallelGripperStatusDataType, gripperName) - offsetof(UA_CRCL_ParallelGripperStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperName") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ParallelGripperStatusDataType, gripperOptionSize) - offsetof(UA_CRCL_ParallelGripperStatusDataType, gripperName) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperOption") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_ParallelGripperStatusDataType, holdingObject) - offsetof(UA_CRCL_ParallelGripperStatusDataType, gripperOption) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HoldingObject") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ParallelGripperStatusDataType, seperation) - offsetof(UA_CRCL_ParallelGripperStatusDataType, holdingObject) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Seperation") /* .memberName */
},};

/* CRCLCommandDataType */
static UA_DataTypeMember CRCLCommandDataType_members[4] = {
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
    offsetof(UA_CRCLCommandDataType, name) - offsetof(UA_CRCLCommandDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandDataType, commandID) - offsetof(UA_CRCLCommandDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandDataType, guardSize) - offsetof(UA_CRCLCommandDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* SetIntermediatePoseToleranceDataType */
static UA_DataTypeMember SetIntermediatePoseToleranceDataType_members[5] = {
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
    offsetof(UA_SetIntermediatePoseToleranceDataType, name) - offsetof(UA_SetIntermediatePoseToleranceDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetIntermediatePoseToleranceDataType, commandID) - offsetof(UA_SetIntermediatePoseToleranceDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetIntermediatePoseToleranceDataType, guardSize) - offsetof(UA_SetIntermediatePoseToleranceDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetIntermediatePoseToleranceDataType, tolerance) - offsetof(UA_SetIntermediatePoseToleranceDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Tolerance") /* .memberName */
},};

/* SetRobotParametersDataType */
static UA_DataTypeMember SetRobotParametersDataType_members[5] = {
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
    offsetof(UA_SetRobotParametersDataType, name) - offsetof(UA_SetRobotParametersDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetRobotParametersDataType, commandID) - offsetof(UA_SetRobotParametersDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRobotParametersDataType, guardSize) - offsetof(UA_SetRobotParametersDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRobotParametersDataType, parameterSettingSize) - offsetof(UA_SetRobotParametersDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParameterSetting") /* .memberName */
},};

/* CRCL_ForceTorqueSensorStatusDataType */
static UA_DataTypeMember CRCL_ForceTorqueSensorStatusDataType_members[12] = {
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
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, name) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, sensorID) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorID") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, readCount) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, sensorID) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReadCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, lastReadTime) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, readCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastReadTime") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, sensorParameterSettingSize) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, lastReadTime) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorParameterSetting") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, fx) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, sensorParameterSetting) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fx") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, fy) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, fx) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fy") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, fz) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, fy) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fz") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, tx) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, fz) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Tx") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, ty) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, tx) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Ty") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, tz) - offsetof(UA_CRCL_ForceTorqueSensorStatusDataType, ty) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Tz") /* .memberName */
},};

/* CRCL_OnOffSensorStatusDataType */
static UA_DataTypeMember CRCL_OnOffSensorStatusDataType_members[7] = {
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
    offsetof(UA_CRCL_OnOffSensorStatusDataType, name) - offsetof(UA_CRCL_OnOffSensorStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_OnOffSensorStatusDataType, sensorID) - offsetof(UA_CRCL_OnOffSensorStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorID") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_OnOffSensorStatusDataType, readCount) - offsetof(UA_CRCL_OnOffSensorStatusDataType, sensorID) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReadCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_OnOffSensorStatusDataType, lastReadTime) - offsetof(UA_CRCL_OnOffSensorStatusDataType, readCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastReadTime") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_OnOffSensorStatusDataType, sensorParameterSettingSize) - offsetof(UA_CRCL_OnOffSensorStatusDataType, lastReadTime) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorParameterSetting") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_OnOffSensorStatusDataType, on) - offsetof(UA_CRCL_OnOffSensorStatusDataType, sensorParameterSetting) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("On") /* .memberName */
},};

/* CRCL_SensorStatusDataType */
static UA_DataTypeMember CRCL_SensorStatusDataType_members[6] = {
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
    offsetof(UA_CRCL_SensorStatusDataType, name) - offsetof(UA_CRCL_SensorStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusDataType, sensorID) - offsetof(UA_CRCL_SensorStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorID") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusDataType, readCount) - offsetof(UA_CRCL_SensorStatusDataType, sensorID) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReadCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusDataType, lastReadTime) - offsetof(UA_CRCL_SensorStatusDataType, readCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastReadTime") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusDataType, sensorParameterSettingSize) - offsetof(UA_CRCL_SensorStatusDataType, lastReadTime) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorParameterSetting") /* .memberName */
},};

/* CRCL_TransAccelRelativeDataType */
static UA_DataTypeMember CRCL_TransAccelRelativeDataType_members[3] = {
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
    offsetof(UA_CRCL_TransAccelRelativeDataType, name) - offsetof(UA_CRCL_TransAccelRelativeDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TransAccelRelativeDataType, fraction) - offsetof(UA_CRCL_TransAccelRelativeDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fraction") /* .memberName */
},};

/* CRCL_TransSpeedRelativeDataType */
static UA_DataTypeMember CRCL_TransSpeedRelativeDataType_members[3] = {
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
    offsetof(UA_CRCL_TransSpeedRelativeDataType, name) - offsetof(UA_CRCL_TransSpeedRelativeDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TransSpeedRelativeDataType, fraction) - offsetof(UA_CRCL_TransSpeedRelativeDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fraction") /* .memberName */
},};

/* CRCL_TwistDataType */
static UA_DataTypeMember CRCL_TwistDataType_members[4] = {
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
    offsetof(UA_CRCL_TwistDataType, name) - offsetof(UA_CRCL_TwistDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TwistDataType, linearVelocity) - offsetof(UA_CRCL_TwistDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LinearVelocity") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TwistDataType, angularVelocity) - offsetof(UA_CRCL_TwistDataType, linearVelocity) - sizeof(UA_CRCL_VectorDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AngularVelocity") /* .memberName */
},};

/* CRCL_SettingsStatusDataType */
static UA_DataTypeMember CRCL_SettingsStatusDataType_members[23] = {
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
    offsetof(UA_CRCL_SettingsStatusDataType, name) - offsetof(UA_CRCL_SettingsStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_ANGLEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, angleUnitName) - offsetof(UA_CRCL_SettingsStatusDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AngleUnitName") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, endEffectorParameterSettingSize) - offsetof(UA_CRCL_SettingsStatusDataType, angleUnitName) - sizeof(UA_CRCL_AngleUnitEnumDataType), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndEffectorParameterSetting") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, endEffectorSetting) - offsetof(UA_CRCL_SettingsStatusDataType, endEffectorParameterSetting) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndEffectorSetting") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FORCEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, forceUnitName) - offsetof(UA_CRCL_SettingsStatusDataType, endEffectorSetting) - sizeof(UA_CRCL_FractionDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ForceUnitName") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTLIMITDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, jointLimitsSize) - offsetof(UA_CRCL_SettingsStatusDataType, forceUnitName) - sizeof(UA_CRCL_ForceUnitEnumDataType), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointLimits") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, intermediatePoseTolernace) - offsetof(UA_CRCL_SettingsStatusDataType, jointLimits) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IntermediatePoseTolernace") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_LENGTHUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, lengthUnitName) - offsetof(UA_CRCL_SettingsStatusDataType, intermediatePoseTolernace) - sizeof(UA_CRCL_PoseToleranceDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LengthUnitName") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, maxCartesianLimit) - offsetof(UA_CRCL_SettingsStatusDataType, lengthUnitName) - sizeof(UA_CRCL_LengthUnitEnumDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxCartesianLimit") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, minCartesianLimit) - offsetof(UA_CRCL_SettingsStatusDataType, maxCartesianLimit) - sizeof(UA_CRCL_PointDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MinCartesianLimit") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, motionCoorinated) - offsetof(UA_CRCL_SettingsStatusDataType, minCartesianLimit) - sizeof(UA_CRCL_PointDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MotionCoorinated") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, poseTolerance) - offsetof(UA_CRCL_SettingsStatusDataType, motionCoorinated) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PoseTolerance") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, robotParameterSettingSize) - offsetof(UA_CRCL_SettingsStatusDataType, poseTolerance) - sizeof(UA_CRCL_PoseToleranceDataType), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RobotParameterSetting") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, rotAccelAbsolute) - offsetof(UA_CRCL_SettingsStatusDataType, robotParameterSetting) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccelAbsolute") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, rotAccelRelative) - offsetof(UA_CRCL_SettingsStatusDataType, rotAccelAbsolute) - sizeof(UA_CRCL_RotAccelAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccelRelative") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, rotSpeedAbsolute) - offsetof(UA_CRCL_SettingsStatusDataType, rotAccelRelative) - sizeof(UA_CRCL_RotAccelRelativeDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotSpeedAbsolute") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, rotSpeedRelative) - offsetof(UA_CRCL_SettingsStatusDataType, rotSpeedAbsolute) - sizeof(UA_CRCL_RotSpeedAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotSpeedRelative") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_TORQUEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, torqueUnitName) - offsetof(UA_CRCL_SettingsStatusDataType, rotSpeedRelative) - sizeof(UA_CRCL_RotSpeedRelativeDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TorqueUnitName") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, transAccelAbsolute) - offsetof(UA_CRCL_SettingsStatusDataType, torqueUnitName) - sizeof(UA_CRCL_TorqueUnitEnumDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccelAbsolute") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, transAccelRelative) - offsetof(UA_CRCL_SettingsStatusDataType, transAccelAbsolute) - sizeof(UA_CRCL_TransAccelAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccelRelative") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, transSpeedAbsolute) - offsetof(UA_CRCL_SettingsStatusDataType, transAccelRelative) - sizeof(UA_CRCL_TransAccelRelativeDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeedAbsolute") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, transSpeedRelative) - offsetof(UA_CRCL_SettingsStatusDataType, transSpeedAbsolute) - sizeof(UA_CRCL_TransSpeedAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeedRelative") /* .memberName */
},};

/* StopMotionDataType */
static UA_DataTypeMember StopMotionDataType_members[5] = {
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
    offsetof(UA_StopMotionDataType, name) - offsetof(UA_StopMotionDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_StopMotionDataType, commandID) - offsetof(UA_StopMotionDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_StopMotionDataType, guardSize) - offsetof(UA_StopMotionDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_STOPCONDITIONENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_StopMotionDataType, stopCondition) - offsetof(UA_StopMotionDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StopCondition") /* .memberName */
},};

/* OpenToolChangerDataType */
static UA_DataTypeMember OpenToolChangerDataType_members[4] = {
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
    offsetof(UA_OpenToolChangerDataType, name) - offsetof(UA_OpenToolChangerDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_OpenToolChangerDataType, commandID) - offsetof(UA_OpenToolChangerDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_OpenToolChangerDataType, guardSize) - offsetof(UA_OpenToolChangerDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* SetForceUnitsDataType */
static UA_DataTypeMember SetForceUnitsDataType_members[5] = {
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
    offsetof(UA_SetForceUnitsDataType, name) - offsetof(UA_SetForceUnitsDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetForceUnitsDataType, commandID) - offsetof(UA_SetForceUnitsDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetForceUnitsDataType, guardSize) - offsetof(UA_SetForceUnitsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FORCEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetForceUnitsDataType, unitName) - offsetof(UA_SetForceUnitsDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
},};

/* CRCL_ThreeFingerGripperStatusDataType */
static UA_DataTypeMember CRCL_ThreeFingerGripperStatusDataType_members[11] = {
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
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, name) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, gripperName) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperName") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, gripperOptionSize) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, gripperName) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperOption") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, holdingObject) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, gripperOption) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HoldingObject") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger1Position) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, holdingObject) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Finger1Position") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger2Position) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger1Position) - sizeof(UA_CRCL_FractionDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Finger2Position") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger3Position) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger2Position) - sizeof(UA_CRCL_FractionDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Finger3Position") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger1Force) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger3Position) - sizeof(UA_CRCL_FractionDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Finger1Force") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger2Force) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger1Force) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Finger2Force") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger3Force) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger2Force) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Finger3Force") /* .memberName */
},};

/* CloseToolChangerDataType */
static UA_DataTypeMember CloseToolChangerDataType_members[4] = {
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
    offsetof(UA_CloseToolChangerDataType, name) - offsetof(UA_CloseToolChangerDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CloseToolChangerDataType, commandID) - offsetof(UA_CloseToolChangerDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CloseToolChangerDataType, guardSize) - offsetof(UA_CloseToolChangerDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* GetStatusDataType */
static UA_DataTypeMember GetStatusDataType_members[4] = {
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
    offsetof(UA_GetStatusDataType, name) - offsetof(UA_GetStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_GetStatusDataType, commandID) - offsetof(UA_GetStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_GetStatusDataType, guardSize) - offsetof(UA_GetStatusDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* SetTransSpeedDataType */
static UA_DataTypeMember SetTransSpeedDataType_members[5] = {
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
    offsetof(UA_SetTransSpeedDataType, name) - offsetof(UA_SetTransSpeedDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTransSpeedDataType, commandID) - offsetof(UA_SetTransSpeedDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTransSpeedDataType, guardSize) - offsetof(UA_SetTransSpeedDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_SetTransSpeedDataType, transSpeed) - offsetof(UA_SetTransSpeedDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeed") /* .memberName */
},};

/* CRCL_WrenchDataType */
static UA_DataTypeMember CRCL_WrenchDataType_members[4] = {
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
    offsetof(UA_CRCL_WrenchDataType, name) - offsetof(UA_CRCL_WrenchDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_WrenchDataType, force) - offsetof(UA_CRCL_WrenchDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Force") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_WrenchDataType, moment) - offsetof(UA_CRCL_WrenchDataType, force) - sizeof(UA_CRCL_VectorDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Moment") /* .memberName */
},};

/* CRCL_CommandStatusDataType */
static UA_DataTypeMember CRCL_CommandStatusDataType_members[10] = {
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
    offsetof(UA_CRCL_CommandStatusDataType, name) - offsetof(UA_CRCL_CommandStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_CommandStatusDataType, commandID) - offsetof(UA_CRCL_CommandStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_CommandStatusDataType, statusID) - offsetof(UA_CRCL_CommandStatusDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StatusID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATEENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_CommandStatusDataType, commandState) - offsetof(UA_CRCL_CommandStatusDataType, statusID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandState") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_CommandStatusDataType, stateDescription) - offsetof(UA_CRCL_CommandStatusDataType, commandState) - sizeof(UA_CRCL_CommandStateEnumDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StateDescription") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_CommandStatusDataType, programmFile) - offsetof(UA_CRCL_CommandStatusDataType, stateDescription) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProgrammFile") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_CommandStatusDataType, programmIndex) - offsetof(UA_CRCL_CommandStatusDataType, programmFile) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProgrammIndex") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_CommandStatusDataType, programmLength) - offsetof(UA_CRCL_CommandStatusDataType, programmIndex) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ProgrammLength") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_CommandStatusDataType, overridePercent) - offsetof(UA_CRCL_CommandStatusDataType, programmLength) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OverridePercent") /* .memberName */
},};

/* InitCanonDataType */
static UA_DataTypeMember InitCanonDataType_members[4] = {
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
    offsetof(UA_InitCanonDataType, name) - offsetof(UA_InitCanonDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_InitCanonDataType, commandID) - offsetof(UA_InitCanonDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_InitCanonDataType, guardSize) - offsetof(UA_InitCanonDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* DisableRobotParameterStatusDataType */
static UA_DataTypeMember DisableRobotParameterStatusDataType_members[5] = {
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
    offsetof(UA_DisableRobotParameterStatusDataType, name) - offsetof(UA_DisableRobotParameterStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DisableRobotParameterStatusDataType, commandID) - offsetof(UA_DisableRobotParameterStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DisableRobotParameterStatusDataType, guardSize) - offsetof(UA_DisableRobotParameterStatusDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DisableRobotParameterStatusDataType, robotParameterName) - offsetof(UA_DisableRobotParameterStatusDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RobotParameterName") /* .memberName */
},};

/* CRCL_PoseDataType */
static UA_DataTypeMember CRCL_PoseDataType_members[5] = {
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
    offsetof(UA_CRCL_PoseDataType, name) - offsetof(UA_CRCL_PoseDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseDataType, point) - offsetof(UA_CRCL_PoseDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Point") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseDataType, xAxis) - offsetof(UA_CRCL_PoseDataType, point) - sizeof(UA_CRCL_PointDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("XAxis") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseDataType, zAxis) - offsetof(UA_CRCL_PoseDataType, xAxis) - sizeof(UA_CRCL_VectorDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ZAxis") /* .memberName */
},};

/* MoveToDataType */
static UA_DataTypeMember MoveToDataType_members[6] = {
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
    offsetof(UA_MoveToDataType, name) - offsetof(UA_MoveToDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MoveToDataType, commandID) - offsetof(UA_MoveToDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveToDataType, guardSize) - offsetof(UA_MoveToDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MoveToDataType, moveStraight) - offsetof(UA_MoveToDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoveStraight") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveToDataType, endPosition) - offsetof(UA_MoveToDataType, moveStraight) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndPosition") /* .memberName */
},};

/* CRCL_VacuumGripperStatusDataType */
static UA_DataTypeMember CRCL_VacuumGripperStatusDataType_members[6] = {
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
    offsetof(UA_CRCL_VacuumGripperStatusDataType, name) - offsetof(UA_CRCL_VacuumGripperStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_VacuumGripperStatusDataType, gripperName) - offsetof(UA_CRCL_VacuumGripperStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperName") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_VacuumGripperStatusDataType, gripperOptionSize) - offsetof(UA_CRCL_VacuumGripperStatusDataType, gripperName) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperOption") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_VacuumGripperStatusDataType, holdingObject) - offsetof(UA_CRCL_VacuumGripperStatusDataType, gripperOption) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("HoldingObject") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_VacuumGripperStatusDataType, isPowered) - offsetof(UA_CRCL_VacuumGripperStatusDataType, holdingObject) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IsPowered") /* .memberName */
},};

/* SetMotionCoordinationDataType */
static UA_DataTypeMember SetMotionCoordinationDataType_members[5] = {
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
    offsetof(UA_SetMotionCoordinationDataType, name) - offsetof(UA_SetMotionCoordinationDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetMotionCoordinationDataType, commandID) - offsetof(UA_SetMotionCoordinationDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetMotionCoordinationDataType, guardSize) - offsetof(UA_SetMotionCoordinationDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetMotionCoordinationDataType, coordinated) - offsetof(UA_SetMotionCoordinationDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Coordinated") /* .memberName */
},};

/* DwellDataType */
static UA_DataTypeMember DwellDataType_members[5] = {
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
    offsetof(UA_DwellDataType, name) - offsetof(UA_DwellDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DwellDataType, commandID) - offsetof(UA_DwellDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DwellDataType, guardSize) - offsetof(UA_DwellDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_DwellDataType, dwellTime) - offsetof(UA_DwellDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DwellTime") /* .memberName */
},};

/* CRCL_CountSensorStatusDataType */
static UA_DataTypeMember CRCL_CountSensorStatusDataType_members[7] = {
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
    offsetof(UA_CRCL_CountSensorStatusDataType, name) - offsetof(UA_CRCL_CountSensorStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_CountSensorStatusDataType, sensorID) - offsetof(UA_CRCL_CountSensorStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorID") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_CountSensorStatusDataType, readCount) - offsetof(UA_CRCL_CountSensorStatusDataType, sensorID) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReadCount") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_CountSensorStatusDataType, lastReadTime) - offsetof(UA_CRCL_CountSensorStatusDataType, readCount) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LastReadTime") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_CountSensorStatusDataType, sensorParameterSettingSize) - offsetof(UA_CRCL_CountSensorStatusDataType, lastReadTime) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorParameterSetting") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_CRCL_CountSensorStatusDataType, countValue) - offsetof(UA_CRCL_CountSensorStatusDataType, sensorParameterSetting) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CountValue") /* .memberName */
},};

/* SetRotAccelDataType */
static UA_DataTypeMember SetRotAccelDataType_members[5] = {
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
    offsetof(UA_SetRotAccelDataType, name) - offsetof(UA_SetRotAccelDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetRotAccelDataType, commandID) - offsetof(UA_SetRotAccelDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRotAccelDataType, guardSize) - offsetof(UA_SetRotAccelDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_SetRotAccelDataType, rotAccel) - offsetof(UA_SetRotAccelDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccel") /* .memberName */
},};

/* EnableGripperDataType */
static UA_DataTypeMember EnableGripperDataType_members[6] = {
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
    offsetof(UA_EnableGripperDataType, name) - offsetof(UA_EnableGripperDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_EnableGripperDataType, commandID) - offsetof(UA_EnableGripperDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableGripperDataType, guardSize) - offsetof(UA_EnableGripperDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EnableGripperDataType, gripperName) - offsetof(UA_EnableGripperDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperName") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableGripperDataType, gripperOptionSize) - offsetof(UA_EnableGripperDataType, gripperName) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperOption") /* .memberName */
},};

/* MiddleCommandDataType */
static UA_DataTypeMember MiddleCommandDataType_members[4] = {
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
    offsetof(UA_MiddleCommandDataType, name) - offsetof(UA_MiddleCommandDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MiddleCommandDataType, commandID) - offsetof(UA_MiddleCommandDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MiddleCommandDataType, guardSize) - offsetof(UA_MiddleCommandDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* SetRotSpeedDataType */
static UA_DataTypeMember SetRotSpeedDataType_members[5] = {
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
    offsetof(UA_SetRotSpeedDataType, name) - offsetof(UA_SetRotSpeedDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetRotSpeedDataType, commandID) - offsetof(UA_SetRotSpeedDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRotSpeedDataType, guardSize) - offsetof(UA_SetRotSpeedDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_SetRotSpeedDataType, rotSpeed) - offsetof(UA_SetRotSpeedDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotSpeed") /* .memberName */
},};

/* CRCL_SensorStatusesDataType */
static UA_DataTypeMember CRCL_SensorStatusesDataType_members[6] = {
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
    offsetof(UA_CRCL_SensorStatusesDataType, name) - offsetof(UA_CRCL_SensorStatusesDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_ONOFFSENSORSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusesDataType, onOffSensorStatusSize) - offsetof(UA_CRCL_SensorStatusesDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OnOffSensorStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_SCALARSENSORSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusesDataType, scalarSensorStatusSize) - offsetof(UA_CRCL_SensorStatusesDataType, onOffSensorStatus) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ScalarSensorStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_COUNTSENSORSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusesDataType, countSensorStatusSize) - offsetof(UA_CRCL_SensorStatusesDataType, scalarSensorStatus) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CountSensorStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FORCETORQUESENSORSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusesDataType, forceTorqueSensorStatusSize) - offsetof(UA_CRCL_SensorStatusesDataType, countSensorStatus) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ForceTorqueSensorStatus") /* .memberName */
},};

/* DisableSensorDataType */
static UA_DataTypeMember DisableSensorDataType_members[5] = {
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
    offsetof(UA_DisableSensorDataType, name) - offsetof(UA_DisableSensorDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DisableSensorDataType, commandID) - offsetof(UA_DisableSensorDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DisableSensorDataType, guardSize) - offsetof(UA_DisableSensorDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DisableSensorDataType, sensorID) - offsetof(UA_DisableSensorDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorID") /* .memberName */
},};

/* CRCL_JointPositionsTolerancesDataType */
static UA_DataTypeMember CRCL_JointPositionsTolerancesDataType_members[3] = {
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
    offsetof(UA_CRCL_JointPositionsTolerancesDataType, name) - offsetof(UA_CRCL_JointPositionsTolerancesDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointPositionsTolerancesDataType, settingSize) - offsetof(UA_CRCL_JointPositionsTolerancesDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Setting") /* .memberName */
},};

/* EnableSensorDataType */
static UA_DataTypeMember EnableSensorDataType_members[6] = {
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
    offsetof(UA_EnableSensorDataType, name) - offsetof(UA_EnableSensorDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_EnableSensorDataType, commandID) - offsetof(UA_EnableSensorDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableSensorDataType, guardSize) - offsetof(UA_EnableSensorDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EnableSensorDataType, sensorID) - offsetof(UA_EnableSensorDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableSensorDataType, sensorOptionSize) - offsetof(UA_EnableSensorDataType, sensorID) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorOption") /* .memberName */
},};

/* ActuateJointsDataType */
static UA_DataTypeMember ActuateJointsDataType_members[6] = {
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
    offsetof(UA_ActuateJointsDataType, name) - offsetof(UA_ActuateJointsDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsDataType, commandID) - offsetof(UA_ActuateJointsDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsDataType, guardSize) - offsetof(UA_ActuateJointsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsDataType, cRCLJointSpeed) - offsetof(UA_ActuateJointsDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CRCLJointSpeed") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsDataType, cRCLJointAccel) - offsetof(UA_ActuateJointsDataType, cRCLJointSpeed) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CRCLJointAccel") /* .memberName */
},};

/* CRCL_PoseAndSetDataType */
static UA_DataTypeMember CRCL_PoseAndSetDataType_members[11] = {
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
    offsetof(UA_CRCL_PoseAndSetDataType, name) - offsetof(UA_CRCL_PoseAndSetDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, point) - offsetof(UA_CRCL_PoseAndSetDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Point") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, xAxis) - offsetof(UA_CRCL_PoseAndSetDataType, point) - sizeof(UA_CRCL_PointDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("XAxis") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, zAxis) - offsetof(UA_CRCL_PoseAndSetDataType, xAxis) - sizeof(UA_CRCL_VectorDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ZAxis") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, coordinated) - offsetof(UA_CRCL_PoseAndSetDataType, zAxis) - sizeof(UA_CRCL_VectorDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Coordinated") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, transSpeed) - offsetof(UA_CRCL_PoseAndSetDataType, coordinated) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeed") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, rotSpeed) - offsetof(UA_CRCL_PoseAndSetDataType, transSpeed) - sizeof(UA_CRCL_TransSpeedDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotSpeed") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, transAccel) - offsetof(UA_CRCL_PoseAndSetDataType, rotSpeed) - sizeof(UA_CRCL_RotSpeedDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccel") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, rotAccel) - offsetof(UA_CRCL_PoseAndSetDataType, transAccel) - sizeof(UA_CRCL_TransAccelDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccel") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, poseTolerance) - offsetof(UA_CRCL_PoseAndSetDataType, rotAccel) - sizeof(UA_CRCL_RotAccelDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PoseTolerance") /* .memberName */
},};

/* EnableRobotParameterStatusDataType */
static UA_DataTypeMember EnableRobotParameterStatusDataType_members[5] = {
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
    offsetof(UA_EnableRobotParameterStatusDataType, name) - offsetof(UA_EnableRobotParameterStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_EnableRobotParameterStatusDataType, commandID) - offsetof(UA_EnableRobotParameterStatusDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableRobotParameterStatusDataType, guardSize) - offsetof(UA_EnableRobotParameterStatusDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EnableRobotParameterStatusDataType, robotParameterName) - offsetof(UA_EnableRobotParameterStatusDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RobotParameterName") /* .memberName */
},};

/* SetEndEffectorParametersDataType */
static UA_DataTypeMember SetEndEffectorParametersDataType_members[5] = {
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
    offsetof(UA_SetEndEffectorParametersDataType, name) - offsetof(UA_SetEndEffectorParametersDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetEndEffectorParametersDataType, commandID) - offsetof(UA_SetEndEffectorParametersDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndEffectorParametersDataType, guardSize) - offsetof(UA_SetEndEffectorParametersDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndEffectorParametersDataType, parameterSettingSize) - offsetof(UA_SetEndEffectorParametersDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParameterSetting") /* .memberName */
},};

/* EndCanonDataType */
static UA_DataTypeMember EndCanonDataType_members[4] = {
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
    offsetof(UA_EndCanonDataType, name) - offsetof(UA_EndCanonDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_EndCanonDataType, commandID) - offsetof(UA_EndCanonDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EndCanonDataType, guardSize) - offsetof(UA_EndCanonDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* SetEndPoseToleranceDataType */
static UA_DataTypeMember SetEndPoseToleranceDataType_members[5] = {
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
    offsetof(UA_SetEndPoseToleranceDataType, name) - offsetof(UA_SetEndPoseToleranceDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetEndPoseToleranceDataType, commandID) - offsetof(UA_SetEndPoseToleranceDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndPoseToleranceDataType, guardSize) - offsetof(UA_SetEndPoseToleranceDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndPoseToleranceDataType, tolerance) - offsetof(UA_SetEndPoseToleranceDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Tolerance") /* .memberName */
},};

/* SetAngleUnitsDataType */
static UA_DataTypeMember SetAngleUnitsDataType_members[5] = {
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
    offsetof(UA_SetAngleUnitsDataType, name) - offsetof(UA_SetAngleUnitsDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetAngleUnitsDataType, commandID) - offsetof(UA_SetAngleUnitsDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetAngleUnitsDataType, guardSize) - offsetof(UA_SetAngleUnitsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_ANGLEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetAngleUnitsDataType, unitName) - offsetof(UA_SetAngleUnitsDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
},};

/* SetTorqueUnitsDataType */
static UA_DataTypeMember SetTorqueUnitsDataType_members[5] = {
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
    offsetof(UA_SetTorqueUnitsDataType, name) - offsetof(UA_SetTorqueUnitsDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTorqueUnitsDataType, commandID) - offsetof(UA_SetTorqueUnitsDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTorqueUnitsDataType, guardSize) - offsetof(UA_SetTorqueUnitsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_TORQUEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTorqueUnitsDataType, unitName) - offsetof(UA_SetTorqueUnitsDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
},};

/* MessageDataType */
static UA_DataTypeMember MessageDataType_members[5] = {
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
    offsetof(UA_MessageDataType, name) - offsetof(UA_MessageDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MessageDataType, commandID) - offsetof(UA_MessageDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MessageDataType, guardSize) - offsetof(UA_MessageDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_MessageDataType, message) - offsetof(UA_MessageDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Message") /* .memberName */
},};

/* CRCL_PoseStatusDataType */
static UA_DataTypeMember CRCL_PoseStatusDataType_members[6] = {
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
    offsetof(UA_CRCL_PoseStatusDataType, name) - offsetof(UA_CRCL_PoseStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseStatusDataType, pose) - offsetof(UA_CRCL_PoseStatusDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Pose") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_TWISTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseStatusDataType, twist) - offsetof(UA_CRCL_PoseStatusDataType, pose) - sizeof(UA_CRCL_PoseDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Twist") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_WRENCHDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseStatusDataType, wrench) - offsetof(UA_CRCL_PoseStatusDataType, twist) - sizeof(UA_CRCL_TwistDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Wrench") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseStatusDataType, configuration) - offsetof(UA_CRCL_PoseStatusDataType, wrench) - sizeof(UA_CRCL_WrenchDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Configuration") /* .memberName */
},};

/* MoveThroughToDataType */
static UA_DataTypeMember MoveThroughToDataType_members[7] = {
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
    offsetof(UA_MoveThroughToDataType, name) - offsetof(UA_MoveThroughToDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToDataType, commandID) - offsetof(UA_MoveThroughToDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToDataType, guardSize) - offsetof(UA_MoveThroughToDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToDataType, moveStraight) - offsetof(UA_MoveThroughToDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoveStraight") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToDataType, waypointSize) - offsetof(UA_MoveThroughToDataType, moveStraight) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Waypoint") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToDataType, numPositions) - offsetof(UA_MoveThroughToDataType, waypoint) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NumPositions") /* .memberName */
},};

/* SetEndEffectorDataType */
static UA_DataTypeMember SetEndEffectorDataType_members[5] = {
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
    offsetof(UA_SetEndEffectorDataType, name) - offsetof(UA_SetEndEffectorDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetEndEffectorDataType, commandID) - offsetof(UA_SetEndEffectorDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndEffectorDataType, guardSize) - offsetof(UA_SetEndEffectorDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndEffectorDataType, setting) - offsetof(UA_SetEndEffectorDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Setting") /* .memberName */
},};

/* DisableGripperDataType */
static UA_DataTypeMember DisableGripperDataType_members[5] = {
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
    offsetof(UA_DisableGripperDataType, name) - offsetof(UA_DisableGripperDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_DisableGripperDataType, commandID) - offsetof(UA_DisableGripperDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DisableGripperDataType, guardSize) - offsetof(UA_DisableGripperDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DisableGripperDataType, gripperName) - offsetof(UA_DisableGripperDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperName") /* .memberName */
},};

/* SetTransAccelDataType */
static UA_DataTypeMember SetTransAccelDataType_members[5] = {
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
    offsetof(UA_SetTransAccelDataType, name) - offsetof(UA_SetTransAccelDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetTransAccelDataType, commandID) - offsetof(UA_SetTransAccelDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTransAccelDataType, guardSize) - offsetof(UA_SetTransAccelDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_EXTENSIONOBJECT, /* .memberTypeIndex */
    offsetof(UA_SetTransAccelDataType, transAccel) - offsetof(UA_SetTransAccelDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccel") /* .memberName */
},};

/* SetLengthUnitsDataType */
static UA_DataTypeMember SetLengthUnitsDataType_members[5] = {
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
    offsetof(UA_SetLengthUnitsDataType, name) - offsetof(UA_SetLengthUnitsDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetLengthUnitsDataType, commandID) - offsetof(UA_SetLengthUnitsDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetLengthUnitsDataType, guardSize) - offsetof(UA_SetLengthUnitsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_LENGTHUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetLengthUnitsDataType, unitName) - offsetof(UA_SetLengthUnitsDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
},};

/* SetDefaultJointPositonsTolerancesDataType */
static UA_DataTypeMember SetDefaultJointPositonsTolerancesDataType_members[5] = {
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
    offsetof(UA_SetDefaultJointPositonsTolerancesDataType, name) - offsetof(UA_SetDefaultJointPositonsTolerancesDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetDefaultJointPositonsTolerancesDataType, commandID) - offsetof(UA_SetDefaultJointPositonsTolerancesDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetDefaultJointPositonsTolerancesDataType, guardSize) - offsetof(UA_SetDefaultJointPositonsTolerancesDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetDefaultJointPositonsTolerancesDataType, jointTolerances) - offsetof(UA_SetDefaultJointPositonsTolerancesDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointTolerances") /* .memberName */
},};

/* MoveScrewDataType */
static UA_DataTypeMember MoveScrewDataType_members[9] = {
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
    offsetof(UA_MoveScrewDataType, name) - offsetof(UA_MoveScrewDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, commandID) - offsetof(UA_MoveScrewDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, guardSize) - offsetof(UA_MoveScrewDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, startPosition) - offsetof(UA_MoveScrewDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartPosition") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, axisPoint) - offsetof(UA_MoveScrewDataType, startPosition) - sizeof(UA_CRCL_PoseDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AxisPoint") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, axialDistanceFree) - offsetof(UA_MoveScrewDataType, axisPoint) - sizeof(UA_CRCL_PointDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AxialDistanceFree") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, axialDistanceScrew) - offsetof(UA_MoveScrewDataType, axialDistanceFree) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AxialDistanceScrew") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, turn) - offsetof(UA_MoveScrewDataType, axialDistanceScrew) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Turn") /* .memberName */
},};

/* CRCLCommandsUnionDataType */
static UA_DataTypeMember CRCLCommandsUnionDataType_members[7] = {
{
    UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.initCanonCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InitCanonCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_MOVETODATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.moveToCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoveToCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CLOSETOOLCHANGERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.closeToolChangerCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CloseToolChangerCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_DWELLDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.dwellCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DwellCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_GETSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.getStatusCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GetStatusCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_MESSAGEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.messageCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_ENDCANONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.endCanonCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndCanonCommand") /* .memberName */
},};

/* CRCLStatusDataType */
static UA_DataTypeMember CRCLStatusDataType_members[8] = {
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
    offsetof(UA_CRCLStatusDataType, name) - offsetof(UA_CRCLStatusDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, commandStatus) - offsetof(UA_CRCLStatusDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSESDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, jointStatus) - offsetof(UA_CRCLStatusDataType, commandStatus) - sizeof(UA_CRCL_CommandStatusDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_POSESTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, poseStatus) - offsetof(UA_CRCLStatusDataType, jointStatus) - sizeof(UA_CRCL_JointStatusesDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PoseStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_GRIPPERSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, gripperStatus) - offsetof(UA_CRCLStatusDataType, poseStatus) - sizeof(UA_CRCL_PoseStatusDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_SETTINGSSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, settingsStatus) - offsetof(UA_CRCLStatusDataType, gripperStatus) - sizeof(UA_CRCL_GripperStatusDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SettingsStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSESDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, sensorStatuses) - offsetof(UA_CRCLStatusDataType, settingsStatus) - sizeof(UA_CRCL_SettingsStatusDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorStatuses") /* .memberName */
},};

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
},};

/* SAMYRobotDataType */
static UA_DataTypeMember SAMYRobotDataType_members[7] = {
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
    UA_TYPES_CRCL_OPCUA_PUBSUBIPADDRESSES, /* .memberTypeIndex */
    offsetof(UA_SAMYRobotDataType, iPAddresses) - offsetof(UA_SAMYRobotDataType, online) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IPAddresses") /* .memberName */
},};
const UA_DataType UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_COUNT] = {
/* CRCL_PositiveDecimalDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15086LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PositiveDecimalDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_POSITIVEDECIMALDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    CRCL_PositiveDecimalDataType_members  /* .members */
    UA_TYPENAME("CRCL_PositiveDecimalDataType") /* .typeName */
},
/* CRCL_PoseToleranceDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15091LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15180LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PoseToleranceDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCL_PoseToleranceDataType_members  /* .members */
    UA_TYPENAME("CRCL_PoseToleranceDataType") /* .typeName */
},
/* CRCL_ActuateJointDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15116LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15203LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ActuateJointDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_ACTUATEJOINTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CRCL_ActuateJointDataType_members  /* .members */
    UA_TYPENAME("CRCL_ActuateJointDataType") /* .typeName */
},
/* UnionTestDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15152LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15239LU}}, /* .binaryEncodingId */
    sizeof(UA_UnionTestDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_UNIONTESTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UNION, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    UnionTestDataType_members  /* .members */
    UA_TYPENAME("UnionTestDataType") /* .typeName */
},
/* CRCL_JointDetailsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15115LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15202LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointDetailsDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTDETAILSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_JointDetailsDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointDetailsDataType") /* .typeName */
},
/* CRCL_TransAccelDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15099LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15188LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransAccelDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_TransAccelDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransAccelDataType") /* .typeName */
},
/* CRCL_TransAccelAbsoluteDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15100LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15189LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransAccelAbsoluteDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELABSOLUTEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_TransAccelAbsoluteDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransAccelAbsoluteDataType") /* .typeName */
},
/* CRCL_FractionDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15079LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15173LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_FractionDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_FractionDataType_members  /* .members */
    UA_TYPENAME("CRCL_FractionDataType") /* .typeName */
},
/* CRCL_JointLimitDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15844LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15861LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointLimitDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTLIMITDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCL_JointLimitDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointLimitDataType") /* .typeName */
},
/* CRCL_DataThingDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15082LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15174LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_DataThingDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_DATATHINGDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_DataThingDataType_members  /* .members */
    UA_TYPENAME("CRCL_DataThingDataType") /* .typeName */
},
/* CRCL_TorqueUnitEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15087LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TorqueUnitEnumDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CRCL_TorqueUnitEnumDataType_members  /* .members */
    UA_TYPENAME("CRCL_TorqueUnitEnumDataType") /* .typeName */
},
/* CRCL_TransSpeedDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15102LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15191LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransSpeedDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_TransSpeedDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransSpeedDataType") /* .typeName */
},
/* CRCL_RotSpeedDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15096LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15185LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotSpeedDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_RotSpeedDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotSpeedDataType") /* .typeName */
},
/* CRCL_AngleUnitEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15075LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_AngleUnitEnumDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CRCL_AngleUnitEnumDataType_members  /* .members */
    UA_TYPENAME("CRCL_AngleUnitEnumDataType") /* .typeName */
},
/* JointSpeedAccelDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15118LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15205LU}}, /* .binaryEncodingId */
    sizeof(UA_JointSpeedAccelDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_JOINTSPEEDACCELDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    JointSpeedAccelDataType_members  /* .members */
    UA_TYPENAME("JointSpeedAccelDataType") /* .typeName */
},
/* CRCL_JointStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15845LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15862LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_JointStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointStatusDataType") /* .typeName */
},
/* CRCL_TransSpeedAbsoluteDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15103LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15192LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransSpeedAbsoluteDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDABSOLUTEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_TransSpeedAbsoluteDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransSpeedAbsoluteDataType") /* .typeName */
},
/* CRCL_ParameterSettingDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15092LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15181LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ParameterSettingDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCL_ParameterSettingDataType_members  /* .members */
    UA_TYPENAME("CRCL_ParameterSettingDataType") /* .typeName */
},
/* CRCL_ConfigureJointReportDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15157LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15242LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ConfigureJointReportDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_CONFIGUREJOINTREPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_ConfigureJointReportDataType_members  /* .members */
    UA_TYPENAME("CRCL_ConfigureJointReportDataType") /* .typeName */
},
/* CRCL_ForceUnitEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15077LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ForceUnitEnumDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CRCL_ForceUnitEnumDataType_members  /* .members */
    UA_TYPENAME("CRCL_ForceUnitEnumDataType") /* .typeName */
},
/* CRCL_JointPositionToleranceSettingDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15108LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15195LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointPositionToleranceSettingDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCL_JointPositionToleranceSettingDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointPositionToleranceSettingDataType") /* .typeName */
},
/* CRCL_RotAccelAbsoluteDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15094LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15183LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotAccelAbsoluteDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELABSOLUTEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_RotAccelAbsoluteDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotAccelAbsoluteDataType") /* .typeName */
},
/* CRCL_CommandStateEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15829LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_CommandStateEnumDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CRCL_CommandStateEnumDataType_members  /* .members */
    UA_TYPENAME("CRCL_CommandStateEnumDataType") /* .typeName */
},
/* CRCL_LengthUnitEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15080LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_LengthUnitEnumDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CRCL_LengthUnitEnumDataType_members  /* .members */
    UA_TYPENAME("CRCL_LengthUnitEnumDataType") /* .typeName */
},
/* CRCL_VectorDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15084LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15176LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_VectorDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CRCL_VectorDataType_members  /* .members */
    UA_TYPENAME("CRCL_VectorDataType") /* .typeName */
},
/* CRCL_GripperStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15838LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15855LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_GripperStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_GRIPPERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CRCL_GripperStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_GripperStatusDataType") /* .typeName */
},
/* CRCL_PointDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15083LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15175LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PointDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CRCL_PointDataType_members  /* .members */
    UA_TYPENAME("CRCL_PointDataType") /* .typeName */
},
/* JointForceTorqueDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15117LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15204LU}}, /* .binaryEncodingId */
    sizeof(UA_JointForceTorqueDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_JOINTFORCETORQUEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    JointForceTorqueDataType_members  /* .members */
    UA_TYPENAME("JointForceTorqueDataType") /* .typeName */
},
/* CRCL_GuardLimitEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15105LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_GuardLimitEnumDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CRCL_GuardLimitEnumDataType_members  /* .members */
    UA_TYPENAME("CRCL_GuardLimitEnumDataType") /* .typeName */
},
/* CRCL_RotSpeedRelativeDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15098LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15187LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotSpeedRelativeDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDRELATIVEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_RotSpeedRelativeDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotSpeedRelativeDataType") /* .typeName */
},
/* CRCL_RotAccelRelativeDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15095LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15184LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotAccelRelativeDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELRELATIVEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_RotAccelRelativeDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotAccelRelativeDataType") /* .typeName */
},
/* CRCL_RotAccelDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15093LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15182LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotAccelDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_RotAccelDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotAccelDataType") /* .typeName */
},
/* CRCL_ScalarSensorStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15835LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15852LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ScalarSensorStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_SCALARSENSORSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCL_ScalarSensorStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_ScalarSensorStatusDataType") /* .typeName */
},
/* PubSubIPAddresses */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15525LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15736LU}}, /* .binaryEncodingId */
    sizeof(UA_PubSubIPAddresses), /* .memSize */
    UA_TYPES_CRCL_OPCUA_PUBSUBIPADDRESSES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    PubSubIPAddresses_members  /* .members */
    UA_TYPENAME("PubSubIPAddresses") /* .typeName */
},
/* CRCL_JointStatusesDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15846LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15863LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointStatusesDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_JointStatusesDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointStatusesDataType") /* .typeName */
},
/* CRCL_StopConditionEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15155LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_StopConditionEnumDataType), /* .memSize */
    UA_TYPES_INT32, /* .typeIndex */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    CRCL_StopConditionEnumDataType_members  /* .members */
    UA_TYPENAME("CRCL_StopConditionEnumDataType") /* .typeName */
},
/* CRCL_RotSpeedAbsoluteDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15097LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15186LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotSpeedAbsoluteDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDABSOLUTEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_RotSpeedAbsoluteDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotSpeedAbsoluteDataType") /* .typeName */
},
/* CRCL_GuardDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15107LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15194LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_GuardDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    CRCL_GuardDataType_members  /* .members */
    UA_TYPENAME("CRCL_GuardDataType") /* .typeName */
},
/* ConfigureStatusReportDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15140LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15227LU}}, /* .binaryEncodingId */
    sizeof(UA_ConfigureStatusReportDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CONFIGURESTATUSREPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    ConfigureStatusReportDataType_members  /* .members */
    UA_TYPENAME("ConfigureStatusReportDataType") /* .typeName */
},
/* RunProgramDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15128LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15215LU}}, /* .binaryEncodingId */
    sizeof(UA_RunProgramDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_RUNPROGRAMDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    RunProgramDataType_members  /* .members */
    UA_TYPENAME("RunProgramDataType") /* .typeName */
},
/* CRCL_ParallelGripperStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15839LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15856LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ParallelGripperStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_PARALLELGRIPPERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_ParallelGripperStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_ParallelGripperStatusDataType") /* .typeName */
},
/* CRCLCommandDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15111LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15198LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCLCommandDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCLCOMMANDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCLCommandDataType_members  /* .members */
    UA_TYPENAME("CRCLCommandDataType") /* .typeName */
},
/* SetIntermediatePoseToleranceDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15134LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15221LU}}, /* .binaryEncodingId */
    sizeof(UA_SetIntermediatePoseToleranceDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETINTERMEDIATEPOSETOLERANCEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetIntermediatePoseToleranceDataType_members  /* .members */
    UA_TYPENAME("SetIntermediatePoseToleranceDataType") /* .typeName */
},
/* SetRobotParametersDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15137LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15224LU}}, /* .binaryEncodingId */
    sizeof(UA_SetRobotParametersDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETROBOTPARAMETERSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetRobotParametersDataType_members  /* .members */
    UA_TYPENAME("SetRobotParametersDataType") /* .typeName */
},
/* CRCL_ForceTorqueSensorStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15836LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15853LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ForceTorqueSensorStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_FORCETORQUESENSORSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    12, /* .membersSize */
    CRCL_ForceTorqueSensorStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_ForceTorqueSensorStatusDataType") /* .typeName */
},
/* CRCL_OnOffSensorStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15834LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15851LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_OnOffSensorStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_ONOFFSENSORSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCL_OnOffSensorStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_OnOffSensorStatusDataType") /* .typeName */
},
/* CRCL_SensorStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15832LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15849LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_SensorStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_SensorStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_SensorStatusDataType") /* .typeName */
},
/* CRCL_TransAccelRelativeDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15101LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15190LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransAccelRelativeDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELRELATIVEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_TransAccelRelativeDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransAccelRelativeDataType") /* .typeName */
},
/* CRCL_TransSpeedRelativeDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15104LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15193LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransSpeedRelativeDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDRELATIVEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_TransSpeedRelativeDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransSpeedRelativeDataType") /* .typeName */
},
/* CRCL_TwistDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15089LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15178LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TwistDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_TWISTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCL_TwistDataType_members  /* .members */
    UA_TYPENAME("CRCL_TwistDataType") /* .typeName */
},
/* CRCL_SettingsStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15842LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15859LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_SettingsStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_SETTINGSSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    23, /* .membersSize */
    CRCL_SettingsStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_SettingsStatusDataType") /* .typeName */
},
/* StopMotionDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15139LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15226LU}}, /* .binaryEncodingId */
    sizeof(UA_StopMotionDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_STOPMOTIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    StopMotionDataType_members  /* .members */
    UA_TYPENAME("StopMotionDataType") /* .typeName */
},
/* OpenToolChangerDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15127LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15214LU}}, /* .binaryEncodingId */
    sizeof(UA_OpenToolChangerDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_OPENTOOLCHANGERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    OpenToolChangerDataType_members  /* .members */
    UA_TYPENAME("OpenToolChangerDataType") /* .typeName */
},
/* SetForceUnitsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15133LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15220LU}}, /* .binaryEncodingId */
    sizeof(UA_SetForceUnitsDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETFORCEUNITSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetForceUnitsDataType_members  /* .members */
    UA_TYPENAME("SetForceUnitsDataType") /* .typeName */
},
/* CRCL_ThreeFingerGripperStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15840LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15857LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ThreeFingerGripperStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    11, /* .membersSize */
    CRCL_ThreeFingerGripperStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_ThreeFingerGripperStatusDataType") /* .typeName */
},
/* CloseToolChangerDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15121LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15208LU}}, /* .binaryEncodingId */
    sizeof(UA_CloseToolChangerDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CLOSETOOLCHANGERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CloseToolChangerDataType_members  /* .members */
    UA_TYPENAME("CloseToolChangerDataType") /* .typeName */
},
/* GetStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15123LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15210LU}}, /* .binaryEncodingId */
    sizeof(UA_GetStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_GETSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    GetStatusDataType_members  /* .members */
    UA_TYPENAME("GetStatusDataType") /* .typeName */
},
/* SetTransSpeedDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15151LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15238LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTransSpeedDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETTRANSSPEEDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetTransSpeedDataType_members  /* .members */
    UA_TYPENAME("SetTransSpeedDataType") /* .typeName */
},
/* CRCL_WrenchDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15090LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15179LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_WrenchDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_WRENCHDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCL_WrenchDataType_members  /* .members */
    UA_TYPENAME("CRCL_WrenchDataType") /* .typeName */
},
/* CRCL_CommandStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15831LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15848LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_CommandStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    CRCL_CommandStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_CommandStatusDataType") /* .typeName */
},
/* InitCanonDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15114LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15201LU}}, /* .binaryEncodingId */
    sizeof(UA_InitCanonDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    InitCanonDataType_members  /* .members */
    UA_TYPENAME("InitCanonDataType") /* .typeName */
},
/* DisableRobotParameterStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15146LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15233LU}}, /* .binaryEncodingId */
    sizeof(UA_DisableRobotParameterStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_DISABLEROBOTPARAMETERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    DisableRobotParameterStatusDataType_members  /* .members */
    UA_TYPENAME("DisableRobotParameterStatusDataType") /* .typeName */
},
/* CRCL_PoseDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15085LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15177LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PoseDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CRCL_PoseDataType_members  /* .members */
    UA_TYPENAME("CRCL_PoseDataType") /* .typeName */
},
/* MoveToDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15120LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15207LU}}, /* .binaryEncodingId */
    sizeof(UA_MoveToDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_MOVETODATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    MoveToDataType_members  /* .members */
    UA_TYPENAME("MoveToDataType") /* .typeName */
},
/* CRCL_VacuumGripperStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15841LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15858LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_VacuumGripperStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_VACUUMGRIPPERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_VacuumGripperStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_VacuumGripperStatusDataType") /* .typeName */
},
/* SetMotionCoordinationDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15136LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15223LU}}, /* .binaryEncodingId */
    sizeof(UA_SetMotionCoordinationDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETMOTIONCOORDINATIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetMotionCoordinationDataType_members  /* .members */
    UA_TYPENAME("SetMotionCoordinationDataType") /* .typeName */
},
/* DwellDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15122LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15209LU}}, /* .binaryEncodingId */
    sizeof(UA_DwellDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_DWELLDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    DwellDataType_members  /* .members */
    UA_TYPENAME("DwellDataType") /* .typeName */
},
/* CRCL_CountSensorStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15833LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15850LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_CountSensorStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_COUNTSENSORSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCL_CountSensorStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_CountSensorStatusDataType") /* .typeName */
},
/* SetRotAccelDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15148LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15235LU}}, /* .binaryEncodingId */
    sizeof(UA_SetRotAccelDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETROTACCELDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetRotAccelDataType_members  /* .members */
    UA_TYPENAME("SetRotAccelDataType") /* .typeName */
},
/* EnableGripperDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15143LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15230LU}}, /* .binaryEncodingId */
    sizeof(UA_EnableGripperDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_ENABLEGRIPPERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    EnableGripperDataType_members  /* .members */
    UA_TYPENAME("EnableGripperDataType") /* .typeName */
},
/* MiddleCommandDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15112LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15199LU}}, /* .binaryEncodingId */
    sizeof(UA_MiddleCommandDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_MIDDLECOMMANDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    MiddleCommandDataType_members  /* .members */
    UA_TYPENAME("MiddleCommandDataType") /* .typeName */
},
/* SetRotSpeedDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15150LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15237LU}}, /* .binaryEncodingId */
    sizeof(UA_SetRotSpeedDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETROTSPEEDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetRotSpeedDataType_members  /* .members */
    UA_TYPENAME("SetRotSpeedDataType") /* .typeName */
},
/* CRCL_SensorStatusesDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15837LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15854LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_SensorStatusesDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_SensorStatusesDataType_members  /* .members */
    UA_TYPENAME("CRCL_SensorStatusesDataType") /* .typeName */
},
/* DisableSensorDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15142LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15229LU}}, /* .binaryEncodingId */
    sizeof(UA_DisableSensorDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_DISABLESENSORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    DisableSensorDataType_members  /* .members */
    UA_TYPENAME("DisableSensorDataType") /* .typeName */
},
/* CRCL_JointPositionsTolerancesDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15109LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15196LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointPositionsTolerancesDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_JointPositionsTolerancesDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointPositionsTolerancesDataType") /* .typeName */
},
/* EnableSensorDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15141LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15228LU}}, /* .binaryEncodingId */
    sizeof(UA_EnableSensorDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_ENABLESENSORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    EnableSensorDataType_members  /* .members */
    UA_TYPENAME("EnableSensorDataType") /* .typeName */
},
/* ActuateJointsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15119LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15206LU}}, /* .binaryEncodingId */
    sizeof(UA_ActuateJointsDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_ACTUATEJOINTSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    ActuateJointsDataType_members  /* .members */
    UA_TYPENAME("ActuateJointsDataType") /* .typeName */
},
/* CRCL_PoseAndSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15110LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15197LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PoseAndSetDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_POSEANDSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    11, /* .membersSize */
    CRCL_PoseAndSetDataType_members  /* .members */
    UA_TYPENAME("CRCL_PoseAndSetDataType") /* .typeName */
},
/* EnableRobotParameterStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15145LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15232LU}}, /* .binaryEncodingId */
    sizeof(UA_EnableRobotParameterStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_ENABLEROBOTPARAMETERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    EnableRobotParameterStatusDataType_members  /* .members */
    UA_TYPENAME("EnableRobotParameterStatusDataType") /* .typeName */
},
/* SetEndEffectorParametersDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15130LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15217LU}}, /* .binaryEncodingId */
    sizeof(UA_SetEndEffectorParametersDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETENDEFFECTORPARAMETERSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetEndEffectorParametersDataType_members  /* .members */
    UA_TYPENAME("SetEndEffectorParametersDataType") /* .typeName */
},
/* EndCanonDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15113LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15200LU}}, /* .binaryEncodingId */
    sizeof(UA_EndCanonDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_ENDCANONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    EndCanonDataType_members  /* .members */
    UA_TYPENAME("EndCanonDataType") /* .typeName */
},
/* SetEndPoseToleranceDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15132LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15219LU}}, /* .binaryEncodingId */
    sizeof(UA_SetEndPoseToleranceDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETENDPOSETOLERANCEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetEndPoseToleranceDataType_members  /* .members */
    UA_TYPENAME("SetEndPoseToleranceDataType") /* .typeName */
},
/* SetAngleUnitsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15129LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15216LU}}, /* .binaryEncodingId */
    sizeof(UA_SetAngleUnitsDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETANGLEUNITSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetAngleUnitsDataType_members  /* .members */
    UA_TYPENAME("SetAngleUnitsDataType") /* .typeName */
},
/* SetTorqueUnitsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15138LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15225LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTorqueUnitsDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETTORQUEUNITSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetTorqueUnitsDataType_members  /* .members */
    UA_TYPENAME("SetTorqueUnitsDataType") /* .typeName */
},
/* MessageDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15124LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15211LU}}, /* .binaryEncodingId */
    sizeof(UA_MessageDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_MESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    MessageDataType_members  /* .members */
    UA_TYPENAME("MessageDataType") /* .typeName */
},
/* CRCL_PoseStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15843LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15860LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PoseStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCL_POSESTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_PoseStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_PoseStatusDataType") /* .typeName */
},
/* MoveThroughToDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15126LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15213LU}}, /* .binaryEncodingId */
    sizeof(UA_MoveThroughToDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_MOVETHROUGHTODATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    MoveThroughToDataType_members  /* .members */
    UA_TYPENAME("MoveThroughToDataType") /* .typeName */
},
/* SetEndEffectorDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15131LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15218LU}}, /* .binaryEncodingId */
    sizeof(UA_SetEndEffectorDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETENDEFFECTORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetEndEffectorDataType_members  /* .members */
    UA_TYPENAME("SetEndEffectorDataType") /* .typeName */
},
/* DisableGripperDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15144LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15231LU}}, /* .binaryEncodingId */
    sizeof(UA_DisableGripperDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_DISABLEGRIPPERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    DisableGripperDataType_members  /* .members */
    UA_TYPENAME("DisableGripperDataType") /* .typeName */
},
/* SetTransAccelDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15149LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15236LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTransAccelDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETTRANSACCELDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetTransAccelDataType_members  /* .members */
    UA_TYPENAME("SetTransAccelDataType") /* .typeName */
},
/* SetLengthUnitsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15135LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15222LU}}, /* .binaryEncodingId */
    sizeof(UA_SetLengthUnitsDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETLENGTHUNITSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetLengthUnitsDataType_members  /* .members */
    UA_TYPENAME("SetLengthUnitsDataType") /* .typeName */
},
/* SetDefaultJointPositonsTolerancesDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15147LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15234LU}}, /* .binaryEncodingId */
    sizeof(UA_SetDefaultJointPositonsTolerancesDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SETDEFAULTJOINTPOSITONSTOLERANCESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    SetDefaultJointPositonsTolerancesDataType_members  /* .members */
    UA_TYPENAME("SetDefaultJointPositonsTolerancesDataType") /* .typeName */
},
/* MoveScrewDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15125LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15212LU}}, /* .binaryEncodingId */
    sizeof(UA_MoveScrewDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_MOVESCREWDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    MoveScrewDataType_members  /* .members */
    UA_TYPENAME("MoveScrewDataType") /* .typeName */
},
/* CRCLCommandsUnionDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15153LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15240LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCLCommandsUnionDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UNION, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    CRCLCommandsUnionDataType_members  /* .members */
    UA_TYPENAME("CRCLCommandsUnionDataType") /* .typeName */
},
/* CRCLStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15074LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15154LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCLStatusDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCLSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    CRCLStatusDataType_members  /* .members */
    UA_TYPENAME("CRCLStatusDataType") /* .typeName */
},
/* CRCLSkillDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15159LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15160LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCLSkillDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCLSkillDataType_members  /* .members */
    UA_TYPENAME("CRCLSkillDataType") /* .typeName */
},
/* SAMYRobotDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15735LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15737LU}}, /* .binaryEncodingId */
    sizeof(UA_SAMYRobotDataType), /* .memSize */
    UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SAMYRobotDataType_members  /* .members */
    UA_TYPENAME("SAMYRobotDataType") /* .typeName */
},
};

