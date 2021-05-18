/* Generated from CRCL.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2021-05-18 10:39:31 */

#ifndef TYPES_CRCL_GENERATED_HANDLING_H_
#define TYPES_CRCL_GENERATED_HANDLING_H_

#include "types_crcl_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* MessageParametersSetDataType */
static UA_INLINE void
UA_MessageParametersSetDataType_init(UA_MessageParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_MessageParametersSetDataType));
}

static UA_INLINE UA_MessageParametersSetDataType *
UA_MessageParametersSetDataType_new(void) {
    return (UA_MessageParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MessageParametersSetDataType_copy(const UA_MessageParametersSetDataType *src, UA_MessageParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MessageParametersSetDataType_deleteMembers(UA_MessageParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_MessageParametersSetDataType_clear(UA_MessageParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_MessageParametersSetDataType_delete(UA_MessageParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMETERSSETDATATYPE]);
}

/* CRCL_PositiveDecimalDataType */
static UA_INLINE void
UA_CRCL_PositiveDecimalDataType_init(UA_CRCL_PositiveDecimalDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PositiveDecimalDataType));
}

static UA_INLINE UA_CRCL_PositiveDecimalDataType *
UA_CRCL_PositiveDecimalDataType_new(void) {
    return (UA_CRCL_PositiveDecimalDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSITIVEDECIMALDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PositiveDecimalDataType_copy(const UA_CRCL_PositiveDecimalDataType *src, UA_CRCL_PositiveDecimalDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSITIVEDECIMALDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PositiveDecimalDataType_deleteMembers(UA_CRCL_PositiveDecimalDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSITIVEDECIMALDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PositiveDecimalDataType_clear(UA_CRCL_PositiveDecimalDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSITIVEDECIMALDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PositiveDecimalDataType_delete(UA_CRCL_PositiveDecimalDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSITIVEDECIMALDATATYPE]);
}

/* CRCL_PointDataType */
static UA_INLINE void
UA_CRCL_PointDataType_init(UA_CRCL_PointDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PointDataType));
}

static UA_INLINE UA_CRCL_PointDataType *
UA_CRCL_PointDataType_new(void) {
    return (UA_CRCL_PointDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PointDataType_copy(const UA_CRCL_PointDataType *src, UA_CRCL_PointDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PointDataType_deleteMembers(UA_CRCL_PointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PointDataType_clear(UA_CRCL_PointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PointDataType_delete(UA_CRCL_PointDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}

/* CRCL_PoseToleranceDataType */
static UA_INLINE void
UA_CRCL_PoseToleranceDataType_init(UA_CRCL_PoseToleranceDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseToleranceDataType));
}

static UA_INLINE UA_CRCL_PoseToleranceDataType *
UA_CRCL_PoseToleranceDataType_new(void) {
    return (UA_CRCL_PoseToleranceDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseToleranceDataType_copy(const UA_CRCL_PoseToleranceDataType *src, UA_CRCL_PoseToleranceDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseToleranceDataType_deleteMembers(UA_CRCL_PoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseToleranceDataType_clear(UA_CRCL_PoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseToleranceDataType_delete(UA_CRCL_PoseToleranceDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}

/* SetMotionCoordinationParametersSetDataType */
static UA_INLINE void
UA_SetMotionCoordinationParametersSetDataType_init(UA_SetMotionCoordinationParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetMotionCoordinationParametersSetDataType));
}

static UA_INLINE UA_SetMotionCoordinationParametersSetDataType *
UA_SetMotionCoordinationParametersSetDataType_new(void) {
    return (UA_SetMotionCoordinationParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationParametersSetDataType_copy(const UA_SetMotionCoordinationParametersSetDataType *src, UA_SetMotionCoordinationParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetMotionCoordinationParametersSetDataType_deleteMembers(UA_SetMotionCoordinationParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetMotionCoordinationParametersSetDataType_clear(UA_SetMotionCoordinationParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetMotionCoordinationParametersSetDataType_delete(UA_SetMotionCoordinationParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMETERSSETDATATYPE]);
}

/* DisableGripperParametersSetDataType */
static UA_INLINE void
UA_DisableGripperParametersSetDataType_init(UA_DisableGripperParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_DisableGripperParametersSetDataType));
}

static UA_INLINE UA_DisableGripperParametersSetDataType *
UA_DisableGripperParametersSetDataType_new(void) {
    return (UA_DisableGripperParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableGripperParametersSetDataType_copy(const UA_DisableGripperParametersSetDataType *src, UA_DisableGripperParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableGripperParametersSetDataType_deleteMembers(UA_DisableGripperParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableGripperParametersSetDataType_clear(UA_DisableGripperParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableGripperParametersSetDataType_delete(UA_DisableGripperParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMETERSSETDATATYPE]);
}

/* CRCLCommandParametersSetDataType */
static UA_INLINE void
UA_CRCLCommandParametersSetDataType_init(UA_CRCLCommandParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandParametersSetDataType));
}

static UA_INLINE UA_CRCLCommandParametersSetDataType *
UA_CRCLCommandParametersSetDataType_new(void) {
    return (UA_CRCLCommandParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandParametersSetDataType_copy(const UA_CRCLCommandParametersSetDataType *src, UA_CRCLCommandParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandParametersSetDataType_deleteMembers(UA_CRCLCommandParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandParametersSetDataType_clear(UA_CRCLCommandParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandParametersSetDataType_delete(UA_CRCLCommandParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMETERSSETDATATYPE]);
}

/* DisableRobotParameterStatusParametersSetDataType */
static UA_INLINE void
UA_DisableRobotParameterStatusParametersSetDataType_init(UA_DisableRobotParameterStatusParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_DisableRobotParameterStatusParametersSetDataType));
}

static UA_INLINE UA_DisableRobotParameterStatusParametersSetDataType *
UA_DisableRobotParameterStatusParametersSetDataType_new(void) {
    return (UA_DisableRobotParameterStatusParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusParametersSetDataType_copy(const UA_DisableRobotParameterStatusParametersSetDataType *src, UA_DisableRobotParameterStatusParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableRobotParameterStatusParametersSetDataType_deleteMembers(UA_DisableRobotParameterStatusParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableRobotParameterStatusParametersSetDataType_clear(UA_DisableRobotParameterStatusParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableRobotParameterStatusParametersSetDataType_delete(UA_DisableRobotParameterStatusParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}

/* CRCL_TransAccelAbsoluteDataType */
static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_init(UA_CRCL_TransAccelAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransAccelAbsoluteDataType));
}

static UA_INLINE UA_CRCL_TransAccelAbsoluteDataType *
UA_CRCL_TransAccelAbsoluteDataType_new(void) {
    return (UA_CRCL_TransAccelAbsoluteDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelAbsoluteDataType_copy(const UA_CRCL_TransAccelAbsoluteDataType *src, UA_CRCL_TransAccelAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_deleteMembers(UA_CRCL_TransAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_clear(UA_CRCL_TransAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelAbsoluteDataType_delete(UA_CRCL_TransAccelAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}

/* OpenToolChangerParametersSetDataType */
static UA_INLINE void
UA_OpenToolChangerParametersSetDataType_init(UA_OpenToolChangerParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_OpenToolChangerParametersSetDataType));
}

static UA_INLINE UA_OpenToolChangerParametersSetDataType *
UA_OpenToolChangerParametersSetDataType_new(void) {
    return (UA_OpenToolChangerParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_OpenToolChangerParametersSetDataType_copy(const UA_OpenToolChangerParametersSetDataType *src, UA_OpenToolChangerParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_OpenToolChangerParametersSetDataType_deleteMembers(UA_OpenToolChangerParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_OpenToolChangerParametersSetDataType_clear(UA_OpenToolChangerParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_OpenToolChangerParametersSetDataType_delete(UA_OpenToolChangerParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMETERSSETDATATYPE]);
}

/* CRCL_FractionDataType */
static UA_INLINE void
UA_CRCL_FractionDataType_init(UA_CRCL_FractionDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_FractionDataType));
}

static UA_INLINE UA_CRCL_FractionDataType *
UA_CRCL_FractionDataType_new(void) {
    return (UA_CRCL_FractionDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_FractionDataType_copy(const UA_CRCL_FractionDataType *src, UA_CRCL_FractionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_FractionDataType_deleteMembers(UA_CRCL_FractionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}

static UA_INLINE void
UA_CRCL_FractionDataType_clear(UA_CRCL_FractionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}

static UA_INLINE void
UA_CRCL_FractionDataType_delete(UA_CRCL_FractionDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}

/* CRCL_JointSpeedAccelDataType */
static UA_INLINE void
UA_CRCL_JointSpeedAccelDataType_init(UA_CRCL_JointSpeedAccelDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointSpeedAccelDataType));
}

static UA_INLINE UA_CRCL_JointSpeedAccelDataType *
UA_CRCL_JointSpeedAccelDataType_new(void) {
    return (UA_CRCL_JointSpeedAccelDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointSpeedAccelDataType_copy(const UA_CRCL_JointSpeedAccelDataType *src, UA_CRCL_JointSpeedAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointSpeedAccelDataType_deleteMembers(UA_CRCL_JointSpeedAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointSpeedAccelDataType_clear(UA_CRCL_JointSpeedAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointSpeedAccelDataType_delete(UA_CRCL_JointSpeedAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}

/* CRCL_JointLimitDataType */
static UA_INLINE void
UA_CRCL_JointLimitDataType_init(UA_CRCL_JointLimitDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointLimitDataType));
}

static UA_INLINE UA_CRCL_JointLimitDataType *
UA_CRCL_JointLimitDataType_new(void) {
    return (UA_CRCL_JointLimitDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointLimitDataType_copy(const UA_CRCL_JointLimitDataType *src, UA_CRCL_JointLimitDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointLimitDataType_deleteMembers(UA_CRCL_JointLimitDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointLimitDataType_clear(UA_CRCL_JointLimitDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointLimitDataType_delete(UA_CRCL_JointLimitDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}

/* EnableRobotParameterStatusParametersSetDataType */
static UA_INLINE void
UA_EnableRobotParameterStatusParametersSetDataType_init(UA_EnableRobotParameterStatusParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_EnableRobotParameterStatusParametersSetDataType));
}

static UA_INLINE UA_EnableRobotParameterStatusParametersSetDataType *
UA_EnableRobotParameterStatusParametersSetDataType_new(void) {
    return (UA_EnableRobotParameterStatusParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusParametersSetDataType_copy(const UA_EnableRobotParameterStatusParametersSetDataType *src, UA_EnableRobotParameterStatusParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableRobotParameterStatusParametersSetDataType_deleteMembers(UA_EnableRobotParameterStatusParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableRobotParameterStatusParametersSetDataType_clear(UA_EnableRobotParameterStatusParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableRobotParameterStatusParametersSetDataType_delete(UA_EnableRobotParameterStatusParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}

/* ConfigureStatusReportParametersSetDataType */
static UA_INLINE void
UA_ConfigureStatusReportParametersSetDataType_init(UA_ConfigureStatusReportParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_ConfigureStatusReportParametersSetDataType));
}

static UA_INLINE UA_ConfigureStatusReportParametersSetDataType *
UA_ConfigureStatusReportParametersSetDataType_new(void) {
    return (UA_ConfigureStatusReportParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportParametersSetDataType_copy(const UA_ConfigureStatusReportParametersSetDataType *src, UA_ConfigureStatusReportParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConfigureStatusReportParametersSetDataType_deleteMembers(UA_ConfigureStatusReportParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_ConfigureStatusReportParametersSetDataType_clear(UA_ConfigureStatusReportParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_ConfigureStatusReportParametersSetDataType_delete(UA_ConfigureStatusReportParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMETERSSETDATATYPE]);
}

/* CRCL_DataThingDataType */
static UA_INLINE void
UA_CRCL_DataThingDataType_init(UA_CRCL_DataThingDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_DataThingDataType));
}

static UA_INLINE UA_CRCL_DataThingDataType *
UA_CRCL_DataThingDataType_new(void) {
    return (UA_CRCL_DataThingDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_DataThingDataType_copy(const UA_CRCL_DataThingDataType *src, UA_CRCL_DataThingDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_DataThingDataType_deleteMembers(UA_CRCL_DataThingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_DataThingDataType_clear(UA_CRCL_DataThingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_DataThingDataType_delete(UA_CRCL_DataThingDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}

/* CRCL_TorqueUnitEnumDataType */
static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_init(UA_CRCL_TorqueUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TorqueUnitEnumDataType));
}

static UA_INLINE UA_CRCL_TorqueUnitEnumDataType *
UA_CRCL_TorqueUnitEnumDataType_new(void) {
    return (UA_CRCL_TorqueUnitEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TorqueUnitEnumDataType_copy(const UA_CRCL_TorqueUnitEnumDataType *src, UA_CRCL_TorqueUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_deleteMembers(UA_CRCL_TorqueUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_clear(UA_CRCL_TorqueUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TorqueUnitEnumDataType_delete(UA_CRCL_TorqueUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}

/* CRCL_AngleUnitEnumDataType */
static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_init(UA_CRCL_AngleUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_AngleUnitEnumDataType));
}

static UA_INLINE UA_CRCL_AngleUnitEnumDataType *
UA_CRCL_AngleUnitEnumDataType_new(void) {
    return (UA_CRCL_AngleUnitEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_AngleUnitEnumDataType_copy(const UA_CRCL_AngleUnitEnumDataType *src, UA_CRCL_AngleUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_deleteMembers(UA_CRCL_AngleUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_clear(UA_CRCL_AngleUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_AngleUnitEnumDataType_delete(UA_CRCL_AngleUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}

/* CRCL_JointStatusDataType */
static UA_INLINE void
UA_CRCL_JointStatusDataType_init(UA_CRCL_JointStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointStatusDataType));
}

static UA_INLINE UA_CRCL_JointStatusDataType *
UA_CRCL_JointStatusDataType_new(void) {
    return (UA_CRCL_JointStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusDataType_copy(const UA_CRCL_JointStatusDataType *src, UA_CRCL_JointStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointStatusDataType_deleteMembers(UA_CRCL_JointStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusDataType_clear(UA_CRCL_JointStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusDataType_delete(UA_CRCL_JointStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}

/* CRCL_TransSpeedAbsoluteDataType */
static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_init(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransSpeedAbsoluteDataType));
}

static UA_INLINE UA_CRCL_TransSpeedAbsoluteDataType *
UA_CRCL_TransSpeedAbsoluteDataType_new(void) {
    return (UA_CRCL_TransSpeedAbsoluteDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedAbsoluteDataType_copy(const UA_CRCL_TransSpeedAbsoluteDataType *src, UA_CRCL_TransSpeedAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_deleteMembers(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_clear(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedAbsoluteDataType_delete(UA_CRCL_TransSpeedAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}

/* CloseToolChangerParametersSetDataType */
static UA_INLINE void
UA_CloseToolChangerParametersSetDataType_init(UA_CloseToolChangerParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_CloseToolChangerParametersSetDataType));
}

static UA_INLINE UA_CloseToolChangerParametersSetDataType *
UA_CloseToolChangerParametersSetDataType_new(void) {
    return (UA_CloseToolChangerParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CloseToolChangerParametersSetDataType_copy(const UA_CloseToolChangerParametersSetDataType *src, UA_CloseToolChangerParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CloseToolChangerParametersSetDataType_deleteMembers(UA_CloseToolChangerParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_CloseToolChangerParametersSetDataType_clear(UA_CloseToolChangerParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_CloseToolChangerParametersSetDataType_delete(UA_CloseToolChangerParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMETERSSETDATATYPE]);
}

/* CRCL_ParameterSettingDataType */
static UA_INLINE void
UA_CRCL_ParameterSettingDataType_init(UA_CRCL_ParameterSettingDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ParameterSettingDataType));
}

static UA_INLINE UA_CRCL_ParameterSettingDataType *
UA_CRCL_ParameterSettingDataType_new(void) {
    return (UA_CRCL_ParameterSettingDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ParameterSettingDataType_copy(const UA_CRCL_ParameterSettingDataType *src, UA_CRCL_ParameterSettingDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ParameterSettingDataType_deleteMembers(UA_CRCL_ParameterSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParameterSettingDataType_clear(UA_CRCL_ParameterSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParameterSettingDataType_delete(UA_CRCL_ParameterSettingDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}

/* CRCL_ConfigureJointReportDataType */
static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_init(UA_CRCL_ConfigureJointReportDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ConfigureJointReportDataType));
}

static UA_INLINE UA_CRCL_ConfigureJointReportDataType *
UA_CRCL_ConfigureJointReportDataType_new(void) {
    return (UA_CRCL_ConfigureJointReportDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ConfigureJointReportDataType_copy(const UA_CRCL_ConfigureJointReportDataType *src, UA_CRCL_ConfigureJointReportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_deleteMembers(UA_CRCL_ConfigureJointReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_clear(UA_CRCL_ConfigureJointReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ConfigureJointReportDataType_delete(UA_CRCL_ConfigureJointReportDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}

/* SetEndeffectorParametersParametersSetDataType */
static UA_INLINE void
UA_SetEndeffectorParametersParametersSetDataType_init(UA_SetEndeffectorParametersParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetEndeffectorParametersParametersSetDataType));
}

static UA_INLINE UA_SetEndeffectorParametersParametersSetDataType *
UA_SetEndeffectorParametersParametersSetDataType_new(void) {
    return (UA_SetEndeffectorParametersParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersParametersSetDataType_copy(const UA_SetEndeffectorParametersParametersSetDataType *src, UA_SetEndeffectorParametersParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndeffectorParametersParametersSetDataType_deleteMembers(UA_SetEndeffectorParametersParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParametersParametersSetDataType_clear(UA_SetEndeffectorParametersParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParametersParametersSetDataType_delete(UA_SetEndeffectorParametersParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMETERSSETDATATYPE]);
}

/* CRCL_JointPositionToleranceSettingDataType */
static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_init(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointPositionToleranceSettingDataType));
}

static UA_INLINE UA_CRCL_JointPositionToleranceSettingDataType *
UA_CRCL_JointPositionToleranceSettingDataType_new(void) {
    return (UA_CRCL_JointPositionToleranceSettingDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionToleranceSettingDataType_copy(const UA_CRCL_JointPositionToleranceSettingDataType *src, UA_CRCL_JointPositionToleranceSettingDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_deleteMembers(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_clear(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionToleranceSettingDataType_delete(UA_CRCL_JointPositionToleranceSettingDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}

/* CRCL_RotAccelAbsoluteDataType */
static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_init(UA_CRCL_RotAccelAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotAccelAbsoluteDataType));
}

static UA_INLINE UA_CRCL_RotAccelAbsoluteDataType *
UA_CRCL_RotAccelAbsoluteDataType_new(void) {
    return (UA_CRCL_RotAccelAbsoluteDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelAbsoluteDataType_copy(const UA_CRCL_RotAccelAbsoluteDataType *src, UA_CRCL_RotAccelAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_deleteMembers(UA_CRCL_RotAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_clear(UA_CRCL_RotAccelAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelAbsoluteDataType_delete(UA_CRCL_RotAccelAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}

/* SetRobotParametersParametersSetDataType */
static UA_INLINE void
UA_SetRobotParametersParametersSetDataType_init(UA_SetRobotParametersParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetRobotParametersParametersSetDataType));
}

static UA_INLINE UA_SetRobotParametersParametersSetDataType *
UA_SetRobotParametersParametersSetDataType_new(void) {
    return (UA_SetRobotParametersParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRobotParametersParametersSetDataType_copy(const UA_SetRobotParametersParametersSetDataType *src, UA_SetRobotParametersParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRobotParametersParametersSetDataType_deleteMembers(UA_SetRobotParametersParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRobotParametersParametersSetDataType_clear(UA_SetRobotParametersParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRobotParametersParametersSetDataType_delete(UA_SetRobotParametersParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMETERSSETDATATYPE]);
}

/* CRCL_CommandStateEnumDataType */
static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_init(UA_CRCL_CommandStateEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_CommandStateEnumDataType));
}

static UA_INLINE UA_CRCL_CommandStateEnumDataType *
UA_CRCL_CommandStateEnumDataType_new(void) {
    return (UA_CRCL_CommandStateEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_CommandStateEnumDataType_copy(const UA_CRCL_CommandStateEnumDataType *src, UA_CRCL_CommandStateEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_deleteMembers(UA_CRCL_CommandStateEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_clear(UA_CRCL_CommandStateEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStateEnumDataType_delete(UA_CRCL_CommandStateEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}

/* CRCL_LengthUnitEnumDataType */
static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_init(UA_CRCL_LengthUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_LengthUnitEnumDataType));
}

static UA_INLINE UA_CRCL_LengthUnitEnumDataType *
UA_CRCL_LengthUnitEnumDataType_new(void) {
    return (UA_CRCL_LengthUnitEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_LengthUnitEnumDataType_copy(const UA_CRCL_LengthUnitEnumDataType *src, UA_CRCL_LengthUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_deleteMembers(UA_CRCL_LengthUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_clear(UA_CRCL_LengthUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_LengthUnitEnumDataType_delete(UA_CRCL_LengthUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}

/* SetAngleUnitsParametersSetDataType */
static UA_INLINE void
UA_SetAngleUnitsParametersSetDataType_init(UA_SetAngleUnitsParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetAngleUnitsParametersSetDataType));
}

static UA_INLINE UA_SetAngleUnitsParametersSetDataType *
UA_SetAngleUnitsParametersSetDataType_new(void) {
    return (UA_SetAngleUnitsParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetAngleUnitsParametersSetDataType_copy(const UA_SetAngleUnitsParametersSetDataType *src, UA_SetAngleUnitsParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetAngleUnitsParametersSetDataType_deleteMembers(UA_SetAngleUnitsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetAngleUnitsParametersSetDataType_clear(UA_SetAngleUnitsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetAngleUnitsParametersSetDataType_delete(UA_SetAngleUnitsParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMETERSSETDATATYPE]);
}

/* CRCL_VectorDataType */
static UA_INLINE void
UA_CRCL_VectorDataType_init(UA_CRCL_VectorDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_VectorDataType));
}

static UA_INLINE UA_CRCL_VectorDataType *
UA_CRCL_VectorDataType_new(void) {
    return (UA_CRCL_VectorDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_VectorDataType_copy(const UA_CRCL_VectorDataType *src, UA_CRCL_VectorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_VectorDataType_deleteMembers(UA_CRCL_VectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VectorDataType_clear(UA_CRCL_VectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VectorDataType_delete(UA_CRCL_VectorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}

/* CRCL_GripperStatusDataType */
static UA_INLINE void
UA_CRCL_GripperStatusDataType_init(UA_CRCL_GripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_GripperStatusDataType));
}

static UA_INLINE UA_CRCL_GripperStatusDataType *
UA_CRCL_GripperStatusDataType_new(void) {
    return (UA_CRCL_GripperStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_GripperStatusDataType_copy(const UA_CRCL_GripperStatusDataType *src, UA_CRCL_GripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_GripperStatusDataType_deleteMembers(UA_CRCL_GripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GripperStatusDataType_clear(UA_CRCL_GripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GripperStatusDataType_delete(UA_CRCL_GripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}

/* SetLengthUnitsParametersSetDataType */
static UA_INLINE void
UA_SetLengthUnitsParametersSetDataType_init(UA_SetLengthUnitsParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetLengthUnitsParametersSetDataType));
}

static UA_INLINE UA_SetLengthUnitsParametersSetDataType *
UA_SetLengthUnitsParametersSetDataType_new(void) {
    return (UA_SetLengthUnitsParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetLengthUnitsParametersSetDataType_copy(const UA_SetLengthUnitsParametersSetDataType *src, UA_SetLengthUnitsParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetLengthUnitsParametersSetDataType_deleteMembers(UA_SetLengthUnitsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetLengthUnitsParametersSetDataType_clear(UA_SetLengthUnitsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetLengthUnitsParametersSetDataType_delete(UA_SetLengthUnitsParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMETERSSETDATATYPE]);
}

/* CRCL_JointForceTorqueDataType */
static UA_INLINE void
UA_CRCL_JointForceTorqueDataType_init(UA_CRCL_JointForceTorqueDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointForceTorqueDataType));
}

static UA_INLINE UA_CRCL_JointForceTorqueDataType *
UA_CRCL_JointForceTorqueDataType_new(void) {
    return (UA_CRCL_JointForceTorqueDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointForceTorqueDataType_copy(const UA_CRCL_JointForceTorqueDataType *src, UA_CRCL_JointForceTorqueDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointForceTorqueDataType_deleteMembers(UA_CRCL_JointForceTorqueDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointForceTorqueDataType_clear(UA_CRCL_JointForceTorqueDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointForceTorqueDataType_delete(UA_CRCL_JointForceTorqueDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}

/* SetTorqueUnitsParametersSetDataType */
static UA_INLINE void
UA_SetTorqueUnitsParametersSetDataType_init(UA_SetTorqueUnitsParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetTorqueUnitsParametersSetDataType));
}

static UA_INLINE UA_SetTorqueUnitsParametersSetDataType *
UA_SetTorqueUnitsParametersSetDataType_new(void) {
    return (UA_SetTorqueUnitsParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsParametersSetDataType_copy(const UA_SetTorqueUnitsParametersSetDataType *src, UA_SetTorqueUnitsParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTorqueUnitsParametersSetDataType_deleteMembers(UA_SetTorqueUnitsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTorqueUnitsParametersSetDataType_clear(UA_SetTorqueUnitsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTorqueUnitsParametersSetDataType_delete(UA_SetTorqueUnitsParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMETERSSETDATATYPE]);
}

/* CRCL_GuardLimitEnumDataType */
static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_init(UA_CRCL_GuardLimitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_GuardLimitEnumDataType));
}

static UA_INLINE UA_CRCL_GuardLimitEnumDataType *
UA_CRCL_GuardLimitEnumDataType_new(void) {
    return (UA_CRCL_GuardLimitEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_GuardLimitEnumDataType_copy(const UA_CRCL_GuardLimitEnumDataType *src, UA_CRCL_GuardLimitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_deleteMembers(UA_CRCL_GuardLimitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_clear(UA_CRCL_GuardLimitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardLimitEnumDataType_delete(UA_CRCL_GuardLimitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}

/* CRCL_RotSpeedRelativeDataType */
static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_init(UA_CRCL_RotSpeedRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotSpeedRelativeDataType));
}

static UA_INLINE UA_CRCL_RotSpeedRelativeDataType *
UA_CRCL_RotSpeedRelativeDataType_new(void) {
    return (UA_CRCL_RotSpeedRelativeDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedRelativeDataType_copy(const UA_CRCL_RotSpeedRelativeDataType *src, UA_CRCL_RotSpeedRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_deleteMembers(UA_CRCL_RotSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_clear(UA_CRCL_RotSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedRelativeDataType_delete(UA_CRCL_RotSpeedRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}

/* CRCL_RotAccelRelativeDataType */
static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_init(UA_CRCL_RotAccelRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotAccelRelativeDataType));
}

static UA_INLINE UA_CRCL_RotAccelRelativeDataType *
UA_CRCL_RotAccelRelativeDataType_new(void) {
    return (UA_CRCL_RotAccelRelativeDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelRelativeDataType_copy(const UA_CRCL_RotAccelRelativeDataType *src, UA_CRCL_RotAccelRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_deleteMembers(UA_CRCL_RotAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_clear(UA_CRCL_RotAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelRelativeDataType_delete(UA_CRCL_RotAccelRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}

/* CRCL_ThreeFingerGripperStatusDataType */
static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_init(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ThreeFingerGripperStatusDataType));
}

static UA_INLINE UA_CRCL_ThreeFingerGripperStatusDataType *
UA_CRCL_ThreeFingerGripperStatusDataType_new(void) {
    return (UA_CRCL_ThreeFingerGripperStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ThreeFingerGripperStatusDataType_copy(const UA_CRCL_ThreeFingerGripperStatusDataType *src, UA_CRCL_ThreeFingerGripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_deleteMembers(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_clear(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ThreeFingerGripperStatusDataType_delete(UA_CRCL_ThreeFingerGripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}

/* CRCL_RotAccelDataType */
static UA_INLINE void
UA_CRCL_RotAccelDataType_init(UA_CRCL_RotAccelDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotAccelDataType));
}

static UA_INLINE UA_CRCL_RotAccelDataType *
UA_CRCL_RotAccelDataType_new(void) {
    return (UA_CRCL_RotAccelDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelDataType_copy(const UA_CRCL_RotAccelDataType *src, UA_CRCL_RotAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotAccelDataType_deleteMembers(UA_CRCL_RotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelDataType_clear(UA_CRCL_RotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotAccelDataType_delete(UA_CRCL_RotAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}

/* DisableSensorParametersSetDataType */
static UA_INLINE void
UA_DisableSensorParametersSetDataType_init(UA_DisableSensorParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_DisableSensorParametersSetDataType));
}

static UA_INLINE UA_DisableSensorParametersSetDataType *
UA_DisableSensorParametersSetDataType_new(void) {
    return (UA_DisableSensorParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableSensorParametersSetDataType_copy(const UA_DisableSensorParametersSetDataType *src, UA_DisableSensorParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableSensorParametersSetDataType_deleteMembers(UA_DisableSensorParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableSensorParametersSetDataType_clear(UA_DisableSensorParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_DisableSensorParametersSetDataType_delete(UA_DisableSensorParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMETERSSETDATATYPE]);
}

/* CRCL_ScalarSensorStatusDataType */
static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_init(UA_CRCL_ScalarSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ScalarSensorStatusDataType));
}

static UA_INLINE UA_CRCL_ScalarSensorStatusDataType *
UA_CRCL_ScalarSensorStatusDataType_new(void) {
    return (UA_CRCL_ScalarSensorStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ScalarSensorStatusDataType_copy(const UA_CRCL_ScalarSensorStatusDataType *src, UA_CRCL_ScalarSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_deleteMembers(UA_CRCL_ScalarSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_clear(UA_CRCL_ScalarSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ScalarSensorStatusDataType_delete(UA_CRCL_ScalarSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}

/* DwellParametersSetDataType */
static UA_INLINE void
UA_DwellParametersSetDataType_init(UA_DwellParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_DwellParametersSetDataType));
}

static UA_INLINE UA_DwellParametersSetDataType *
UA_DwellParametersSetDataType_new(void) {
    return (UA_DwellParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DwellParametersSetDataType_copy(const UA_DwellParametersSetDataType *src, UA_DwellParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DwellParametersSetDataType_deleteMembers(UA_DwellParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_DwellParametersSetDataType_clear(UA_DwellParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_DwellParametersSetDataType_delete(UA_DwellParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMETERSSETDATATYPE]);
}

/* CRCL_ForceUnitEnumDataType */
static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_init(UA_CRCL_ForceUnitEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ForceUnitEnumDataType));
}

static UA_INLINE UA_CRCL_ForceUnitEnumDataType *
UA_CRCL_ForceUnitEnumDataType_new(void) {
    return (UA_CRCL_ForceUnitEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ForceUnitEnumDataType_copy(const UA_CRCL_ForceUnitEnumDataType *src, UA_CRCL_ForceUnitEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_deleteMembers(UA_CRCL_ForceUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_clear(UA_CRCL_ForceUnitEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceUnitEnumDataType_delete(UA_CRCL_ForceUnitEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}

/* GetStatusParametersSetDataType */
static UA_INLINE void
UA_GetStatusParametersSetDataType_init(UA_GetStatusParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_GetStatusParametersSetDataType));
}

static UA_INLINE UA_GetStatusParametersSetDataType *
UA_GetStatusParametersSetDataType_new(void) {
    return (UA_GetStatusParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_GetStatusParametersSetDataType_copy(const UA_GetStatusParametersSetDataType *src, UA_GetStatusParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_GetStatusParametersSetDataType_deleteMembers(UA_GetStatusParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_GetStatusParametersSetDataType_clear(UA_GetStatusParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_GetStatusParametersSetDataType_delete(UA_GetStatusParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMETERSSETDATATYPE]);
}

/* SetIntermediatePoseToleranceParametersSetDataType */
static UA_INLINE void
UA_SetIntermediatePoseToleranceParametersSetDataType_init(UA_SetIntermediatePoseToleranceParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetIntermediatePoseToleranceParametersSetDataType));
}

static UA_INLINE UA_SetIntermediatePoseToleranceParametersSetDataType *
UA_SetIntermediatePoseToleranceParametersSetDataType_new(void) {
    return (UA_SetIntermediatePoseToleranceParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceParametersSetDataType_copy(const UA_SetIntermediatePoseToleranceParametersSetDataType *src, UA_SetIntermediatePoseToleranceParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetIntermediatePoseToleranceParametersSetDataType_deleteMembers(UA_SetIntermediatePoseToleranceParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetIntermediatePoseToleranceParametersSetDataType_clear(UA_SetIntermediatePoseToleranceParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetIntermediatePoseToleranceParametersSetDataType_delete(UA_SetIntermediatePoseToleranceParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMETERSSETDATATYPE]);
}

/* SetEndPoseToleranceParametersSetDataType */
static UA_INLINE void
UA_SetEndPoseToleranceParametersSetDataType_init(UA_SetEndPoseToleranceParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetEndPoseToleranceParametersSetDataType));
}

static UA_INLINE UA_SetEndPoseToleranceParametersSetDataType *
UA_SetEndPoseToleranceParametersSetDataType_new(void) {
    return (UA_SetEndPoseToleranceParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceParametersSetDataType_copy(const UA_SetEndPoseToleranceParametersSetDataType *src, UA_SetEndPoseToleranceParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndPoseToleranceParametersSetDataType_deleteMembers(UA_SetEndPoseToleranceParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndPoseToleranceParametersSetDataType_clear(UA_SetEndPoseToleranceParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndPoseToleranceParametersSetDataType_delete(UA_SetEndPoseToleranceParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMETERSSETDATATYPE]);
}

/* PubSubIPAddresses */
static UA_INLINE void
UA_PubSubIPAddresses_init(UA_PubSubIPAddresses *p) {
    memset(p, 0, sizeof(UA_PubSubIPAddresses));
}

static UA_INLINE UA_PubSubIPAddresses *
UA_PubSubIPAddresses_new(void) {
    return (UA_PubSubIPAddresses*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_PUBSUBIPADDRESSES]);
}

static UA_INLINE UA_StatusCode
UA_PubSubIPAddresses_copy(const UA_PubSubIPAddresses *src, UA_PubSubIPAddresses *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_PUBSUBIPADDRESSES]);
}

UA_DEPRECATED static UA_INLINE void
UA_PubSubIPAddresses_deleteMembers(UA_PubSubIPAddresses *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_PUBSUBIPADDRESSES]);
}

static UA_INLINE void
UA_PubSubIPAddresses_clear(UA_PubSubIPAddresses *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_PUBSUBIPADDRESSES]);
}

static UA_INLINE void
UA_PubSubIPAddresses_delete(UA_PubSubIPAddresses *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_PUBSUBIPADDRESSES]);
}

/* CRCL_JointStatusesDataType */
static UA_INLINE void
UA_CRCL_JointStatusesDataType_init(UA_CRCL_JointStatusesDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointStatusesDataType));
}

static UA_INLINE UA_CRCL_JointStatusesDataType *
UA_CRCL_JointStatusesDataType_new(void) {
    return (UA_CRCL_JointStatusesDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusesDataType_copy(const UA_CRCL_JointStatusesDataType *src, UA_CRCL_JointStatusesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointStatusesDataType_deleteMembers(UA_CRCL_JointStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusesDataType_clear(UA_CRCL_JointStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointStatusesDataType_delete(UA_CRCL_JointStatusesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}

/* CRCL_StopConditionEnumDataType */
static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_init(UA_CRCL_StopConditionEnumDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_StopConditionEnumDataType));
}

static UA_INLINE UA_CRCL_StopConditionEnumDataType *
UA_CRCL_StopConditionEnumDataType_new(void) {
    return (UA_CRCL_StopConditionEnumDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_StopConditionEnumDataType_copy(const UA_CRCL_StopConditionEnumDataType *src, UA_CRCL_StopConditionEnumDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_deleteMembers(UA_CRCL_StopConditionEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_clear(UA_CRCL_StopConditionEnumDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}

static UA_INLINE void
UA_CRCL_StopConditionEnumDataType_delete(UA_CRCL_StopConditionEnumDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}

/* EndCanonParametersSetDataType */
static UA_INLINE void
UA_EndCanonParametersSetDataType_init(UA_EndCanonParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_EndCanonParametersSetDataType));
}

static UA_INLINE UA_EndCanonParametersSetDataType *
UA_EndCanonParametersSetDataType_new(void) {
    return (UA_EndCanonParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EndCanonParametersSetDataType_copy(const UA_EndCanonParametersSetDataType *src, UA_EndCanonParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EndCanonParametersSetDataType_deleteMembers(UA_EndCanonParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_EndCanonParametersSetDataType_clear(UA_EndCanonParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_EndCanonParametersSetDataType_delete(UA_EndCanonParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMETERSSETDATATYPE]);
}

/* CRCL_RotSpeedAbsoluteDataType */
static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_init(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotSpeedAbsoluteDataType));
}

static UA_INLINE UA_CRCL_RotSpeedAbsoluteDataType *
UA_CRCL_RotSpeedAbsoluteDataType_new(void) {
    return (UA_CRCL_RotSpeedAbsoluteDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedAbsoluteDataType_copy(const UA_CRCL_RotSpeedAbsoluteDataType *src, UA_CRCL_RotSpeedAbsoluteDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_deleteMembers(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_clear(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedAbsoluteDataType_delete(UA_CRCL_RotSpeedAbsoluteDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}

/* InitCanonParametersSetDataType */
static UA_INLINE void
UA_InitCanonParametersSetDataType_init(UA_InitCanonParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_InitCanonParametersSetDataType));
}

static UA_INLINE UA_InitCanonParametersSetDataType *
UA_InitCanonParametersSetDataType_new(void) {
    return (UA_InitCanonParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_InitCanonParametersSetDataType_copy(const UA_InitCanonParametersSetDataType *src, UA_InitCanonParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_InitCanonParametersSetDataType_deleteMembers(UA_InitCanonParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_InitCanonParametersSetDataType_clear(UA_InitCanonParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_InitCanonParametersSetDataType_delete(UA_InitCanonParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMETERSSETDATATYPE]);
}

/* CRCL_GuardDataType */
static UA_INLINE void
UA_CRCL_GuardDataType_init(UA_CRCL_GuardDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_GuardDataType));
}

static UA_INLINE UA_CRCL_GuardDataType *
UA_CRCL_GuardDataType_new(void) {
    return (UA_CRCL_GuardDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_GuardDataType_copy(const UA_CRCL_GuardDataType *src, UA_CRCL_GuardDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_GuardDataType_deleteMembers(UA_CRCL_GuardDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardDataType_clear(UA_CRCL_GuardDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_GuardDataType_delete(UA_CRCL_GuardDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}

/* ConfigureStatusReportDataType */
static UA_INLINE void
UA_ConfigureStatusReportDataType_init(UA_ConfigureStatusReportDataType *p) {
    memset(p, 0, sizeof(UA_ConfigureStatusReportDataType));
}

static UA_INLINE UA_ConfigureStatusReportDataType *
UA_ConfigureStatusReportDataType_new(void) {
    return (UA_ConfigureStatusReportDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportDataType_copy(const UA_ConfigureStatusReportDataType *src, UA_ConfigureStatusReportDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConfigureStatusReportDataType_deleteMembers(UA_ConfigureStatusReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}

static UA_INLINE void
UA_ConfigureStatusReportDataType_clear(UA_ConfigureStatusReportDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}

static UA_INLINE void
UA_ConfigureStatusReportDataType_delete(UA_ConfigureStatusReportDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}

/* RunProgramDataType */
static UA_INLINE void
UA_RunProgramDataType_init(UA_RunProgramDataType *p) {
    memset(p, 0, sizeof(UA_RunProgramDataType));
}

static UA_INLINE UA_RunProgramDataType *
UA_RunProgramDataType_new(void) {
    return (UA_RunProgramDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_RunProgramDataType_copy(const UA_RunProgramDataType *src, UA_RunProgramDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_RunProgramDataType_deleteMembers(UA_RunProgramDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}

static UA_INLINE void
UA_RunProgramDataType_clear(UA_RunProgramDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}

static UA_INLINE void
UA_RunProgramDataType_delete(UA_RunProgramDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}

/* CRCL_ParallelGripperStatusDataType */
static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_init(UA_CRCL_ParallelGripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ParallelGripperStatusDataType));
}

static UA_INLINE UA_CRCL_ParallelGripperStatusDataType *
UA_CRCL_ParallelGripperStatusDataType_new(void) {
    return (UA_CRCL_ParallelGripperStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ParallelGripperStatusDataType_copy(const UA_CRCL_ParallelGripperStatusDataType *src, UA_CRCL_ParallelGripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_deleteMembers(UA_CRCL_ParallelGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_clear(UA_CRCL_ParallelGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ParallelGripperStatusDataType_delete(UA_CRCL_ParallelGripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}

/* SetRotAccelParametersSetDataType */
static UA_INLINE void
UA_SetRotAccelParametersSetDataType_init(UA_SetRotAccelParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetRotAccelParametersSetDataType));
}

static UA_INLINE UA_SetRotAccelParametersSetDataType *
UA_SetRotAccelParametersSetDataType_new(void) {
    return (UA_SetRotAccelParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRotAccelParametersSetDataType_copy(const UA_SetRotAccelParametersSetDataType *src, UA_SetRotAccelParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRotAccelParametersSetDataType_deleteMembers(UA_SetRotAccelParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRotAccelParametersSetDataType_clear(UA_SetRotAccelParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRotAccelParametersSetDataType_delete(UA_SetRotAccelParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMETERSSETDATATYPE]);
}

/* CRCLCommandDataType */
static UA_INLINE void
UA_CRCLCommandDataType_init(UA_CRCLCommandDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandDataType));
}

static UA_INLINE UA_CRCLCommandDataType *
UA_CRCLCommandDataType_new(void) {
    return (UA_CRCLCommandDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandDataType_copy(const UA_CRCLCommandDataType *src, UA_CRCLCommandDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandDataType_deleteMembers(UA_CRCLCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandDataType_clear(UA_CRCLCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandDataType_delete(UA_CRCLCommandDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}

/* SetEndeffectorParametersSetDataType */
static UA_INLINE void
UA_SetEndeffectorParametersSetDataType_init(UA_SetEndeffectorParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetEndeffectorParametersSetDataType));
}

static UA_INLINE UA_SetEndeffectorParametersSetDataType *
UA_SetEndeffectorParametersSetDataType_new(void) {
    return (UA_SetEndeffectorParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersSetDataType_copy(const UA_SetEndeffectorParametersSetDataType *src, UA_SetEndeffectorParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndeffectorParametersSetDataType_deleteMembers(UA_SetEndeffectorParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParametersSetDataType_clear(UA_SetEndeffectorParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParametersSetDataType_delete(UA_SetEndeffectorParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE]);
}

/* SetIntermediatePoseToleranceDataType */
static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_init(UA_SetIntermediatePoseToleranceDataType *p) {
    memset(p, 0, sizeof(UA_SetIntermediatePoseToleranceDataType));
}

static UA_INLINE UA_SetIntermediatePoseToleranceDataType *
UA_SetIntermediatePoseToleranceDataType_new(void) {
    return (UA_SetIntermediatePoseToleranceDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceDataType_copy(const UA_SetIntermediatePoseToleranceDataType *src, UA_SetIntermediatePoseToleranceDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_deleteMembers(UA_SetIntermediatePoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_clear(UA_SetIntermediatePoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetIntermediatePoseToleranceDataType_delete(UA_SetIntermediatePoseToleranceDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}

/* SetRobotParametersDataType */
static UA_INLINE void
UA_SetRobotParametersDataType_init(UA_SetRobotParametersDataType *p) {
    memset(p, 0, sizeof(UA_SetRobotParametersDataType));
}

static UA_INLINE UA_SetRobotParametersDataType *
UA_SetRobotParametersDataType_new(void) {
    return (UA_SetRobotParametersDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRobotParametersDataType_copy(const UA_SetRobotParametersDataType *src, UA_SetRobotParametersDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRobotParametersDataType_deleteMembers(UA_SetRobotParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetRobotParametersDataType_clear(UA_SetRobotParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetRobotParametersDataType_delete(UA_SetRobotParametersDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}

/* CRCL_ForceTorqueSensorStatusDataType */
static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_init(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ForceTorqueSensorStatusDataType));
}

static UA_INLINE UA_CRCL_ForceTorqueSensorStatusDataType *
UA_CRCL_ForceTorqueSensorStatusDataType_new(void) {
    return (UA_CRCL_ForceTorqueSensorStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ForceTorqueSensorStatusDataType_copy(const UA_CRCL_ForceTorqueSensorStatusDataType *src, UA_CRCL_ForceTorqueSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_deleteMembers(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_clear(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ForceTorqueSensorStatusDataType_delete(UA_CRCL_ForceTorqueSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}

/* CRCL_OnOffSensorStatusDataType */
static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_init(UA_CRCL_OnOffSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_OnOffSensorStatusDataType));
}

static UA_INLINE UA_CRCL_OnOffSensorStatusDataType *
UA_CRCL_OnOffSensorStatusDataType_new(void) {
    return (UA_CRCL_OnOffSensorStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_OnOffSensorStatusDataType_copy(const UA_CRCL_OnOffSensorStatusDataType *src, UA_CRCL_OnOffSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_deleteMembers(UA_CRCL_OnOffSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_clear(UA_CRCL_OnOffSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_OnOffSensorStatusDataType_delete(UA_CRCL_OnOffSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}

/* EnableSensorParametersSetDataType */
static UA_INLINE void
UA_EnableSensorParametersSetDataType_init(UA_EnableSensorParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_EnableSensorParametersSetDataType));
}

static UA_INLINE UA_EnableSensorParametersSetDataType *
UA_EnableSensorParametersSetDataType_new(void) {
    return (UA_EnableSensorParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableSensorParametersSetDataType_copy(const UA_EnableSensorParametersSetDataType *src, UA_EnableSensorParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableSensorParametersSetDataType_deleteMembers(UA_EnableSensorParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableSensorParametersSetDataType_clear(UA_EnableSensorParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableSensorParametersSetDataType_delete(UA_EnableSensorParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMETERSSETDATATYPE]);
}

/* CRCL_JointDetailsDataType */
static UA_INLINE void
UA_CRCL_JointDetailsDataType_init(UA_CRCL_JointDetailsDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointDetailsDataType));
}

static UA_INLINE UA_CRCL_JointDetailsDataType *
UA_CRCL_JointDetailsDataType_new(void) {
    return (UA_CRCL_JointDetailsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointDetailsDataType_copy(const UA_CRCL_JointDetailsDataType *src, UA_CRCL_JointDetailsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointDetailsDataType_deleteMembers(UA_CRCL_JointDetailsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointDetailsDataType_clear(UA_CRCL_JointDetailsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointDetailsDataType_delete(UA_CRCL_JointDetailsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}

/* CRCL_SensorStatusDataType */
static UA_INLINE void
UA_CRCL_SensorStatusDataType_init(UA_CRCL_SensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_SensorStatusDataType));
}

static UA_INLINE UA_CRCL_SensorStatusDataType *
UA_CRCL_SensorStatusDataType_new(void) {
    return (UA_CRCL_SensorStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusDataType_copy(const UA_CRCL_SensorStatusDataType *src, UA_CRCL_SensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_SensorStatusDataType_deleteMembers(UA_CRCL_SensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusDataType_clear(UA_CRCL_SensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusDataType_delete(UA_CRCL_SensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}

/* CRCL_TransAccelRelativeDataType */
static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_init(UA_CRCL_TransAccelRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransAccelRelativeDataType));
}

static UA_INLINE UA_CRCL_TransAccelRelativeDataType *
UA_CRCL_TransAccelRelativeDataType_new(void) {
    return (UA_CRCL_TransAccelRelativeDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelRelativeDataType_copy(const UA_CRCL_TransAccelRelativeDataType *src, UA_CRCL_TransAccelRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_deleteMembers(UA_CRCL_TransAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_clear(UA_CRCL_TransAccelRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelRelativeDataType_delete(UA_CRCL_TransAccelRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}

/* CRCL_TransSpeedRelativeDataType */
static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_init(UA_CRCL_TransSpeedRelativeDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransSpeedRelativeDataType));
}

static UA_INLINE UA_CRCL_TransSpeedRelativeDataType *
UA_CRCL_TransSpeedRelativeDataType_new(void) {
    return (UA_CRCL_TransSpeedRelativeDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedRelativeDataType_copy(const UA_CRCL_TransSpeedRelativeDataType *src, UA_CRCL_TransSpeedRelativeDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_deleteMembers(UA_CRCL_TransSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_clear(UA_CRCL_TransSpeedRelativeDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedRelativeDataType_delete(UA_CRCL_TransSpeedRelativeDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}

/* CRCL_TwistDataType */
static UA_INLINE void
UA_CRCL_TwistDataType_init(UA_CRCL_TwistDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TwistDataType));
}

static UA_INLINE UA_CRCL_TwistDataType *
UA_CRCL_TwistDataType_new(void) {
    return (UA_CRCL_TwistDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TwistDataType_copy(const UA_CRCL_TwistDataType *src, UA_CRCL_TwistDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TwistDataType_deleteMembers(UA_CRCL_TwistDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TwistDataType_clear(UA_CRCL_TwistDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TwistDataType_delete(UA_CRCL_TwistDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}

/* CRCL_SettingsStatusDataType */
static UA_INLINE void
UA_CRCL_SettingsStatusDataType_init(UA_CRCL_SettingsStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_SettingsStatusDataType));
}

static UA_INLINE UA_CRCL_SettingsStatusDataType *
UA_CRCL_SettingsStatusDataType_new(void) {
    return (UA_CRCL_SettingsStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_SettingsStatusDataType_copy(const UA_CRCL_SettingsStatusDataType *src, UA_CRCL_SettingsStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_SettingsStatusDataType_deleteMembers(UA_CRCL_SettingsStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SettingsStatusDataType_clear(UA_CRCL_SettingsStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SettingsStatusDataType_delete(UA_CRCL_SettingsStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}

/* StopMotionDataType */
static UA_INLINE void
UA_StopMotionDataType_init(UA_StopMotionDataType *p) {
    memset(p, 0, sizeof(UA_StopMotionDataType));
}

static UA_INLINE UA_StopMotionDataType *
UA_StopMotionDataType_new(void) {
    return (UA_StopMotionDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_StopMotionDataType_copy(const UA_StopMotionDataType *src, UA_StopMotionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_StopMotionDataType_deleteMembers(UA_StopMotionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}

static UA_INLINE void
UA_StopMotionDataType_clear(UA_StopMotionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}

static UA_INLINE void
UA_StopMotionDataType_delete(UA_StopMotionDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}

/* OpenToolChangerDataType */
static UA_INLINE void
UA_OpenToolChangerDataType_init(UA_OpenToolChangerDataType *p) {
    memset(p, 0, sizeof(UA_OpenToolChangerDataType));
}

static UA_INLINE UA_OpenToolChangerDataType *
UA_OpenToolChangerDataType_new(void) {
    return (UA_OpenToolChangerDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_OpenToolChangerDataType_copy(const UA_OpenToolChangerDataType *src, UA_OpenToolChangerDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_OpenToolChangerDataType_deleteMembers(UA_OpenToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_OpenToolChangerDataType_clear(UA_OpenToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_OpenToolChangerDataType_delete(UA_OpenToolChangerDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}

/* SetForceUnitsDataType */
static UA_INLINE void
UA_SetForceUnitsDataType_init(UA_SetForceUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetForceUnitsDataType));
}

static UA_INLINE UA_SetForceUnitsDataType *
UA_SetForceUnitsDataType_new(void) {
    return (UA_SetForceUnitsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetForceUnitsDataType_copy(const UA_SetForceUnitsDataType *src, UA_SetForceUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetForceUnitsDataType_deleteMembers(UA_SetForceUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetForceUnitsDataType_clear(UA_SetForceUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetForceUnitsDataType_delete(UA_SetForceUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}

/* SetEndeffectorDataType */
static UA_INLINE void
UA_SetEndeffectorDataType_init(UA_SetEndeffectorDataType *p) {
    memset(p, 0, sizeof(UA_SetEndeffectorDataType));
}

static UA_INLINE UA_SetEndeffectorDataType *
UA_SetEndeffectorDataType_new(void) {
    return (UA_SetEndeffectorDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndeffectorDataType_copy(const UA_SetEndeffectorDataType *src, UA_SetEndeffectorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndeffectorDataType_deleteMembers(UA_SetEndeffectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorDataType_clear(UA_SetEndeffectorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorDataType_delete(UA_SetEndeffectorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}

/* EnableGripperParametersSetDataType */
static UA_INLINE void
UA_EnableGripperParametersSetDataType_init(UA_EnableGripperParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_EnableGripperParametersSetDataType));
}

static UA_INLINE UA_EnableGripperParametersSetDataType *
UA_EnableGripperParametersSetDataType_new(void) {
    return (UA_EnableGripperParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableGripperParametersSetDataType_copy(const UA_EnableGripperParametersSetDataType *src, UA_EnableGripperParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableGripperParametersSetDataType_deleteMembers(UA_EnableGripperParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableGripperParametersSetDataType_clear(UA_EnableGripperParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_EnableGripperParametersSetDataType_delete(UA_EnableGripperParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMETERSSETDATATYPE]);
}

/* ConfigureJointReportsDataType */
static UA_INLINE void
UA_ConfigureJointReportsDataType_init(UA_ConfigureJointReportsDataType *p) {
    memset(p, 0, sizeof(UA_ConfigureJointReportsDataType));
}

static UA_INLINE UA_ConfigureJointReportsDataType *
UA_ConfigureJointReportsDataType_new(void) {
    return (UA_ConfigureJointReportsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsDataType_copy(const UA_ConfigureJointReportsDataType *src, UA_ConfigureJointReportsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConfigureJointReportsDataType_deleteMembers(UA_ConfigureJointReportsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}

static UA_INLINE void
UA_ConfigureJointReportsDataType_clear(UA_ConfigureJointReportsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}

static UA_INLINE void
UA_ConfigureJointReportsDataType_delete(UA_ConfigureJointReportsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}

/* CloseToolChangerDataType */
static UA_INLINE void
UA_CloseToolChangerDataType_init(UA_CloseToolChangerDataType *p) {
    memset(p, 0, sizeof(UA_CloseToolChangerDataType));
}

static UA_INLINE UA_CloseToolChangerDataType *
UA_CloseToolChangerDataType_new(void) {
    return (UA_CloseToolChangerDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CloseToolChangerDataType_copy(const UA_CloseToolChangerDataType *src, UA_CloseToolChangerDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CloseToolChangerDataType_deleteMembers(UA_CloseToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_CloseToolChangerDataType_clear(UA_CloseToolChangerDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}

static UA_INLINE void
UA_CloseToolChangerDataType_delete(UA_CloseToolChangerDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}

/* GetStatusDataType */
static UA_INLINE void
UA_GetStatusDataType_init(UA_GetStatusDataType *p) {
    memset(p, 0, sizeof(UA_GetStatusDataType));
}

static UA_INLINE UA_GetStatusDataType *
UA_GetStatusDataType_new(void) {
    return (UA_GetStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_GetStatusDataType_copy(const UA_GetStatusDataType *src, UA_GetStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_GetStatusDataType_deleteMembers(UA_GetStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}

static UA_INLINE void
UA_GetStatusDataType_clear(UA_GetStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}

static UA_INLINE void
UA_GetStatusDataType_delete(UA_GetStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}

/* CRCL_WrenchDataType */
static UA_INLINE void
UA_CRCL_WrenchDataType_init(UA_CRCL_WrenchDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_WrenchDataType));
}

static UA_INLINE UA_CRCL_WrenchDataType *
UA_CRCL_WrenchDataType_new(void) {
    return (UA_CRCL_WrenchDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_WrenchDataType_copy(const UA_CRCL_WrenchDataType *src, UA_CRCL_WrenchDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_WrenchDataType_deleteMembers(UA_CRCL_WrenchDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}

static UA_INLINE void
UA_CRCL_WrenchDataType_clear(UA_CRCL_WrenchDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}

static UA_INLINE void
UA_CRCL_WrenchDataType_delete(UA_CRCL_WrenchDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}

/* CRCL_CommandStatusDataType */
static UA_INLINE void
UA_CRCL_CommandStatusDataType_init(UA_CRCL_CommandStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_CommandStatusDataType));
}

static UA_INLINE UA_CRCL_CommandStatusDataType *
UA_CRCL_CommandStatusDataType_new(void) {
    return (UA_CRCL_CommandStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_CommandStatusDataType_copy(const UA_CRCL_CommandStatusDataType *src, UA_CRCL_CommandStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_CommandStatusDataType_deleteMembers(UA_CRCL_CommandStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStatusDataType_clear(UA_CRCL_CommandStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CommandStatusDataType_delete(UA_CRCL_CommandStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}

/* InitCanonDataType */
static UA_INLINE void
UA_InitCanonDataType_init(UA_InitCanonDataType *p) {
    memset(p, 0, sizeof(UA_InitCanonDataType));
}

static UA_INLINE UA_InitCanonDataType *
UA_InitCanonDataType_new(void) {
    return (UA_InitCanonDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_InitCanonDataType_copy(const UA_InitCanonDataType *src, UA_InitCanonDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_InitCanonDataType_deleteMembers(UA_InitCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}

static UA_INLINE void
UA_InitCanonDataType_clear(UA_InitCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}

static UA_INLINE void
UA_InitCanonDataType_delete(UA_InitCanonDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}

/* DisableRobotParameterStatusDataType */
static UA_INLINE void
UA_DisableRobotParameterStatusDataType_init(UA_DisableRobotParameterStatusDataType *p) {
    memset(p, 0, sizeof(UA_DisableRobotParameterStatusDataType));
}

static UA_INLINE UA_DisableRobotParameterStatusDataType *
UA_DisableRobotParameterStatusDataType_new(void) {
    return (UA_DisableRobotParameterStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusDataType_copy(const UA_DisableRobotParameterStatusDataType *src, UA_DisableRobotParameterStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableRobotParameterStatusDataType_deleteMembers(UA_DisableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_DisableRobotParameterStatusDataType_clear(UA_DisableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_DisableRobotParameterStatusDataType_delete(UA_DisableRobotParameterStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}

/* ConfigureJointReportsParametersSetDataType */
static UA_INLINE void
UA_ConfigureJointReportsParametersSetDataType_init(UA_ConfigureJointReportsParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_ConfigureJointReportsParametersSetDataType));
}

static UA_INLINE UA_ConfigureJointReportsParametersSetDataType *
UA_ConfigureJointReportsParametersSetDataType_new(void) {
    return (UA_ConfigureJointReportsParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsParametersSetDataType_copy(const UA_ConfigureJointReportsParametersSetDataType *src, UA_ConfigureJointReportsParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ConfigureJointReportsParametersSetDataType_deleteMembers(UA_ConfigureJointReportsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_ConfigureJointReportsParametersSetDataType_clear(UA_ConfigureJointReportsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_ConfigureJointReportsParametersSetDataType_delete(UA_ConfigureJointReportsParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMETERSSETDATATYPE]);
}

/* CRCL_PoseDataType */
static UA_INLINE void
UA_CRCL_PoseDataType_init(UA_CRCL_PoseDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseDataType));
}

static UA_INLINE UA_CRCL_PoseDataType *
UA_CRCL_PoseDataType_new(void) {
    return (UA_CRCL_PoseDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseDataType_copy(const UA_CRCL_PoseDataType *src, UA_CRCL_PoseDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseDataType_deleteMembers(UA_CRCL_PoseDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseDataType_clear(UA_CRCL_PoseDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseDataType_delete(UA_CRCL_PoseDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}

/* CRCL_TransSpeedDataType */
static UA_INLINE void
UA_CRCL_TransSpeedDataType_init(UA_CRCL_TransSpeedDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransSpeedDataType));
}

static UA_INLINE UA_CRCL_TransSpeedDataType *
UA_CRCL_TransSpeedDataType_new(void) {
    return (UA_CRCL_TransSpeedDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedDataType_copy(const UA_CRCL_TransSpeedDataType *src, UA_CRCL_TransSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransSpeedDataType_deleteMembers(UA_CRCL_TransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedDataType_clear(UA_CRCL_TransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransSpeedDataType_delete(UA_CRCL_TransSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}

/* MoveToDataType */
static UA_INLINE void
UA_MoveToDataType_init(UA_MoveToDataType *p) {
    memset(p, 0, sizeof(UA_MoveToDataType));
}

static UA_INLINE UA_MoveToDataType *
UA_MoveToDataType_new(void) {
    return (UA_MoveToDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveToDataType_copy(const UA_MoveToDataType *src, UA_MoveToDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveToDataType_deleteMembers(UA_MoveToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}

static UA_INLINE void
UA_MoveToDataType_clear(UA_MoveToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}

static UA_INLINE void
UA_MoveToDataType_delete(UA_MoveToDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}

/* MoveToParametersSetDataType */
static UA_INLINE void
UA_MoveToParametersSetDataType_init(UA_MoveToParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_MoveToParametersSetDataType));
}

static UA_INLINE UA_MoveToParametersSetDataType *
UA_MoveToParametersSetDataType_new(void) {
    return (UA_MoveToParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveToParametersSetDataType_copy(const UA_MoveToParametersSetDataType *src, UA_MoveToParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveToParametersSetDataType_deleteMembers(UA_MoveToParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveToParametersSetDataType_clear(UA_MoveToParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveToParametersSetDataType_delete(UA_MoveToParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE]);
}

/* CRCL_VacuumGripperStatusDataType */
static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_init(UA_CRCL_VacuumGripperStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_VacuumGripperStatusDataType));
}

static UA_INLINE UA_CRCL_VacuumGripperStatusDataType *
UA_CRCL_VacuumGripperStatusDataType_new(void) {
    return (UA_CRCL_VacuumGripperStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_VacuumGripperStatusDataType_copy(const UA_CRCL_VacuumGripperStatusDataType *src, UA_CRCL_VacuumGripperStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_deleteMembers(UA_CRCL_VacuumGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_clear(UA_CRCL_VacuumGripperStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_VacuumGripperStatusDataType_delete(UA_CRCL_VacuumGripperStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}

/* CRCL_RotSpeedDataType */
static UA_INLINE void
UA_CRCL_RotSpeedDataType_init(UA_CRCL_RotSpeedDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_RotSpeedDataType));
}

static UA_INLINE UA_CRCL_RotSpeedDataType *
UA_CRCL_RotSpeedDataType_new(void) {
    return (UA_CRCL_RotSpeedDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedDataType_copy(const UA_CRCL_RotSpeedDataType *src, UA_CRCL_RotSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_RotSpeedDataType_deleteMembers(UA_CRCL_RotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedDataType_clear(UA_CRCL_RotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_CRCL_RotSpeedDataType_delete(UA_CRCL_RotSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}

/* SetMotionCoordinationDataType */
static UA_INLINE void
UA_SetMotionCoordinationDataType_init(UA_SetMotionCoordinationDataType *p) {
    memset(p, 0, sizeof(UA_SetMotionCoordinationDataType));
}

static UA_INLINE UA_SetMotionCoordinationDataType *
UA_SetMotionCoordinationDataType_new(void) {
    return (UA_SetMotionCoordinationDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationDataType_copy(const UA_SetMotionCoordinationDataType *src, UA_SetMotionCoordinationDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetMotionCoordinationDataType_deleteMembers(UA_SetMotionCoordinationDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}

static UA_INLINE void
UA_SetMotionCoordinationDataType_clear(UA_SetMotionCoordinationDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}

static UA_INLINE void
UA_SetMotionCoordinationDataType_delete(UA_SetMotionCoordinationDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}

/* DwellDataType */
static UA_INLINE void
UA_DwellDataType_init(UA_DwellDataType *p) {
    memset(p, 0, sizeof(UA_DwellDataType));
}

static UA_INLINE UA_DwellDataType *
UA_DwellDataType_new(void) {
    return (UA_DwellDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DwellDataType_copy(const UA_DwellDataType *src, UA_DwellDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DwellDataType_deleteMembers(UA_DwellDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}

static UA_INLINE void
UA_DwellDataType_clear(UA_DwellDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}

static UA_INLINE void
UA_DwellDataType_delete(UA_DwellDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}

/* CRCL_CountSensorStatusDataType */
static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_init(UA_CRCL_CountSensorStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_CountSensorStatusDataType));
}

static UA_INLINE UA_CRCL_CountSensorStatusDataType *
UA_CRCL_CountSensorStatusDataType_new(void) {
    return (UA_CRCL_CountSensorStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_CountSensorStatusDataType_copy(const UA_CRCL_CountSensorStatusDataType *src, UA_CRCL_CountSensorStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_deleteMembers(UA_CRCL_CountSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_clear(UA_CRCL_CountSensorStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_CountSensorStatusDataType_delete(UA_CRCL_CountSensorStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}

/* SetRotAccelDataType */
static UA_INLINE void
UA_SetRotAccelDataType_init(UA_SetRotAccelDataType *p) {
    memset(p, 0, sizeof(UA_SetRotAccelDataType));
}

static UA_INLINE UA_SetRotAccelDataType *
UA_SetRotAccelDataType_new(void) {
    return (UA_SetRotAccelDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRotAccelDataType_copy(const UA_SetRotAccelDataType *src, UA_SetRotAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRotAccelDataType_deleteMembers(UA_SetRotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}

static UA_INLINE void
UA_SetRotAccelDataType_clear(UA_SetRotAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}

static UA_INLINE void
UA_SetRotAccelDataType_delete(UA_SetRotAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}

/* EnableGripperDataType */
static UA_INLINE void
UA_EnableGripperDataType_init(UA_EnableGripperDataType *p) {
    memset(p, 0, sizeof(UA_EnableGripperDataType));
}

static UA_INLINE UA_EnableGripperDataType *
UA_EnableGripperDataType_new(void) {
    return (UA_EnableGripperDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableGripperDataType_copy(const UA_EnableGripperDataType *src, UA_EnableGripperDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableGripperDataType_deleteMembers(UA_EnableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_EnableGripperDataType_clear(UA_EnableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_EnableGripperDataType_delete(UA_EnableGripperDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}

/* MiddleCommandDataType */
static UA_INLINE void
UA_MiddleCommandDataType_init(UA_MiddleCommandDataType *p) {
    memset(p, 0, sizeof(UA_MiddleCommandDataType));
}

static UA_INLINE UA_MiddleCommandDataType *
UA_MiddleCommandDataType_new(void) {
    return (UA_MiddleCommandDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MiddleCommandDataType_copy(const UA_MiddleCommandDataType *src, UA_MiddleCommandDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MiddleCommandDataType_deleteMembers(UA_MiddleCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}

static UA_INLINE void
UA_MiddleCommandDataType_clear(UA_MiddleCommandDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}

static UA_INLINE void
UA_MiddleCommandDataType_delete(UA_MiddleCommandDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}

/* SetRotSpeedDataType */
static UA_INLINE void
UA_SetRotSpeedDataType_init(UA_SetRotSpeedDataType *p) {
    memset(p, 0, sizeof(UA_SetRotSpeedDataType));
}

static UA_INLINE UA_SetRotSpeedDataType *
UA_SetRotSpeedDataType_new(void) {
    return (UA_SetRotSpeedDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRotSpeedDataType_copy(const UA_SetRotSpeedDataType *src, UA_SetRotSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRotSpeedDataType_deleteMembers(UA_SetRotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetRotSpeedDataType_clear(UA_SetRotSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetRotSpeedDataType_delete(UA_SetRotSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}

/* CRCL_SensorStatusesDataType */
static UA_INLINE void
UA_CRCL_SensorStatusesDataType_init(UA_CRCL_SensorStatusesDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_SensorStatusesDataType));
}

static UA_INLINE UA_CRCL_SensorStatusesDataType *
UA_CRCL_SensorStatusesDataType_new(void) {
    return (UA_CRCL_SensorStatusesDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusesDataType_copy(const UA_CRCL_SensorStatusesDataType *src, UA_CRCL_SensorStatusesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_SensorStatusesDataType_deleteMembers(UA_CRCL_SensorStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusesDataType_clear(UA_CRCL_SensorStatusesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_SensorStatusesDataType_delete(UA_CRCL_SensorStatusesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}

/* SetForceUnitsParametersSetDataType */
static UA_INLINE void
UA_SetForceUnitsParametersSetDataType_init(UA_SetForceUnitsParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetForceUnitsParametersSetDataType));
}

static UA_INLINE UA_SetForceUnitsParametersSetDataType *
UA_SetForceUnitsParametersSetDataType_new(void) {
    return (UA_SetForceUnitsParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetForceUnitsParametersSetDataType_copy(const UA_SetForceUnitsParametersSetDataType *src, UA_SetForceUnitsParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetForceUnitsParametersSetDataType_deleteMembers(UA_SetForceUnitsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetForceUnitsParametersSetDataType_clear(UA_SetForceUnitsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetForceUnitsParametersSetDataType_delete(UA_SetForceUnitsParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMETERSSETDATATYPE]);
}

/* DisableSensorDataType */
static UA_INLINE void
UA_DisableSensorDataType_init(UA_DisableSensorDataType *p) {
    memset(p, 0, sizeof(UA_DisableSensorDataType));
}

static UA_INLINE UA_DisableSensorDataType *
UA_DisableSensorDataType_new(void) {
    return (UA_DisableSensorDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableSensorDataType_copy(const UA_DisableSensorDataType *src, UA_DisableSensorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableSensorDataType_deleteMembers(UA_DisableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_DisableSensorDataType_clear(UA_DisableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_DisableSensorDataType_delete(UA_DisableSensorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}

/* CRCL_JointPositionsTolerancesDataType */
static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_init(UA_CRCL_JointPositionsTolerancesDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_JointPositionsTolerancesDataType));
}

static UA_INLINE UA_CRCL_JointPositionsTolerancesDataType *
UA_CRCL_JointPositionsTolerancesDataType_new(void) {
    return (UA_CRCL_JointPositionsTolerancesDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionsTolerancesDataType_copy(const UA_CRCL_JointPositionsTolerancesDataType *src, UA_CRCL_JointPositionsTolerancesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_deleteMembers(UA_CRCL_JointPositionsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_clear(UA_CRCL_JointPositionsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_CRCL_JointPositionsTolerancesDataType_delete(UA_CRCL_JointPositionsTolerancesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}

/* EnableSensorDataType */
static UA_INLINE void
UA_EnableSensorDataType_init(UA_EnableSensorDataType *p) {
    memset(p, 0, sizeof(UA_EnableSensorDataType));
}

static UA_INLINE UA_EnableSensorDataType *
UA_EnableSensorDataType_new(void) {
    return (UA_EnableSensorDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableSensorDataType_copy(const UA_EnableSensorDataType *src, UA_EnableSensorDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableSensorDataType_deleteMembers(UA_EnableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_EnableSensorDataType_clear(UA_EnableSensorDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}

static UA_INLINE void
UA_EnableSensorDataType_delete(UA_EnableSensorDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}

/* SetRotSpeedParametersSetDataType */
static UA_INLINE void
UA_SetRotSpeedParametersSetDataType_init(UA_SetRotSpeedParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetRotSpeedParametersSetDataType));
}

static UA_INLINE UA_SetRotSpeedParametersSetDataType *
UA_SetRotSpeedParametersSetDataType_new(void) {
    return (UA_SetRotSpeedParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetRotSpeedParametersSetDataType_copy(const UA_SetRotSpeedParametersSetDataType *src, UA_SetRotSpeedParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetRotSpeedParametersSetDataType_deleteMembers(UA_SetRotSpeedParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRotSpeedParametersSetDataType_clear(UA_SetRotSpeedParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetRotSpeedParametersSetDataType_delete(UA_SetRotSpeedParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMETERSSETDATATYPE]);
}

/* SetEndeffectorParametersDataType */
static UA_INLINE void
UA_SetEndeffectorParametersDataType_init(UA_SetEndeffectorParametersDataType *p) {
    memset(p, 0, sizeof(UA_SetEndeffectorParametersDataType));
}

static UA_INLINE UA_SetEndeffectorParametersDataType *
UA_SetEndeffectorParametersDataType_new(void) {
    return (UA_SetEndeffectorParametersDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersDataType_copy(const UA_SetEndeffectorParametersDataType *src, UA_SetEndeffectorParametersDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndeffectorParametersDataType_deleteMembers(UA_SetEndeffectorParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParametersDataType_clear(UA_SetEndeffectorParametersDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}

static UA_INLINE void
UA_SetEndeffectorParametersDataType_delete(UA_SetEndeffectorParametersDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}

/* EnableRobotParameterStatusDataType */
static UA_INLINE void
UA_EnableRobotParameterStatusDataType_init(UA_EnableRobotParameterStatusDataType *p) {
    memset(p, 0, sizeof(UA_EnableRobotParameterStatusDataType));
}

static UA_INLINE UA_EnableRobotParameterStatusDataType *
UA_EnableRobotParameterStatusDataType_new(void) {
    return (UA_EnableRobotParameterStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusDataType_copy(const UA_EnableRobotParameterStatusDataType *src, UA_EnableRobotParameterStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EnableRobotParameterStatusDataType_deleteMembers(UA_EnableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_EnableRobotParameterStatusDataType_clear(UA_EnableRobotParameterStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

static UA_INLINE void
UA_EnableRobotParameterStatusDataType_delete(UA_EnableRobotParameterStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}

/* EndCanonDataType */
static UA_INLINE void
UA_EndCanonDataType_init(UA_EndCanonDataType *p) {
    memset(p, 0, sizeof(UA_EndCanonDataType));
}

static UA_INLINE UA_EndCanonDataType *
UA_EndCanonDataType_new(void) {
    return (UA_EndCanonDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_EndCanonDataType_copy(const UA_EndCanonDataType *src, UA_EndCanonDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_EndCanonDataType_deleteMembers(UA_EndCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}

static UA_INLINE void
UA_EndCanonDataType_clear(UA_EndCanonDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}

static UA_INLINE void
UA_EndCanonDataType_delete(UA_EndCanonDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}

/* SetAngleUnitsDataType */
static UA_INLINE void
UA_SetAngleUnitsDataType_init(UA_SetAngleUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetAngleUnitsDataType));
}

static UA_INLINE UA_SetAngleUnitsDataType *
UA_SetAngleUnitsDataType_new(void) {
    return (UA_SetAngleUnitsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetAngleUnitsDataType_copy(const UA_SetAngleUnitsDataType *src, UA_SetAngleUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetAngleUnitsDataType_deleteMembers(UA_SetAngleUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetAngleUnitsDataType_clear(UA_SetAngleUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetAngleUnitsDataType_delete(UA_SetAngleUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}

/* MoveScrewParametersSetDataType */
static UA_INLINE void
UA_MoveScrewParametersSetDataType_init(UA_MoveScrewParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_MoveScrewParametersSetDataType));
}

static UA_INLINE UA_MoveScrewParametersSetDataType *
UA_MoveScrewParametersSetDataType_new(void) {
    return (UA_MoveScrewParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveScrewParametersSetDataType_copy(const UA_MoveScrewParametersSetDataType *src, UA_MoveScrewParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveScrewParametersSetDataType_deleteMembers(UA_MoveScrewParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveScrewParametersSetDataType_clear(UA_MoveScrewParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveScrewParametersSetDataType_delete(UA_MoveScrewParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMETERSSETDATATYPE]);
}

/* SetTorqueUnitsDataType */
static UA_INLINE void
UA_SetTorqueUnitsDataType_init(UA_SetTorqueUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetTorqueUnitsDataType));
}

static UA_INLINE UA_SetTorqueUnitsDataType *
UA_SetTorqueUnitsDataType_new(void) {
    return (UA_SetTorqueUnitsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsDataType_copy(const UA_SetTorqueUnitsDataType *src, UA_SetTorqueUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTorqueUnitsDataType_deleteMembers(UA_SetTorqueUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetTorqueUnitsDataType_clear(UA_SetTorqueUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetTorqueUnitsDataType_delete(UA_SetTorqueUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}

/* StopMotionParametersSetDataType */
static UA_INLINE void
UA_StopMotionParametersSetDataType_init(UA_StopMotionParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_StopMotionParametersSetDataType));
}

static UA_INLINE UA_StopMotionParametersSetDataType *
UA_StopMotionParametersSetDataType_new(void) {
    return (UA_StopMotionParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_StopMotionParametersSetDataType_copy(const UA_StopMotionParametersSetDataType *src, UA_StopMotionParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_StopMotionParametersSetDataType_deleteMembers(UA_StopMotionParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_StopMotionParametersSetDataType_clear(UA_StopMotionParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_StopMotionParametersSetDataType_delete(UA_StopMotionParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMETERSSETDATATYPE]);
}

/* SetEndPoseToleranceDataType */
static UA_INLINE void
UA_SetEndPoseToleranceDataType_init(UA_SetEndPoseToleranceDataType *p) {
    memset(p, 0, sizeof(UA_SetEndPoseToleranceDataType));
}

static UA_INLINE UA_SetEndPoseToleranceDataType *
UA_SetEndPoseToleranceDataType_new(void) {
    return (UA_SetEndPoseToleranceDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceDataType_copy(const UA_SetEndPoseToleranceDataType *src, UA_SetEndPoseToleranceDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetEndPoseToleranceDataType_deleteMembers(UA_SetEndPoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetEndPoseToleranceDataType_clear(UA_SetEndPoseToleranceDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}

static UA_INLINE void
UA_SetEndPoseToleranceDataType_delete(UA_SetEndPoseToleranceDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}

/* MessageDataType */
static UA_INLINE void
UA_MessageDataType_init(UA_MessageDataType *p) {
    memset(p, 0, sizeof(UA_MessageDataType));
}

static UA_INLINE UA_MessageDataType *
UA_MessageDataType_new(void) {
    return (UA_MessageDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MessageDataType_copy(const UA_MessageDataType *src, UA_MessageDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MessageDataType_deleteMembers(UA_MessageDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}

static UA_INLINE void
UA_MessageDataType_clear(UA_MessageDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}

static UA_INLINE void
UA_MessageDataType_delete(UA_MessageDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}

/* CRCL_PoseStatusDataType */
static UA_INLINE void
UA_CRCL_PoseStatusDataType_init(UA_CRCL_PoseStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseStatusDataType));
}

static UA_INLINE UA_CRCL_PoseStatusDataType *
UA_CRCL_PoseStatusDataType_new(void) {
    return (UA_CRCL_PoseStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseStatusDataType_copy(const UA_CRCL_PoseStatusDataType *src, UA_CRCL_PoseStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseStatusDataType_deleteMembers(UA_CRCL_PoseStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseStatusDataType_clear(UA_CRCL_PoseStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseStatusDataType_delete(UA_CRCL_PoseStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}

/* MoveThroughToDataType */
static UA_INLINE void
UA_MoveThroughToDataType_init(UA_MoveThroughToDataType *p) {
    memset(p, 0, sizeof(UA_MoveThroughToDataType));
}

static UA_INLINE UA_MoveThroughToDataType *
UA_MoveThroughToDataType_new(void) {
    return (UA_MoveThroughToDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveThroughToDataType_copy(const UA_MoveThroughToDataType *src, UA_MoveThroughToDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveThroughToDataType_deleteMembers(UA_MoveThroughToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}

static UA_INLINE void
UA_MoveThroughToDataType_clear(UA_MoveThroughToDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}

static UA_INLINE void
UA_MoveThroughToDataType_delete(UA_MoveThroughToDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}

/* DisableGripperDataType */
static UA_INLINE void
UA_DisableGripperDataType_init(UA_DisableGripperDataType *p) {
    memset(p, 0, sizeof(UA_DisableGripperDataType));
}

static UA_INLINE UA_DisableGripperDataType *
UA_DisableGripperDataType_new(void) {
    return (UA_DisableGripperDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_DisableGripperDataType_copy(const UA_DisableGripperDataType *src, UA_DisableGripperDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_DisableGripperDataType_deleteMembers(UA_DisableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_DisableGripperDataType_clear(UA_DisableGripperDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}

static UA_INLINE void
UA_DisableGripperDataType_delete(UA_DisableGripperDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}

/* SetLengthUnitsDataType */
static UA_INLINE void
UA_SetLengthUnitsDataType_init(UA_SetLengthUnitsDataType *p) {
    memset(p, 0, sizeof(UA_SetLengthUnitsDataType));
}

static UA_INLINE UA_SetLengthUnitsDataType *
UA_SetLengthUnitsDataType_new(void) {
    return (UA_SetLengthUnitsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetLengthUnitsDataType_copy(const UA_SetLengthUnitsDataType *src, UA_SetLengthUnitsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetLengthUnitsDataType_deleteMembers(UA_SetLengthUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetLengthUnitsDataType_clear(UA_SetLengthUnitsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}

static UA_INLINE void
UA_SetLengthUnitsDataType_delete(UA_SetLengthUnitsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}

/* CRCL_ActuateJointDataType */
static UA_INLINE void
UA_CRCL_ActuateJointDataType_init(UA_CRCL_ActuateJointDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_ActuateJointDataType));
}

static UA_INLINE UA_CRCL_ActuateJointDataType *
UA_CRCL_ActuateJointDataType_new(void) {
    return (UA_CRCL_ActuateJointDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_ActuateJointDataType_copy(const UA_CRCL_ActuateJointDataType *src, UA_CRCL_ActuateJointDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_ActuateJointDataType_deleteMembers(UA_CRCL_ActuateJointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ActuateJointDataType_clear(UA_CRCL_ActuateJointDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}

static UA_INLINE void
UA_CRCL_ActuateJointDataType_delete(UA_CRCL_ActuateJointDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}

/* MoveThroughToParametersSetDataType */
static UA_INLINE void
UA_MoveThroughToParametersSetDataType_init(UA_MoveThroughToParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_MoveThroughToParametersSetDataType));
}

static UA_INLINE UA_MoveThroughToParametersSetDataType *
UA_MoveThroughToParametersSetDataType_new(void) {
    return (UA_MoveThroughToParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveThroughToParametersSetDataType_copy(const UA_MoveThroughToParametersSetDataType *src, UA_MoveThroughToParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveThroughToParametersSetDataType_deleteMembers(UA_MoveThroughToParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveThroughToParametersSetDataType_clear(UA_MoveThroughToParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_MoveThroughToParametersSetDataType_delete(UA_MoveThroughToParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMETERSSETDATATYPE]);
}

/* CRCL_TransAccelDataType */
static UA_INLINE void
UA_CRCL_TransAccelDataType_init(UA_CRCL_TransAccelDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_TransAccelDataType));
}

static UA_INLINE UA_CRCL_TransAccelDataType *
UA_CRCL_TransAccelDataType_new(void) {
    return (UA_CRCL_TransAccelDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelDataType_copy(const UA_CRCL_TransAccelDataType *src, UA_CRCL_TransAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_TransAccelDataType_deleteMembers(UA_CRCL_TransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelDataType_clear(UA_CRCL_TransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_CRCL_TransAccelDataType_delete(UA_CRCL_TransAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}

/* MoveScrewDataType */
static UA_INLINE void
UA_MoveScrewDataType_init(UA_MoveScrewDataType *p) {
    memset(p, 0, sizeof(UA_MoveScrewDataType));
}

static UA_INLINE UA_MoveScrewDataType *
UA_MoveScrewDataType_new(void) {
    return (UA_MoveScrewDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_MoveScrewDataType_copy(const UA_MoveScrewDataType *src, UA_MoveScrewDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_MoveScrewDataType_deleteMembers(UA_MoveScrewDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}

static UA_INLINE void
UA_MoveScrewDataType_clear(UA_MoveScrewDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}

static UA_INLINE void
UA_MoveScrewDataType_delete(UA_MoveScrewDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}

/* SetDefaultJointPositionsTolerancesDataType */
static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesDataType_init(UA_SetDefaultJointPositionsTolerancesDataType *p) {
    memset(p, 0, sizeof(UA_SetDefaultJointPositionsTolerancesDataType));
}

static UA_INLINE UA_SetDefaultJointPositionsTolerancesDataType *
UA_SetDefaultJointPositionsTolerancesDataType_new(void) {
    return (UA_SetDefaultJointPositionsTolerancesDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesDataType_copy(const UA_SetDefaultJointPositionsTolerancesDataType *src, UA_SetDefaultJointPositionsTolerancesDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesDataType_deleteMembers(UA_SetDefaultJointPositionsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesDataType_clear(UA_SetDefaultJointPositionsTolerancesDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}

static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesDataType_delete(UA_SetDefaultJointPositionsTolerancesDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}

/* SetTransSpeedParametersSetDataType */
static UA_INLINE void
UA_SetTransSpeedParametersSetDataType_init(UA_SetTransSpeedParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetTransSpeedParametersSetDataType));
}

static UA_INLINE UA_SetTransSpeedParametersSetDataType *
UA_SetTransSpeedParametersSetDataType_new(void) {
    return (UA_SetTransSpeedParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTransSpeedParametersSetDataType_copy(const UA_SetTransSpeedParametersSetDataType *src, UA_SetTransSpeedParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTransSpeedParametersSetDataType_deleteMembers(UA_SetTransSpeedParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTransSpeedParametersSetDataType_clear(UA_SetTransSpeedParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTransSpeedParametersSetDataType_delete(UA_SetTransSpeedParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMETERSSETDATATYPE]);
}

/* SetDefaultJointPositionsTolerancesParametersSetDataType */
static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesParametersSetDataType_init(UA_SetDefaultJointPositionsTolerancesParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetDefaultJointPositionsTolerancesParametersSetDataType));
}

static UA_INLINE UA_SetDefaultJointPositionsTolerancesParametersSetDataType *
UA_SetDefaultJointPositionsTolerancesParametersSetDataType_new(void) {
    return (UA_SetDefaultJointPositionsTolerancesParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesParametersSetDataType_copy(const UA_SetDefaultJointPositionsTolerancesParametersSetDataType *src, UA_SetDefaultJointPositionsTolerancesParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesParametersSetDataType_deleteMembers(UA_SetDefaultJointPositionsTolerancesParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesParametersSetDataType_clear(UA_SetDefaultJointPositionsTolerancesParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetDefaultJointPositionsTolerancesParametersSetDataType_delete(UA_SetDefaultJointPositionsTolerancesParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMETERSSETDATATYPE]);
}

/* CRCLStatusDataType */
static UA_INLINE void
UA_CRCLStatusDataType_init(UA_CRCLStatusDataType *p) {
    memset(p, 0, sizeof(UA_CRCLStatusDataType));
}

static UA_INLINE UA_CRCLStatusDataType *
UA_CRCLStatusDataType_new(void) {
    return (UA_CRCLStatusDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLStatusDataType_copy(const UA_CRCLStatusDataType *src, UA_CRCLStatusDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLStatusDataType_deleteMembers(UA_CRCLStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCLStatusDataType_clear(UA_CRCLStatusDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}

static UA_INLINE void
UA_CRCLStatusDataType_delete(UA_CRCLStatusDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}

/* SetTransSpeedDataType */
static UA_INLINE void
UA_SetTransSpeedDataType_init(UA_SetTransSpeedDataType *p) {
    memset(p, 0, sizeof(UA_SetTransSpeedDataType));
}

static UA_INLINE UA_SetTransSpeedDataType *
UA_SetTransSpeedDataType_new(void) {
    return (UA_SetTransSpeedDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTransSpeedDataType_copy(const UA_SetTransSpeedDataType *src, UA_SetTransSpeedDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTransSpeedDataType_deleteMembers(UA_SetTransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetTransSpeedDataType_clear(UA_SetTransSpeedDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}

static UA_INLINE void
UA_SetTransSpeedDataType_delete(UA_SetTransSpeedDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}

/* ActuateJointsDataType */
static UA_INLINE void
UA_ActuateJointsDataType_init(UA_ActuateJointsDataType *p) {
    memset(p, 0, sizeof(UA_ActuateJointsDataType));
}

static UA_INLINE UA_ActuateJointsDataType *
UA_ActuateJointsDataType_new(void) {
    return (UA_ActuateJointsDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ActuateJointsDataType_copy(const UA_ActuateJointsDataType *src, UA_ActuateJointsDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ActuateJointsDataType_deleteMembers(UA_ActuateJointsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}

static UA_INLINE void
UA_ActuateJointsDataType_clear(UA_ActuateJointsDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}

static UA_INLINE void
UA_ActuateJointsDataType_delete(UA_ActuateJointsDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}

/* CRCL_PoseAndSetDataType */
static UA_INLINE void
UA_CRCL_PoseAndSetDataType_init(UA_CRCL_PoseAndSetDataType *p) {
    memset(p, 0, sizeof(UA_CRCL_PoseAndSetDataType));
}

static UA_INLINE UA_CRCL_PoseAndSetDataType *
UA_CRCL_PoseAndSetDataType_new(void) {
    return (UA_CRCL_PoseAndSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCL_PoseAndSetDataType_copy(const UA_CRCL_PoseAndSetDataType *src, UA_CRCL_PoseAndSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCL_PoseAndSetDataType_deleteMembers(UA_CRCL_PoseAndSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseAndSetDataType_clear(UA_CRCL_PoseAndSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}

static UA_INLINE void
UA_CRCL_PoseAndSetDataType_delete(UA_CRCL_PoseAndSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}

/* SetTransAccelParametersSetDataType */
static UA_INLINE void
UA_SetTransAccelParametersSetDataType_init(UA_SetTransAccelParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_SetTransAccelParametersSetDataType));
}

static UA_INLINE UA_SetTransAccelParametersSetDataType *
UA_SetTransAccelParametersSetDataType_new(void) {
    return (UA_SetTransAccelParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTransAccelParametersSetDataType_copy(const UA_SetTransAccelParametersSetDataType *src, UA_SetTransAccelParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTransAccelParametersSetDataType_deleteMembers(UA_SetTransAccelParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTransAccelParametersSetDataType_clear(UA_SetTransAccelParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_SetTransAccelParametersSetDataType_delete(UA_SetTransAccelParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMETERSSETDATATYPE]);
}

/* ActuateJointsParametersSetDataType */
static UA_INLINE void
UA_ActuateJointsParametersSetDataType_init(UA_ActuateJointsParametersSetDataType *p) {
    memset(p, 0, sizeof(UA_ActuateJointsParametersSetDataType));
}

static UA_INLINE UA_ActuateJointsParametersSetDataType *
UA_ActuateJointsParametersSetDataType_new(void) {
    return (UA_ActuateJointsParametersSetDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMETERSSETDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_ActuateJointsParametersSetDataType_copy(const UA_ActuateJointsParametersSetDataType *src, UA_ActuateJointsParametersSetDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMETERSSETDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ActuateJointsParametersSetDataType_deleteMembers(UA_ActuateJointsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_ActuateJointsParametersSetDataType_clear(UA_ActuateJointsParametersSetDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMETERSSETDATATYPE]);
}

static UA_INLINE void
UA_ActuateJointsParametersSetDataType_delete(UA_ActuateJointsParametersSetDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMETERSSETDATATYPE]);
}

/* SetTransAccelDataType */
static UA_INLINE void
UA_SetTransAccelDataType_init(UA_SetTransAccelDataType *p) {
    memset(p, 0, sizeof(UA_SetTransAccelDataType));
}

static UA_INLINE UA_SetTransAccelDataType *
UA_SetTransAccelDataType_new(void) {
    return (UA_SetTransAccelDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SetTransAccelDataType_copy(const UA_SetTransAccelDataType *src, UA_SetTransAccelDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SetTransAccelDataType_deleteMembers(UA_SetTransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_SetTransAccelDataType_clear(UA_SetTransAccelDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}

static UA_INLINE void
UA_SetTransAccelDataType_delete(UA_SetTransAccelDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}

/* CRCLCommandsUnionDataType */
static UA_INLINE void
UA_CRCLCommandsUnionDataType_init(UA_CRCLCommandsUnionDataType *p) {
    memset(p, 0, sizeof(UA_CRCLCommandsUnionDataType));
}

static UA_INLINE UA_CRCLCommandsUnionDataType *
UA_CRCLCommandsUnionDataType_new(void) {
    return (UA_CRCLCommandsUnionDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLCommandsUnionDataType_copy(const UA_CRCLCommandsUnionDataType *src, UA_CRCLCommandsUnionDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLCommandsUnionDataType_deleteMembers(UA_CRCLCommandsUnionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsUnionDataType_clear(UA_CRCLCommandsUnionDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}

static UA_INLINE void
UA_CRCLCommandsUnionDataType_delete(UA_CRCLCommandsUnionDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}

/* CRCLSkillDataType */
static UA_INLINE void
UA_CRCLSkillDataType_init(UA_CRCLSkillDataType *p) {
    memset(p, 0, sizeof(UA_CRCLSkillDataType));
}

static UA_INLINE UA_CRCLSkillDataType *
UA_CRCLSkillDataType_new(void) {
    return (UA_CRCLSkillDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_CRCLSkillDataType_copy(const UA_CRCLSkillDataType *src, UA_CRCLSkillDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_CRCLSkillDataType_deleteMembers(UA_CRCLSkillDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE]);
}

static UA_INLINE void
UA_CRCLSkillDataType_clear(UA_CRCLSkillDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE]);
}

static UA_INLINE void
UA_CRCLSkillDataType_delete(UA_CRCLSkillDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE]);
}

/* SAMYRobotDataType */
static UA_INLINE void
UA_SAMYRobotDataType_init(UA_SAMYRobotDataType *p) {
    memset(p, 0, sizeof(UA_SAMYRobotDataType));
}

static UA_INLINE UA_SAMYRobotDataType *
UA_SAMYRobotDataType_new(void) {
    return (UA_SAMYRobotDataType*)UA_new(&UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE]);
}

static UA_INLINE UA_StatusCode
UA_SAMYRobotDataType_copy(const UA_SAMYRobotDataType *src, UA_SAMYRobotDataType *dst) {
    return UA_copy(src, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_SAMYRobotDataType_deleteMembers(UA_SAMYRobotDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE]);
}

static UA_INLINE void
UA_SAMYRobotDataType_clear(UA_SAMYRobotDataType *p) {
    UA_clear(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE]);
}

static UA_INLINE void
UA_SAMYRobotDataType_delete(UA_SAMYRobotDataType *p) {
    UA_delete(p, &UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* TYPES_CRCL_GENERATED_HANDLING_H_ */
