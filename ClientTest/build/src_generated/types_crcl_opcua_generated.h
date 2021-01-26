/* Generated from CRCL.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py * on host jbg by user jbg at 2021-01-26 09:49:51 */
#ifndef TYPES_CRCL_OPCUA_GENERATED_H_
#define TYPES_CRCL_OPCUA_GENERATED_H_
#ifdef UA_ENABLE_AMALGAMATION
#include "open62541.h"
#else
#include <open62541/types.h>
#include <open62541/types_generated.h>

#endif
_UA_BEGIN_DECLS

/**
 * Every type is assigned an index in an array containing the type descriptions.
 * These descriptions are used during type handling (copying, deletion,
 * binary encoding, ...). */
#define UA_TYPES_CRCL_OPCUA_COUNT 97
extern UA_EXPORT const UA_DataType UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_COUNT];

/**
 * CRCL_PositiveDecimalDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef UA_ByteString UA_CRCL_PositiveDecimalDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_POSITIVEDECIMALDATATYPE 0

/**
 * CRCL_PoseToleranceDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL PoseTolerance DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Double xPointTolerance;
    UA_Double yPointTolerance;
    UA_Double zPointTolerance;
    UA_Double xAxisTolerance;
    UA_Double zAxisTolerance;
} UA_CRCL_PoseToleranceDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE 1

/**
 * CRCL_ActuateJointDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL ActuateJointType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Int32 jointNumber;
    UA_Double cRCLJointPosition;
    UA_Variant cRCLJointDetails;
} UA_CRCL_ActuateJointDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_ACTUATEJOINTDATATYPE 2

/**
 * UnionTestDataType
 * ^^^^^^^^^^^^^^^^^
 * CRCL SetTransSpeed */
typedef enum {
    UA_UNIONTESTDATATYPESWITCH_NONE = 0,
    UA_UNIONTESTDATATYPESWITCH_STRINGVALUE = 1,
    UA_UNIONTESTDATATYPESWITCH_BOOLEANVALUE = 2,
    UA_UNIONTESTDATATYPESWITCH_UINT32VALUE = 3,
    __UA_UNIONTESTDATATYPESWITCH_FORCE32BIT = 0x7fffffff
} UA_UnionTestDataTypeSwitch;
UA_STATIC_ASSERT(sizeof(UA_UnionTestDataTypeSwitch) == sizeof(UA_Int32), enum_must_be_32bit);

typedef struct {
    UA_UnionTestDataTypeSwitch switchField;
    union {
        UA_String stringValue;
        UA_Boolean booleanValue;
        UA_UInt32 uint32Value;
    } fields;
} UA_UnionTestDataType;

#define UA_TYPES_CRCL_OPCUA_UNIONTESTDATATYPE 3

/**
 * CRCL_JointDetailsDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL JointDetailsType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
} UA_CRCL_JointDetailsDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_JOINTDETAILSDATATYPE 4

/**
 * CRCL_TransAccelDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL TransAccelAbsolute DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
} UA_CRCL_TransAccelDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELDATATYPE 5

/**
 * CRCL_TransAccelAbsoluteDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL TransAccelAbsolute DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Double setting;
} UA_CRCL_TransAccelAbsoluteDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELABSOLUTEDATATYPE 6

/**
 * CRCL_FractionDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * Fraction structure */
typedef struct {
    UA_Double fraction;
    UA_Double fractionMax;
    UA_Double fractionMin;
} UA_CRCL_FractionDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE 7

/**
 * CRCL_JointLimitDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 * Pose Status DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 jointNumber;
    UA_Double jointMinPosition;
    UA_Double jointMaxPosition;
    UA_Double jointMaxTorqueOrForce;
    UA_Double jointMaxVelocity;
} UA_CRCL_JointLimitDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_JOINTLIMITDATATYPE 8

/**
 * CRCL_DataThingDataType
 * ^^^^^^^^^^^^^^^^^^^^^^
 * Fraction structure */
typedef struct {
    UA_UInt32 id;
    UA_String name;
} UA_CRCL_DataThingDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_DATATHINGDATATYPE 9

/**
 * CRCL_TorqueUnitEnumDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_CRCL_TORQUEUNITENUMDATATYPE_NEWTONMETER = 0,
    UA_CRCL_TORQUEUNITENUMDATATYPE_FOOTPOUND = 1,
    __UA_CRCL_TORQUEUNITENUMDATATYPE_FORCE32BIT = 0x7fffffff
} UA_CRCL_TorqueUnitEnumDataType;
UA_STATIC_ASSERT(sizeof(UA_CRCL_TorqueUnitEnumDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_CRCL_OPCUA_CRCL_TORQUEUNITENUMDATATYPE 10

/**
 * CRCL_TransSpeedDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL TransAccelAbsolute DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
} UA_CRCL_TransSpeedDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDDATATYPE 11

/**
 * CRCL_RotSpeedDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL RotSpeedDataType DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
} UA_CRCL_RotSpeedDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDDATATYPE 12

/**
 * CRCL_AngleUnitEnumDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_CRCL_ANGLEUNITENUMDATATYPE_DEGREE = 0,
    UA_CRCL_ANGLEUNITENUMDATATYPE_RADIAN = 1,
    __UA_CRCL_ANGLEUNITENUMDATATYPE_FORCE32BIT = 0x7fffffff
} UA_CRCL_AngleUnitEnumDataType;
UA_STATIC_ASSERT(sizeof(UA_CRCL_AngleUnitEnumDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_CRCL_OPCUA_CRCL_ANGLEUNITENUMDATATYPE 13

/**
 * JointSpeedAccelDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL ActuateJointsType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Double cRCLJointSpeed;
    UA_Double cRCLJointAccel;
} UA_JointSpeedAccelDataType;

#define UA_TYPES_CRCL_OPCUA_JOINTSPEEDACCELDATATYPE 14

/**
 * CRCL_JointStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 * Pose Status DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 jointNumber;
    UA_Double jointPosition;
    UA_Double jointTorqueOrForce;
    UA_Double jointVelocity;
} UA_CRCL_JointStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSDATATYPE 15

/**
 * CRCL_TransSpeedAbsoluteDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL TransSpeedAbsolute DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Double setting;
} UA_CRCL_TransSpeedAbsoluteDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDABSOLUTEDATATYPE 16

/**
 * CRCL_ParameterSettingDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL ParameterSetting DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String parameterName;
    UA_String parameterValue;
} UA_CRCL_ParameterSettingDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE 17

/**
 * CRCL_ConfigureJointReportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL ConfigureJointReportDataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Int32 jointNumber;
    UA_Boolean reportPosition;
    UA_Boolean reportTorqueOrForce;
    UA_Boolean reportVelocity;
} UA_CRCL_ConfigureJointReportDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_CONFIGUREJOINTREPORTDATATYPE 18

/**
 * CRCL_ForceUnitEnumDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_CRCL_FORCEUNITENUMDATATYPE_NEWTON = 0,
    UA_CRCL_FORCEUNITENUMDATATYPE_POUND = 1,
    UA_CRCL_FORCEUNITENUMDATATYPE_OUNCE = 2,
    __UA_CRCL_FORCEUNITENUMDATATYPE_FORCE32BIT = 0x7fffffff
} UA_CRCL_ForceUnitEnumDataType;
UA_STATIC_ASSERT(sizeof(UA_CRCL_ForceUnitEnumDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_CRCL_OPCUA_CRCL_FORCEUNITENUMDATATYPE 19

/**
 * CRCL_JointPositionToleranceSettingDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL JointPositionToleranceSettingDataType DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Int32 jointNumber;
    UA_Double jointPositionTolerance;
} UA_CRCL_JointPositionToleranceSettingDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE 20

/**
 * CRCL_RotAccelAbsoluteDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL RotAccelAbsolute DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Double setting;
} UA_CRCL_RotAccelAbsoluteDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELABSOLUTEDATATYPE 21

/**
 * CRCL_CommandStateEnumDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_CRCL_COMMANDSTATEENUMDATATYPE_CRCL_DONE = 0,
    UA_CRCL_COMMANDSTATEENUMDATATYPE_CRCL_ERROR = 1,
    UA_CRCL_COMMANDSTATEENUMDATATYPE_CRCL_WORKING = 2,
    UA_CRCL_COMMANDSTATEENUMDATATYPE_CRCL_READY = 3,
    __UA_CRCL_COMMANDSTATEENUMDATATYPE_FORCE32BIT = 0x7fffffff
} UA_CRCL_CommandStateEnumDataType;
UA_STATIC_ASSERT(sizeof(UA_CRCL_CommandStateEnumDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATEENUMDATATYPE 22

/**
 * CRCL_LengthUnitEnumDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_CRCL_LENGTHUNITENUMDATATYPE_METER = 0,
    UA_CRCL_LENGTHUNITENUMDATATYPE_MILLIMETER = 1,
    UA_CRCL_LENGTHUNITENUMDATATYPE_INCH = 2,
    __UA_CRCL_LENGTHUNITENUMDATATYPE_FORCE32BIT = 0x7fffffff
} UA_CRCL_LengthUnitEnumDataType;
UA_STATIC_ASSERT(sizeof(UA_CRCL_LengthUnitEnumDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_CRCL_OPCUA_CRCL_LENGTHUNITENUMDATATYPE 23

/**
 * CRCL_VectorDataType
 * ^^^^^^^^^^^^^^^^^^^
 * CRCL 3D Vector DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Double i;
    UA_Double j;
    UA_Double k;
} UA_CRCL_VectorDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE 24

/**
 * CRCL_GripperStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 * GripperStatus DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String gripperName;
    size_t gripperOptionSize;
    UA_CRCL_ParameterSettingDataType *gripperOption;
    UA_Boolean holdingObject;
} UA_CRCL_GripperStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_GRIPPERSTATUSDATATYPE 25

/**
 * CRCL_PointDataType
 * ^^^^^^^^^^^^^^^^^^
 * CRCL 3D Point DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Double x;
    UA_Double y;
    UA_Double z;
} UA_CRCL_PointDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE 26

/**
 * JointForceTorqueDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL ActuateJointsType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Double cRCLSetting;
    UA_Double cRCLChangeRate;
} UA_JointForceTorqueDataType;

#define UA_TYPES_CRCL_OPCUA_JOINTFORCETORQUEDATATYPE 27

/**
 * CRCL_GuardLimitEnumDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_CRCL_GUARDLIMITENUMDATATYPE_OVER_MAX = 0,
    UA_CRCL_GUARDLIMITENUMDATATYPE_UNDER_MIN = 1,
    UA_CRCL_GUARDLIMITENUMDATATYPE_INCREASE_OVER_LIMIT = 2,
    UA_CRCL_GUARDLIMITENUMDATATYPE_DECREASE_BEYOND_LIMIT = 3,
    __UA_CRCL_GUARDLIMITENUMDATATYPE_FORCE32BIT = 0x7fffffff
} UA_CRCL_GuardLimitEnumDataType;
UA_STATIC_ASSERT(sizeof(UA_CRCL_GuardLimitEnumDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_CRCL_OPCUA_CRCL_GUARDLIMITENUMDATATYPE 28

/**
 * CRCL_RotSpeedRelativeDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL RotSpeedRelative DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_FractionDataType fraction;
} UA_CRCL_RotSpeedRelativeDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDRELATIVEDATATYPE 29

/**
 * CRCL_RotAccelRelativeDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL RotAccelRelative DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_FractionDataType fraction;
} UA_CRCL_RotAccelRelativeDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELRELATIVEDATATYPE 30

/**
 * CRCL_RotAccelDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL RotAccel DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
} UA_CRCL_RotAccelDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELDATATYPE 31

/**
 * CRCL_ScalarSensorStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL State of a scalar sensor */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String sensorID;
    UA_UInt32 readCount;
    UA_UInt32 lastReadTime;
    size_t sensorParameterSettingSize;
    UA_CRCL_ParameterSettingDataType *sensorParameterSetting;
    UA_Double scalarValue;
} UA_CRCL_ScalarSensorStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_SCALARSENSORSTATUSDATATYPE 32

/**
 * PubSubIPAddresses
 * ^^^^^^^^^^^^^^^^^
 * PubSub IP addresses: IPAddress_Skill is the address where the SAMYCore is Publishing and the SAMYPlugIn is Subscribed; IPAddress_Status is the address where the SAMYCore is Subscribed and the SAMYCore is Publishing */
typedef struct {
    UA_String iPAddress_Skill;
    UA_String iPAddress_Status;
} UA_PubSubIPAddresses;

#define UA_TYPES_CRCL_OPCUA_PUBSUBIPADDRESSES 33

/**
 * CRCL_JointStatusesDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 * Pose Status DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    size_t jointStatusSize;
    UA_CRCL_JointStatusDataType *jointStatus;
} UA_CRCL_JointStatusesDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSESDATATYPE 34

/**
 * CRCL_StopConditionEnumDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 */
typedef enum {
    UA_CRCL_STOPCONDITIONENUMDATATYPE_IMMEDIATE = 0,
    UA_CRCL_STOPCONDITIONENUMDATATYPE_FAST = 1,
    UA_CRCL_STOPCONDITIONENUMDATATYPE_NORMAL = 2,
    __UA_CRCL_STOPCONDITIONENUMDATATYPE_FORCE32BIT = 0x7fffffff
} UA_CRCL_StopConditionEnumDataType;
UA_STATIC_ASSERT(sizeof(UA_CRCL_StopConditionEnumDataType) == sizeof(UA_Int32), enum_must_be_32bit);

#define UA_TYPES_CRCL_OPCUA_CRCL_STOPCONDITIONENUMDATATYPE 35

/**
 * CRCL_RotSpeedAbsoluteDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL RotSpeedAbsolute DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_Double setting;
} UA_CRCL_RotSpeedAbsoluteDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDABSOLUTEDATATYPE 36

/**
 * CRCL_GuardDataType
 * ^^^^^^^^^^^^^^^^^^
 * CRCL GuardType DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String sensorID;
    UA_String subField;
    UA_CRCL_GuardLimitEnumDataType limitType;
    UA_Double limitValue;
    UA_UInt32 recheckTimeMicroSeconds;
    UA_UInt32 checkCount;
    UA_UInt32 lastCheckTime;
    UA_Double lastCheckValue;
} UA_CRCL_GuardDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE 37

/**
 * ConfigureStatusReportDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL ConfigureStatusReport */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_Boolean reportJointStatuses;
    UA_Boolean reportPoseStatus;
    UA_Boolean reportGripperStatus;
    UA_Boolean reportSettingsStatus;
    UA_Boolean reportSensorsStatus;
    UA_Boolean reportGuardsStatus;
} UA_ConfigureStatusReportDataType;

#define UA_TYPES_CRCL_OPCUA_CONFIGURESTATUSREPORTDATATYPE 38

/**
 * RunProgramDataType
 * ^^^^^^^^^^^^^^^^^^
 * CRCL RunProgram */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_String programText;
} UA_RunProgramDataType;

#define UA_TYPES_CRCL_OPCUA_RUNPROGRAMDATATYPE 39

/**
 * CRCL_ParallelGripperStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * GripperStatus DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String gripperName;
    size_t gripperOptionSize;
    UA_CRCL_ParameterSettingDataType *gripperOption;
    UA_Boolean holdingObject;
    UA_Double seperation;
} UA_CRCL_ParallelGripperStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_PARALLELGRIPPERSTATUSDATATYPE 40

/**
 * CRCLCommandDataType
 * ^^^^^^^^^^^^^^^^^^^
 * Base CRCLCommand */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
} UA_CRCLCommandDataType;

#define UA_TYPES_CRCL_OPCUA_CRCLCOMMANDDATATYPE 41

/**
 * SetIntermediatePoseToleranceDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetIntermediatePoseTolerance */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_CRCL_PoseToleranceDataType tolerance;
} UA_SetIntermediatePoseToleranceDataType;

#define UA_TYPES_CRCL_OPCUA_SETINTERMEDIATEPOSETOLERANCEDATATYPE 42

/**
 * SetRobotParametersDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetRobotParameters */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    size_t parameterSettingSize;
    UA_CRCL_ParameterSettingDataType *parameterSetting;
} UA_SetRobotParametersDataType;

#define UA_TYPES_CRCL_OPCUA_SETROBOTPARAMETERSDATATYPE 43

/**
 * CRCL_ForceTorqueSensorStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL State of a count sensor */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String sensorID;
    UA_UInt32 readCount;
    UA_UInt32 lastReadTime;
    size_t sensorParameterSettingSize;
    UA_CRCL_ParameterSettingDataType *sensorParameterSetting;
    UA_Double fx;
    UA_Double fy;
    UA_Double fz;
    UA_Double tx;
    UA_Double ty;
    UA_Double tz;
} UA_CRCL_ForceTorqueSensorStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_FORCETORQUESENSORSTATUSDATATYPE 44

/**
 * CRCL_OnOffSensorStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL State of a OnOff sensor */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String sensorID;
    UA_UInt32 readCount;
    UA_UInt32 lastReadTime;
    size_t sensorParameterSettingSize;
    UA_CRCL_ParameterSettingDataType *sensorParameterSetting;
    UA_Boolean on;
} UA_CRCL_OnOffSensorStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_ONOFFSENSORSTATUSDATATYPE 45

/**
 * CRCL_SensorStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL State of a sensor */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String sensorID;
    UA_UInt32 readCount;
    UA_UInt32 lastReadTime;
    size_t sensorParameterSettingSize;
    UA_CRCL_ParameterSettingDataType *sensorParameterSetting;
} UA_CRCL_SensorStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSDATATYPE 46

/**
 * CRCL_TransAccelRelativeDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL TransAccelRelative DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_FractionDataType fraction;
} UA_CRCL_TransAccelRelativeDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELRELATIVEDATATYPE 47

/**
 * CRCL_TransSpeedRelativeDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL TransSpeedRelative DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_FractionDataType fraction;
} UA_CRCL_TransSpeedRelativeDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDRELATIVEDATATYPE 48

/**
 * CRCL_TwistDataType
 * ^^^^^^^^^^^^^^^^^^
 * CRCL 3D Twist DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_VectorDataType linearVelocity;
    UA_CRCL_VectorDataType angularVelocity;
} UA_CRCL_TwistDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_TWISTDATATYPE 49

/**
 * CRCL_SettingsStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * GripperStatus DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_AngleUnitEnumDataType angleUnitName;
    size_t endEffectorParameterSettingSize;
    UA_CRCL_ParameterSettingDataType *endEffectorParameterSetting;
    UA_CRCL_FractionDataType endEffectorSetting;
    UA_CRCL_ForceUnitEnumDataType forceUnitName;
    size_t jointLimitsSize;
    UA_CRCL_JointLimitDataType *jointLimits;
    UA_CRCL_PoseToleranceDataType intermediatePoseTolernace;
    UA_CRCL_LengthUnitEnumDataType lengthUnitName;
    UA_CRCL_PointDataType maxCartesianLimit;
    UA_CRCL_PointDataType minCartesianLimit;
    UA_Boolean motionCoorinated;
    UA_CRCL_PoseToleranceDataType poseTolerance;
    size_t robotParameterSettingSize;
    UA_CRCL_ParameterSettingDataType *robotParameterSetting;
    UA_CRCL_RotAccelAbsoluteDataType rotAccelAbsolute;
    UA_CRCL_RotAccelRelativeDataType rotAccelRelative;
    UA_CRCL_RotSpeedAbsoluteDataType rotSpeedAbsolute;
    UA_CRCL_RotSpeedRelativeDataType rotSpeedRelative;
    UA_CRCL_TorqueUnitEnumDataType torqueUnitName;
    UA_CRCL_TransAccelAbsoluteDataType transAccelAbsolute;
    UA_CRCL_TransAccelRelativeDataType transAccelRelative;
    UA_CRCL_TransSpeedAbsoluteDataType transSpeedAbsolute;
    UA_CRCL_TransSpeedRelativeDataType transSpeedRelative;
} UA_CRCL_SettingsStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_SETTINGSSTATUSDATATYPE 50

/**
 * StopMotionDataType
 * ^^^^^^^^^^^^^^^^^^
 * CRCL StopMotion */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_CRCL_StopConditionEnumDataType stopCondition;
} UA_StopMotionDataType;

#define UA_TYPES_CRCL_OPCUA_STOPMOTIONDATATYPE 51

/**
 * OpenToolChangerDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL OpenToolChanger */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
} UA_OpenToolChangerDataType;

#define UA_TYPES_CRCL_OPCUA_OPENTOOLCHANGERDATATYPE 52

/**
 * SetForceUnitsDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetForceUnits */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_CRCL_ForceUnitEnumDataType unitName;
} UA_SetForceUnitsDataType;

#define UA_TYPES_CRCL_OPCUA_SETFORCEUNITSDATATYPE 53

/**
 * CRCL_ThreeFingerGripperStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * GripperStatus DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String gripperName;
    size_t gripperOptionSize;
    UA_CRCL_ParameterSettingDataType *gripperOption;
    UA_Boolean holdingObject;
    UA_CRCL_FractionDataType finger1Position;
    UA_CRCL_FractionDataType finger2Position;
    UA_CRCL_FractionDataType finger3Position;
    UA_Double finger1Force;
    UA_Double finger2Force;
    UA_Double finger3Force;
} UA_CRCL_ThreeFingerGripperStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE 54

/**
 * CloseToolChangerDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL CloseToolChanger MiddleCommand */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
} UA_CloseToolChangerDataType;

#define UA_TYPES_CRCL_OPCUA_CLOSETOOLCHANGERDATATYPE 55

/**
 * GetStatusDataType
 * ^^^^^^^^^^^^^^^^^
 * CRCL GetStatus */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
} UA_GetStatusDataType;

#define UA_TYPES_CRCL_OPCUA_GETSTATUSDATATYPE 56

/**
 * SetTransSpeedDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetTransSpeed */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_ExtensionObject transSpeed;
} UA_SetTransSpeedDataType;

#define UA_TYPES_CRCL_OPCUA_SETTRANSSPEEDDATATYPE 57

/**
 * CRCL_WrenchDataType
 * ^^^^^^^^^^^^^^^^^^^
 * CRCL 3D Wrench DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_VectorDataType force;
    UA_CRCL_VectorDataType moment;
} UA_CRCL_WrenchDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_WRENCHDATATYPE 58

/**
 * CRCL_CommandStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL Status of a CRCL command */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    UA_UInt32 statusID;
    UA_CRCL_CommandStateEnumDataType commandState;
    UA_String stateDescription;
    UA_String programmFile;
    UA_UInt32 programmIndex;
    UA_UInt32 programmLength;
    UA_UInt32 overridePercent;
} UA_CRCL_CommandStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATUSDATATYPE 59

/**
 * InitCanonDataType
 * ^^^^^^^^^^^^^^^^^
 * CRCL InitCanonType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
} UA_InitCanonDataType;

#define UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE 60

/**
 * DisableRobotParameterStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL DisableRobotParameterStatus */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_String robotParameterName;
} UA_DisableRobotParameterStatusDataType;

#define UA_TYPES_CRCL_OPCUA_DISABLEROBOTPARAMETERSTATUSDATATYPE 61

/**
 * CRCL_PoseDataType
 * ^^^^^^^^^^^^^^^^^
 * CRCL 3D Pose DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_PointDataType point;
    UA_CRCL_VectorDataType xAxis;
    UA_CRCL_VectorDataType zAxis;
} UA_CRCL_PoseDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE 62

/**
 * MoveToDataType
 * ^^^^^^^^^^^^^^
 * CRCL MoveTo */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_Boolean moveStraight;
    UA_CRCL_PoseDataType endPosition;
} UA_MoveToDataType;

#define UA_TYPES_CRCL_OPCUA_MOVETODATATYPE 63

/**
 * CRCL_VacuumGripperStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * GripperStatus DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String gripperName;
    size_t gripperOptionSize;
    UA_CRCL_ParameterSettingDataType *gripperOption;
    UA_Boolean holdingObject;
    UA_Boolean isPowered;
} UA_CRCL_VacuumGripperStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_VACUUMGRIPPERSTATUSDATATYPE 64

/**
 * SetMotionCoordinationDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetMotionCoordination */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_Boolean coordinated;
} UA_SetMotionCoordinationDataType;

#define UA_TYPES_CRCL_OPCUA_SETMOTIONCOORDINATIONDATATYPE 65

/**
 * DwellDataType
 * ^^^^^^^^^^^^^
 * CRCL Dwell */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_Double dwellTime;
} UA_DwellDataType;

#define UA_TYPES_CRCL_OPCUA_DWELLDATATYPE 66

/**
 * CRCL_CountSensorStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL State of a count sensor */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_String sensorID;
    UA_UInt32 readCount;
    UA_UInt32 lastReadTime;
    size_t sensorParameterSettingSize;
    UA_CRCL_ParameterSettingDataType *sensorParameterSetting;
    UA_UInt32 countValue;
} UA_CRCL_CountSensorStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_COUNTSENSORSTATUSDATATYPE 67

/**
 * SetRotAccelDataType
 * ^^^^^^^^^^^^^^^^^^^
 * CRCL SetRotAccel */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_ExtensionObject rotAccel;
} UA_SetRotAccelDataType;

#define UA_TYPES_CRCL_OPCUA_SETROTACCELDATATYPE 68

/**
 * EnableGripperDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL EnableGripper */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_String gripperName;
    size_t gripperOptionSize;
    UA_CRCL_ParameterSettingDataType *gripperOption;
} UA_EnableGripperDataType;

#define UA_TYPES_CRCL_OPCUA_ENABLEGRIPPERDATATYPE 69

/**
 * MiddleCommandDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL MiddleCommand */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
} UA_MiddleCommandDataType;

#define UA_TYPES_CRCL_OPCUA_MIDDLECOMMANDDATATYPE 70

/**
 * SetRotSpeedDataType
 * ^^^^^^^^^^^^^^^^^^^
 * CRCL SetRotSpeed */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_ExtensionObject rotSpeed;
} UA_SetRotSpeedDataType;

#define UA_TYPES_CRCL_OPCUA_SETROTSPEEDDATATYPE 71

/**
 * CRCL_SensorStatusesDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL State of a sensor */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    size_t onOffSensorStatusSize;
    UA_CRCL_OnOffSensorStatusDataType *onOffSensorStatus;
    size_t scalarSensorStatusSize;
    UA_CRCL_ScalarSensorStatusDataType *scalarSensorStatus;
    size_t countSensorStatusSize;
    UA_CRCL_CountSensorStatusDataType *countSensorStatus;
    size_t forceTorqueSensorStatusSize;
    UA_CRCL_ForceTorqueSensorStatusDataType *forceTorqueSensorStatus;
} UA_CRCL_SensorStatusesDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSESDATATYPE 72

/**
 * DisableSensorDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL DisableSensor */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_String sensorID;
} UA_DisableSensorDataType;

#define UA_TYPES_CRCL_OPCUA_DISABLESENSORDATATYPE 73

/**
 * CRCL_JointPositionsTolerancesDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL CRCL_JointPositionsTolerancesDataType DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    size_t settingSize;
    UA_CRCL_JointPositionToleranceSettingDataType *setting;
} UA_CRCL_JointPositionsTolerancesDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE 74

/**
 * EnableSensorDataType
 * ^^^^^^^^^^^^^^^^^^^^
 * CRCL EnableSensor */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_String sensorID;
    size_t sensorOptionSize;
    UA_CRCL_ParameterSettingDataType *sensorOption;
} UA_EnableSensorDataType;

#define UA_TYPES_CRCL_OPCUA_ENABLESENSORDATATYPE 75

/**
 * ActuateJointsDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL ActuateJointsType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_Double cRCLJointSpeed;
    UA_Double cRCLJointAccel;
} UA_ActuateJointsDataType;

#define UA_TYPES_CRCL_OPCUA_ACTUATEJOINTSDATATYPE 76

/**
 * CRCL_PoseAndSetDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL PoseAndSet DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_PointDataType point;
    UA_CRCL_VectorDataType xAxis;
    UA_CRCL_VectorDataType zAxis;
    UA_Boolean coordinated;
    UA_CRCL_TransSpeedDataType transSpeed;
    UA_CRCL_RotSpeedDataType rotSpeed;
    UA_CRCL_TransAccelDataType transAccel;
    UA_CRCL_RotAccelDataType rotAccel;
    UA_CRCL_PoseToleranceDataType poseTolerance;
} UA_CRCL_PoseAndSetDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_POSEANDSETDATATYPE 77

/**
 * EnableRobotParameterStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL EnableRobotParameterStatus */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_String robotParameterName;
} UA_EnableRobotParameterStatusDataType;

#define UA_TYPES_CRCL_OPCUA_ENABLEROBOTPARAMETERSTATUSDATATYPE 78

/**
 * SetEndEffectorParametersDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetEndEffectorParameters */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    size_t parameterSettingSize;
    UA_CRCL_ParameterSettingDataType *parameterSetting;
} UA_SetEndEffectorParametersDataType;

#define UA_TYPES_CRCL_OPCUA_SETENDEFFECTORPARAMETERSDATATYPE 79

/**
 * EndCanonDataType
 * ^^^^^^^^^^^^^^^^
 * CRCL EndCanonType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
} UA_EndCanonDataType;

#define UA_TYPES_CRCL_OPCUA_ENDCANONDATATYPE 80

/**
 * SetEndPoseToleranceDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetEndPoseTolerance */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_CRCL_PoseToleranceDataType tolerance;
} UA_SetEndPoseToleranceDataType;

#define UA_TYPES_CRCL_OPCUA_SETENDPOSETOLERANCEDATATYPE 81

/**
 * SetAngleUnitsDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetAngleUnits */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_CRCL_AngleUnitEnumDataType unitName;
} UA_SetAngleUnitsDataType;

#define UA_TYPES_CRCL_OPCUA_SETANGLEUNITSDATATYPE 82

/**
 * SetTorqueUnitsDataType
 * ^^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetLengthUnits */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_CRCL_TorqueUnitEnumDataType unitName;
} UA_SetTorqueUnitsDataType;

#define UA_TYPES_CRCL_OPCUA_SETTORQUEUNITSDATATYPE 83

/**
 * MessageDataType
 * ^^^^^^^^^^^^^^^
 * CRCL Message */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_String message;
} UA_MessageDataType;

#define UA_TYPES_CRCL_OPCUA_MESSAGEDATATYPE 84

/**
 * CRCL_PoseStatusDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^
 * Pose Status DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_PoseDataType pose;
    UA_CRCL_TwistDataType twist;
    UA_CRCL_WrenchDataType wrench;
    UA_String configuration;
} UA_CRCL_PoseStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCL_POSESTATUSDATATYPE 85

/**
 * MoveThroughToDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL MoveThroughTo */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_Boolean moveStraight;
    size_t waypointSize;
    UA_CRCL_PoseDataType *waypoint;
    UA_UInt32 numPositions;
} UA_MoveThroughToDataType;

#define UA_TYPES_CRCL_OPCUA_MOVETHROUGHTODATATYPE 86

/**
 * SetEndEffectorDataType
 * ^^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetEndEffector */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_CRCL_FractionDataType setting;
} UA_SetEndEffectorDataType;

#define UA_TYPES_CRCL_OPCUA_SETENDEFFECTORDATATYPE 87

/**
 * DisableGripperDataType
 * ^^^^^^^^^^^^^^^^^^^^^^
 * CRCL DisableGripper */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_String gripperName;
} UA_DisableGripperDataType;

#define UA_TYPES_CRCL_OPCUA_DISABLEGRIPPERDATATYPE 88

/**
 * SetTransAccelDataType
 * ^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetTransAccel */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_ExtensionObject transAccel;
} UA_SetTransAccelDataType;

#define UA_TYPES_CRCL_OPCUA_SETTRANSACCELDATATYPE 89

/**
 * SetLengthUnitsDataType
 * ^^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetLengthUnits */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_CRCL_LengthUnitEnumDataType unitName;
} UA_SetLengthUnitsDataType;

#define UA_TYPES_CRCL_OPCUA_SETLENGTHUNITSDATATYPE 90

/**
 * SetDefaultJointPositonsTolerancesDataType
 * ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
 * CRCL SetEndPoseTolerance */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_CRCL_JointPositionsTolerancesDataType jointTolerances;
} UA_SetDefaultJointPositonsTolerancesDataType;

#define UA_TYPES_CRCL_OPCUA_SETDEFAULTJOINTPOSITONSTOLERANCESDATATYPE 91

/**
 * MoveScrewDataType
 * ^^^^^^^^^^^^^^^^^
 * CRCL MoveScrew */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_UInt32 commandID;
    size_t guardSize;
    UA_CRCL_GuardDataType *guard;
    UA_CRCL_PoseDataType startPosition;
    UA_CRCL_PointDataType axisPoint;
    UA_Double axialDistanceFree;
    UA_Double axialDistanceScrew;
    UA_Double turn;
} UA_MoveScrewDataType;

#define UA_TYPES_CRCL_OPCUA_MOVESCREWDATATYPE 92

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

#define UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE 93

/**
 * CRCLStatusDataType
 * ^^^^^^^^^^^^^^^^^^
 * Pose Status DataType */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    UA_CRCL_CommandStatusDataType commandStatus;
    UA_CRCL_JointStatusesDataType jointStatus;
    UA_CRCL_PoseStatusDataType poseStatus;
    UA_CRCL_GripperStatusDataType gripperStatus;
    UA_CRCL_SettingsStatusDataType settingsStatus;
    UA_CRCL_SensorStatusesDataType sensorStatuses;
} UA_CRCLStatusDataType;

#define UA_TYPES_CRCL_OPCUA_CRCLSTATUSDATATYPE 94

/**
 * CRCLSkillDataType
 * ^^^^^^^^^^^^^^^^^
 * CRCLProgramm */
typedef struct {
    UA_UInt32 id;
    UA_String name;
    size_t cRCLCommandsSize;
    UA_CRCLCommandsUnionDataType *cRCLCommands;
} UA_CRCLSkillDataType;

#define UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE 95

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
    UA_PubSubIPAddresses iPAddresses;
} UA_SAMYRobotDataType;

#define UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE 96

_UA_END_DECLS
#endif /* TYPES_CRCL_OPCUA_GENERATED_H_ */
