/* Generated from CRCL.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2021-05-18 10:39:31 */

#include "types_crcl_generated.h"

/* MessageParametersSetDataType */
static UA_DataTypeMember MessageParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_MessageParametersSetDataType, message) - offsetof(UA_MessageParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Message") /* .memberName */
},};

/* CRCL_PositiveDecimalDataType */
#define CRCL_PositiveDecimalDataType_members NULL

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

/* SetMotionCoordinationParametersSetDataType */
static UA_DataTypeMember SetMotionCoordinationParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetMotionCoordinationParametersSetDataType, coordinated) - offsetof(UA_SetMotionCoordinationParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Coordinated") /* .memberName */
},};

/* DisableGripperParametersSetDataType */
static UA_DataTypeMember DisableGripperParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DisableGripperParametersSetDataType, gripperName) - offsetof(UA_DisableGripperParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperName") /* .memberName */
},};

/* CRCLCommandParametersSetDataType */
static UA_DataTypeMember CRCLCommandParametersSetDataType_members[1] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},};

/* DisableRobotParameterStatusParametersSetDataType */
static UA_DataTypeMember DisableRobotParameterStatusParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DisableRobotParameterStatusParametersSetDataType, robotParameterName) - offsetof(UA_DisableRobotParameterStatusParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RobotParameterName") /* .memberName */
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

/* OpenToolChangerParametersSetDataType */
static UA_DataTypeMember OpenToolChangerParametersSetDataType_members[1] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
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

/* CRCL_JointSpeedAccelDataType */
static UA_DataTypeMember CRCL_JointSpeedAccelDataType_members[4] = {
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
    offsetof(UA_CRCL_JointSpeedAccelDataType, name) - offsetof(UA_CRCL_JointSpeedAccelDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointSpeedAccelDataType, jointSpeed) - offsetof(UA_CRCL_JointSpeedAccelDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointSpeed") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointSpeedAccelDataType, jointAccel) - offsetof(UA_CRCL_JointSpeedAccelDataType, jointSpeed) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointAccel") /* .memberName */
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

/* EnableRobotParameterStatusParametersSetDataType */
static UA_DataTypeMember EnableRobotParameterStatusParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EnableRobotParameterStatusParametersSetDataType, robotParameterName) - offsetof(UA_EnableRobotParameterStatusParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RobotParameterName") /* .memberName */
},};

/* ConfigureStatusReportParametersSetDataType */
static UA_DataTypeMember ConfigureStatusReportParametersSetDataType_members[7] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportParametersSetDataType, reportJointStatuses) - offsetof(UA_ConfigureStatusReportParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportJointStatuses") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportParametersSetDataType, reportPoseStatus) - offsetof(UA_ConfigureStatusReportParametersSetDataType, reportJointStatuses) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportPoseStatus") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportParametersSetDataType, reportGripperStatus) - offsetof(UA_ConfigureStatusReportParametersSetDataType, reportPoseStatus) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportGripperStatus") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportParametersSetDataType, reportSettingsStatus) - offsetof(UA_ConfigureStatusReportParametersSetDataType, reportGripperStatus) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportSettingsStatus") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportParametersSetDataType, reportSensorsStatus) - offsetof(UA_ConfigureStatusReportParametersSetDataType, reportSettingsStatus) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportSensorsStatus") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportParametersSetDataType, reportGuardsStatus) - offsetof(UA_ConfigureStatusReportParametersSetDataType, reportSensorsStatus) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ReportGuardsStatus") /* .memberName */
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

/* CRCL_AngleUnitEnumDataType */
#define CRCL_AngleUnitEnumDataType_members NULL

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

/* CloseToolChangerParametersSetDataType */
static UA_DataTypeMember CloseToolChangerParametersSetDataType_members[1] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
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

/* SetEndeffectorParametersParametersSetDataType */
static UA_DataTypeMember SetEndeffectorParametersParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorParametersParametersSetDataType, parameterSettingSize) - offsetof(UA_SetEndeffectorParametersParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParameterSetting") /* .memberName */
},};

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

/* SetRobotParametersParametersSetDataType */
static UA_DataTypeMember SetRobotParametersParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRobotParametersParametersSetDataType, parameterSettingSize) - offsetof(UA_SetRobotParametersParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParameterSetting") /* .memberName */
},};

/* CRCL_CommandStateEnumDataType */
#define CRCL_CommandStateEnumDataType_members NULL

/* CRCL_LengthUnitEnumDataType */
#define CRCL_LengthUnitEnumDataType_members NULL

/* SetAngleUnitsParametersSetDataType */
static UA_DataTypeMember SetAngleUnitsParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetAngleUnitsParametersSetDataType, unitName) - offsetof(UA_SetAngleUnitsParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
},};

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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
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

/* SetLengthUnitsParametersSetDataType */
static UA_DataTypeMember SetLengthUnitsParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetLengthUnitsParametersSetDataType, unitName) - offsetof(UA_SetLengthUnitsParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
},};

/* CRCL_JointForceTorqueDataType */
static UA_DataTypeMember CRCL_JointForceTorqueDataType_members[4] = {
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
    offsetof(UA_CRCL_JointForceTorqueDataType, name) - offsetof(UA_CRCL_JointForceTorqueDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointForceTorqueDataType, setting) - offsetof(UA_CRCL_JointForceTorqueDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Setting") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointForceTorqueDataType, changeRate) - offsetof(UA_CRCL_JointForceTorqueDataType, setting) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ChangeRate") /* .memberName */
},};

/* SetTorqueUnitsParametersSetDataType */
static UA_DataTypeMember SetTorqueUnitsParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTorqueUnitsParametersSetDataType, unitName) - offsetof(UA_SetTorqueUnitsParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
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
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_RotAccelRelativeDataType, fraction) - offsetof(UA_CRCL_RotAccelRelativeDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Fraction") /* .memberName */
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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger1Position) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, holdingObject) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Finger1Position") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger2Position) - offsetof(UA_CRCL_ThreeFingerGripperStatusDataType, finger1Position) - sizeof(UA_CRCL_FractionDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Finger2Position") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
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

/* CRCL_RotAccelDataType */
static UA_DataTypeMember CRCL_RotAccelDataType_members[2] = {
{
    UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_RotAccelDataType, fields.rotAccelAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccelAbsoluteDataType") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_RotAccelDataType, fields.rotAccelRelativeDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccelRelativeDataType") /* .memberName */
},};

/* DisableSensorParametersSetDataType */
static UA_DataTypeMember DisableSensorParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_DisableSensorParametersSetDataType, sensorID) - offsetof(UA_DisableSensorParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorID") /* .memberName */
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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
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

/* DwellParametersSetDataType */
static UA_DataTypeMember DwellParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DwellParametersSetDataType, dwellTime) - offsetof(UA_DwellParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DwellTime") /* .memberName */
},};

/* CRCL_ForceUnitEnumDataType */
#define CRCL_ForceUnitEnumDataType_members NULL

/* GetStatusParametersSetDataType */
static UA_DataTypeMember GetStatusParametersSetDataType_members[1] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},};

/* SetIntermediatePoseToleranceParametersSetDataType */
static UA_DataTypeMember SetIntermediatePoseToleranceParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetIntermediatePoseToleranceParametersSetDataType, tolerance) - offsetof(UA_SetIntermediatePoseToleranceParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Tolerance") /* .memberName */
},};

/* SetEndPoseToleranceParametersSetDataType */
static UA_DataTypeMember SetEndPoseToleranceParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndPoseToleranceParametersSetDataType, tolerance) - offsetof(UA_SetEndPoseToleranceParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Tolerance") /* .memberName */
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
    UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointStatusesDataType, jointStatusSize) - offsetof(UA_CRCL_JointStatusesDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointStatus") /* .memberName */
},};

/* CRCL_StopConditionEnumDataType */
#define CRCL_StopConditionEnumDataType_members NULL

/* EndCanonParametersSetDataType */
static UA_DataTypeMember EndCanonParametersSetDataType_members[1] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},};

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

/* InitCanonParametersSetDataType */
static UA_DataTypeMember InitCanonParametersSetDataType_members[1] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
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
    UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE, /* .memberTypeIndex */
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
static UA_DataTypeMember ConfigureStatusReportDataType_members[12] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, realTimeCommand) - offsetof(UA_ConfigureStatusReportDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, realTimeParameterNode) - offsetof(UA_ConfigureStatusReportDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ConfigureStatusReportDataType, guardSize) - offsetof(UA_ConfigureStatusReportDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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
static UA_DataTypeMember RunProgramDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_RunProgramDataType, realTimeCommand) - offsetof(UA_RunProgramDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_RunProgramDataType, realTimeParameterNode) - offsetof(UA_RunProgramDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_RunProgramDataType, guardSize) - offsetof(UA_RunProgramDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
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

/* SetRotAccelParametersSetDataType */
static UA_DataTypeMember SetRotAccelParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRotAccelParametersSetDataType, rotAccel) - offsetof(UA_SetRotAccelParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccel") /* .memberName */
},};

/* CRCLCommandDataType */
static UA_DataTypeMember CRCLCommandDataType_members[6] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandDataType, realTimeCommand) - offsetof(UA_CRCLCommandDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandDataType, realTimeParameterNode) - offsetof(UA_CRCLCommandDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandDataType, guardSize) - offsetof(UA_CRCLCommandDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* SetEndeffectorParametersSetDataType */
static UA_DataTypeMember SetEndeffectorParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorParametersSetDataType, setting) - offsetof(UA_SetEndeffectorParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Setting") /* .memberName */
},};

/* SetIntermediatePoseToleranceDataType */
static UA_DataTypeMember SetIntermediatePoseToleranceDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetIntermediatePoseToleranceDataType, realTimeCommand) - offsetof(UA_SetIntermediatePoseToleranceDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetIntermediatePoseToleranceDataType, realTimeParameterNode) - offsetof(UA_SetIntermediatePoseToleranceDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetIntermediatePoseToleranceDataType, guardSize) - offsetof(UA_SetIntermediatePoseToleranceDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetIntermediatePoseToleranceDataType, tolerance) - offsetof(UA_SetIntermediatePoseToleranceDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Tolerance") /* .memberName */
},};

/* SetRobotParametersDataType */
static UA_DataTypeMember SetRobotParametersDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetRobotParametersDataType, realTimeCommand) - offsetof(UA_SetRobotParametersDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetRobotParametersDataType, realTimeParameterNode) - offsetof(UA_SetRobotParametersDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRobotParametersDataType, guardSize) - offsetof(UA_SetRobotParametersDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
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

/* EnableSensorParametersSetDataType */
static UA_DataTypeMember EnableSensorParametersSetDataType_members[3] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EnableSensorParametersSetDataType, sensorID) - offsetof(UA_EnableSensorParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorID") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableSensorParametersSetDataType, sensorOptionSize) - offsetof(UA_EnableSensorParametersSetDataType, sensorID) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorOption") /* .memberName */
},};

/* CRCL_JointDetailsDataType */
static UA_DataTypeMember CRCL_JointDetailsDataType_members[2] = {
{
    UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointDetailsDataType, fields.jointSpeedAccel), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointSpeedAccel") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointDetailsDataType, fields.jointForceTorque), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointForceTorque") /* .memberName */
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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TwistDataType, linearVelocity) - offsetof(UA_CRCL_TwistDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LinearVelocity") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, angleUnitName) - offsetof(UA_CRCL_SettingsStatusDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AngleUnitName") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, endEffectorParameterSettingSize) - offsetof(UA_CRCL_SettingsStatusDataType, angleUnitName) - sizeof(UA_CRCL_AngleUnitEnumDataType), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndEffectorParameterSetting") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, endEffectorSetting) - offsetof(UA_CRCL_SettingsStatusDataType, endEffectorParameterSetting) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndEffectorSetting") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, forceUnitName) - offsetof(UA_CRCL_SettingsStatusDataType, endEffectorSetting) - sizeof(UA_CRCL_FractionDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ForceUnitName") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, jointLimitsSize) - offsetof(UA_CRCL_SettingsStatusDataType, forceUnitName) - sizeof(UA_CRCL_ForceUnitEnumDataType), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointLimits") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, intermediatePoseTolernace) - offsetof(UA_CRCL_SettingsStatusDataType, jointLimits) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IntermediatePoseTolernace") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, lengthUnitName) - offsetof(UA_CRCL_SettingsStatusDataType, intermediatePoseTolernace) - sizeof(UA_CRCL_PoseToleranceDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("LengthUnitName") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, maxCartesianLimit) - offsetof(UA_CRCL_SettingsStatusDataType, lengthUnitName) - sizeof(UA_CRCL_LengthUnitEnumDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MaxCartesianLimit") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POINTDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, poseTolerance) - offsetof(UA_CRCL_SettingsStatusDataType, motionCoorinated) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PoseTolerance") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, robotParameterSettingSize) - offsetof(UA_CRCL_SettingsStatusDataType, poseTolerance) - sizeof(UA_CRCL_PoseToleranceDataType), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RobotParameterSetting") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, rotAccelAbsolute) - offsetof(UA_CRCL_SettingsStatusDataType, robotParameterSetting) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccelAbsolute") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, rotAccelRelative) - offsetof(UA_CRCL_SettingsStatusDataType, rotAccelAbsolute) - sizeof(UA_CRCL_RotAccelAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccelRelative") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, rotSpeedAbsolute) - offsetof(UA_CRCL_SettingsStatusDataType, rotAccelRelative) - sizeof(UA_CRCL_RotAccelRelativeDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotSpeedAbsolute") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, rotSpeedRelative) - offsetof(UA_CRCL_SettingsStatusDataType, rotSpeedAbsolute) - sizeof(UA_CRCL_RotSpeedAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotSpeedRelative") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, torqueUnitName) - offsetof(UA_CRCL_SettingsStatusDataType, rotSpeedRelative) - sizeof(UA_CRCL_RotSpeedRelativeDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TorqueUnitName") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, transAccelAbsolute) - offsetof(UA_CRCL_SettingsStatusDataType, torqueUnitName) - sizeof(UA_CRCL_TorqueUnitEnumDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccelAbsolute") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, transAccelRelative) - offsetof(UA_CRCL_SettingsStatusDataType, transAccelAbsolute) - sizeof(UA_CRCL_TransAccelAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccelRelative") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, transSpeedAbsolute) - offsetof(UA_CRCL_SettingsStatusDataType, transAccelRelative) - sizeof(UA_CRCL_TransAccelRelativeDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeedAbsolute") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SettingsStatusDataType, transSpeedRelative) - offsetof(UA_CRCL_SettingsStatusDataType, transSpeedAbsolute) - sizeof(UA_CRCL_TransSpeedAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeedRelative") /* .memberName */
},};

/* StopMotionDataType */
static UA_DataTypeMember StopMotionDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_StopMotionDataType, realTimeCommand) - offsetof(UA_StopMotionDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_StopMotionDataType, realTimeParameterNode) - offsetof(UA_StopMotionDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_StopMotionDataType, guardSize) - offsetof(UA_StopMotionDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_StopMotionDataType, stopCondition) - offsetof(UA_StopMotionDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StopCondition") /* .memberName */
},};

/* OpenToolChangerDataType */
static UA_DataTypeMember OpenToolChangerDataType_members[6] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_OpenToolChangerDataType, realTimeCommand) - offsetof(UA_OpenToolChangerDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_OpenToolChangerDataType, realTimeParameterNode) - offsetof(UA_OpenToolChangerDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_OpenToolChangerDataType, guardSize) - offsetof(UA_OpenToolChangerDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* SetForceUnitsDataType */
static UA_DataTypeMember SetForceUnitsDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetForceUnitsDataType, realTimeCommand) - offsetof(UA_SetForceUnitsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetForceUnitsDataType, realTimeParameterNode) - offsetof(UA_SetForceUnitsDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetForceUnitsDataType, guardSize) - offsetof(UA_SetForceUnitsDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetForceUnitsDataType, unitName) - offsetof(UA_SetForceUnitsDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
},};

/* SetEndeffectorDataType */
static UA_DataTypeMember SetEndeffectorDataType_members[7] = {
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
    offsetof(UA_SetEndeffectorDataType, name) - offsetof(UA_SetEndeffectorDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorDataType, commandID) - offsetof(UA_SetEndeffectorDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorDataType, realTimeCommand) - offsetof(UA_SetEndeffectorDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorDataType, realTimeParameterNode) - offsetof(UA_SetEndeffectorDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorDataType, guardSize) - offsetof(UA_SetEndeffectorDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorDataType, setting) - offsetof(UA_SetEndeffectorDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Setting") /* .memberName */
},};

/* EnableGripperParametersSetDataType */
static UA_DataTypeMember EnableGripperParametersSetDataType_members[3] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_STRING, /* .memberTypeIndex */
    offsetof(UA_EnableGripperParametersSetDataType, gripperName) - offsetof(UA_EnableGripperParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperName") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableGripperParametersSetDataType, gripperOptionSize) - offsetof(UA_EnableGripperParametersSetDataType, gripperName) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperOption") /* .memberName */
},};

/* ConfigureJointReportsDataType */
static UA_DataTypeMember ConfigureJointReportsDataType_members[8] = {
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
    offsetof(UA_ConfigureJointReportsDataType, name) - offsetof(UA_ConfigureJointReportsDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_ConfigureJointReportsDataType, commandID) - offsetof(UA_ConfigureJointReportsDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureJointReportsDataType, realTimeCommand) - offsetof(UA_ConfigureJointReportsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ConfigureJointReportsDataType, realTimeParameterNode) - offsetof(UA_ConfigureJointReportsDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ConfigureJointReportsDataType, guardSize) - offsetof(UA_ConfigureJointReportsDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureJointReportsDataType, resetAll) - offsetof(UA_ConfigureJointReportsDataType, guard) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResetAll") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ConfigureJointReportsDataType, configureJointReportSize) - offsetof(UA_ConfigureJointReportsDataType, resetAll) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConfigureJointReport") /* .memberName */
},};

/* CloseToolChangerDataType */
static UA_DataTypeMember CloseToolChangerDataType_members[6] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_CloseToolChangerDataType, realTimeCommand) - offsetof(UA_CloseToolChangerDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_CloseToolChangerDataType, realTimeParameterNode) - offsetof(UA_CloseToolChangerDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CloseToolChangerDataType, guardSize) - offsetof(UA_CloseToolChangerDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* GetStatusDataType */
static UA_DataTypeMember GetStatusDataType_members[6] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_GetStatusDataType, realTimeCommand) - offsetof(UA_GetStatusDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_GetStatusDataType, realTimeParameterNode) - offsetof(UA_GetStatusDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_GetStatusDataType, guardSize) - offsetof(UA_GetStatusDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
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
    UA_TYPES_CRCL_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_WrenchDataType, force) - offsetof(UA_CRCL_WrenchDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Force") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE, /* .memberTypeIndex */
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
static UA_DataTypeMember InitCanonDataType_members[6] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_InitCanonDataType, realTimeCommand) - offsetof(UA_InitCanonDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_InitCanonDataType, realTimeParameterNode) - offsetof(UA_InitCanonDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_InitCanonDataType, guardSize) - offsetof(UA_InitCanonDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* DisableRobotParameterStatusDataType */
static UA_DataTypeMember DisableRobotParameterStatusDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DisableRobotParameterStatusDataType, realTimeCommand) - offsetof(UA_DisableRobotParameterStatusDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_DisableRobotParameterStatusDataType, realTimeParameterNode) - offsetof(UA_DisableRobotParameterStatusDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DisableRobotParameterStatusDataType, guardSize) - offsetof(UA_DisableRobotParameterStatusDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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

/* ConfigureJointReportsParametersSetDataType */
static UA_DataTypeMember ConfigureJointReportsParametersSetDataType_members[3] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ConfigureJointReportsParametersSetDataType, resetAll) - offsetof(UA_ConfigureJointReportsParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ResetAll") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ConfigureJointReportsParametersSetDataType, configureJointReportSize) - offsetof(UA_ConfigureJointReportsParametersSetDataType, resetAll) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConfigureJointReport") /* .memberName */
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
    UA_TYPES_CRCL_CRCL_POINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseDataType, point) - offsetof(UA_CRCL_PoseDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Point") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseDataType, xAxis) - offsetof(UA_CRCL_PoseDataType, point) - sizeof(UA_CRCL_PointDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("XAxis") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseDataType, zAxis) - offsetof(UA_CRCL_PoseDataType, xAxis) - sizeof(UA_CRCL_VectorDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ZAxis") /* .memberName */
},};

/* CRCL_TransSpeedDataType */
static UA_DataTypeMember CRCL_TransSpeedDataType_members[2] = {
{
    UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TransSpeedDataType, fields.transSpeedAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeedAbsoluteDataType") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TransSpeedDataType, fields.transSpeedRelativeDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeedRelativeDataType") /* .memberName */
},};

/* MoveToDataType */
static UA_DataTypeMember MoveToDataType_members[8] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MoveToDataType, realTimeCommand) - offsetof(UA_MoveToDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_MoveToDataType, realTimeParameterNode) - offsetof(UA_MoveToDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveToDataType, guardSize) - offsetof(UA_MoveToDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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
    UA_TYPES_CRCL_CRCL_POSEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveToDataType, endPosition) - offsetof(UA_MoveToDataType, moveStraight) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndPosition") /* .memberName */
},};

/* MoveToParametersSetDataType */
static UA_DataTypeMember MoveToParametersSetDataType_members[3] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MoveToParametersSetDataType, moveStraight) - offsetof(UA_MoveToParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoveStraight") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveToParametersSetDataType, endPosition) - offsetof(UA_MoveToParametersSetDataType, moveStraight) - sizeof(UA_Boolean), /* .padding */
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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
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

/* CRCL_RotSpeedDataType */
static UA_DataTypeMember CRCL_RotSpeedDataType_members[2] = {
{
    UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_RotSpeedDataType, fields.rotSpeedAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotSpeedAbsoluteDataType") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_RotSpeedDataType, fields.rotSpeedRelativeDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotSpeedRelativeDataType") /* .memberName */
},};

/* SetMotionCoordinationDataType */
static UA_DataTypeMember SetMotionCoordinationDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetMotionCoordinationDataType, realTimeCommand) - offsetof(UA_SetMotionCoordinationDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetMotionCoordinationDataType, realTimeParameterNode) - offsetof(UA_SetMotionCoordinationDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetMotionCoordinationDataType, guardSize) - offsetof(UA_SetMotionCoordinationDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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
static UA_DataTypeMember DwellDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DwellDataType, realTimeCommand) - offsetof(UA_DwellDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_DwellDataType, realTimeParameterNode) - offsetof(UA_DwellDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DwellDataType, guardSize) - offsetof(UA_DwellDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
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
static UA_DataTypeMember SetRotAccelDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetRotAccelDataType, realTimeCommand) - offsetof(UA_SetRotAccelDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetRotAccelDataType, realTimeParameterNode) - offsetof(UA_SetRotAccelDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRotAccelDataType, guardSize) - offsetof(UA_SetRotAccelDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRotAccelDataType, rotAccel) - offsetof(UA_SetRotAccelDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccel") /* .memberName */
},};

/* EnableGripperDataType */
static UA_DataTypeMember EnableGripperDataType_members[8] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_EnableGripperDataType, realTimeCommand) - offsetof(UA_EnableGripperDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_EnableGripperDataType, realTimeParameterNode) - offsetof(UA_EnableGripperDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableGripperDataType, guardSize) - offsetof(UA_EnableGripperDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableGripperDataType, gripperOptionSize) - offsetof(UA_EnableGripperDataType, gripperName) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperOption") /* .memberName */
},};

/* MiddleCommandDataType */
static UA_DataTypeMember MiddleCommandDataType_members[6] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MiddleCommandDataType, realTimeCommand) - offsetof(UA_MiddleCommandDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_MiddleCommandDataType, realTimeParameterNode) - offsetof(UA_MiddleCommandDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MiddleCommandDataType, guardSize) - offsetof(UA_MiddleCommandDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* SetRotSpeedDataType */
static UA_DataTypeMember SetRotSpeedDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetRotSpeedDataType, realTimeCommand) - offsetof(UA_SetRotSpeedDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetRotSpeedDataType, realTimeParameterNode) - offsetof(UA_SetRotSpeedDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRotSpeedDataType, guardSize) - offsetof(UA_SetRotSpeedDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRotSpeedDataType, rotSpeed) - offsetof(UA_SetRotSpeedDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
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
    UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusesDataType, onOffSensorStatusSize) - offsetof(UA_CRCL_SensorStatusesDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OnOffSensorStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusesDataType, scalarSensorStatusSize) - offsetof(UA_CRCL_SensorStatusesDataType, onOffSensorStatus) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ScalarSensorStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusesDataType, countSensorStatusSize) - offsetof(UA_CRCL_SensorStatusesDataType, scalarSensorStatus) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CountSensorStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_SensorStatusesDataType, forceTorqueSensorStatusSize) - offsetof(UA_CRCL_SensorStatusesDataType, countSensorStatus) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ForceTorqueSensorStatus") /* .memberName */
},};

/* SetForceUnitsParametersSetDataType */
static UA_DataTypeMember SetForceUnitsParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetForceUnitsParametersSetDataType, unitName) - offsetof(UA_SetForceUnitsParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
},};

/* DisableSensorDataType */
static UA_DataTypeMember DisableSensorDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DisableSensorDataType, realTimeCommand) - offsetof(UA_DisableSensorDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_DisableSensorDataType, realTimeParameterNode) - offsetof(UA_DisableSensorDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DisableSensorDataType, guardSize) - offsetof(UA_DisableSensorDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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
    UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_JointPositionsTolerancesDataType, settingSize) - offsetof(UA_CRCL_JointPositionsTolerancesDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Setting") /* .memberName */
},};

/* EnableSensorDataType */
static UA_DataTypeMember EnableSensorDataType_members[8] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_EnableSensorDataType, realTimeCommand) - offsetof(UA_EnableSensorDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_EnableSensorDataType, realTimeParameterNode) - offsetof(UA_EnableSensorDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableSensorDataType, guardSize) - offsetof(UA_EnableSensorDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableSensorDataType, sensorOptionSize) - offsetof(UA_EnableSensorDataType, sensorID) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorOption") /* .memberName */
},};

/* SetRotSpeedParametersSetDataType */
static UA_DataTypeMember SetRotSpeedParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetRotSpeedParametersSetDataType, rotSpeed) - offsetof(UA_SetRotSpeedParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotSpeed") /* .memberName */
},};

/* SetEndeffectorParametersDataType */
static UA_DataTypeMember SetEndeffectorParametersDataType_members[7] = {
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
    offsetof(UA_SetEndeffectorParametersDataType, name) - offsetof(UA_SetEndeffectorParametersDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorParametersDataType, commandID) - offsetof(UA_SetEndeffectorParametersDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorParametersDataType, realTimeCommand) - offsetof(UA_SetEndeffectorParametersDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorParametersDataType, realTimeParameterNode) - offsetof(UA_SetEndeffectorParametersDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorParametersDataType, guardSize) - offsetof(UA_SetEndeffectorParametersDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndeffectorParametersDataType, parameterSettingSize) - offsetof(UA_SetEndeffectorParametersDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ParameterSetting") /* .memberName */
},};

/* EnableRobotParameterStatusDataType */
static UA_DataTypeMember EnableRobotParameterStatusDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_EnableRobotParameterStatusDataType, realTimeCommand) - offsetof(UA_EnableRobotParameterStatusDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_EnableRobotParameterStatusDataType, realTimeParameterNode) - offsetof(UA_EnableRobotParameterStatusDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EnableRobotParameterStatusDataType, guardSize) - offsetof(UA_EnableRobotParameterStatusDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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

/* EndCanonDataType */
static UA_DataTypeMember EndCanonDataType_members[6] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_EndCanonDataType, realTimeCommand) - offsetof(UA_EndCanonDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_EndCanonDataType, realTimeParameterNode) - offsetof(UA_EndCanonDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_EndCanonDataType, guardSize) - offsetof(UA_EndCanonDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},};

/* SetAngleUnitsDataType */
static UA_DataTypeMember SetAngleUnitsDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetAngleUnitsDataType, realTimeCommand) - offsetof(UA_SetAngleUnitsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetAngleUnitsDataType, realTimeParameterNode) - offsetof(UA_SetAngleUnitsDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetAngleUnitsDataType, guardSize) - offsetof(UA_SetAngleUnitsDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetAngleUnitsDataType, unitName) - offsetof(UA_SetAngleUnitsDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
},};

/* MoveScrewParametersSetDataType */
static UA_DataTypeMember MoveScrewParametersSetDataType_members[6] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewParametersSetDataType, startPosition) - offsetof(UA_MoveScrewParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartPosition") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewParametersSetDataType, axisPoint) - offsetof(UA_MoveScrewParametersSetDataType, startPosition) - sizeof(UA_CRCL_PoseDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AxisPoint") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewParametersSetDataType, axialDistanceFree) - offsetof(UA_MoveScrewParametersSetDataType, axisPoint) - sizeof(UA_CRCL_PointDataType), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AxialDistanceFree") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewParametersSetDataType, axialDistanceScrew) - offsetof(UA_MoveScrewParametersSetDataType, axialDistanceFree) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("AxialDistanceScrew") /* .memberName */
},
{
    UA_TYPES_DOUBLE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewParametersSetDataType, turn) - offsetof(UA_MoveScrewParametersSetDataType, axialDistanceScrew) - sizeof(UA_Double), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Turn") /* .memberName */
},};

/* SetTorqueUnitsDataType */
static UA_DataTypeMember SetTorqueUnitsDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetTorqueUnitsDataType, realTimeCommand) - offsetof(UA_SetTorqueUnitsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetTorqueUnitsDataType, realTimeParameterNode) - offsetof(UA_SetTorqueUnitsDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTorqueUnitsDataType, guardSize) - offsetof(UA_SetTorqueUnitsDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTorqueUnitsDataType, unitName) - offsetof(UA_SetTorqueUnitsDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
},};

/* StopMotionParametersSetDataType */
static UA_DataTypeMember StopMotionParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_StopMotionParametersSetDataType, stopCondition) - offsetof(UA_StopMotionParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StopCondition") /* .memberName */
},};

/* SetEndPoseToleranceDataType */
static UA_DataTypeMember SetEndPoseToleranceDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetEndPoseToleranceDataType, realTimeCommand) - offsetof(UA_SetEndPoseToleranceDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetEndPoseToleranceDataType, realTimeParameterNode) - offsetof(UA_SetEndPoseToleranceDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndPoseToleranceDataType, guardSize) - offsetof(UA_SetEndPoseToleranceDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetEndPoseToleranceDataType, tolerance) - offsetof(UA_SetEndPoseToleranceDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Tolerance") /* .memberName */
},};

/* MessageDataType */
static UA_DataTypeMember MessageDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MessageDataType, realTimeCommand) - offsetof(UA_MessageDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_MessageDataType, realTimeParameterNode) - offsetof(UA_MessageDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MessageDataType, guardSize) - offsetof(UA_MessageDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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
    UA_TYPES_CRCL_CRCL_POSEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseStatusDataType, pose) - offsetof(UA_CRCL_PoseStatusDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Pose") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TWISTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseStatusDataType, twist) - offsetof(UA_CRCL_PoseStatusDataType, pose) - sizeof(UA_CRCL_PoseDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Twist") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_WRENCHDATATYPE, /* .memberTypeIndex */
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
static UA_DataTypeMember MoveThroughToDataType_members[9] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToDataType, realTimeCommand) - offsetof(UA_MoveThroughToDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToDataType, realTimeParameterNode) - offsetof(UA_MoveThroughToDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToDataType, guardSize) - offsetof(UA_MoveThroughToDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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
    UA_TYPES_CRCL_CRCL_POSEDATATYPE, /* .memberTypeIndex */
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

/* DisableGripperDataType */
static UA_DataTypeMember DisableGripperDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_DisableGripperDataType, realTimeCommand) - offsetof(UA_DisableGripperDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_DisableGripperDataType, realTimeParameterNode) - offsetof(UA_DisableGripperDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_DisableGripperDataType, guardSize) - offsetof(UA_DisableGripperDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
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

/* SetLengthUnitsDataType */
static UA_DataTypeMember SetLengthUnitsDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetLengthUnitsDataType, realTimeCommand) - offsetof(UA_SetLengthUnitsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetLengthUnitsDataType, realTimeParameterNode) - offsetof(UA_SetLengthUnitsDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetLengthUnitsDataType, guardSize) - offsetof(UA_SetLengthUnitsDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetLengthUnitsDataType, unitName) - offsetof(UA_SetLengthUnitsDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("UnitName") /* .memberName */
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
    offsetof(UA_CRCL_ActuateJointDataType, jointPosition) - offsetof(UA_CRCL_ActuateJointDataType, jointNumber) - sizeof(UA_Int32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointPosition") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_ActuateJointDataType, jointDetails) - offsetof(UA_CRCL_ActuateJointDataType, jointPosition) - sizeof(UA_Double), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointDetails") /* .memberName */
},};

/* MoveThroughToParametersSetDataType */
static UA_DataTypeMember MoveThroughToParametersSetDataType_members[4] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToParametersSetDataType, moveStraight) - offsetof(UA_MoveThroughToParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoveStraight") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToParametersSetDataType, waypointSize) - offsetof(UA_MoveThroughToParametersSetDataType, moveStraight) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Waypoint") /* .memberName */
},
{
    UA_TYPES_INT32, /* .memberTypeIndex */
    offsetof(UA_MoveThroughToParametersSetDataType, numPositions) - offsetof(UA_MoveThroughToParametersSetDataType, waypoint) - sizeof(void *), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("NumPositions") /* .memberName */
},};

/* CRCL_TransAccelDataType */
static UA_DataTypeMember CRCL_TransAccelDataType_members[2] = {
{
    UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TransAccelDataType, fields.transAccelAbsoluteDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccelAbsoluteDataType") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_TransAccelDataType, fields.transAccelRelativeDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccelRelativeDataType") /* .memberName */
},};

/* MoveScrewDataType */
static UA_DataTypeMember MoveScrewDataType_members[11] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, realTimeCommand) - offsetof(UA_MoveScrewDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, realTimeParameterNode) - offsetof(UA_MoveScrewDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, guardSize) - offsetof(UA_MoveScrewDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_MoveScrewDataType, startPosition) - offsetof(UA_MoveScrewDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StartPosition") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POINTDATATYPE, /* .memberTypeIndex */
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

/* SetDefaultJointPositionsTolerancesDataType */
static UA_DataTypeMember SetDefaultJointPositionsTolerancesDataType_members[7] = {
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
    offsetof(UA_SetDefaultJointPositionsTolerancesDataType, name) - offsetof(UA_SetDefaultJointPositionsTolerancesDataType, id) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Name") /* .memberName */
},
{
    UA_TYPES_UINT32, /* .memberTypeIndex */
    offsetof(UA_SetDefaultJointPositionsTolerancesDataType, commandID) - offsetof(UA_SetDefaultJointPositionsTolerancesDataType, name) - sizeof(UA_String), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandID") /* .memberName */
},
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetDefaultJointPositionsTolerancesDataType, realTimeCommand) - offsetof(UA_SetDefaultJointPositionsTolerancesDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetDefaultJointPositionsTolerancesDataType, realTimeParameterNode) - offsetof(UA_SetDefaultJointPositionsTolerancesDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetDefaultJointPositionsTolerancesDataType, guardSize) - offsetof(UA_SetDefaultJointPositionsTolerancesDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetDefaultJointPositionsTolerancesDataType, jointTolerances) - offsetof(UA_SetDefaultJointPositionsTolerancesDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointTolerances") /* .memberName */
},};

/* SetTransSpeedParametersSetDataType */
static UA_DataTypeMember SetTransSpeedParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTransSpeedParametersSetDataType, transSpeed) - offsetof(UA_SetTransSpeedParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeed") /* .memberName */
},};

/* SetDefaultJointPositionsTolerancesParametersSetDataType */
static UA_DataTypeMember SetDefaultJointPositionsTolerancesParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetDefaultJointPositionsTolerancesParametersSetDataType, jointTolerances) - offsetof(UA_SetDefaultJointPositionsTolerancesParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointTolerances") /* .memberName */
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
    UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, commandStatus) - offsetof(UA_CRCLStatusDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CommandStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, jointStatus) - offsetof(UA_CRCLStatusDataType, commandStatus) - sizeof(UA_CRCL_CommandStatusDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, poseStatus) - offsetof(UA_CRCLStatusDataType, jointStatus) - sizeof(UA_CRCL_JointStatusesDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PoseStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, gripperStatus) - offsetof(UA_CRCLStatusDataType, poseStatus) - sizeof(UA_CRCL_PoseStatusDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GripperStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, settingsStatus) - offsetof(UA_CRCLStatusDataType, gripperStatus) - sizeof(UA_CRCL_GripperStatusDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SettingsStatus") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLStatusDataType, sensorStatuses) - offsetof(UA_CRCLStatusDataType, settingsStatus) - sizeof(UA_CRCL_SettingsStatusDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SensorStatuses") /* .memberName */
},};

/* SetTransSpeedDataType */
static UA_DataTypeMember SetTransSpeedDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetTransSpeedDataType, realTimeCommand) - offsetof(UA_SetTransSpeedDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetTransSpeedDataType, realTimeParameterNode) - offsetof(UA_SetTransSpeedDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTransSpeedDataType, guardSize) - offsetof(UA_SetTransSpeedDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTransSpeedDataType, transSpeed) - offsetof(UA_SetTransSpeedDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeed") /* .memberName */
},};

/* ActuateJointsDataType */
static UA_DataTypeMember ActuateJointsDataType_members[8] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsDataType, realTimeCommand) - offsetof(UA_ActuateJointsDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsDataType, realTimeParameterNode) - offsetof(UA_ActuateJointsDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsDataType, guardSize) - offsetof(UA_ActuateJointsDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsDataType, actuateJointSize) - offsetof(UA_ActuateJointsDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ActuateJoint") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsDataType, jointTolerances) - offsetof(UA_ActuateJointsDataType, actuateJoint) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointTolerances") /* .memberName */
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
    UA_TYPES_CRCL_CRCL_POINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, point) - offsetof(UA_CRCL_PoseAndSetDataType, name) - sizeof(UA_String), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Point") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, xAxis) - offsetof(UA_CRCL_PoseAndSetDataType, point) - sizeof(UA_CRCL_PointDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("XAxis") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_VECTORDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, transSpeed) - offsetof(UA_CRCL_PoseAndSetDataType, coordinated) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransSpeed") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, rotSpeed) - offsetof(UA_CRCL_PoseAndSetDataType, transSpeed) - sizeof(UA_CRCL_TransSpeedDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotSpeed") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, transAccel) - offsetof(UA_CRCL_PoseAndSetDataType, rotSpeed) - sizeof(UA_CRCL_RotSpeedDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccel") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, rotAccel) - offsetof(UA_CRCL_PoseAndSetDataType, transAccel) - sizeof(UA_CRCL_TransAccelDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RotAccel") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCL_PoseAndSetDataType, poseTolerance) - offsetof(UA_CRCL_PoseAndSetDataType, rotAccel) - sizeof(UA_CRCL_RotAccelDataType), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("PoseTolerance") /* .memberName */
},};

/* SetTransAccelParametersSetDataType */
static UA_DataTypeMember SetTransAccelParametersSetDataType_members[2] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTransAccelParametersSetDataType, transAccel) - offsetof(UA_SetTransAccelParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccel") /* .memberName */
},};

/* ActuateJointsParametersSetDataType */
static UA_DataTypeMember ActuateJointsParametersSetDataType_members[3] = {
{
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    0, /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameter") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsParametersSetDataType, actuateJointSize) - offsetof(UA_ActuateJointsParametersSetDataType, realTimeParameter) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ActuateJoint") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE, /* .memberTypeIndex */
    offsetof(UA_ActuateJointsParametersSetDataType, jointTolerances) - offsetof(UA_ActuateJointsParametersSetDataType, actuateJoint) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("JointTolerances") /* .memberName */
},};

/* SetTransAccelDataType */
static UA_DataTypeMember SetTransAccelDataType_members[7] = {
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
    UA_TYPES_BOOLEAN, /* .memberTypeIndex */
    offsetof(UA_SetTransAccelDataType, realTimeCommand) - offsetof(UA_SetTransAccelDataType, commandID) - sizeof(UA_UInt32), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeCommand") /* .memberName */
},
{
    UA_TYPES_NODEID, /* .memberTypeIndex */
    offsetof(UA_SetTransAccelDataType, realTimeParameterNode) - offsetof(UA_SetTransAccelDataType, realTimeCommand) - sizeof(UA_Boolean), /* .padding */
    true, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("RealTimeParameterNode") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTransAccelDataType, guardSize) - offsetof(UA_SetTransAccelDataType, realTimeParameterNode) - sizeof(UA_NodeId), /* .padding */
    false, /* .namespaceZero */
    true, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("Guard") /* .memberName */
},
{
    UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_SetTransAccelDataType, transAccel) - offsetof(UA_SetTransAccelDataType, guard) - sizeof(void *), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("TransAccel") /* .memberName */
},};

/* CRCLCommandsUnionDataType */
static UA_DataTypeMember CRCLCommandsUnionDataType_members[35] = {
{
    UA_TYPES_CRCL_INITCANONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.initCanonCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("InitCanonCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_ENDCANONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.endCanonCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EndCanonCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_MESSAGEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.messageCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MessageCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_MOVETODATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.moveToCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoveToCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_MOVESCREWDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.moveScrewCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoveScrewCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_MOVETHROUGHTODATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.moveThroughToCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("MoveThroughToCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_DWELLDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.dwellCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DwellCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.actuateJointsCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ActuateJointsCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.configureJointReportsCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConfigureJointReportsCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setDefaultJointPositionsTolerancesCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetDefaultJointPositionsTolerancesCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_GETSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.getStatusCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("GetStatusCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.closeToolChangerCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("CloseToolChangerCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.openToolChangerCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("OpenToolChangerCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setRobotParametersCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetRobotParametersCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setEndeffectorParametersCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetEndeffectorParametersCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETENDEFFECTORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setEndeffectorCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetEndeffectorCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETTRANSACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setTransAccelCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetTransAccelCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setTransSpeedCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetTransSpeedCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETROTACCELDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setRotAccelCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetRotAccelCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETROTSPEEDDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setRotSpeedCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetRotSpeedCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETANGLEUNITSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setAngleUnitsCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetAngleUnitsCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setEndPoseToleranceCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetEndPoseToleranceCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETFORCEUNITSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setForceUnitsCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetForceUnitsCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setIntermediatePoseToleranceCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetIntermediatePoseToleranceCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setLengthUnitsCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetLengthUnitsCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setMotionCoordinationCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetMotionCoordinationCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.setTorqueUnitsCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("SetTorqueUnitsCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_STOPMOTIONDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.stopMotionCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("StopMotionCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.configureStatusReportCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("ConfigureStatusReportCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_ENABLESENSORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.enableSensorCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnableSensorCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_DISABLESENSORDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.disableSensorCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisableSensorCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.enableGripperCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnableGripperCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.disableGripperCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisableGripperCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.enableRobotParameterStatusCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("EnableRobotParameterStatusCommand") /* .memberName */
},
{
    UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE, /* .memberTypeIndex */
    offsetof(UA_CRCLCommandsUnionDataType, fields.disableRobotParameterStatusCommand), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("DisableRobotParameterStatusCommand") /* .memberName */
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
    UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_CRCLSKILLDATATYPE, /* .memberTypeIndex */
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
    UA_TYPES_CRCL_PUBSUBIPADDRESSES, /* .memberTypeIndex */
    offsetof(UA_SAMYRobotDataType, iPAddresses) - offsetof(UA_SAMYRobotDataType, online) - sizeof(UA_Boolean), /* .padding */
    false, /* .namespaceZero */
    false, /* .isArray */
    false  /* .isOptional */
    UA_TYPENAME("IPAddresses") /* .memberName */
},};
const UA_DataType UA_TYPES_CRCL[UA_TYPES_CRCL_COUNT] = {
/* MessageParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15113LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15238LU}}, /* .binaryEncodingId */
    sizeof(UA_MessageParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_MESSAGEPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    MessageParametersSetDataType_members  /* .members */
    UA_TYPENAME("MessageParametersSetDataType") /* .typeName */
},
/* CRCL_PositiveDecimalDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15014LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PositiveDecimalDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_POSITIVEDECIMALDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_BYTESTRING, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    0, /* .membersSize */
    CRCL_PositiveDecimalDataType_members  /* .members */
    UA_TYPENAME("CRCL_PositiveDecimalDataType") /* .typeName */
},
/* CRCL_PointDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15011LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15145LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PointDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_POINTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CRCL_PointDataType_members  /* .members */
    UA_TYPENAME("CRCL_PointDataType") /* .typeName */
},
/* CRCL_PoseToleranceDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15019LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15150LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PoseToleranceDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCL_PoseToleranceDataType_members  /* .members */
    UA_TYPENAME("CRCL_PoseToleranceDataType") /* .typeName */
},
/* SetMotionCoordinationParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15133LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15258LU}}, /* .binaryEncodingId */
    sizeof(UA_SetMotionCoordinationParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetMotionCoordinationParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetMotionCoordinationParametersSetDataType") /* .typeName */
},
/* DisableGripperParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15140LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15265LU}}, /* .binaryEncodingId */
    sizeof(UA_DisableGripperParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_DISABLEGRIPPERPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DisableGripperParametersSetDataType_members  /* .members */
    UA_TYPENAME("DisableGripperParametersSetDataType") /* .typeName */
},
/* CRCLCommandParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15107LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15232LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCLCommandParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_CRCLCOMMANDPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    CRCLCommandParametersSetDataType_members  /* .members */
    UA_TYPENAME("CRCLCommandParametersSetDataType") /* .typeName */
},
/* DisableRobotParameterStatusParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15142LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15267LU}}, /* .binaryEncodingId */
    sizeof(UA_DisableRobotParameterStatusParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DisableRobotParameterStatusParametersSetDataType_members  /* .members */
    UA_TYPENAME("DisableRobotParameterStatusParametersSetDataType") /* .typeName */
},
/* CRCL_TransAccelAbsoluteDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15027LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15158LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransAccelAbsoluteDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_TransAccelAbsoluteDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransAccelAbsoluteDataType") /* .typeName */
},
/* OpenToolChangerParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15112LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15237LU}}, /* .binaryEncodingId */
    sizeof(UA_OpenToolChangerParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_OPENTOOLCHANGERPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    OpenToolChangerParametersSetDataType_members  /* .members */
    UA_TYPENAME("OpenToolChangerParametersSetDataType") /* .typeName */
},
/* CRCL_FractionDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15007LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15143LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_FractionDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_FractionDataType_members  /* .members */
    UA_TYPENAME("CRCL_FractionDataType") /* .typeName */
},
/* CRCL_JointSpeedAccelDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15047LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15176LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointSpeedAccelDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCL_JointSpeedAccelDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointSpeedAccelDataType") /* .typeName */
},
/* CRCL_JointLimitDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15097LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15224LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointLimitDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCL_JointLimitDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointLimitDataType") /* .typeName */
},
/* EnableRobotParameterStatusParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15141LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15266LU}}, /* .binaryEncodingId */
    sizeof(UA_EnableRobotParameterStatusParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    EnableRobotParameterStatusParametersSetDataType_members  /* .members */
    UA_TYPENAME("EnableRobotParameterStatusParametersSetDataType") /* .typeName */
},
/* ConfigureStatusReportParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15136LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15261LU}}, /* .binaryEncodingId */
    sizeof(UA_ConfigureStatusReportParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    ConfigureStatusReportParametersSetDataType_members  /* .members */
    UA_TYPENAME("ConfigureStatusReportParametersSetDataType") /* .typeName */
},
/* CRCL_DataThingDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15010LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15144LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_DataThingDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_DataThingDataType_members  /* .members */
    UA_TYPENAME("CRCL_DataThingDataType") /* .typeName */
},
/* CRCL_TorqueUnitEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15015LU}}, /* .typeId */
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
/* CRCL_AngleUnitEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15003LU}}, /* .typeId */
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
/* CRCL_JointStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15098LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15225LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_JointStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointStatusDataType") /* .typeName */
},
/* CRCL_TransSpeedAbsoluteDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15030LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15161LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransSpeedAbsoluteDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_TransSpeedAbsoluteDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransSpeedAbsoluteDataType") /* .typeName */
},
/* CloseToolChangerParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15111LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15236LU}}, /* .binaryEncodingId */
    sizeof(UA_CloseToolChangerParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    CloseToolChangerParametersSetDataType_members  /* .members */
    UA_TYPENAME("CloseToolChangerParametersSetDataType") /* .typeName */
},
/* CRCL_ParameterSettingDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15020LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15151LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ParameterSettingDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCL_ParameterSettingDataType_members  /* .members */
    UA_TYPENAME("CRCL_ParameterSettingDataType") /* .typeName */
},
/* CRCL_ConfigureJointReportDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15033LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15164LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ConfigureJointReportDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_ConfigureJointReportDataType_members  /* .members */
    UA_TYPENAME("CRCL_ConfigureJointReportDataType") /* .typeName */
},
/* SetEndeffectorParametersParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15122LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15247LU}}, /* .binaryEncodingId */
    sizeof(UA_SetEndeffectorParametersParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetEndeffectorParametersParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetEndeffectorParametersParametersSetDataType") /* .typeName */
},
/* CRCL_JointPositionToleranceSettingDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15037LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15166LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointPositionToleranceSettingDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCL_JointPositionToleranceSettingDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointPositionToleranceSettingDataType") /* .typeName */
},
/* CRCL_RotAccelAbsoluteDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15021LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15152LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotAccelAbsoluteDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_RotAccelAbsoluteDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotAccelAbsoluteDataType") /* .typeName */
},
/* SetRobotParametersParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15121LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15246LU}}, /* .binaryEncodingId */
    sizeof(UA_SetRobotParametersParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetRobotParametersParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetRobotParametersParametersSetDataType") /* .typeName */
},
/* CRCL_CommandStateEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15082LU}}, /* .typeId */
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
    {2, UA_NODEIDTYPE_NUMERIC, {15008LU}}, /* .typeId */
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
/* SetAngleUnitsParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15128LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15253LU}}, /* .binaryEncodingId */
    sizeof(UA_SetAngleUnitsParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETANGLEUNITSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetAngleUnitsParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetAngleUnitsParametersSetDataType") /* .typeName */
},
/* CRCL_VectorDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15012LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15146LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_VectorDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_VECTORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CRCL_VectorDataType_members  /* .members */
    UA_TYPENAME("CRCL_VectorDataType") /* .typeName */
},
/* CRCL_GripperStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15091LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15218LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_GripperStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CRCL_GripperStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_GripperStatusDataType") /* .typeName */
},
/* SetLengthUnitsParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15132LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15257LU}}, /* .binaryEncodingId */
    sizeof(UA_SetLengthUnitsParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETLENGTHUNITSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetLengthUnitsParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetLengthUnitsParametersSetDataType") /* .typeName */
},
/* CRCL_JointForceTorqueDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15046LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15175LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointForceTorqueDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCL_JointForceTorqueDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointForceTorqueDataType") /* .typeName */
},
/* SetTorqueUnitsParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15134LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15259LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTorqueUnitsParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETTORQUEUNITSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetTorqueUnitsParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetTorqueUnitsParametersSetDataType") /* .typeName */
},
/* CRCL_GuardLimitEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15034LU}}, /* .typeId */
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
    {2, UA_NODEIDTYPE_NUMERIC, {15025LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15156LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotSpeedRelativeDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_RotSpeedRelativeDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotSpeedRelativeDataType") /* .typeName */
},
/* CRCL_RotAccelRelativeDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15022LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15153LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotAccelRelativeDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_RotAccelRelativeDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotAccelRelativeDataType") /* .typeName */
},
/* CRCL_ThreeFingerGripperStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15093LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15220LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ThreeFingerGripperStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    11, /* .membersSize */
    CRCL_ThreeFingerGripperStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_ThreeFingerGripperStatusDataType") /* .typeName */
},
/* CRCL_RotAccelDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15023LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15154LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotAccelDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UNION, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_RotAccelDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotAccelDataType") /* .typeName */
},
/* DisableSensorParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15138LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15263LU}}, /* .binaryEncodingId */
    sizeof(UA_DisableSensorParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_DISABLESENSORPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DisableSensorParametersSetDataType_members  /* .members */
    UA_TYPENAME("DisableSensorParametersSetDataType") /* .typeName */
},
/* CRCL_ScalarSensorStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15088LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15215LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ScalarSensorStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCL_ScalarSensorStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_ScalarSensorStatusDataType") /* .typeName */
},
/* DwellParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15117LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15242LU}}, /* .binaryEncodingId */
    sizeof(UA_DwellParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_DWELLPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    DwellParametersSetDataType_members  /* .members */
    UA_TYPENAME("DwellParametersSetDataType") /* .typeName */
},
/* CRCL_ForceUnitEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15005LU}}, /* .typeId */
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
/* GetStatusParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15110LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15235LU}}, /* .binaryEncodingId */
    sizeof(UA_GetStatusParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_GETSTATUSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    GetStatusParametersSetDataType_members  /* .members */
    UA_TYPENAME("GetStatusParametersSetDataType") /* .typeName */
},
/* SetIntermediatePoseToleranceParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15131LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15256LU}}, /* .binaryEncodingId */
    sizeof(UA_SetIntermediatePoseToleranceParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetIntermediatePoseToleranceParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetIntermediatePoseToleranceParametersSetDataType") /* .typeName */
},
/* SetEndPoseToleranceParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15129LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15254LU}}, /* .binaryEncodingId */
    sizeof(UA_SetEndPoseToleranceParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetEndPoseToleranceParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetEndPoseToleranceParametersSetDataType") /* .typeName */
},
/* PubSubIPAddresses */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15101LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15228LU}}, /* .binaryEncodingId */
    sizeof(UA_PubSubIPAddresses), /* .memSize */
    UA_TYPES_CRCL_PUBSUBIPADDRESSES, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    PubSubIPAddresses_members  /* .members */
    UA_TYPENAME("PubSubIPAddresses") /* .typeName */
},
/* CRCL_JointStatusesDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15099LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15226LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointStatusesDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_JointStatusesDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointStatusesDataType") /* .typeName */
},
/* CRCL_StopConditionEnumDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15001LU}}, /* .typeId */
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
/* EndCanonParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15109LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15234LU}}, /* .binaryEncodingId */
    sizeof(UA_EndCanonParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_ENDCANONPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    EndCanonParametersSetDataType_members  /* .members */
    UA_TYPENAME("EndCanonParametersSetDataType") /* .typeName */
},
/* CRCL_RotSpeedAbsoluteDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15024LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15155LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotSpeedAbsoluteDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_RotSpeedAbsoluteDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotSpeedAbsoluteDataType") /* .typeName */
},
/* InitCanonParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15108LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15233LU}}, /* .binaryEncodingId */
    sizeof(UA_InitCanonParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_INITCANONPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    1, /* .membersSize */
    InitCanonParametersSetDataType_members  /* .members */
    UA_TYPENAME("InitCanonParametersSetDataType") /* .typeName */
},
/* CRCL_GuardDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15036LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15165LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_GuardDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_GUARDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    CRCL_GuardDataType_members  /* .members */
    UA_TYPENAME("CRCL_GuardDataType") /* .typeName */
},
/* ConfigureStatusReportDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15069LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15198LU}}, /* .binaryEncodingId */
    sizeof(UA_ConfigureStatusReportDataType), /* .memSize */
    UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    12, /* .membersSize */
    ConfigureStatusReportDataType_members  /* .members */
    UA_TYPENAME("ConfigureStatusReportDataType") /* .typeName */
},
/* RunProgramDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15057LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15186LU}}, /* .binaryEncodingId */
    sizeof(UA_RunProgramDataType), /* .memSize */
    UA_TYPES_CRCL_RUNPROGRAMDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    RunProgramDataType_members  /* .members */
    UA_TYPENAME("RunProgramDataType") /* .typeName */
},
/* CRCL_ParallelGripperStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15092LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15219LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ParallelGripperStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_ParallelGripperStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_ParallelGripperStatusDataType") /* .typeName */
},
/* SetRotAccelParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15127LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15252LU}}, /* .binaryEncodingId */
    sizeof(UA_SetRotAccelParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETROTACCELPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetRotAccelParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetRotAccelParametersSetDataType") /* .typeName */
},
/* CRCLCommandDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15040LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15169LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCLCommandDataType), /* .memSize */
    UA_TYPES_CRCL_CRCLCOMMANDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCLCommandDataType_members  /* .members */
    UA_TYPENAME("CRCLCommandDataType") /* .typeName */
},
/* SetEndeffectorParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15123LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15248LU}}, /* .binaryEncodingId */
    sizeof(UA_SetEndeffectorParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetEndeffectorParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetEndeffectorParametersSetDataType") /* .typeName */
},
/* SetIntermediatePoseToleranceDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15063LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15192LU}}, /* .binaryEncodingId */
    sizeof(UA_SetIntermediatePoseToleranceDataType), /* .memSize */
    UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetIntermediatePoseToleranceDataType_members  /* .members */
    UA_TYPENAME("SetIntermediatePoseToleranceDataType") /* .typeName */
},
/* SetRobotParametersDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15066LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15195LU}}, /* .binaryEncodingId */
    sizeof(UA_SetRobotParametersDataType), /* .memSize */
    UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetRobotParametersDataType_members  /* .members */
    UA_TYPENAME("SetRobotParametersDataType") /* .typeName */
},
/* CRCL_ForceTorqueSensorStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15089LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15216LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ForceTorqueSensorStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    12, /* .membersSize */
    CRCL_ForceTorqueSensorStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_ForceTorqueSensorStatusDataType") /* .typeName */
},
/* CRCL_OnOffSensorStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15087LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15214LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_OnOffSensorStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCL_OnOffSensorStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_OnOffSensorStatusDataType") /* .typeName */
},
/* EnableSensorParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15137LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15262LU}}, /* .binaryEncodingId */
    sizeof(UA_EnableSensorParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_ENABLESENSORPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    EnableSensorParametersSetDataType_members  /* .members */
    UA_TYPENAME("EnableSensorParametersSetDataType") /* .typeName */
},
/* CRCL_JointDetailsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15044LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15173LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointDetailsDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UNION, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_JointDetailsDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointDetailsDataType") /* .typeName */
},
/* CRCL_SensorStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15085LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15212LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_SensorStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_SensorStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_SensorStatusDataType") /* .typeName */
},
/* CRCL_TransAccelRelativeDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15028LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15159LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransAccelRelativeDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_TransAccelRelativeDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransAccelRelativeDataType") /* .typeName */
},
/* CRCL_TransSpeedRelativeDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15031LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15162LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransSpeedRelativeDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_TransSpeedRelativeDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransSpeedRelativeDataType") /* .typeName */
},
/* CRCL_TwistDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15017LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15148LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TwistDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_TWISTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCL_TwistDataType_members  /* .members */
    UA_TYPENAME("CRCL_TwistDataType") /* .typeName */
},
/* CRCL_SettingsStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15095LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15222LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_SettingsStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    23, /* .membersSize */
    CRCL_SettingsStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_SettingsStatusDataType") /* .typeName */
},
/* StopMotionDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15068LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15197LU}}, /* .binaryEncodingId */
    sizeof(UA_StopMotionDataType), /* .memSize */
    UA_TYPES_CRCL_STOPMOTIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    StopMotionDataType_members  /* .members */
    UA_TYPENAME("StopMotionDataType") /* .typeName */
},
/* OpenToolChangerDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15056LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15185LU}}, /* .binaryEncodingId */
    sizeof(UA_OpenToolChangerDataType), /* .memSize */
    UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    OpenToolChangerDataType_members  /* .members */
    UA_TYPENAME("OpenToolChangerDataType") /* .typeName */
},
/* SetForceUnitsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15062LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15191LU}}, /* .binaryEncodingId */
    sizeof(UA_SetForceUnitsDataType), /* .memSize */
    UA_TYPES_CRCL_SETFORCEUNITSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetForceUnitsDataType_members  /* .members */
    UA_TYPENAME("SetForceUnitsDataType") /* .typeName */
},
/* SetEndeffectorDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15060LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15189LU}}, /* .binaryEncodingId */
    sizeof(UA_SetEndeffectorDataType), /* .memSize */
    UA_TYPES_CRCL_SETENDEFFECTORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetEndeffectorDataType_members  /* .members */
    UA_TYPENAME("SetEndeffectorDataType") /* .typeName */
},
/* EnableGripperParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15139LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15264LU}}, /* .binaryEncodingId */
    sizeof(UA_EnableGripperParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_ENABLEGRIPPERPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    EnableGripperParametersSetDataType_members  /* .members */
    UA_TYPENAME("EnableGripperParametersSetDataType") /* .typeName */
},
/* ConfigureJointReportsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15081LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15210LU}}, /* .binaryEncodingId */
    sizeof(UA_ConfigureJointReportsDataType), /* .memSize */
    UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    ConfigureJointReportsDataType_members  /* .members */
    UA_TYPENAME("ConfigureJointReportsDataType") /* .typeName */
},
/* CloseToolChangerDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15050LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15179LU}}, /* .binaryEncodingId */
    sizeof(UA_CloseToolChangerDataType), /* .memSize */
    UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CloseToolChangerDataType_members  /* .members */
    UA_TYPENAME("CloseToolChangerDataType") /* .typeName */
},
/* GetStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15052LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15181LU}}, /* .binaryEncodingId */
    sizeof(UA_GetStatusDataType), /* .memSize */
    UA_TYPES_CRCL_GETSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    GetStatusDataType_members  /* .members */
    UA_TYPENAME("GetStatusDataType") /* .typeName */
},
/* CRCL_WrenchDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15018LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15149LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_WrenchDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_WRENCHDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    CRCL_WrenchDataType_members  /* .members */
    UA_TYPENAME("CRCL_WrenchDataType") /* .typeName */
},
/* CRCL_CommandStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15084LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15211LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_CommandStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    10, /* .membersSize */
    CRCL_CommandStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_CommandStatusDataType") /* .typeName */
},
/* InitCanonDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15043LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15172LU}}, /* .binaryEncodingId */
    sizeof(UA_InitCanonDataType), /* .memSize */
    UA_TYPES_CRCL_INITCANONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    InitCanonDataType_members  /* .members */
    UA_TYPENAME("InitCanonDataType") /* .typeName */
},
/* DisableRobotParameterStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15075LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15204LU}}, /* .binaryEncodingId */
    sizeof(UA_DisableRobotParameterStatusDataType), /* .memSize */
    UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    DisableRobotParameterStatusDataType_members  /* .members */
    UA_TYPENAME("DisableRobotParameterStatusDataType") /* .typeName */
},
/* ConfigureJointReportsParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15119LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15244LU}}, /* .binaryEncodingId */
    sizeof(UA_ConfigureJointReportsParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ConfigureJointReportsParametersSetDataType_members  /* .members */
    UA_TYPENAME("ConfigureJointReportsParametersSetDataType") /* .typeName */
},
/* CRCL_PoseDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15013LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15147LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PoseDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_POSEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CRCL_PoseDataType_members  /* .members */
    UA_TYPENAME("CRCL_PoseDataType") /* .typeName */
},
/* CRCL_TransSpeedDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15032LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15163LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransSpeedDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UNION, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_TransSpeedDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransSpeedDataType") /* .typeName */
},
/* MoveToDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15049LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15178LU}}, /* .binaryEncodingId */
    sizeof(UA_MoveToDataType), /* .memSize */
    UA_TYPES_CRCL_MOVETODATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    MoveToDataType_members  /* .members */
    UA_TYPENAME("MoveToDataType") /* .typeName */
},
/* MoveToParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15114LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15239LU}}, /* .binaryEncodingId */
    sizeof(UA_MoveToParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    MoveToParametersSetDataType_members  /* .members */
    UA_TYPENAME("MoveToParametersSetDataType") /* .typeName */
},
/* CRCL_VacuumGripperStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15094LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15221LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_VacuumGripperStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_VacuumGripperStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_VacuumGripperStatusDataType") /* .typeName */
},
/* CRCL_RotSpeedDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15026LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15157LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_RotSpeedDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UNION, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_RotSpeedDataType_members  /* .members */
    UA_TYPENAME("CRCL_RotSpeedDataType") /* .typeName */
},
/* SetMotionCoordinationDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15065LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15194LU}}, /* .binaryEncodingId */
    sizeof(UA_SetMotionCoordinationDataType), /* .memSize */
    UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetMotionCoordinationDataType_members  /* .members */
    UA_TYPENAME("SetMotionCoordinationDataType") /* .typeName */
},
/* DwellDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15051LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15180LU}}, /* .binaryEncodingId */
    sizeof(UA_DwellDataType), /* .memSize */
    UA_TYPES_CRCL_DWELLDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    DwellDataType_members  /* .members */
    UA_TYPENAME("DwellDataType") /* .typeName */
},
/* CRCL_CountSensorStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15086LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15213LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_CountSensorStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    CRCL_CountSensorStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_CountSensorStatusDataType") /* .typeName */
},
/* SetRotAccelDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15077LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15206LU}}, /* .binaryEncodingId */
    sizeof(UA_SetRotAccelDataType), /* .memSize */
    UA_TYPES_CRCL_SETROTACCELDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetRotAccelDataType_members  /* .members */
    UA_TYPENAME("SetRotAccelDataType") /* .typeName */
},
/* EnableGripperDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15072LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15201LU}}, /* .binaryEncodingId */
    sizeof(UA_EnableGripperDataType), /* .memSize */
    UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    EnableGripperDataType_members  /* .members */
    UA_TYPENAME("EnableGripperDataType") /* .typeName */
},
/* MiddleCommandDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15041LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15170LU}}, /* .binaryEncodingId */
    sizeof(UA_MiddleCommandDataType), /* .memSize */
    UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    MiddleCommandDataType_members  /* .members */
    UA_TYPENAME("MiddleCommandDataType") /* .typeName */
},
/* SetRotSpeedDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15079LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15208LU}}, /* .binaryEncodingId */
    sizeof(UA_SetRotSpeedDataType), /* .memSize */
    UA_TYPES_CRCL_SETROTSPEEDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetRotSpeedDataType_members  /* .members */
    UA_TYPENAME("SetRotSpeedDataType") /* .typeName */
},
/* CRCL_SensorStatusesDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15090LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15217LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_SensorStatusesDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_SensorStatusesDataType_members  /* .members */
    UA_TYPENAME("CRCL_SensorStatusesDataType") /* .typeName */
},
/* SetForceUnitsParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15130LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15255LU}}, /* .binaryEncodingId */
    sizeof(UA_SetForceUnitsParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETFORCEUNITSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetForceUnitsParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetForceUnitsParametersSetDataType") /* .typeName */
},
/* DisableSensorDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15071LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15200LU}}, /* .binaryEncodingId */
    sizeof(UA_DisableSensorDataType), /* .memSize */
    UA_TYPES_CRCL_DISABLESENSORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    DisableSensorDataType_members  /* .members */
    UA_TYPENAME("DisableSensorDataType") /* .typeName */
},
/* CRCL_JointPositionsTolerancesDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15038LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15167LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_JointPositionsTolerancesDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCL_JointPositionsTolerancesDataType_members  /* .members */
    UA_TYPENAME("CRCL_JointPositionsTolerancesDataType") /* .typeName */
},
/* EnableSensorDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15070LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15199LU}}, /* .binaryEncodingId */
    sizeof(UA_EnableSensorDataType), /* .memSize */
    UA_TYPES_CRCL_ENABLESENSORDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    EnableSensorDataType_members  /* .members */
    UA_TYPENAME("EnableSensorDataType") /* .typeName */
},
/* SetRotSpeedParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15126LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15251LU}}, /* .binaryEncodingId */
    sizeof(UA_SetRotSpeedParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETROTSPEEDPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetRotSpeedParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetRotSpeedParametersSetDataType") /* .typeName */
},
/* SetEndeffectorParametersDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15059LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15188LU}}, /* .binaryEncodingId */
    sizeof(UA_SetEndeffectorParametersDataType), /* .memSize */
    UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetEndeffectorParametersDataType_members  /* .members */
    UA_TYPENAME("SetEndeffectorParametersDataType") /* .typeName */
},
/* EnableRobotParameterStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15074LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15203LU}}, /* .binaryEncodingId */
    sizeof(UA_EnableRobotParameterStatusDataType), /* .memSize */
    UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    EnableRobotParameterStatusDataType_members  /* .members */
    UA_TYPENAME("EnableRobotParameterStatusDataType") /* .typeName */
},
/* EndCanonDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15042LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15171LU}}, /* .binaryEncodingId */
    sizeof(UA_EndCanonDataType), /* .memSize */
    UA_TYPES_CRCL_ENDCANONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    EndCanonDataType_members  /* .members */
    UA_TYPENAME("EndCanonDataType") /* .typeName */
},
/* SetAngleUnitsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15058LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15187LU}}, /* .binaryEncodingId */
    sizeof(UA_SetAngleUnitsDataType), /* .memSize */
    UA_TYPES_CRCL_SETANGLEUNITSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetAngleUnitsDataType_members  /* .members */
    UA_TYPENAME("SetAngleUnitsDataType") /* .typeName */
},
/* MoveScrewParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15115LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15240LU}}, /* .binaryEncodingId */
    sizeof(UA_MoveScrewParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_MOVESCREWPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    MoveScrewParametersSetDataType_members  /* .members */
    UA_TYPENAME("MoveScrewParametersSetDataType") /* .typeName */
},
/* SetTorqueUnitsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15067LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15196LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTorqueUnitsDataType), /* .memSize */
    UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetTorqueUnitsDataType_members  /* .members */
    UA_TYPENAME("SetTorqueUnitsDataType") /* .typeName */
},
/* StopMotionParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15135LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15260LU}}, /* .binaryEncodingId */
    sizeof(UA_StopMotionParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_STOPMOTIONPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    StopMotionParametersSetDataType_members  /* .members */
    UA_TYPENAME("StopMotionParametersSetDataType") /* .typeName */
},
/* SetEndPoseToleranceDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15061LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15190LU}}, /* .binaryEncodingId */
    sizeof(UA_SetEndPoseToleranceDataType), /* .memSize */
    UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetEndPoseToleranceDataType_members  /* .members */
    UA_TYPENAME("SetEndPoseToleranceDataType") /* .typeName */
},
/* MessageDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15053LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15182LU}}, /* .binaryEncodingId */
    sizeof(UA_MessageDataType), /* .memSize */
    UA_TYPES_CRCL_MESSAGEDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    MessageDataType_members  /* .members */
    UA_TYPENAME("MessageDataType") /* .typeName */
},
/* CRCL_PoseStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15096LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15223LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PoseStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    6, /* .membersSize */
    CRCL_PoseStatusDataType_members  /* .members */
    UA_TYPENAME("CRCL_PoseStatusDataType") /* .typeName */
},
/* MoveThroughToDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15055LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15184LU}}, /* .binaryEncodingId */
    sizeof(UA_MoveThroughToDataType), /* .memSize */
    UA_TYPES_CRCL_MOVETHROUGHTODATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    9, /* .membersSize */
    MoveThroughToDataType_members  /* .members */
    UA_TYPENAME("MoveThroughToDataType") /* .typeName */
},
/* DisableGripperDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15073LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15202LU}}, /* .binaryEncodingId */
    sizeof(UA_DisableGripperDataType), /* .memSize */
    UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    DisableGripperDataType_members  /* .members */
    UA_TYPENAME("DisableGripperDataType") /* .typeName */
},
/* SetLengthUnitsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15064LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15193LU}}, /* .binaryEncodingId */
    sizeof(UA_SetLengthUnitsDataType), /* .memSize */
    UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetLengthUnitsDataType_members  /* .members */
    UA_TYPENAME("SetLengthUnitsDataType") /* .typeName */
},
/* CRCL_ActuateJointDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15045LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15174LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_ActuateJointDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    5, /* .membersSize */
    CRCL_ActuateJointDataType_members  /* .members */
    UA_TYPENAME("CRCL_ActuateJointDataType") /* .typeName */
},
/* MoveThroughToParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15116LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15241LU}}, /* .binaryEncodingId */
    sizeof(UA_MoveThroughToParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_MOVETHROUGHTOPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    4, /* .membersSize */
    MoveThroughToParametersSetDataType_members  /* .members */
    UA_TYPENAME("MoveThroughToParametersSetDataType") /* .typeName */
},
/* CRCL_TransAccelDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15029LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15160LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_TransAccelDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UNION, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    CRCL_TransAccelDataType_members  /* .members */
    UA_TYPENAME("CRCL_TransAccelDataType") /* .typeName */
},
/* MoveScrewDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15054LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15183LU}}, /* .binaryEncodingId */
    sizeof(UA_MoveScrewDataType), /* .memSize */
    UA_TYPES_CRCL_MOVESCREWDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    11, /* .membersSize */
    MoveScrewDataType_members  /* .members */
    UA_TYPENAME("MoveScrewDataType") /* .typeName */
},
/* SetDefaultJointPositionsTolerancesDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15076LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15205LU}}, /* .binaryEncodingId */
    sizeof(UA_SetDefaultJointPositionsTolerancesDataType), /* .memSize */
    UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetDefaultJointPositionsTolerancesDataType_members  /* .members */
    UA_TYPENAME("SetDefaultJointPositionsTolerancesDataType") /* .typeName */
},
/* SetTransSpeedParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15124LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15249LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTransSpeedParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETTRANSSPEEDPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetTransSpeedParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetTransSpeedParametersSetDataType") /* .typeName */
},
/* SetDefaultJointPositionsTolerancesParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15120LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15245LU}}, /* .binaryEncodingId */
    sizeof(UA_SetDefaultJointPositionsTolerancesParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetDefaultJointPositionsTolerancesParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetDefaultJointPositionsTolerancesParametersSetDataType") /* .typeName */
},
/* CRCLStatusDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15100LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15227LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCLStatusDataType), /* .memSize */
    UA_TYPES_CRCL_CRCLSTATUSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    CRCLStatusDataType_members  /* .members */
    UA_TYPENAME("CRCLStatusDataType") /* .typeName */
},
/* SetTransSpeedDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15080LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15209LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTransSpeedDataType), /* .memSize */
    UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetTransSpeedDataType_members  /* .members */
    UA_TYPENAME("SetTransSpeedDataType") /* .typeName */
},
/* ActuateJointsDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15048LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15177LU}}, /* .binaryEncodingId */
    sizeof(UA_ActuateJointsDataType), /* .memSize */
    UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    8, /* .membersSize */
    ActuateJointsDataType_members  /* .members */
    UA_TYPENAME("ActuateJointsDataType") /* .typeName */
},
/* CRCL_PoseAndSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15039LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15168LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCL_PoseAndSetDataType), /* .memSize */
    UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    11, /* .membersSize */
    CRCL_PoseAndSetDataType_members  /* .members */
    UA_TYPENAME("CRCL_PoseAndSetDataType") /* .typeName */
},
/* SetTransAccelParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15125LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15250LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTransAccelParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_SETTRANSACCELPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    SetTransAccelParametersSetDataType_members  /* .members */
    UA_TYPENAME("SetTransAccelParametersSetDataType") /* .typeName */
},
/* ActuateJointsParametersSetDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15118LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15243LU}}, /* .binaryEncodingId */
    sizeof(UA_ActuateJointsParametersSetDataType), /* .memSize */
    UA_TYPES_CRCL_ACTUATEJOINTSPARAMETERSSETDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    ActuateJointsParametersSetDataType_members  /* .members */
    UA_TYPENAME("ActuateJointsParametersSetDataType") /* .typeName */
},
/* SetTransAccelDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15078LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15207LU}}, /* .binaryEncodingId */
    sizeof(UA_SetTransAccelDataType), /* .memSize */
    UA_TYPES_CRCL_SETTRANSACCELDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SetTransAccelDataType_members  /* .members */
    UA_TYPENAME("SetTransAccelDataType") /* .typeName */
},
/* CRCLCommandsUnionDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15103LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15230LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCLCommandsUnionDataType), /* .memSize */
    UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_UNION, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    35, /* .membersSize */
    CRCLCommandsUnionDataType_members  /* .members */
    UA_TYPENAME("CRCLCommandsUnionDataType") /* .typeName */
},
/* CRCLSkillDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15104LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15231LU}}, /* .binaryEncodingId */
    sizeof(UA_CRCLSkillDataType), /* .memSize */
    UA_TYPES_CRCL_CRCLSKILLDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    3, /* .membersSize */
    CRCLSkillDataType_members  /* .members */
    UA_TYPENAME("CRCLSkillDataType") /* .typeName */
},
/* SAMYRobotDataType */
{
    {2, UA_NODEIDTYPE_NUMERIC, {15102LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {15229LU}}, /* .binaryEncodingId */
    sizeof(UA_SAMYRobotDataType), /* .memSize */
    UA_TYPES_CRCL_SAMYROBOTDATATYPE, /* .typeIndex */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    false, /* .pointerFree */
    false, /* .overlayable */
    7, /* .membersSize */
    SAMYRobotDataType_members  /* .members */
    UA_TYPENAME("SAMYRobotDataType") /* .typeName */
},
};

