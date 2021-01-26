/* Generated from CRCL.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2021-01-26 09:49:51 */
#ifndef TYPES_CRCL_OPCUA_GENERATED_HANDLING_H_
#define TYPES_CRCL_OPCUA_GENERATED_HANDLING_H_
#include "types_crcl_opcua_generated.h"
_UA_BEGIN_DECLS
#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* CRCL_PositiveDecimalDataType */
static UA_INLINE void
UA_CRCL_PositiveDecimalDataType_init(UA_CRCL_PositiveDecimalDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PositiveDecimalDataType));
}

static UA_INLINE UA_CRCL_PositiveDecimalDataType *
UA_CRCL_PositiveDecimalDataType_new(void) {
    return (UA_CRCL_PositiveDecimalDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSITIVEDECIMALDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PositiveDecimalDataType_copy(const UA_CRCL_PositiveDecimalDataType *src, UA_CRCL_PositiveDecimalDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSITIVEDECIMALDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PositiveDecimalDataType_deleteMembers(UA_CRCL_PositiveDecimalDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSITIVEDECIMALDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PositiveDecimalDataType_clear(UA_CRCL_PositiveDecimalDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSITIVEDECIMALDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PositiveDecimalDataType_delete(UA_CRCL_PositiveDecimalDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSITIVEDECIMALDATATYPE]);
}

/* CRCL_PoseToleranceDataType */
static UA_INLINE void
UA_CRCL_PoseToleranceDataType_init(UA_CRCL_PoseToleranceDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseToleranceDataType));
}

static UA_INLINE UA_CRCL_PoseToleranceDataType *
UA_CRCL_PoseToleranceDataType_new(void) {
    return (UA_CRCL_PoseToleranceDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseToleranceDataType_copy(const UA_CRCL_PoseToleranceDataType *src, UA_CRCL_PoseToleranceDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseToleranceDataType_deleteMembers(UA_CRCL_PoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseToleranceDataType_clear(UA_CRCL_PoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseToleranceDataType_delete(UA_CRCL_PoseToleranceDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSETOLERANCEDATATYPE]);
}

/* CRCL_ActuateJointDataType */
static UA_INLINE void
UA_CRCL_ActuateJointDataType_init(UA_CRCL_ActuateJointDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ActuateJointDataType));
}

static UA_INLINE UA_CRCL_ActuateJointDataType *
UA_CRCL_ActuateJointDataType_new(void) {
    return (UA_CRCL_ActuateJointDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ACTUATEJOINTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ActuateJointDataType_copy(const UA_CRCL_ActuateJointDataType *src, UA_CRCL_ActuateJointDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ACTUATEJOINTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ActuateJointDataType_deleteMembers(UA_CRCL_ActuateJointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ACTUATEJOINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ActuateJointDataType_clear(UA_CRCL_ActuateJointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ACTUATEJOINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ActuateJointDataType_delete(UA_CRCL_ActuateJointDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ACTUATEJOINTDATATYPE]);
}

/* UnionTestDataType */
static UA_INLINE void
UA_UnionTestDataType_init(UA_UnionTestDataType *p) {
    memset(p, 0, sizeof(UA_UnionTestDataType));
}

static UA_INLINE UA_UnionTestDataType *
UA_UnionTestDataType_new(void) {
    return (UA_UnionTestDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_UNIONTESTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_UnionTestDataType_copy(const UA_UnionTestDataType *src, UA_UnionTestDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_UNIONTESTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_UnionTestDataType_deleteMembers(UA_UnionTestDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_UNIONTESTDATATYPE]);
}

static UA_INLINE void
UA_UnionTestDataType_clear(UA_UnionTestDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_UNIONTESTDATATYPE]);
}

static UA_INLINE void
UA_UnionTestDataType_delete(UA_UnionTestDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_UNIONTESTDATATYPE]);
}

/* CRCL_JointDetailsDataType */
static UA_INLINE void
UA_CRCL_JointDetailsDataType_init(UA_CRCL_JointDetailsDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointDetailsDataType));
}

static UA_INLINE UA_CRCL_JointDetailsDataType *
UA_CRCL_JointDetailsDataType_new(void) {
    return (UA_CRCL_JointDetailsDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTDETAILSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointDetailsDataType_copy(const UA_CRCL_JointDetailsDataType *src, UA_CRCL_JointDetailsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTDETAILSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointDetailsDataType_deleteMembers(UA_CRCL_JointDetailsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTDETAILSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointDetailsDataType_clear(UA_CRCL_JointDetailsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTDETAILSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointDetailsDataType_delete(UA_CRCL_JointDetailsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTDETAILSDATATYPE]);
}

/* CRCL_TransAccelDataType */
static UA_INLINE void
UA_CRCL_TransAccelDataType_init(UA_CRCL_TransAccelDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransAccelDataType));
}

static UA_INLINE UA_CRCL_TransAccelDataType *
UA_CRCL_TransAccelDataType_new(void) {
    return (UA_CRCL_TransAccelDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelDataType_copy(const UA_CRCL_TransAccelDataType *src, UA_CRCL_TransAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransAccelDataType_deleteMembers(UA_CRCL_TransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelDataType_clear(UA_CRCL_TransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelDataType_delete(UA_CRCL_TransAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELDATATYPE]);
}

/* CRCL_TransAccelAbsoluteDataType */
static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_init(UA_CRCL_TransAccelAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransAccelAbsoluteDataType));
}

static UA_INLINE UA_CRCL_TransAccelAbsoluteDataType *
UA_CRCL_TransAccelAbsoluteDataType_new(void) {
    return (UA_CRCL_TransAccelAbsoluteDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelAbsoluteDataType_copy(const UA_CRCL_TransAccelAbsoluteDataType *src, UA_CRCL_TransAccelAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_deleteMembers(UA_CRCL_TransAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_clear(UA_CRCL_TransAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_delete(UA_CRCL_TransAccelAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

/* CRCL_FractionDataType */
static UA_INLINE void
UA_CRCL_FractionDataType_init(UA_CRCL_FractionDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_FractionDataType));
}

static UA_INLINE UA_CRCL_FractionDataType *
UA_CRCL_FractionDataType_new(void) {
    return (UA_CRCL_FractionDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_FractionDataType_copy(const UA_CRCL_FractionDataType *src, UA_CRCL_FractionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_FractionDataType_deleteMembers(UA_CRCL_FractionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE]);
}

static UA_INLINE void
UA_CRCL_FractionDataType_clear(UA_CRCL_FractionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE]);
}

static UA_INLINE void
UA_CRCL_FractionDataType_delete(UA_CRCL_FractionDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FRACTIONDATATYPE]);
}

/* CRCL_JointLimitDataType */
static UA_INLINE void
UA_CRCL_JointLimitDataType_init(UA_CRCL_JointLimitDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointLimitDataType));
}

static UA_INLINE UA_CRCL_JointLimitDataType *
UA_CRCL_JointLimitDataType_new(void) {
    return (UA_CRCL_JointLimitDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTLIMITDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointLimitDataType_copy(const UA_CRCL_JointLimitDataType *src, UA_CRCL_JointLimitDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTLIMITDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointLimitDataType_deleteMembers(UA_CRCL_JointLimitDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTLIMITDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointLimitDataType_clear(UA_CRCL_JointLimitDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTLIMITDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointLimitDataType_delete(UA_CRCL_JointLimitDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTLIMITDATATYPE]);
}

/* CRCL_DataThingDataType */
static UA_INLINE void
UA_CRCL_DataThingDataType_init(UA_CRCL_DataThingDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_DataThingDataType));
}

static UA_INLINE UA_CRCL_DataThingDataType *
UA_CRCL_DataThingDataType_new(void) {
    return (UA_CRCL_DataThingDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_DATATHINGDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_DataThingDataType_copy(const UA_CRCL_DataThingDataType *src, UA_CRCL_DataThingDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_DATATHINGDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_DataThingDataType_deleteMembers(UA_CRCL_DataThingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_DATATHINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_DataThingDataType_clear(UA_CRCL_DataThingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_DATATHINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_DataThingDataType_delete(UA_CRCL_DataThingDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_DATATHINGDATATYPE]);
}

/* CRCL_TorqueUnitEnumDataType */
static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_init(UA_CRCL_TorqueUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TorqueUnitEnumDataType));
}

static UA_INLINE UA_CRCL_TorqueUnitEnumDataType *
UA_CRCL_TorqueUnitEnumDataType_new(void) {
    return (UA_CRCL_TorqueUnitEnumDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TORQUEUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TorqueUnitEnumDataType_copy(const UA_CRCL_TorqueUnitEnumDataType *src, UA_CRCL_TorqueUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TORQUEUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_deleteMembers(UA_CRCL_TorqueUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TORQUEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_clear(UA_CRCL_TorqueUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TORQUEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_delete(UA_CRCL_TorqueUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TORQUEUNITENUMDATATYPE]);
}

/* CRCL_TransSpeedDataType */
static UA_INLINE void
UA_CRCL_TransSpeedDataType_init(UA_CRCL_TransSpeedDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransSpeedDataType));
}

static UA_INLINE UA_CRCL_TransSpeedDataType *
UA_CRCL_TransSpeedDataType_new(void) {
    return (UA_CRCL_TransSpeedDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedDataType_copy(const UA_CRCL_TransSpeedDataType *src, UA_CRCL_TransSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransSpeedDataType_deleteMembers(UA_CRCL_TransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedDataType_clear(UA_CRCL_TransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedDataType_delete(UA_CRCL_TransSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDDATATYPE]);
}

/* CRCL_RotSpeedDataType */
static UA_INLINE void
UA_CRCL_RotSpeedDataType_init(UA_CRCL_RotSpeedDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotSpeedDataType));
}

static UA_INLINE UA_CRCL_RotSpeedDataType *
UA_CRCL_RotSpeedDataType_new(void) {
    return (UA_CRCL_RotSpeedDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedDataType_copy(const UA_CRCL_RotSpeedDataType *src, UA_CRCL_RotSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotSpeedDataType_deleteMembers(UA_CRCL_RotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedDataType_clear(UA_CRCL_RotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedDataType_delete(UA_CRCL_RotSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDDATATYPE]);
}

/* CRCL_AngleUnitEnumDataType */
static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_init(UA_CRCL_AngleUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_AngleUnitEnumDataType));
}

static UA_INLINE UA_CRCL_AngleUnitEnumDataType *
UA_CRCL_AngleUnitEnumDataType_new(void) {
    return (UA_CRCL_AngleUnitEnumDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ANGLEUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_AngleUnitEnumDataType_copy(const UA_CRCL_AngleUnitEnumDataType *src, UA_CRCL_AngleUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ANGLEUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_deleteMembers(UA_CRCL_AngleUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ANGLEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_clear(UA_CRCL_AngleUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ANGLEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_delete(UA_CRCL_AngleUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ANGLEUNITENUMDATATYPE]);
}

/* JointSpeedAccelDataType */
static UA_INLINE void
UA_JointSpeedAccelDataType_init(UA_JointSpeedAccelDataType *p) {
    memset(p, 0, sizeof(UA_JointSpeedAccelDataType));
}

static UA_INLINE UA_JointSpeedAccelDataType *
UA_JointSpeedAccelDataType_new(void) {
    return (UA_JointSpeedAccelDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_JOINTSPEEDACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_JointSpeedAccelDataType_copy(const UA_JointSpeedAccelDataType *src, UA_JointSpeedAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_JOINTSPEEDACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_JointSpeedAccelDataType_deleteMembers(UA_JointSpeedAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_JOINTSPEEDACCELDATATYPE]);
}

static UA_INLINE void
UA_JointSpeedAccelDataType_clear(UA_JointSpeedAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_JOINTSPEEDACCELDATATYPE]);
}

static UA_INLINE void
UA_JointSpeedAccelDataType_delete(UA_JointSpeedAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_JOINTSPEEDACCELDATATYPE]);
}

/* CRCL_JointStatusDataType */
static UA_INLINE void
UA_CRCL_JointStatusDataType_init(UA_CRCL_JointStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointStatusDataType));
}

static UA_INLINE UA_CRCL_JointStatusDataType *
UA_CRCL_JointStatusDataType_new(void) {
    return (UA_CRCL_JointStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusDataType_copy(const UA_CRCL_JointStatusDataType *src, UA_CRCL_JointStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointStatusDataType_deleteMembers(UA_CRCL_JointStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusDataType_clear(UA_CRCL_JointStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusDataType_delete(UA_CRCL_JointStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSDATATYPE]);
}

/* CRCL_TransSpeedAbsoluteDataType */
static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_init(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransSpeedAbsoluteDataType));
}

static UA_INLINE UA_CRCL_TransSpeedAbsoluteDataType *
UA_CRCL_TransSpeedAbsoluteDataType_new(void) {
    return (UA_CRCL_TransSpeedAbsoluteDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedAbsoluteDataType_copy(const UA_CRCL_TransSpeedAbsoluteDataType *src, UA_CRCL_TransSpeedAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_deleteMembers(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_clear(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_delete(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

/* CRCL_ParameterSettingDataType */
static UA_INLINE void
UA_CRCL_ParameterSettingDataType_init(UA_CRCL_ParameterSettingDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ParameterSettingDataType));
}

static UA_INLINE UA_CRCL_ParameterSettingDataType *
UA_CRCL_ParameterSettingDataType_new(void) {
    return (UA_CRCL_ParameterSettingDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ParameterSettingDataType_copy(const UA_CRCL_ParameterSettingDataType *src, UA_CRCL_ParameterSettingDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ParameterSettingDataType_deleteMembers(UA_CRCL_ParameterSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParameterSettingDataType_clear(UA_CRCL_ParameterSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParameterSettingDataType_delete(UA_CRCL_ParameterSettingDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_PARAMETERSETTINGDATATYPE]);
}

/* CRCL_ConfigureJointReportDataType */
static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_init(UA_CRCL_ConfigureJointReportDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ConfigureJointReportDataType));
}

static UA_INLINE UA_CRCL_ConfigureJointReportDataType *
UA_CRCL_ConfigureJointReportDataType_new(void) {
    return (UA_CRCL_ConfigureJointReportDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ConfigureJointReportDataType_copy(const UA_CRCL_ConfigureJointReportDataType *src, UA_CRCL_ConfigureJointReportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_deleteMembers(UA_CRCL_ConfigureJointReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_clear(UA_CRCL_ConfigureJointReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_delete(UA_CRCL_ConfigureJointReportDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

/* CRCL_ForceUnitEnumDataType */
static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_init(UA_CRCL_ForceUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ForceUnitEnumDataType));
}

static UA_INLINE UA_CRCL_ForceUnitEnumDataType *
UA_CRCL_ForceUnitEnumDataType_new(void) {
    return (UA_CRCL_ForceUnitEnumDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FORCEUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ForceUnitEnumDataType_copy(const UA_CRCL_ForceUnitEnumDataType *src, UA_CRCL_ForceUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FORCEUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_deleteMembers(UA_CRCL_ForceUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FORCEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_clear(UA_CRCL_ForceUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FORCEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_delete(UA_CRCL_ForceUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FORCEUNITENUMDATATYPE]);
}

/* CRCL_JointPositionToleranceSettingDataType */
static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_init(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointPositionToleranceSettingDataType));
}

static UA_INLINE UA_CRCL_JointPositionToleranceSettingDataType *
UA_CRCL_JointPositionToleranceSettingDataType_new(void) {
    return (UA_CRCL_JointPositionToleranceSettingDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionToleranceSettingDataType_copy(const UA_CRCL_JointPositionToleranceSettingDataType *src, UA_CRCL_JointPositionToleranceSettingDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_deleteMembers(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_clear(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_delete(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

/* CRCL_RotAccelAbsoluteDataType */
static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_init(UA_CRCL_RotAccelAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotAccelAbsoluteDataType));
}

static UA_INLINE UA_CRCL_RotAccelAbsoluteDataType *
UA_CRCL_RotAccelAbsoluteDataType_new(void) {
    return (UA_CRCL_RotAccelAbsoluteDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelAbsoluteDataType_copy(const UA_CRCL_RotAccelAbsoluteDataType *src, UA_CRCL_RotAccelAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_deleteMembers(UA_CRCL_RotAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_clear(UA_CRCL_RotAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_delete(UA_CRCL_RotAccelAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

/* CRCL_CommandStateEnumDataType */
static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_init(UA_CRCL_CommandStateEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_CommandStateEnumDataType));
}

static UA_INLINE UA_CRCL_CommandStateEnumDataType *
UA_CRCL_CommandStateEnumDataType_new(void) {
    return (UA_CRCL_CommandStateEnumDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATEENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_CommandStateEnumDataType_copy(const UA_CRCL_CommandStateEnumDataType *src, UA_CRCL_CommandStateEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATEENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_deleteMembers(UA_CRCL_CommandStateEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATEENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_clear(UA_CRCL_CommandStateEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATEENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_delete(UA_CRCL_CommandStateEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATEENUMDATATYPE]);
}

/* CRCL_LengthUnitEnumDataType */
static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_init(UA_CRCL_LengthUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_LengthUnitEnumDataType));
}

static UA_INLINE UA_CRCL_LengthUnitEnumDataType *
UA_CRCL_LengthUnitEnumDataType_new(void) {
    return (UA_CRCL_LengthUnitEnumDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_LENGTHUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_LengthUnitEnumDataType_copy(const UA_CRCL_LengthUnitEnumDataType *src, UA_CRCL_LengthUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_LENGTHUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_deleteMembers(UA_CRCL_LengthUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_LENGTHUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_clear(UA_CRCL_LengthUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_LENGTHUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_delete(UA_CRCL_LengthUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_LENGTHUNITENUMDATATYPE]);
}

/* CRCL_VectorDataType */
static UA_INLINE void
UA_CRCL_VectorDataType_init(UA_CRCL_VectorDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_VectorDataType));
}

static UA_INLINE UA_CRCL_VectorDataType *
UA_CRCL_VectorDataType_new(void) {
    return (UA_CRCL_VectorDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_VectorDataType_copy(const UA_CRCL_VectorDataType *src, UA_CRCL_VectorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_VectorDataType_deleteMembers(UA_CRCL_VectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VectorDataType_clear(UA_CRCL_VectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VectorDataType_delete(UA_CRCL_VectorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VECTORDATATYPE]);
}

/* CRCL_GripperStatusDataType */
static UA_INLINE void
UA_CRCL_GripperStatusDataType_init(UA_CRCL_GripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_GripperStatusDataType));
}

static UA_INLINE UA_CRCL_GripperStatusDataType *
UA_CRCL_GripperStatusDataType_new(void) {
    return (UA_CRCL_GripperStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_GripperStatusDataType_copy(const UA_CRCL_GripperStatusDataType *src, UA_CRCL_GripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_GripperStatusDataType_deleteMembers(UA_CRCL_GripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GripperStatusDataType_clear(UA_CRCL_GripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GripperStatusDataType_delete(UA_CRCL_GripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GRIPPERSTATUSDATATYPE]);
}

/* CRCL_PointDataType */
static UA_INLINE void
UA_CRCL_PointDataType_init(UA_CRCL_PointDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PointDataType));
}

static UA_INLINE UA_CRCL_PointDataType *
UA_CRCL_PointDataType_new(void) {
    return (UA_CRCL_PointDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PointDataType_copy(const UA_CRCL_PointDataType *src, UA_CRCL_PointDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PointDataType_deleteMembers(UA_CRCL_PointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PointDataType_clear(UA_CRCL_PointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PointDataType_delete(UA_CRCL_PointDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POINTDATATYPE]);
}

/* JointForceTorqueDataType */
static UA_INLINE void
UA_JointForceTorqueDataType_init(UA_JointForceTorqueDataType *p) {
    memset(p, 0, sizeof(UA_JointForceTorqueDataType));
}

static UA_INLINE UA_JointForceTorqueDataType *
UA_JointForceTorqueDataType_new(void) {
    return (UA_JointForceTorqueDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_JOINTFORCETORQUEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_JointForceTorqueDataType_copy(const UA_JointForceTorqueDataType *src, UA_JointForceTorqueDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_JOINTFORCETORQUEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_JointForceTorqueDataType_deleteMembers(UA_JointForceTorqueDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_JOINTFORCETORQUEDATATYPE]);
}

static UA_INLINE void
UA_JointForceTorqueDataType_clear(UA_JointForceTorqueDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_JOINTFORCETORQUEDATATYPE]);
}

static UA_INLINE void
UA_JointForceTorqueDataType_delete(UA_JointForceTorqueDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_JOINTFORCETORQUEDATATYPE]);
}

/* CRCL_GuardLimitEnumDataType */
static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_init(UA_CRCL_GuardLimitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_GuardLimitEnumDataType));
}

static UA_INLINE UA_CRCL_GuardLimitEnumDataType *
UA_CRCL_GuardLimitEnumDataType_new(void) {
    return (UA_CRCL_GuardLimitEnumDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GUARDLIMITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_GuardLimitEnumDataType_copy(const UA_CRCL_GuardLimitEnumDataType *src, UA_CRCL_GuardLimitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GUARDLIMITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_deleteMembers(UA_CRCL_GuardLimitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GUARDLIMITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_clear(UA_CRCL_GuardLimitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GUARDLIMITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_delete(UA_CRCL_GuardLimitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GUARDLIMITENUMDATATYPE]);
}

/* CRCL_RotSpeedRelativeDataType */
static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_init(UA_CRCL_RotSpeedRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotSpeedRelativeDataType));
}

static UA_INLINE UA_CRCL_RotSpeedRelativeDataType *
UA_CRCL_RotSpeedRelativeDataType_new(void) {
    return (UA_CRCL_RotSpeedRelativeDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedRelativeDataType_copy(const UA_CRCL_RotSpeedRelativeDataType *src, UA_CRCL_RotSpeedRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_deleteMembers(UA_CRCL_RotSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_clear(UA_CRCL_RotSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_delete(UA_CRCL_RotSpeedRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

/* CRCL_RotAccelRelativeDataType */
static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_init(UA_CRCL_RotAccelRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotAccelRelativeDataType));
}

static UA_INLINE UA_CRCL_RotAccelRelativeDataType *
UA_CRCL_RotAccelRelativeDataType_new(void) {
    return (UA_CRCL_RotAccelRelativeDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelRelativeDataType_copy(const UA_CRCL_RotAccelRelativeDataType *src, UA_CRCL_RotAccelRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_deleteMembers(UA_CRCL_RotAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_clear(UA_CRCL_RotAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_delete(UA_CRCL_RotAccelRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELRELATIVEDATATYPE]);
}

/* CRCL_RotAccelDataType */
static UA_INLINE void
UA_CRCL_RotAccelDataType_init(UA_CRCL_RotAccelDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotAccelDataType));
}

static UA_INLINE UA_CRCL_RotAccelDataType *
UA_CRCL_RotAccelDataType_new(void) {
    return (UA_CRCL_RotAccelDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelDataType_copy(const UA_CRCL_RotAccelDataType *src, UA_CRCL_RotAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotAccelDataType_deleteMembers(UA_CRCL_RotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelDataType_clear(UA_CRCL_RotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelDataType_delete(UA_CRCL_RotAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTACCELDATATYPE]);
}

/* CRCL_ScalarSensorStatusDataType */
static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_init(UA_CRCL_ScalarSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ScalarSensorStatusDataType));
}

static UA_INLINE UA_CRCL_ScalarSensorStatusDataType *
UA_CRCL_ScalarSensorStatusDataType_new(void) {
    return (UA_CRCL_ScalarSensorStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ScalarSensorStatusDataType_copy(const UA_CRCL_ScalarSensorStatusDataType *src, UA_CRCL_ScalarSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_deleteMembers(UA_CRCL_ScalarSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_clear(UA_CRCL_ScalarSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_delete(UA_CRCL_ScalarSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

/* PubSubIPAddresses */
static UA_INLINE void
UA_PubSubIPAddresses_init(UA_PubSubIPAddresses *p) {
    memset(p, 0, sizeof(UA_PubSubIPAddresses));
}

static UA_INLINE UA_PubSubIPAddresses *
UA_PubSubIPAddresses_new(void) {
    return (UA_PubSubIPAddresses*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_PUBSUBIPADDRESSES]);
}

static UA_INLINE UA_StatusCode
UA_PubSubIPAddresses_copy(const UA_PubSubIPAddresses *src, UA_PubSubIPAddresses *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_PUBSUBIPADDRESSES]);
}

UA_DEPRECATED static UA_INLINE void
UA_PubSubIPAddresses_deleteMembers(UA_PubSubIPAddresses *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_PUBSUBIPADDRESSES]);
}

static UA_INLINE void
UA_PubSubIPAddresses_clear(UA_PubSubIPAddresses *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_PUBSUBIPADDRESSES]);
}

static UA_INLINE void
UA_PubSubIPAddresses_delete(UA_PubSubIPAddresses *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_PUBSUBIPADDRESSES]);
}

/* CRCL_JointStatusesDataType */
static UA_INLINE void
UA_CRCL_JointStatusesDataType_init(UA_CRCL_JointStatusesDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointStatusesDataType));
}

static UA_INLINE UA_CRCL_JointStatusesDataType *
UA_CRCL_JointStatusesDataType_new(void) {
    return (UA_CRCL_JointStatusesDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusesDataType_copy(const UA_CRCL_JointStatusesDataType *src, UA_CRCL_JointStatusesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointStatusesDataType_deleteMembers(UA_CRCL_JointStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusesDataType_clear(UA_CRCL_JointStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusesDataType_delete(UA_CRCL_JointStatusesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTSTATUSESDATATYPE]);
}

/* CRCL_StopConditionEnumDataType */
static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_init(UA_CRCL_StopConditionEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_StopConditionEnumDataType));
}

static UA_INLINE UA_CRCL_StopConditionEnumDataType *
UA_CRCL_StopConditionEnumDataType_new(void) {
    return (UA_CRCL_StopConditionEnumDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_STOPCONDITIONENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_StopConditionEnumDataType_copy(const UA_CRCL_StopConditionEnumDataType *src, UA_CRCL_StopConditionEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_STOPCONDITIONENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_deleteMembers(UA_CRCL_StopConditionEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_STOPCONDITIONENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_clear(UA_CRCL_StopConditionEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_STOPCONDITIONENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_delete(UA_CRCL_StopConditionEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_STOPCONDITIONENUMDATATYPE]);
}

/* CRCL_RotSpeedAbsoluteDataType */
static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_init(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotSpeedAbsoluteDataType));
}

static UA_INLINE UA_CRCL_RotSpeedAbsoluteDataType *
UA_CRCL_RotSpeedAbsoluteDataType_new(void) {
    return (UA_CRCL_RotSpeedAbsoluteDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedAbsoluteDataType_copy(const UA_CRCL_RotSpeedAbsoluteDataType *src, UA_CRCL_RotSpeedAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_deleteMembers(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_clear(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_delete(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

/* CRCL_GuardDataType */
static UA_INLINE void
UA_CRCL_GuardDataType_init(UA_CRCL_GuardDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_GuardDataType));
}

static UA_INLINE UA_CRCL_GuardDataType *
UA_CRCL_GuardDataType_new(void) {
    return (UA_CRCL_GuardDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_GuardDataType_copy(const UA_CRCL_GuardDataType *src, UA_CRCL_GuardDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_GuardDataType_deleteMembers(UA_CRCL_GuardDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardDataType_clear(UA_CRCL_GuardDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardDataType_delete(UA_CRCL_GuardDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_GUARDDATATYPE]);
}

/* ConfigureStatusReportDataType */
static UA_INLINE void
UA_ConfigureStatusReportDataType_init(UA_ConfigureStatusReportDataType *p) {
    memset(p, 0, sizeof(UA_ConfigureStatusReportDataType));
}

static UA_INLINE UA_ConfigureStatusReportDataType *
UA_ConfigureStatusReportDataType_new(void) {
    return (UA_ConfigureStatusReportDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CONFIGURESTATUSREPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportDataType_copy(const UA_ConfigureStatusReportDataType *src, UA_ConfigureStatusReportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CONFIGURESTATUSREPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConfigureStatusReportDataType_deleteMembers(UA_ConfigureStatusReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CONFIGURESTATUSREPORTDATATYPE]);
}

static UA_INLINE void
UA_ConfigureStatusReportDataType_clear(UA_ConfigureStatusReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CONFIGURESTATUSREPORTDATATYPE]);
}

static UA_INLINE void
UA_ConfigureStatusReportDataType_delete(UA_ConfigureStatusReportDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CONFIGURESTATUSREPORTDATATYPE]);
}

/* RunProgramDataType */
static UA_INLINE void
UA_RunProgramDataType_init(UA_RunProgramDataType *p) {
    memset(p, 0, sizeof(UA_RunProgramDataType));
}

static UA_INLINE UA_RunProgramDataType *
UA_RunProgramDataType_new(void) {
    return (UA_RunProgramDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_RUNPROGRAMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_RunProgramDataType_copy(const UA_RunProgramDataType *src, UA_RunProgramDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_RUNPROGRAMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_RunProgramDataType_deleteMembers(UA_RunProgramDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_RUNPROGRAMDATATYPE]);
}

static UA_INLINE void
UA_RunProgramDataType_clear(UA_RunProgramDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_RUNPROGRAMDATATYPE]);
}

static UA_INLINE void
UA_RunProgramDataType_delete(UA_RunProgramDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_RUNPROGRAMDATATYPE]);
}

/* CRCL_ParallelGripperStatusDataType */
static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_init(UA_CRCL_ParallelGripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ParallelGripperStatusDataType));
}

static UA_INLINE UA_CRCL_ParallelGripperStatusDataType *
UA_CRCL_ParallelGripperStatusDataType_new(void) {
    return (UA_CRCL_ParallelGripperStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ParallelGripperStatusDataType_copy(const UA_CRCL_ParallelGripperStatusDataType *src, UA_CRCL_ParallelGripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_deleteMembers(UA_CRCL_ParallelGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_clear(UA_CRCL_ParallelGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_delete(UA_CRCL_ParallelGripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

/* CRCLCommandDataType */
static UA_INLINE void
UA_CRCLCommandDataType_init(UA_CRCLCommandDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandDataType));
}

static UA_INLINE UA_CRCLCommandDataType *
UA_CRCLCommandDataType_new(void) {
    return (UA_CRCLCommandDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandDataType_copy(const UA_CRCLCommandDataType *src, UA_CRCLCommandDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandDataType_deleteMembers(UA_CRCLCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandDataType_clear(UA_CRCLCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandDataType_delete(UA_CRCLCommandDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDDATATYPE]);
}

/* SetIntermediatePoseToleranceDataType */
static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_init(UA_SetIntermediatePoseToleranceDataType *p) {
    memset(p, 0, sizeof(UA_SetIntermediatePoseToleranceDataType));
}

static UA_INLINE UA_SetIntermediatePoseToleranceDataType *
UA_SetIntermediatePoseToleranceDataType_new(void) {
    return (UA_SetIntermediatePoseToleranceDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceDataType_copy(const UA_SetIntermediatePoseToleranceDataType *src, UA_SetIntermediatePoseToleranceDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_deleteMembers(UA_SetIntermediatePoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_clear(UA_SetIntermediatePoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_delete(UA_SetIntermediatePoseToleranceDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

/* SetRobotParametersDataType */
static UA_INLINE void
UA_SetRobotParametersDataType_init(UA_SetRobotParametersDataType *p) {
    memset(p, 0, sizeof(UA_SetRobotParametersDataType));
}

static UA_INLINE UA_SetRobotParametersDataType *
UA_SetRobotParametersDataType_new(void) {
    return (UA_SetRobotParametersDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROBOTPARAMETERSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRobotParametersDataType_copy(const UA_SetRobotParametersDataType *src, UA_SetRobotParametersDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROBOTPARAMETERSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRobotParametersDataType_deleteMembers(UA_SetRobotParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROBOTPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetRobotParametersDataType_clear(UA_SetRobotParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROBOTPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetRobotParametersDataType_delete(UA_SetRobotParametersDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROBOTPARAMETERSDATATYPE]);
}

/* CRCL_ForceTorqueSensorStatusDataType */
static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_init(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ForceTorqueSensorStatusDataType));
}

static UA_INLINE UA_CRCL_ForceTorqueSensorStatusDataType *
UA_CRCL_ForceTorqueSensorStatusDataType_new(void) {
    return (UA_CRCL_ForceTorqueSensorStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ForceTorqueSensorStatusDataType_copy(const UA_CRCL_ForceTorqueSensorStatusDataType *src, UA_CRCL_ForceTorqueSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_deleteMembers(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_clear(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_delete(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

/* CRCL_OnOffSensorStatusDataType */
static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_init(UA_CRCL_OnOffSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_OnOffSensorStatusDataType));
}

static UA_INLINE UA_CRCL_OnOffSensorStatusDataType *
UA_CRCL_OnOffSensorStatusDataType_new(void) {
    return (UA_CRCL_OnOffSensorStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_OnOffSensorStatusDataType_copy(const UA_CRCL_OnOffSensorStatusDataType *src, UA_CRCL_OnOffSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_deleteMembers(UA_CRCL_OnOffSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_clear(UA_CRCL_OnOffSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_delete(UA_CRCL_OnOffSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

/* CRCL_SensorStatusDataType */
static UA_INLINE void
UA_CRCL_SensorStatusDataType_init(UA_CRCL_SensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_SensorStatusDataType));
}

static UA_INLINE UA_CRCL_SensorStatusDataType *
UA_CRCL_SensorStatusDataType_new(void) {
    return (UA_CRCL_SensorStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusDataType_copy(const UA_CRCL_SensorStatusDataType *src, UA_CRCL_SensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_SensorStatusDataType_deleteMembers(UA_CRCL_SensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusDataType_clear(UA_CRCL_SensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusDataType_delete(UA_CRCL_SensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSDATATYPE]);
}

/* CRCL_TransAccelRelativeDataType */
static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_init(UA_CRCL_TransAccelRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransAccelRelativeDataType));
}

static UA_INLINE UA_CRCL_TransAccelRelativeDataType *
UA_CRCL_TransAccelRelativeDataType_new(void) {
    return (UA_CRCL_TransAccelRelativeDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelRelativeDataType_copy(const UA_CRCL_TransAccelRelativeDataType *src, UA_CRCL_TransAccelRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_deleteMembers(UA_CRCL_TransAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_clear(UA_CRCL_TransAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_delete(UA_CRCL_TransAccelRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

/* CRCL_TransSpeedRelativeDataType */
static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_init(UA_CRCL_TransSpeedRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransSpeedRelativeDataType));
}

static UA_INLINE UA_CRCL_TransSpeedRelativeDataType *
UA_CRCL_TransSpeedRelativeDataType_new(void) {
    return (UA_CRCL_TransSpeedRelativeDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedRelativeDataType_copy(const UA_CRCL_TransSpeedRelativeDataType *src, UA_CRCL_TransSpeedRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_deleteMembers(UA_CRCL_TransSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_clear(UA_CRCL_TransSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_delete(UA_CRCL_TransSpeedRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

/* CRCL_TwistDataType */
static UA_INLINE void
UA_CRCL_TwistDataType_init(UA_CRCL_TwistDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TwistDataType));
}

static UA_INLINE UA_CRCL_TwistDataType *
UA_CRCL_TwistDataType_new(void) {
    return (UA_CRCL_TwistDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TWISTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TwistDataType_copy(const UA_CRCL_TwistDataType *src, UA_CRCL_TwistDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TWISTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TwistDataType_deleteMembers(UA_CRCL_TwistDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TWISTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TwistDataType_clear(UA_CRCL_TwistDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TWISTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TwistDataType_delete(UA_CRCL_TwistDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_TWISTDATATYPE]);
}

/* CRCL_SettingsStatusDataType */
static UA_INLINE void
UA_CRCL_SettingsStatusDataType_init(UA_CRCL_SettingsStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_SettingsStatusDataType));
}

static UA_INLINE UA_CRCL_SettingsStatusDataType *
UA_CRCL_SettingsStatusDataType_new(void) {
    return (UA_CRCL_SettingsStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SETTINGSSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_SettingsStatusDataType_copy(const UA_CRCL_SettingsStatusDataType *src, UA_CRCL_SettingsStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SETTINGSSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_SettingsStatusDataType_deleteMembers(UA_CRCL_SettingsStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SETTINGSSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SettingsStatusDataType_clear(UA_CRCL_SettingsStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SETTINGSSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SettingsStatusDataType_delete(UA_CRCL_SettingsStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SETTINGSSTATUSDATATYPE]);
}

/* StopMotionDataType */
static UA_INLINE void
UA_StopMotionDataType_init(UA_StopMotionDataType *p) {
    memset(p, 0, sizeof(UA_StopMotionDataType));
}

static UA_INLINE UA_StopMotionDataType *
UA_StopMotionDataType_new(void) {
    return (UA_StopMotionDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_STOPMOTIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_StopMotionDataType_copy(const UA_StopMotionDataType *src, UA_StopMotionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_STOPMOTIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_StopMotionDataType_deleteMembers(UA_StopMotionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_STOPMOTIONDATATYPE]);
}

static UA_INLINE void
UA_StopMotionDataType_clear(UA_StopMotionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_STOPMOTIONDATATYPE]);
}

static UA_INLINE void
UA_StopMotionDataType_delete(UA_StopMotionDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_STOPMOTIONDATATYPE]);
}

/* OpenToolChangerDataType */
static UA_INLINE void
UA_OpenToolChangerDataType_init(UA_OpenToolChangerDataType *p) {
    memset(p, 0, sizeof(UA_OpenToolChangerDataType));
}

static UA_INLINE UA_OpenToolChangerDataType *
UA_OpenToolChangerDataType_new(void) {
    return (UA_OpenToolChangerDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_OPENTOOLCHANGERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_OpenToolChangerDataType_copy(const UA_OpenToolChangerDataType *src, UA_OpenToolChangerDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_OPENTOOLCHANGERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_OpenToolChangerDataType_deleteMembers(UA_OpenToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_OPENTOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_OpenToolChangerDataType_clear(UA_OpenToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_OPENTOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_OpenToolChangerDataType_delete(UA_OpenToolChangerDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_OPENTOOLCHANGERDATATYPE]);
}

/* SetForceUnitsDataType */
static UA_INLINE void
UA_SetForceUnitsDataType_init(UA_SetForceUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetForceUnitsDataType));
}

static UA_INLINE UA_SetForceUnitsDataType *
UA_SetForceUnitsDataType_new(void) {
    return (UA_SetForceUnitsDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETFORCEUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetForceUnitsDataType_copy(const UA_SetForceUnitsDataType *src, UA_SetForceUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETFORCEUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetForceUnitsDataType_deleteMembers(UA_SetForceUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETFORCEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetForceUnitsDataType_clear(UA_SetForceUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETFORCEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetForceUnitsDataType_delete(UA_SetForceUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETFORCEUNITSDATATYPE]);
}

/* CRCL_ThreeFingerGripperStatusDataType */
static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_init(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ThreeFingerGripperStatusDataType));
}

static UA_INLINE UA_CRCL_ThreeFingerGripperStatusDataType *
UA_CRCL_ThreeFingerGripperStatusDataType_new(void) {
    return (UA_CRCL_ThreeFingerGripperStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ThreeFingerGripperStatusDataType_copy(const UA_CRCL_ThreeFingerGripperStatusDataType *src, UA_CRCL_ThreeFingerGripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_deleteMembers(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_clear(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_delete(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

/* CloseToolChangerDataType */
static UA_INLINE void
UA_CloseToolChangerDataType_init(UA_CloseToolChangerDataType *p) {
    memset(p, 0, sizeof(UA_CloseToolChangerDataType));
}

static UA_INLINE UA_CloseToolChangerDataType *
UA_CloseToolChangerDataType_new(void) {
    return (UA_CloseToolChangerDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CLOSETOOLCHANGERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CloseToolChangerDataType_copy(const UA_CloseToolChangerDataType *src, UA_CloseToolChangerDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CLOSETOOLCHANGERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CloseToolChangerDataType_deleteMembers(UA_CloseToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CLOSETOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_CloseToolChangerDataType_clear(UA_CloseToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CLOSETOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_CloseToolChangerDataType_delete(UA_CloseToolChangerDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CLOSETOOLCHANGERDATATYPE]);
}

/* GetStatusDataType */
static UA_INLINE void
UA_GetStatusDataType_init(UA_GetStatusDataType *p) {
    memset(p, 0, sizeof(UA_GetStatusDataType));
}

static UA_INLINE UA_GetStatusDataType *
UA_GetStatusDataType_new(void) {
    return (UA_GetStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_GETSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_GetStatusDataType_copy(const UA_GetStatusDataType *src, UA_GetStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_GETSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_GetStatusDataType_deleteMembers(UA_GetStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_GETSTATUSDATATYPE]);
}

static UA_INLINE void
UA_GetStatusDataType_clear(UA_GetStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_GETSTATUSDATATYPE]);
}

static UA_INLINE void
UA_GetStatusDataType_delete(UA_GetStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_GETSTATUSDATATYPE]);
}

/* SetTransSpeedDataType */
static UA_INLINE void
UA_SetTransSpeedDataType_init(UA_SetTransSpeedDataType *p) {
    memset(p, 0, sizeof(UA_SetTransSpeedDataType));
}

static UA_INLINE UA_SetTransSpeedDataType *
UA_SetTransSpeedDataType_new(void) {
    return (UA_SetTransSpeedDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTRANSSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTransSpeedDataType_copy(const UA_SetTransSpeedDataType *src, UA_SetTransSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTRANSSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTransSpeedDataType_deleteMembers(UA_SetTransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetTransSpeedDataType_clear(UA_SetTransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetTransSpeedDataType_delete(UA_SetTransSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTRANSSPEEDDATATYPE]);
}

/* CRCL_WrenchDataType */
static UA_INLINE void
UA_CRCL_WrenchDataType_init(UA_CRCL_WrenchDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_WrenchDataType));
}

static UA_INLINE UA_CRCL_WrenchDataType *
UA_CRCL_WrenchDataType_new(void) {
    return (UA_CRCL_WrenchDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_WRENCHDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_WrenchDataType_copy(const UA_CRCL_WrenchDataType *src, UA_CRCL_WrenchDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_WRENCHDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_WrenchDataType_deleteMembers(UA_CRCL_WrenchDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_WRENCHDATATYPE]);
}

static UA_INLINE void
UA_CRCL_WrenchDataType_clear(UA_CRCL_WrenchDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_WRENCHDATATYPE]);
}

static UA_INLINE void
UA_CRCL_WrenchDataType_delete(UA_CRCL_WrenchDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_WRENCHDATATYPE]);
}

/* CRCL_CommandStatusDataType */
static UA_INLINE void
UA_CRCL_CommandStatusDataType_init(UA_CRCL_CommandStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_CommandStatusDataType));
}

static UA_INLINE UA_CRCL_CommandStatusDataType *
UA_CRCL_CommandStatusDataType_new(void) {
    return (UA_CRCL_CommandStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_CommandStatusDataType_copy(const UA_CRCL_CommandStatusDataType *src, UA_CRCL_CommandStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_CommandStatusDataType_deleteMembers(UA_CRCL_CommandStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStatusDataType_clear(UA_CRCL_CommandStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStatusDataType_delete(UA_CRCL_CommandStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COMMANDSTATUSDATATYPE]);
}

/* InitCanonDataType */
static UA_INLINE void
UA_InitCanonDataType_init(UA_InitCanonDataType *p) {
    memset(p, 0, sizeof(UA_InitCanonDataType));
}

static UA_INLINE UA_InitCanonDataType *
UA_InitCanonDataType_new(void) {
    return (UA_InitCanonDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_InitCanonDataType_copy(const UA_InitCanonDataType *src, UA_InitCanonDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_InitCanonDataType_deleteMembers(UA_InitCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE]);
}

static UA_INLINE void
UA_InitCanonDataType_clear(UA_InitCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE]);
}

static UA_INLINE void
UA_InitCanonDataType_delete(UA_InitCanonDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_INITCANONDATATYPE]);
}

/* DisableRobotParameterStatusDataType */
static UA_INLINE void
UA_DisableRobotParameterStatusDataType_init(UA_DisableRobotParameterStatusDataType *p) {
    memset(p, 0, sizeof(UA_DisableRobotParameterStatusDataType));
}

static UA_INLINE UA_DisableRobotParameterStatusDataType *
UA_DisableRobotParameterStatusDataType_new(void) {
    return (UA_DisableRobotParameterStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusDataType_copy(const UA_DisableRobotParameterStatusDataType *src, UA_DisableRobotParameterStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableRobotParameterStatusDataType_deleteMembers(UA_DisableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_DisableRobotParameterStatusDataType_clear(UA_DisableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_DisableRobotParameterStatusDataType_delete(UA_DisableRobotParameterStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

/* CRCL_PoseDataType */
static UA_INLINE void
UA_CRCL_PoseDataType_init(UA_CRCL_PoseDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseDataType));
}

static UA_INLINE UA_CRCL_PoseDataType *
UA_CRCL_PoseDataType_new(void) {
    return (UA_CRCL_PoseDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseDataType_copy(const UA_CRCL_PoseDataType *src, UA_CRCL_PoseDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseDataType_deleteMembers(UA_CRCL_PoseDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseDataType_clear(UA_CRCL_PoseDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseDataType_delete(UA_CRCL_PoseDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEDATATYPE]);
}

/* MoveToDataType */
static UA_INLINE void
UA_MoveToDataType_init(UA_MoveToDataType *p) {
    memset(p, 0, sizeof(UA_MoveToDataType));
}

static UA_INLINE UA_MoveToDataType *
UA_MoveToDataType_new(void) {
    return (UA_MoveToDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETODATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveToDataType_copy(const UA_MoveToDataType *src, UA_MoveToDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETODATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveToDataType_deleteMembers(UA_MoveToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETODATATYPE]);
}

static UA_INLINE void
UA_MoveToDataType_clear(UA_MoveToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETODATATYPE]);
}

static UA_INLINE void
UA_MoveToDataType_delete(UA_MoveToDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETODATATYPE]);
}

/* CRCL_VacuumGripperStatusDataType */
static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_init(UA_CRCL_VacuumGripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_VacuumGripperStatusDataType));
}

static UA_INLINE UA_CRCL_VacuumGripperStatusDataType *
UA_CRCL_VacuumGripperStatusDataType_new(void) {
    return (UA_CRCL_VacuumGripperStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_VacuumGripperStatusDataType_copy(const UA_CRCL_VacuumGripperStatusDataType *src, UA_CRCL_VacuumGripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_deleteMembers(UA_CRCL_VacuumGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_clear(UA_CRCL_VacuumGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_delete(UA_CRCL_VacuumGripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

/* SetMotionCoordinationDataType */
static UA_INLINE void
UA_SetMotionCoordinationDataType_init(UA_SetMotionCoordinationDataType *p) {
    memset(p, 0, sizeof(UA_SetMotionCoordinationDataType));
}

static UA_INLINE UA_SetMotionCoordinationDataType *
UA_SetMotionCoordinationDataType_new(void) {
    return (UA_SetMotionCoordinationDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETMOTIONCOORDINATIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationDataType_copy(const UA_SetMotionCoordinationDataType *src, UA_SetMotionCoordinationDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETMOTIONCOORDINATIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetMotionCoordinationDataType_deleteMembers(UA_SetMotionCoordinationDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETMOTIONCOORDINATIONDATATYPE]);
}

static UA_INLINE void
UA_SetMotionCoordinationDataType_clear(UA_SetMotionCoordinationDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETMOTIONCOORDINATIONDATATYPE]);
}

static UA_INLINE void
UA_SetMotionCoordinationDataType_delete(UA_SetMotionCoordinationDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETMOTIONCOORDINATIONDATATYPE]);
}

/* DwellDataType */
static UA_INLINE void
UA_DwellDataType_init(UA_DwellDataType *p) {
    memset(p, 0, sizeof(UA_DwellDataType));
}

static UA_INLINE UA_DwellDataType *
UA_DwellDataType_new(void) {
    return (UA_DwellDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DWELLDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DwellDataType_copy(const UA_DwellDataType *src, UA_DwellDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DWELLDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DwellDataType_deleteMembers(UA_DwellDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DWELLDATATYPE]);
}

static UA_INLINE void
UA_DwellDataType_clear(UA_DwellDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DWELLDATATYPE]);
}

static UA_INLINE void
UA_DwellDataType_delete(UA_DwellDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DWELLDATATYPE]);
}

/* CRCL_CountSensorStatusDataType */
static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_init(UA_CRCL_CountSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_CountSensorStatusDataType));
}

static UA_INLINE UA_CRCL_CountSensorStatusDataType *
UA_CRCL_CountSensorStatusDataType_new(void) {
    return (UA_CRCL_CountSensorStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_CountSensorStatusDataType_copy(const UA_CRCL_CountSensorStatusDataType *src, UA_CRCL_CountSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_deleteMembers(UA_CRCL_CountSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_clear(UA_CRCL_CountSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_delete(UA_CRCL_CountSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

/* SetRotAccelDataType */
static UA_INLINE void
UA_SetRotAccelDataType_init(UA_SetRotAccelDataType *p) {
    memset(p, 0, sizeof(UA_SetRotAccelDataType));
}

static UA_INLINE UA_SetRotAccelDataType *
UA_SetRotAccelDataType_new(void) {
    return (UA_SetRotAccelDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROTACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRotAccelDataType_copy(const UA_SetRotAccelDataType *src, UA_SetRotAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROTACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRotAccelDataType_deleteMembers(UA_SetRotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROTACCELDATATYPE]);
}

static UA_INLINE void
UA_SetRotAccelDataType_clear(UA_SetRotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROTACCELDATATYPE]);
}

static UA_INLINE void
UA_SetRotAccelDataType_delete(UA_SetRotAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROTACCELDATATYPE]);
}

/* EnableGripperDataType */
static UA_INLINE void
UA_EnableGripperDataType_init(UA_EnableGripperDataType *p) {
    memset(p, 0, sizeof(UA_EnableGripperDataType));
}

static UA_INLINE UA_EnableGripperDataType *
UA_EnableGripperDataType_new(void) {
    return (UA_EnableGripperDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLEGRIPPERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableGripperDataType_copy(const UA_EnableGripperDataType *src, UA_EnableGripperDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLEGRIPPERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableGripperDataType_deleteMembers(UA_EnableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_EnableGripperDataType_clear(UA_EnableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_EnableGripperDataType_delete(UA_EnableGripperDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLEGRIPPERDATATYPE]);
}

/* MiddleCommandDataType */
static UA_INLINE void
UA_MiddleCommandDataType_init(UA_MiddleCommandDataType *p) {
    memset(p, 0, sizeof(UA_MiddleCommandDataType));
}

static UA_INLINE UA_MiddleCommandDataType *
UA_MiddleCommandDataType_new(void) {
    return (UA_MiddleCommandDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MIDDLECOMMANDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MiddleCommandDataType_copy(const UA_MiddleCommandDataType *src, UA_MiddleCommandDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MIDDLECOMMANDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MiddleCommandDataType_deleteMembers(UA_MiddleCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MIDDLECOMMANDDATATYPE]);
}

static UA_INLINE void
UA_MiddleCommandDataType_clear(UA_MiddleCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MIDDLECOMMANDDATATYPE]);
}

static UA_INLINE void
UA_MiddleCommandDataType_delete(UA_MiddleCommandDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MIDDLECOMMANDDATATYPE]);
}

/* SetRotSpeedDataType */
static UA_INLINE void
UA_SetRotSpeedDataType_init(UA_SetRotSpeedDataType *p) {
    memset(p, 0, sizeof(UA_SetRotSpeedDataType));
}

static UA_INLINE UA_SetRotSpeedDataType *
UA_SetRotSpeedDataType_new(void) {
    return (UA_SetRotSpeedDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROTSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRotSpeedDataType_copy(const UA_SetRotSpeedDataType *src, UA_SetRotSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROTSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRotSpeedDataType_deleteMembers(UA_SetRotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetRotSpeedDataType_clear(UA_SetRotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetRotSpeedDataType_delete(UA_SetRotSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETROTSPEEDDATATYPE]);
}

/* CRCL_SensorStatusesDataType */
static UA_INLINE void
UA_CRCL_SensorStatusesDataType_init(UA_CRCL_SensorStatusesDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_SensorStatusesDataType));
}

static UA_INLINE UA_CRCL_SensorStatusesDataType *
UA_CRCL_SensorStatusesDataType_new(void) {
    return (UA_CRCL_SensorStatusesDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusesDataType_copy(const UA_CRCL_SensorStatusesDataType *src, UA_CRCL_SensorStatusesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_SensorStatusesDataType_deleteMembers(UA_CRCL_SensorStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusesDataType_clear(UA_CRCL_SensorStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusesDataType_delete(UA_CRCL_SensorStatusesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_SENSORSTATUSESDATATYPE]);
}

/* DisableSensorDataType */
static UA_INLINE void
UA_DisableSensorDataType_init(UA_DisableSensorDataType *p) {
    memset(p, 0, sizeof(UA_DisableSensorDataType));
}

static UA_INLINE UA_DisableSensorDataType *
UA_DisableSensorDataType_new(void) {
    return (UA_DisableSensorDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLESENSORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableSensorDataType_copy(const UA_DisableSensorDataType *src, UA_DisableSensorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLESENSORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableSensorDataType_deleteMembers(UA_DisableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_DisableSensorDataType_clear(UA_DisableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_DisableSensorDataType_delete(UA_DisableSensorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLESENSORDATATYPE]);
}

/* CRCL_JointPositionsTolerancesDataType */
static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_init(UA_CRCL_JointPositionsTolerancesDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointPositionsTolerancesDataType));
}

static UA_INLINE UA_CRCL_JointPositionsTolerancesDataType *
UA_CRCL_JointPositionsTolerancesDataType_new(void) {
    return (UA_CRCL_JointPositionsTolerancesDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionsTolerancesDataType_copy(const UA_CRCL_JointPositionsTolerancesDataType *src, UA_CRCL_JointPositionsTolerancesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_deleteMembers(UA_CRCL_JointPositionsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_clear(UA_CRCL_JointPositionsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_delete(UA_CRCL_JointPositionsTolerancesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

/* EnableSensorDataType */
static UA_INLINE void
UA_EnableSensorDataType_init(UA_EnableSensorDataType *p) {
    memset(p, 0, sizeof(UA_EnableSensorDataType));
}

static UA_INLINE UA_EnableSensorDataType *
UA_EnableSensorDataType_new(void) {
    return (UA_EnableSensorDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLESENSORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableSensorDataType_copy(const UA_EnableSensorDataType *src, UA_EnableSensorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLESENSORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableSensorDataType_deleteMembers(UA_EnableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_EnableSensorDataType_clear(UA_EnableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_EnableSensorDataType_delete(UA_EnableSensorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLESENSORDATATYPE]);
}

/* ActuateJointsDataType */
static UA_INLINE void
UA_ActuateJointsDataType_init(UA_ActuateJointsDataType *p) {
    memset(p, 0, sizeof(UA_ActuateJointsDataType));
}

static UA_INLINE UA_ActuateJointsDataType *
UA_ActuateJointsDataType_new(void) {
    return (UA_ActuateJointsDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ACTUATEJOINTSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ActuateJointsDataType_copy(const UA_ActuateJointsDataType *src, UA_ActuateJointsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ACTUATEJOINTSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ActuateJointsDataType_deleteMembers(UA_ActuateJointsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ACTUATEJOINTSDATATYPE]);
}

static UA_INLINE void
UA_ActuateJointsDataType_clear(UA_ActuateJointsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ACTUATEJOINTSDATATYPE]);
}

static UA_INLINE void
UA_ActuateJointsDataType_delete(UA_ActuateJointsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ACTUATEJOINTSDATATYPE]);
}

/* CRCL_PoseAndSetDataType */
static UA_INLINE void
UA_CRCL_PoseAndSetDataType_init(UA_CRCL_PoseAndSetDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseAndSetDataType));
}

static UA_INLINE UA_CRCL_PoseAndSetDataType *
UA_CRCL_PoseAndSetDataType_new(void) {
    return (UA_CRCL_PoseAndSetDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEANDSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseAndSetDataType_copy(const UA_CRCL_PoseAndSetDataType *src, UA_CRCL_PoseAndSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEANDSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseAndSetDataType_deleteMembers(UA_CRCL_PoseAndSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEANDSETDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseAndSetDataType_clear(UA_CRCL_PoseAndSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEANDSETDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseAndSetDataType_delete(UA_CRCL_PoseAndSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSEANDSETDATATYPE]);
}

/* EnableRobotParameterStatusDataType */
static UA_INLINE void
UA_EnableRobotParameterStatusDataType_init(UA_EnableRobotParameterStatusDataType *p) {
    memset(p, 0, sizeof(UA_EnableRobotParameterStatusDataType));
}

static UA_INLINE UA_EnableRobotParameterStatusDataType *
UA_EnableRobotParameterStatusDataType_new(void) {
    return (UA_EnableRobotParameterStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusDataType_copy(const UA_EnableRobotParameterStatusDataType *src, UA_EnableRobotParameterStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableRobotParameterStatusDataType_deleteMembers(UA_EnableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_EnableRobotParameterStatusDataType_clear(UA_EnableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_EnableRobotParameterStatusDataType_delete(UA_EnableRobotParameterStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

/* SetEndEffectorParametersDataType */
static UA_INLINE void
UA_SetEndEffectorParametersDataType_init(UA_SetEndEffectorParametersDataType *p) {
    memset(p, 0, sizeof(UA_SetEndEffectorParametersDataType));
}

static UA_INLINE UA_SetEndEffectorParametersDataType *
UA_SetEndEffectorParametersDataType_new(void) {
    return (UA_SetEndEffectorParametersDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDEFFECTORPARAMETERSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndEffectorParametersDataType_copy(const UA_SetEndEffectorParametersDataType *src, UA_SetEndEffectorParametersDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDEFFECTORPARAMETERSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndEffectorParametersDataType_deleteMembers(UA_SetEndEffectorParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDEFFECTORPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetEndEffectorParametersDataType_clear(UA_SetEndEffectorParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDEFFECTORPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetEndEffectorParametersDataType_delete(UA_SetEndEffectorParametersDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDEFFECTORPARAMETERSDATATYPE]);
}

/* EndCanonDataType */
static UA_INLINE void
UA_EndCanonDataType_init(UA_EndCanonDataType *p) {
    memset(p, 0, sizeof(UA_EndCanonDataType));
}

static UA_INLINE UA_EndCanonDataType *
UA_EndCanonDataType_new(void) {
    return (UA_EndCanonDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENDCANONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EndCanonDataType_copy(const UA_EndCanonDataType *src, UA_EndCanonDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENDCANONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EndCanonDataType_deleteMembers(UA_EndCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENDCANONDATATYPE]);
}

static UA_INLINE void
UA_EndCanonDataType_clear(UA_EndCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENDCANONDATATYPE]);
}

static UA_INLINE void
UA_EndCanonDataType_delete(UA_EndCanonDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_ENDCANONDATATYPE]);
}

/* SetEndPoseToleranceDataType */
static UA_INLINE void
UA_SetEndPoseToleranceDataType_init(UA_SetEndPoseToleranceDataType *p) {
    memset(p, 0, sizeof(UA_SetEndPoseToleranceDataType));
}

static UA_INLINE UA_SetEndPoseToleranceDataType *
UA_SetEndPoseToleranceDataType_new(void) {
    return (UA_SetEndPoseToleranceDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDPOSETOLERANCEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceDataType_copy(const UA_SetEndPoseToleranceDataType *src, UA_SetEndPoseToleranceDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDPOSETOLERANCEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndPoseToleranceDataType_deleteMembers(UA_SetEndPoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetEndPoseToleranceDataType_clear(UA_SetEndPoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetEndPoseToleranceDataType_delete(UA_SetEndPoseToleranceDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDPOSETOLERANCEDATATYPE]);
}

/* SetAngleUnitsDataType */
static UA_INLINE void
UA_SetAngleUnitsDataType_init(UA_SetAngleUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetAngleUnitsDataType));
}

static UA_INLINE UA_SetAngleUnitsDataType *
UA_SetAngleUnitsDataType_new(void) {
    return (UA_SetAngleUnitsDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETANGLEUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetAngleUnitsDataType_copy(const UA_SetAngleUnitsDataType *src, UA_SetAngleUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETANGLEUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetAngleUnitsDataType_deleteMembers(UA_SetAngleUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETANGLEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetAngleUnitsDataType_clear(UA_SetAngleUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETANGLEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetAngleUnitsDataType_delete(UA_SetAngleUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETANGLEUNITSDATATYPE]);
}

/* SetTorqueUnitsDataType */
static UA_INLINE void
UA_SetTorqueUnitsDataType_init(UA_SetTorqueUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetTorqueUnitsDataType));
}

static UA_INLINE UA_SetTorqueUnitsDataType *
UA_SetTorqueUnitsDataType_new(void) {
    return (UA_SetTorqueUnitsDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTORQUEUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsDataType_copy(const UA_SetTorqueUnitsDataType *src, UA_SetTorqueUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTORQUEUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTorqueUnitsDataType_deleteMembers(UA_SetTorqueUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTORQUEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetTorqueUnitsDataType_clear(UA_SetTorqueUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTORQUEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetTorqueUnitsDataType_delete(UA_SetTorqueUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTORQUEUNITSDATATYPE]);
}

/* MessageDataType */
static UA_INLINE void
UA_MessageDataType_init(UA_MessageDataType *p) {
    memset(p, 0, sizeof(UA_MessageDataType));
}

static UA_INLINE UA_MessageDataType *
UA_MessageDataType_new(void) {
    return (UA_MessageDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MessageDataType_copy(const UA_MessageDataType *src, UA_MessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MessageDataType_deleteMembers(UA_MessageDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MESSAGEDATATYPE]);
}

static UA_INLINE void
UA_MessageDataType_clear(UA_MessageDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MESSAGEDATATYPE]);
}

static UA_INLINE void
UA_MessageDataType_delete(UA_MessageDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MESSAGEDATATYPE]);
}

/* CRCL_PoseStatusDataType */
static UA_INLINE void
UA_CRCL_PoseStatusDataType_init(UA_CRCL_PoseStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseStatusDataType));
}

static UA_INLINE UA_CRCL_PoseStatusDataType *
UA_CRCL_PoseStatusDataType_new(void) {
    return (UA_CRCL_PoseStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSESTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseStatusDataType_copy(const UA_CRCL_PoseStatusDataType *src, UA_CRCL_PoseStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSESTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseStatusDataType_deleteMembers(UA_CRCL_PoseStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSESTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseStatusDataType_clear(UA_CRCL_PoseStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSESTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseStatusDataType_delete(UA_CRCL_PoseStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCL_POSESTATUSDATATYPE]);
}

/* MoveThroughToDataType */
static UA_INLINE void
UA_MoveThroughToDataType_init(UA_MoveThroughToDataType *p) {
    memset(p, 0, sizeof(UA_MoveThroughToDataType));
}

static UA_INLINE UA_MoveThroughToDataType *
UA_MoveThroughToDataType_new(void) {
    return (UA_MoveThroughToDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETHROUGHTODATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveThroughToDataType_copy(const UA_MoveThroughToDataType *src, UA_MoveThroughToDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETHROUGHTODATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveThroughToDataType_deleteMembers(UA_MoveThroughToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETHROUGHTODATATYPE]);
}

static UA_INLINE void
UA_MoveThroughToDataType_clear(UA_MoveThroughToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETHROUGHTODATATYPE]);
}

static UA_INLINE void
UA_MoveThroughToDataType_delete(UA_MoveThroughToDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVETHROUGHTODATATYPE]);
}

/* SetEndEffectorDataType */
static UA_INLINE void
UA_SetEndEffectorDataType_init(UA_SetEndEffectorDataType *p) {
    memset(p, 0, sizeof(UA_SetEndEffectorDataType));
}

static UA_INLINE UA_SetEndEffectorDataType *
UA_SetEndEffectorDataType_new(void) {
    return (UA_SetEndEffectorDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDEFFECTORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndEffectorDataType_copy(const UA_SetEndEffectorDataType *src, UA_SetEndEffectorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDEFFECTORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndEffectorDataType_deleteMembers(UA_SetEndEffectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDEFFECTORDATATYPE]);
}

static UA_INLINE void
UA_SetEndEffectorDataType_clear(UA_SetEndEffectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDEFFECTORDATATYPE]);
}

static UA_INLINE void
UA_SetEndEffectorDataType_delete(UA_SetEndEffectorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETENDEFFECTORDATATYPE]);
}

/* DisableGripperDataType */
static UA_INLINE void
UA_DisableGripperDataType_init(UA_DisableGripperDataType *p) {
    memset(p, 0, sizeof(UA_DisableGripperDataType));
}

static UA_INLINE UA_DisableGripperDataType *
UA_DisableGripperDataType_new(void) {
    return (UA_DisableGripperDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLEGRIPPERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableGripperDataType_copy(const UA_DisableGripperDataType *src, UA_DisableGripperDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLEGRIPPERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableGripperDataType_deleteMembers(UA_DisableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_DisableGripperDataType_clear(UA_DisableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_DisableGripperDataType_delete(UA_DisableGripperDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_DISABLEGRIPPERDATATYPE]);
}

/* SetTransAccelDataType */
static UA_INLINE void
UA_SetTransAccelDataType_init(UA_SetTransAccelDataType *p) {
    memset(p, 0, sizeof(UA_SetTransAccelDataType));
}

static UA_INLINE UA_SetTransAccelDataType *
UA_SetTransAccelDataType_new(void) {
    return (UA_SetTransAccelDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTRANSACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTransAccelDataType_copy(const UA_SetTransAccelDataType *src, UA_SetTransAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTRANSACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTransAccelDataType_deleteMembers(UA_SetTransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_SetTransAccelDataType_clear(UA_SetTransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_SetTransAccelDataType_delete(UA_SetTransAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETTRANSACCELDATATYPE]);
}

/* SetLengthUnitsDataType */
static UA_INLINE void
UA_SetLengthUnitsDataType_init(UA_SetLengthUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetLengthUnitsDataType));
}

static UA_INLINE UA_SetLengthUnitsDataType *
UA_SetLengthUnitsDataType_new(void) {
    return (UA_SetLengthUnitsDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETLENGTHUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetLengthUnitsDataType_copy(const UA_SetLengthUnitsDataType *src, UA_SetLengthUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETLENGTHUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetLengthUnitsDataType_deleteMembers(UA_SetLengthUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETLENGTHUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetLengthUnitsDataType_clear(UA_SetLengthUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETLENGTHUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetLengthUnitsDataType_delete(UA_SetLengthUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETLENGTHUNITSDATATYPE]);
}

/* SetDefaultJointPositonsTolerancesDataType */
static UA_INLINE void
UA_SetDefaultJointPositonsTolerancesDataType_init(UA_SetDefaultJointPositonsTolerancesDataType *p) {
    memset(p, 0, sizeof(UA_SetDefaultJointPositonsTolerancesDataType));
}

static UA_INLINE UA_SetDefaultJointPositonsTolerancesDataType *
UA_SetDefaultJointPositonsTolerancesDataType_new(void) {
    return (UA_SetDefaultJointPositonsTolerancesDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETDEFAULTJOINTPOSITONSTOLERANCESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositonsTolerancesDataType_copy(const UA_SetDefaultJointPositonsTolerancesDataType *src, UA_SetDefaultJointPositonsTolerancesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETDEFAULTJOINTPOSITONSTOLERANCESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetDefaultJointPositonsTolerancesDataType_deleteMembers(UA_SetDefaultJointPositonsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETDEFAULTJOINTPOSITONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_SetDefaultJointPositonsTolerancesDataType_clear(UA_SetDefaultJointPositonsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETDEFAULTJOINTPOSITONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_SetDefaultJointPositonsTolerancesDataType_delete(UA_SetDefaultJointPositonsTolerancesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SETDEFAULTJOINTPOSITONSTOLERANCESDATATYPE]);
}

/* MoveScrewDataType */
static UA_INLINE void
UA_MoveScrewDataType_init(UA_MoveScrewDataType *p) {
    memset(p, 0, sizeof(UA_MoveScrewDataType));
}

static UA_INLINE UA_MoveScrewDataType *
UA_MoveScrewDataType_new(void) {
    return (UA_MoveScrewDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVESCREWDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveScrewDataType_copy(const UA_MoveScrewDataType *src, UA_MoveScrewDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVESCREWDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveScrewDataType_deleteMembers(UA_MoveScrewDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVESCREWDATATYPE]);
}

static UA_INLINE void
UA_MoveScrewDataType_clear(UA_MoveScrewDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVESCREWDATATYPE]);
}

static UA_INLINE void
UA_MoveScrewDataType_delete(UA_MoveScrewDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_MOVESCREWDATATYPE]);
}

/* CRCLCommandsUnionDataType */
static UA_INLINE void
UA_CRCLCommandsUnionDataType_init(UA_CRCLCommandsUnionDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandsUnionDataType));
}

static UA_INLINE UA_CRCLCommandsUnionDataType *
UA_CRCLCommandsUnionDataType_new(void) {
    return (UA_CRCLCommandsUnionDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandsUnionDataType_copy(const UA_CRCLCommandsUnionDataType *src, UA_CRCLCommandsUnionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandsUnionDataType_deleteMembers(UA_CRCLCommandsUnionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsUnionDataType_clear(UA_CRCLCommandsUnionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsUnionDataType_delete(UA_CRCLCommandsUnionDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLCOMMANDSUNIONDATATYPE]);
}

/* CRCLStatusDataType */
static UA_INLINE void
UA_CRCLStatusDataType_init(UA_CRCLStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCLStatusDataType));
}

static UA_INLINE UA_CRCLStatusDataType *
UA_CRCLStatusDataType_new(void) {
    return (UA_CRCLStatusDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLStatusDataType_copy(const UA_CRCLStatusDataType *src, UA_CRCLStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLStatusDataType_deleteMembers(UA_CRCLStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCLStatusDataType_clear(UA_CRCLStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCLStatusDataType_delete(UA_CRCLStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSTATUSDATATYPE]);
}

/* CRCLSkillDataType */
static UA_INLINE void
UA_CRCLSkillDataType_init(UA_CRCLSkillDataType *p) {
    memset(p, 0, sizeof(UA_CRCLSkillDataType));
}

static UA_INLINE UA_CRCLSkillDataType *
UA_CRCLSkillDataType_new(void) {
    return (UA_CRCLSkillDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLSkillDataType_copy(const UA_CRCLSkillDataType *src, UA_CRCLSkillDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLSkillDataType_deleteMembers(UA_CRCLSkillDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE]);
}

static UA_INLINE void
UA_CRCLSkillDataType_clear(UA_CRCLSkillDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE]);
}

static UA_INLINE void
UA_CRCLSkillDataType_delete(UA_CRCLSkillDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_CRCLSKILLDATATYPE]);
}

/* SAMYRobotDataType */
static UA_INLINE void
UA_SAMYRobotDataType_init(UA_SAMYRobotDataType *p) {
    memset(p, 0, sizeof(UA_SAMYRobotDataType));
}

static UA_INLINE UA_SAMYRobotDataType *
UA_SAMYRobotDataType_new(void) {
    return (UA_SAMYRobotDataType*)UA_new(&UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SAMYRobotDataType_copy(const UA_SAMYRobotDataType *src, UA_SAMYRobotDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SAMYRobotDataType_deleteMembers(UA_SAMYRobotDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE]);
}

static UA_INLINE void
UA_SAMYRobotDataType_clear(UA_SAMYRobotDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE]);
}

static UA_INLINE void
UA_SAMYRobotDataType_delete(UA_SAMYRobotDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL_OPCUA[UA_TYPES_CRCL_OPCUA_SAMYROBOTDATATYPE]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif
_UA_END_DECLS
#endif /* TYPES_CRCL_OPCUA_GENERATED_HANDLING_H_ */
