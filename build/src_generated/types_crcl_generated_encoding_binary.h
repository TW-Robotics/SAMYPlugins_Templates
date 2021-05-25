/* Generated from CRCL.Types.bsd with script /usr/local/share/open62541/tools/generate_datatypes.py
 * on host jbg by user jbg at 2021-05-25 09:05:41 */

#ifndef TYPES_CRCL_GENERATED_ENCODING_BINARY_H_
#define TYPES_CRCL_GENERATED_ENCODING_BINARY_H_

#ifdef UA_ENABLE_AMALGAMATION
# include "open62541.h"
#else
# include "ua_types_encoding_binary.h"
# include "types_crcl_generated.h"
#endif



/* CRCL_StopConditionEnumDataType */
static UA_INLINE size_t
UA_CRCL_StopConditionEnumDataType_calcSizeBinary(const UA_CRCL_StopConditionEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_StopConditionEnumDataType_encodeBinary(const UA_CRCL_StopConditionEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_StopConditionEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_StopConditionEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_STOPCONDITIONENUMDATATYPE], NULL);
}

/* CRCL_AngleUnitEnumDataType */
static UA_INLINE size_t
UA_CRCL_AngleUnitEnumDataType_calcSizeBinary(const UA_CRCL_AngleUnitEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_AngleUnitEnumDataType_encodeBinary(const UA_CRCL_AngleUnitEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_AngleUnitEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_AngleUnitEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ANGLEUNITENUMDATATYPE], NULL);
}

/* CRCL_ForceUnitEnumDataType */
static UA_INLINE size_t
UA_CRCL_ForceUnitEnumDataType_calcSizeBinary(const UA_CRCL_ForceUnitEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ForceUnitEnumDataType_encodeBinary(const UA_CRCL_ForceUnitEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ForceUnitEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ForceUnitEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCEUNITENUMDATATYPE], NULL);
}

/* CRCL_FractionDataType */
static UA_INLINE size_t
UA_CRCL_FractionDataType_calcSizeBinary(const UA_CRCL_FractionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_FractionDataType_encodeBinary(const UA_CRCL_FractionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_FractionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_FractionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FRACTIONDATATYPE], NULL);
}

/* CRCL_LengthUnitEnumDataType */
static UA_INLINE size_t
UA_CRCL_LengthUnitEnumDataType_calcSizeBinary(const UA_CRCL_LengthUnitEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_LengthUnitEnumDataType_encodeBinary(const UA_CRCL_LengthUnitEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_LengthUnitEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_LengthUnitEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_LENGTHUNITENUMDATATYPE], NULL);
}

/* CRCL_DataThingDataType */
static UA_INLINE size_t
UA_CRCL_DataThingDataType_calcSizeBinary(const UA_CRCL_DataThingDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_DataThingDataType_encodeBinary(const UA_CRCL_DataThingDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_DataThingDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_DataThingDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_DATATHINGDATATYPE], NULL);
}

/* CRCL_PointDataType */
static UA_INLINE size_t
UA_CRCL_PointDataType_calcSizeBinary(const UA_CRCL_PointDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PointDataType_encodeBinary(const UA_CRCL_PointDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PointDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PointDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POINTDATATYPE], NULL);
}

/* CRCL_VectorDataType */
static UA_INLINE size_t
UA_CRCL_VectorDataType_calcSizeBinary(const UA_CRCL_VectorDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_VectorDataType_encodeBinary(const UA_CRCL_VectorDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_VectorDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_VectorDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VECTORDATATYPE], NULL);
}

/* CRCL_PoseDataType */
static UA_INLINE size_t
UA_CRCL_PoseDataType_calcSizeBinary(const UA_CRCL_PoseDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseDataType_encodeBinary(const UA_CRCL_PoseDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PoseDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE], NULL);
}

/* CRCL_PositiveDecimalDataType */
static UA_INLINE size_t
UA_CRCL_PositiveDecimalDataType_calcSizeBinary(const UA_CRCL_PositiveDecimalDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSITIVEDECIMALDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PositiveDecimalDataType_encodeBinary(const UA_CRCL_PositiveDecimalDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSITIVEDECIMALDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PositiveDecimalDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PositiveDecimalDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSITIVEDECIMALDATATYPE], NULL);
}

/* CRCL_TorqueUnitEnumDataType */
static UA_INLINE size_t
UA_CRCL_TorqueUnitEnumDataType_calcSizeBinary(const UA_CRCL_TorqueUnitEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TorqueUnitEnumDataType_encodeBinary(const UA_CRCL_TorqueUnitEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TorqueUnitEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TorqueUnitEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TORQUEUNITENUMDATATYPE], NULL);
}

/* CRCL_TwistDataType */
static UA_INLINE size_t
UA_CRCL_TwistDataType_calcSizeBinary(const UA_CRCL_TwistDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TwistDataType_encodeBinary(const UA_CRCL_TwistDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TwistDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TwistDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TWISTDATATYPE], NULL);
}

/* CRCL_WrenchDataType */
static UA_INLINE size_t
UA_CRCL_WrenchDataType_calcSizeBinary(const UA_CRCL_WrenchDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_WrenchDataType_encodeBinary(const UA_CRCL_WrenchDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_WrenchDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_WrenchDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_WRENCHDATATYPE], NULL);
}

/* CRCL_PoseToleranceDataType */
static UA_INLINE size_t
UA_CRCL_PoseToleranceDataType_calcSizeBinary(const UA_CRCL_PoseToleranceDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseToleranceDataType_encodeBinary(const UA_CRCL_PoseToleranceDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseToleranceDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PoseToleranceDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSETOLERANCEDATATYPE], NULL);
}

/* CRCL_ParameterSettingDataType */
static UA_INLINE size_t
UA_CRCL_ParameterSettingDataType_calcSizeBinary(const UA_CRCL_ParameterSettingDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ParameterSettingDataType_encodeBinary(const UA_CRCL_ParameterSettingDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ParameterSettingDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ParameterSettingDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARAMETERSETTINGDATATYPE], NULL);
}

/* CRCL_RotAccelAbsoluteDataType */
static UA_INLINE size_t
UA_CRCL_RotAccelAbsoluteDataType_calcSizeBinary(const UA_CRCL_RotAccelAbsoluteDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelAbsoluteDataType_encodeBinary(const UA_CRCL_RotAccelAbsoluteDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelAbsoluteDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotAccelAbsoluteDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELABSOLUTEDATATYPE], NULL);
}

/* CRCL_RotAccelRelativeDataType */
static UA_INLINE size_t
UA_CRCL_RotAccelRelativeDataType_calcSizeBinary(const UA_CRCL_RotAccelRelativeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelRelativeDataType_encodeBinary(const UA_CRCL_RotAccelRelativeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelRelativeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotAccelRelativeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELRELATIVEDATATYPE], NULL);
}

/* CRCL_RotAccelDataType */
static UA_INLINE size_t
UA_CRCL_RotAccelDataType_calcSizeBinary(const UA_CRCL_RotAccelDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelDataType_encodeBinary(const UA_CRCL_RotAccelDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotAccelDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotAccelDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTACCELDATATYPE], NULL);
}

/* CRCL_RotSpeedAbsoluteDataType */
static UA_INLINE size_t
UA_CRCL_RotSpeedAbsoluteDataType_calcSizeBinary(const UA_CRCL_RotSpeedAbsoluteDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedAbsoluteDataType_encodeBinary(const UA_CRCL_RotSpeedAbsoluteDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedAbsoluteDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotSpeedAbsoluteDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDABSOLUTEDATATYPE], NULL);
}

/* CRCL_RotSpeedRelativeDataType */
static UA_INLINE size_t
UA_CRCL_RotSpeedRelativeDataType_calcSizeBinary(const UA_CRCL_RotSpeedRelativeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedRelativeDataType_encodeBinary(const UA_CRCL_RotSpeedRelativeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedRelativeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotSpeedRelativeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDRELATIVEDATATYPE], NULL);
}

/* CRCL_RotSpeedDataType */
static UA_INLINE size_t
UA_CRCL_RotSpeedDataType_calcSizeBinary(const UA_CRCL_RotSpeedDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedDataType_encodeBinary(const UA_CRCL_RotSpeedDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_RotSpeedDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_RotSpeedDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ROTSPEEDDATATYPE], NULL);
}

/* CRCL_TransAccelAbsoluteDataType */
static UA_INLINE size_t
UA_CRCL_TransAccelAbsoluteDataType_calcSizeBinary(const UA_CRCL_TransAccelAbsoluteDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelAbsoluteDataType_encodeBinary(const UA_CRCL_TransAccelAbsoluteDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelAbsoluteDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransAccelAbsoluteDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELABSOLUTEDATATYPE], NULL);
}

/* CRCL_TransAccelRelativeDataType */
static UA_INLINE size_t
UA_CRCL_TransAccelRelativeDataType_calcSizeBinary(const UA_CRCL_TransAccelRelativeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelRelativeDataType_encodeBinary(const UA_CRCL_TransAccelRelativeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelRelativeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransAccelRelativeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELRELATIVEDATATYPE], NULL);
}

/* CRCL_TransAccelDataType */
static UA_INLINE size_t
UA_CRCL_TransAccelDataType_calcSizeBinary(const UA_CRCL_TransAccelDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelDataType_encodeBinary(const UA_CRCL_TransAccelDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransAccelDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransAccelDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSACCELDATATYPE], NULL);
}

/* CRCL_TransSpeedAbsoluteDataType */
static UA_INLINE size_t
UA_CRCL_TransSpeedAbsoluteDataType_calcSizeBinary(const UA_CRCL_TransSpeedAbsoluteDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedAbsoluteDataType_encodeBinary(const UA_CRCL_TransSpeedAbsoluteDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedAbsoluteDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransSpeedAbsoluteDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDABSOLUTEDATATYPE], NULL);
}

/* CRCL_TransSpeedRelativeDataType */
static UA_INLINE size_t
UA_CRCL_TransSpeedRelativeDataType_calcSizeBinary(const UA_CRCL_TransSpeedRelativeDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedRelativeDataType_encodeBinary(const UA_CRCL_TransSpeedRelativeDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedRelativeDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransSpeedRelativeDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDRELATIVEDATATYPE], NULL);
}

/* CRCL_TransSpeedDataType */
static UA_INLINE size_t
UA_CRCL_TransSpeedDataType_calcSizeBinary(const UA_CRCL_TransSpeedDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedDataType_encodeBinary(const UA_CRCL_TransSpeedDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_TransSpeedDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_TransSpeedDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_TRANSSPEEDDATATYPE], NULL);
}

/* CRCL_ConfigureJointReportDataType */
static UA_INLINE size_t
UA_CRCL_ConfigureJointReportDataType_calcSizeBinary(const UA_CRCL_ConfigureJointReportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ConfigureJointReportDataType_encodeBinary(const UA_CRCL_ConfigureJointReportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ConfigureJointReportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ConfigureJointReportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_CONFIGUREJOINTREPORTDATATYPE], NULL);
}

/* CRCL_GuardLimitEnumDataType */
static UA_INLINE size_t
UA_CRCL_GuardLimitEnumDataType_calcSizeBinary(const UA_CRCL_GuardLimitEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GuardLimitEnumDataType_encodeBinary(const UA_CRCL_GuardLimitEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GuardLimitEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_GuardLimitEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDLIMITENUMDATATYPE], NULL);
}

/* CRCL_GuardDataType */
static UA_INLINE size_t
UA_CRCL_GuardDataType_calcSizeBinary(const UA_CRCL_GuardDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GuardDataType_encodeBinary(const UA_CRCL_GuardDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GuardDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_GuardDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GUARDDATATYPE], NULL);
}

/* CRCL_JointPositionToleranceSettingDataType */
static UA_INLINE size_t
UA_CRCL_JointPositionToleranceSettingDataType_calcSizeBinary(const UA_CRCL_JointPositionToleranceSettingDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionToleranceSettingDataType_encodeBinary(const UA_CRCL_JointPositionToleranceSettingDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionToleranceSettingDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointPositionToleranceSettingDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONTOLERANCESETTINGDATATYPE], NULL);
}

/* CRCL_JointPositionsTolerancesDataType */
static UA_INLINE size_t
UA_CRCL_JointPositionsTolerancesDataType_calcSizeBinary(const UA_CRCL_JointPositionsTolerancesDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionsTolerancesDataType_encodeBinary(const UA_CRCL_JointPositionsTolerancesDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointPositionsTolerancesDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointPositionsTolerancesDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTPOSITIONSTOLERANCESDATATYPE], NULL);
}

/* CRCL_PoseAndSetDataType */
static UA_INLINE size_t
UA_CRCL_PoseAndSetDataType_calcSizeBinary(const UA_CRCL_PoseAndSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseAndSetDataType_encodeBinary(const UA_CRCL_PoseAndSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseAndSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PoseAndSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEANDSETDATATYPE], NULL);
}

/* CRCLCommandDataType */
static UA_INLINE size_t
UA_CRCLCommandDataType_calcSizeBinary(const UA_CRCLCommandDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandDataType_encodeBinary(const UA_CRCLCommandDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLCommandDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDDATATYPE], NULL);
}

/* MiddleCommandDataType */
static UA_INLINE size_t
UA_MiddleCommandDataType_calcSizeBinary(const UA_MiddleCommandDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MiddleCommandDataType_encodeBinary(const UA_MiddleCommandDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MiddleCommandDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MiddleCommandDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MIDDLECOMMANDDATATYPE], NULL);
}

/* EndCanonDataType */
static UA_INLINE size_t
UA_EndCanonDataType_calcSizeBinary(const UA_EndCanonDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EndCanonDataType_encodeBinary(const UA_EndCanonDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EndCanonDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EndCanonDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONDATATYPE], NULL);
}

/* InitCanonDataType */
static UA_INLINE size_t
UA_InitCanonDataType_calcSizeBinary(const UA_InitCanonDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_InitCanonDataType_encodeBinary(const UA_InitCanonDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_InitCanonDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_InitCanonDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONDATATYPE], NULL);
}

/* CRCL_JointForceTorqueDataType */
static UA_INLINE size_t
UA_CRCL_JointForceTorqueDataType_calcSizeBinary(const UA_CRCL_JointForceTorqueDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointForceTorqueDataType_encodeBinary(const UA_CRCL_JointForceTorqueDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointForceTorqueDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointForceTorqueDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTFORCETORQUEDATATYPE], NULL);
}

/* CRCL_JointSpeedAccelDataType */
static UA_INLINE size_t
UA_CRCL_JointSpeedAccelDataType_calcSizeBinary(const UA_CRCL_JointSpeedAccelDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointSpeedAccelDataType_encodeBinary(const UA_CRCL_JointSpeedAccelDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointSpeedAccelDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointSpeedAccelDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSPEEDACCELDATATYPE], NULL);
}

/* MoveToDataType */
static UA_INLINE size_t
UA_MoveToDataType_calcSizeBinary(const UA_MoveToDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveToDataType_encodeBinary(const UA_MoveToDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveToDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveToDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETODATATYPE], NULL);
}

/* CloseToolChangerDataType */
static UA_INLINE size_t
UA_CloseToolChangerDataType_calcSizeBinary(const UA_CloseToolChangerDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CloseToolChangerDataType_encodeBinary(const UA_CloseToolChangerDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseToolChangerDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseToolChangerDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERDATATYPE], NULL);
}

/* DwellDataType */
static UA_INLINE size_t
UA_DwellDataType_calcSizeBinary(const UA_DwellDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DwellDataType_encodeBinary(const UA_DwellDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DwellDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DwellDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLDATATYPE], NULL);
}

/* GetStatusDataType */
static UA_INLINE size_t
UA_GetStatusDataType_calcSizeBinary(const UA_GetStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_GetStatusDataType_encodeBinary(const UA_GetStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_GetStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_GetStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSDATATYPE], NULL);
}

/* MessageDataType */
static UA_INLINE size_t
UA_MessageDataType_calcSizeBinary(const UA_MessageDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MessageDataType_encodeBinary(const UA_MessageDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MessageDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MessageDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEDATATYPE], NULL);
}

/* MoveScrewDataType */
static UA_INLINE size_t
UA_MoveScrewDataType_calcSizeBinary(const UA_MoveScrewDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveScrewDataType_encodeBinary(const UA_MoveScrewDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveScrewDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveScrewDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWDATATYPE], NULL);
}

/* MoveThroughToDataType */
static UA_INLINE size_t
UA_MoveThroughToDataType_calcSizeBinary(const UA_MoveThroughToDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveThroughToDataType_encodeBinary(const UA_MoveThroughToDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveThroughToDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveThroughToDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTODATATYPE], NULL);
}

/* OpenToolChangerDataType */
static UA_INLINE size_t
UA_OpenToolChangerDataType_calcSizeBinary(const UA_OpenToolChangerDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_OpenToolChangerDataType_encodeBinary(const UA_OpenToolChangerDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OpenToolChangerDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OpenToolChangerDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERDATATYPE], NULL);
}

/* RunProgramDataType */
static UA_INLINE size_t
UA_RunProgramDataType_calcSizeBinary(const UA_RunProgramDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_RunProgramDataType_encodeBinary(const UA_RunProgramDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_RunProgramDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_RunProgramDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_RUNPROGRAMDATATYPE], NULL);
}

/* SetAngleUnitsDataType */
static UA_INLINE size_t
UA_SetAngleUnitsDataType_calcSizeBinary(const UA_SetAngleUnitsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetAngleUnitsDataType_encodeBinary(const UA_SetAngleUnitsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetAngleUnitsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetAngleUnitsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSDATATYPE], NULL);
}

/* SetEndeffectorParametersDataType */
static UA_INLINE size_t
UA_SetEndeffectorParametersDataType_calcSizeBinary(const UA_SetEndeffectorParametersDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersDataType_encodeBinary(const UA_SetEndeffectorParametersDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndeffectorParametersDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSDATATYPE], NULL);
}

/* SetEndeffectorDataType */
static UA_INLINE size_t
UA_SetEndeffectorDataType_calcSizeBinary(const UA_SetEndeffectorDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorDataType_encodeBinary(const UA_SetEndeffectorDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndeffectorDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORDATATYPE], NULL);
}

/* SetEndPoseToleranceDataType */
static UA_INLINE size_t
UA_SetEndPoseToleranceDataType_calcSizeBinary(const UA_SetEndPoseToleranceDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceDataType_encodeBinary(const UA_SetEndPoseToleranceDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndPoseToleranceDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEDATATYPE], NULL);
}

/* SetForceUnitsDataType */
static UA_INLINE size_t
UA_SetForceUnitsDataType_calcSizeBinary(const UA_SetForceUnitsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetForceUnitsDataType_encodeBinary(const UA_SetForceUnitsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetForceUnitsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetForceUnitsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSDATATYPE], NULL);
}

/* SetIntermediatePoseToleranceDataType */
static UA_INLINE size_t
UA_SetIntermediatePoseToleranceDataType_calcSizeBinary(const UA_SetIntermediatePoseToleranceDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceDataType_encodeBinary(const UA_SetIntermediatePoseToleranceDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetIntermediatePoseToleranceDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEDATATYPE], NULL);
}

/* SetLengthUnitsDataType */
static UA_INLINE size_t
UA_SetLengthUnitsDataType_calcSizeBinary(const UA_SetLengthUnitsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetLengthUnitsDataType_encodeBinary(const UA_SetLengthUnitsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetLengthUnitsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetLengthUnitsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSDATATYPE], NULL);
}

/* SetMotionCoordinationDataType */
static UA_INLINE size_t
UA_SetMotionCoordinationDataType_calcSizeBinary(const UA_SetMotionCoordinationDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationDataType_encodeBinary(const UA_SetMotionCoordinationDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetMotionCoordinationDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONDATATYPE], NULL);
}

/* SetRobotParametersDataType */
static UA_INLINE size_t
UA_SetRobotParametersDataType_calcSizeBinary(const UA_SetRobotParametersDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRobotParametersDataType_encodeBinary(const UA_SetRobotParametersDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRobotParametersDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRobotParametersDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSDATATYPE], NULL);
}

/* SetTorqueUnitsDataType */
static UA_INLINE size_t
UA_SetTorqueUnitsDataType_calcSizeBinary(const UA_SetTorqueUnitsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsDataType_encodeBinary(const UA_SetTorqueUnitsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTorqueUnitsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSDATATYPE], NULL);
}

/* StopMotionDataType */
static UA_INLINE size_t
UA_StopMotionDataType_calcSizeBinary(const UA_StopMotionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_StopMotionDataType_encodeBinary(const UA_StopMotionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StopMotionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StopMotionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONDATATYPE], NULL);
}

/* ConfigureStatusReportDataType */
static UA_INLINE size_t
UA_ConfigureStatusReportDataType_calcSizeBinary(const UA_ConfigureStatusReportDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportDataType_encodeBinary(const UA_ConfigureStatusReportDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ConfigureStatusReportDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTDATATYPE], NULL);
}

/* EnableSensorDataType */
static UA_INLINE size_t
UA_EnableSensorDataType_calcSizeBinary(const UA_EnableSensorDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableSensorDataType_encodeBinary(const UA_EnableSensorDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableSensorDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableSensorDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORDATATYPE], NULL);
}

/* DisableSensorDataType */
static UA_INLINE size_t
UA_DisableSensorDataType_calcSizeBinary(const UA_DisableSensorDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableSensorDataType_encodeBinary(const UA_DisableSensorDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableSensorDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableSensorDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORDATATYPE], NULL);
}

/* EnableGripperDataType */
static UA_INLINE size_t
UA_EnableGripperDataType_calcSizeBinary(const UA_EnableGripperDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableGripperDataType_encodeBinary(const UA_EnableGripperDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableGripperDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableGripperDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERDATATYPE], NULL);
}

/* DisableGripperDataType */
static UA_INLINE size_t
UA_DisableGripperDataType_calcSizeBinary(const UA_DisableGripperDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableGripperDataType_encodeBinary(const UA_DisableGripperDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableGripperDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableGripperDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERDATATYPE], NULL);
}

/* EnableRobotParameterStatusDataType */
static UA_INLINE size_t
UA_EnableRobotParameterStatusDataType_calcSizeBinary(const UA_EnableRobotParameterStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusDataType_encodeBinary(const UA_EnableRobotParameterStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableRobotParameterStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSDATATYPE], NULL);
}

/* DisableRobotParameterStatusDataType */
static UA_INLINE size_t
UA_DisableRobotParameterStatusDataType_calcSizeBinary(const UA_DisableRobotParameterStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusDataType_encodeBinary(const UA_DisableRobotParameterStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableRobotParameterStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSDATATYPE], NULL);
}

/* SetDefaultJointPositionsTolerancesDataType */
static UA_INLINE size_t
UA_SetDefaultJointPositionsTolerancesDataType_calcSizeBinary(const UA_SetDefaultJointPositionsTolerancesDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesDataType_encodeBinary(const UA_SetDefaultJointPositionsTolerancesDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetDefaultJointPositionsTolerancesDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESDATATYPE], NULL);
}

/* SetRotAccelDataType */
static UA_INLINE size_t
UA_SetRotAccelDataType_calcSizeBinary(const UA_SetRotAccelDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRotAccelDataType_encodeBinary(const UA_SetRotAccelDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRotAccelDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRotAccelDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELDATATYPE], NULL);
}

/* SetTransAccelDataType */
static UA_INLINE size_t
UA_SetTransAccelDataType_calcSizeBinary(const UA_SetTransAccelDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTransAccelDataType_encodeBinary(const UA_SetTransAccelDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTransAccelDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTransAccelDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELDATATYPE], NULL);
}

/* SetRotSpeedDataType */
static UA_INLINE size_t
UA_SetRotSpeedDataType_calcSizeBinary(const UA_SetRotSpeedDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRotSpeedDataType_encodeBinary(const UA_SetRotSpeedDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRotSpeedDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRotSpeedDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDDATATYPE], NULL);
}

/* SetTransSpeedDataType */
static UA_INLINE size_t
UA_SetTransSpeedDataType_calcSizeBinary(const UA_SetTransSpeedDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTransSpeedDataType_encodeBinary(const UA_SetTransSpeedDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTransSpeedDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTransSpeedDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDDATATYPE], NULL);
}

/* ConfigureJointReportsDataType */
static UA_INLINE size_t
UA_ConfigureJointReportsDataType_calcSizeBinary(const UA_ConfigureJointReportsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsDataType_encodeBinary(const UA_ConfigureJointReportsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ConfigureJointReportsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSDATATYPE], NULL);
}

/* CRCL_CommandStateEnumDataType */
static UA_INLINE size_t
UA_CRCL_CommandStateEnumDataType_calcSizeBinary(const UA_CRCL_CommandStateEnumDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CommandStateEnumDataType_encodeBinary(const UA_CRCL_CommandStateEnumDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CommandStateEnumDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_CommandStateEnumDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATEENUMDATATYPE], NULL);
}

/* CRCL_CommandStatusDataType */
static UA_INLINE size_t
UA_CRCL_CommandStatusDataType_calcSizeBinary(const UA_CRCL_CommandStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CommandStatusDataType_encodeBinary(const UA_CRCL_CommandStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CommandStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_CommandStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COMMANDSTATUSDATATYPE], NULL);
}

/* CRCL_SensorStatusDataType */
static UA_INLINE size_t
UA_CRCL_SensorStatusDataType_calcSizeBinary(const UA_CRCL_SensorStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusDataType_encodeBinary(const UA_CRCL_SensorStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_SensorStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSDATATYPE], NULL);
}

/* CRCL_CountSensorStatusDataType */
static UA_INLINE size_t
UA_CRCL_CountSensorStatusDataType_calcSizeBinary(const UA_CRCL_CountSensorStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CountSensorStatusDataType_encodeBinary(const UA_CRCL_CountSensorStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_CountSensorStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_CountSensorStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_COUNTSENSORSTATUSDATATYPE], NULL);
}

/* CRCL_OnOffSensorStatusDataType */
static UA_INLINE size_t
UA_CRCL_OnOffSensorStatusDataType_calcSizeBinary(const UA_CRCL_OnOffSensorStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_OnOffSensorStatusDataType_encodeBinary(const UA_CRCL_OnOffSensorStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_OnOffSensorStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_OnOffSensorStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ONOFFSENSORSTATUSDATATYPE], NULL);
}

/* CRCL_ScalarSensorStatusDataType */
static UA_INLINE size_t
UA_CRCL_ScalarSensorStatusDataType_calcSizeBinary(const UA_CRCL_ScalarSensorStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ScalarSensorStatusDataType_encodeBinary(const UA_CRCL_ScalarSensorStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ScalarSensorStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ScalarSensorStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SCALARSENSORSTATUSDATATYPE], NULL);
}

/* CRCL_ForceTorqueSensorStatusDataType */
static UA_INLINE size_t
UA_CRCL_ForceTorqueSensorStatusDataType_calcSizeBinary(const UA_CRCL_ForceTorqueSensorStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ForceTorqueSensorStatusDataType_encodeBinary(const UA_CRCL_ForceTorqueSensorStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ForceTorqueSensorStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ForceTorqueSensorStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_FORCETORQUESENSORSTATUSDATATYPE], NULL);
}

/* CRCL_SensorStatusesDataType */
static UA_INLINE size_t
UA_CRCL_SensorStatusesDataType_calcSizeBinary(const UA_CRCL_SensorStatusesDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusesDataType_encodeBinary(const UA_CRCL_SensorStatusesDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SensorStatusesDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_SensorStatusesDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SENSORSTATUSESDATATYPE], NULL);
}

/* CRCL_GripperStatusDataType */
static UA_INLINE size_t
UA_CRCL_GripperStatusDataType_calcSizeBinary(const UA_CRCL_GripperStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GripperStatusDataType_encodeBinary(const UA_CRCL_GripperStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_GripperStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_GripperStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_GRIPPERSTATUSDATATYPE], NULL);
}

/* CRCL_ParallelGripperStatusDataType */
static UA_INLINE size_t
UA_CRCL_ParallelGripperStatusDataType_calcSizeBinary(const UA_CRCL_ParallelGripperStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ParallelGripperStatusDataType_encodeBinary(const UA_CRCL_ParallelGripperStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ParallelGripperStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ParallelGripperStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_PARALLELGRIPPERSTATUSDATATYPE], NULL);
}

/* CRCL_ThreeFingerGripperStatusDataType */
static UA_INLINE size_t
UA_CRCL_ThreeFingerGripperStatusDataType_calcSizeBinary(const UA_CRCL_ThreeFingerGripperStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ThreeFingerGripperStatusDataType_encodeBinary(const UA_CRCL_ThreeFingerGripperStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ThreeFingerGripperStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ThreeFingerGripperStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_THREEFINGERGRIPPERSTATUSDATATYPE], NULL);
}

/* CRCL_VacuumGripperStatusDataType */
static UA_INLINE size_t
UA_CRCL_VacuumGripperStatusDataType_calcSizeBinary(const UA_CRCL_VacuumGripperStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_VacuumGripperStatusDataType_encodeBinary(const UA_CRCL_VacuumGripperStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_VacuumGripperStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_VacuumGripperStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_VACUUMGRIPPERSTATUSDATATYPE], NULL);
}

/* CRCL_PoseStatusDataType */
static UA_INLINE size_t
UA_CRCL_PoseStatusDataType_calcSizeBinary(const UA_CRCL_PoseStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseStatusDataType_encodeBinary(const UA_CRCL_PoseStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_PoseStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_PoseStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSESTATUSDATATYPE], NULL);
}

/* CRCL_JointLimitDataType */
static UA_INLINE size_t
UA_CRCL_JointLimitDataType_calcSizeBinary(const UA_CRCL_JointLimitDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointLimitDataType_encodeBinary(const UA_CRCL_JointLimitDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointLimitDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointLimitDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTLIMITDATATYPE], NULL);
}

/* CRCL_JointStatusDataType */
static UA_INLINE size_t
UA_CRCL_JointStatusDataType_calcSizeBinary(const UA_CRCL_JointStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusDataType_encodeBinary(const UA_CRCL_JointStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSDATATYPE], NULL);
}

/* CRCL_JointStatusesDataType */
static UA_INLINE size_t
UA_CRCL_JointStatusesDataType_calcSizeBinary(const UA_CRCL_JointStatusesDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusesDataType_encodeBinary(const UA_CRCL_JointStatusesDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointStatusesDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointStatusesDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTSTATUSESDATATYPE], NULL);
}

/* PubSubIPAddresses */
static UA_INLINE size_t
UA_PubSubIPAddresses_calcSizeBinary(const UA_PubSubIPAddresses *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_PUBSUBIPADDRESSES]);
}
static UA_INLINE UA_StatusCode
UA_PubSubIPAddresses_encodeBinary(const UA_PubSubIPAddresses *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_PUBSUBIPADDRESSES], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_PubSubIPAddresses_decodeBinary(const UA_ByteString *src, size_t *offset, UA_PubSubIPAddresses *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_PUBSUBIPADDRESSES], NULL);
}

/* CRCLCommandParametersSetDataType */
static UA_INLINE size_t
UA_CRCLCommandParametersSetDataType_calcSizeBinary(const UA_CRCLCommandParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandParametersSetDataType_encodeBinary(const UA_CRCLCommandParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLCommandParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDPARAMETERSSETDATATYPE], NULL);
}

/* InitCanonParametersSetDataType */
static UA_INLINE size_t
UA_InitCanonParametersSetDataType_calcSizeBinary(const UA_InitCanonParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_InitCanonParametersSetDataType_encodeBinary(const UA_InitCanonParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_InitCanonParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_InitCanonParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_INITCANONPARAMETERSSETDATATYPE], NULL);
}

/* EndCanonParametersSetDataType */
static UA_INLINE size_t
UA_EndCanonParametersSetDataType_calcSizeBinary(const UA_EndCanonParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EndCanonParametersSetDataType_encodeBinary(const UA_EndCanonParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EndCanonParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EndCanonParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENDCANONPARAMETERSSETDATATYPE], NULL);
}

/* GetStatusParametersSetDataType */
static UA_INLINE size_t
UA_GetStatusParametersSetDataType_calcSizeBinary(const UA_GetStatusParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_GetStatusParametersSetDataType_encodeBinary(const UA_GetStatusParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_GetStatusParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_GetStatusParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_GETSTATUSPARAMETERSSETDATATYPE], NULL);
}

/* CloseToolChangerParametersSetDataType */
static UA_INLINE size_t
UA_CloseToolChangerParametersSetDataType_calcSizeBinary(const UA_CloseToolChangerParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CloseToolChangerParametersSetDataType_encodeBinary(const UA_CloseToolChangerParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CloseToolChangerParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CloseToolChangerParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CLOSETOOLCHANGERPARAMETERSSETDATATYPE], NULL);
}

/* OpenToolChangerParametersSetDataType */
static UA_INLINE size_t
UA_OpenToolChangerParametersSetDataType_calcSizeBinary(const UA_OpenToolChangerParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_OpenToolChangerParametersSetDataType_encodeBinary(const UA_OpenToolChangerParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_OpenToolChangerParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_OpenToolChangerParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_OPENTOOLCHANGERPARAMETERSSETDATATYPE], NULL);
}

/* MessageParametersSetDataType */
static UA_INLINE size_t
UA_MessageParametersSetDataType_calcSizeBinary(const UA_MessageParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MessageParametersSetDataType_encodeBinary(const UA_MessageParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MessageParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MessageParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MESSAGEPARAMETERSSETDATATYPE], NULL);
}

/* MoveToParametersSetDataType */
static UA_INLINE size_t
UA_MoveToParametersSetDataType_calcSizeBinary(const UA_MoveToParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveToParametersSetDataType_encodeBinary(const UA_MoveToParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveToParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveToParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETOPARAMETERSSETDATATYPE], NULL);
}

/* MoveScrewParametersSetDataType */
static UA_INLINE size_t
UA_MoveScrewParametersSetDataType_calcSizeBinary(const UA_MoveScrewParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveScrewParametersSetDataType_encodeBinary(const UA_MoveScrewParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveScrewParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveScrewParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVESCREWPARAMETERSSETDATATYPE], NULL);
}

/* MoveThroughToParametersSetDataType */
static UA_INLINE size_t
UA_MoveThroughToParametersSetDataType_calcSizeBinary(const UA_MoveThroughToParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_MoveThroughToParametersSetDataType_encodeBinary(const UA_MoveThroughToParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_MoveThroughToParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_MoveThroughToParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_MOVETHROUGHTOPARAMETERSSETDATATYPE], NULL);
}

/* DwellParametersSetDataType */
static UA_INLINE size_t
UA_DwellParametersSetDataType_calcSizeBinary(const UA_DwellParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DwellParametersSetDataType_encodeBinary(const UA_DwellParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DwellParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DwellParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DWELLPARAMETERSSETDATATYPE], NULL);
}

/* ConfigureJointReportsParametersSetDataType */
static UA_INLINE size_t
UA_ConfigureJointReportsParametersSetDataType_calcSizeBinary(const UA_ConfigureJointReportsParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsParametersSetDataType_encodeBinary(const UA_ConfigureJointReportsParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ConfigureJointReportsParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ConfigureJointReportsParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGUREJOINTREPORTSPARAMETERSSETDATATYPE], NULL);
}

/* SetDefaultJointPositionsTolerancesParametersSetDataType */
static UA_INLINE size_t
UA_SetDefaultJointPositionsTolerancesParametersSetDataType_calcSizeBinary(const UA_SetDefaultJointPositionsTolerancesParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesParametersSetDataType_encodeBinary(const UA_SetDefaultJointPositionsTolerancesParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetDefaultJointPositionsTolerancesParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetDefaultJointPositionsTolerancesParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETDEFAULTJOINTPOSITIONSTOLERANCESPARAMETERSSETDATATYPE], NULL);
}

/* SetRobotParametersParametersSetDataType */
static UA_INLINE size_t
UA_SetRobotParametersParametersSetDataType_calcSizeBinary(const UA_SetRobotParametersParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRobotParametersParametersSetDataType_encodeBinary(const UA_SetRobotParametersParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRobotParametersParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRobotParametersParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROBOTPARAMETERSPARAMETERSSETDATATYPE], NULL);
}

/* SetEndeffectorParametersParametersSetDataType */
static UA_INLINE size_t
UA_SetEndeffectorParametersParametersSetDataType_calcSizeBinary(const UA_SetEndeffectorParametersParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersParametersSetDataType_encodeBinary(const UA_SetEndeffectorParametersParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndeffectorParametersParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSPARAMETERSSETDATATYPE], NULL);
}

/* SetEndeffectorParametersSetDataType */
static UA_INLINE size_t
UA_SetEndeffectorParametersSetDataType_calcSizeBinary(const UA_SetEndeffectorParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersSetDataType_encodeBinary(const UA_SetEndeffectorParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndeffectorParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndeffectorParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDEFFECTORPARAMETERSSETDATATYPE], NULL);
}

/* SetTransSpeedParametersSetDataType */
static UA_INLINE size_t
UA_SetTransSpeedParametersSetDataType_calcSizeBinary(const UA_SetTransSpeedParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTransSpeedParametersSetDataType_encodeBinary(const UA_SetTransSpeedParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTransSpeedParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTransSpeedParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSSPEEDPARAMETERSSETDATATYPE], NULL);
}

/* SetTransAccelParametersSetDataType */
static UA_INLINE size_t
UA_SetTransAccelParametersSetDataType_calcSizeBinary(const UA_SetTransAccelParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTransAccelParametersSetDataType_encodeBinary(const UA_SetTransAccelParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTransAccelParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTransAccelParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTRANSACCELPARAMETERSSETDATATYPE], NULL);
}

/* SetRotSpeedParametersSetDataType */
static UA_INLINE size_t
UA_SetRotSpeedParametersSetDataType_calcSizeBinary(const UA_SetRotSpeedParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRotSpeedParametersSetDataType_encodeBinary(const UA_SetRotSpeedParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRotSpeedParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRotSpeedParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTSPEEDPARAMETERSSETDATATYPE], NULL);
}

/* SetRotAccelParametersSetDataType */
static UA_INLINE size_t
UA_SetRotAccelParametersSetDataType_calcSizeBinary(const UA_SetRotAccelParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetRotAccelParametersSetDataType_encodeBinary(const UA_SetRotAccelParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetRotAccelParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetRotAccelParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETROTACCELPARAMETERSSETDATATYPE], NULL);
}

/* SetAngleUnitsParametersSetDataType */
static UA_INLINE size_t
UA_SetAngleUnitsParametersSetDataType_calcSizeBinary(const UA_SetAngleUnitsParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetAngleUnitsParametersSetDataType_encodeBinary(const UA_SetAngleUnitsParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetAngleUnitsParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetAngleUnitsParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETANGLEUNITSPARAMETERSSETDATATYPE], NULL);
}

/* SetEndPoseToleranceParametersSetDataType */
static UA_INLINE size_t
UA_SetEndPoseToleranceParametersSetDataType_calcSizeBinary(const UA_SetEndPoseToleranceParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceParametersSetDataType_encodeBinary(const UA_SetEndPoseToleranceParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetEndPoseToleranceParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetEndPoseToleranceParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETENDPOSETOLERANCEPARAMETERSSETDATATYPE], NULL);
}

/* SetForceUnitsParametersSetDataType */
static UA_INLINE size_t
UA_SetForceUnitsParametersSetDataType_calcSizeBinary(const UA_SetForceUnitsParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetForceUnitsParametersSetDataType_encodeBinary(const UA_SetForceUnitsParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetForceUnitsParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetForceUnitsParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETFORCEUNITSPARAMETERSSETDATATYPE], NULL);
}

/* SetIntermediatePoseToleranceParametersSetDataType */
static UA_INLINE size_t
UA_SetIntermediatePoseToleranceParametersSetDataType_calcSizeBinary(const UA_SetIntermediatePoseToleranceParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceParametersSetDataType_encodeBinary(const UA_SetIntermediatePoseToleranceParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetIntermediatePoseToleranceParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetIntermediatePoseToleranceParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETINTERMEDIATEPOSETOLERANCEPARAMETERSSETDATATYPE], NULL);
}

/* SetLengthUnitsParametersSetDataType */
static UA_INLINE size_t
UA_SetLengthUnitsParametersSetDataType_calcSizeBinary(const UA_SetLengthUnitsParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetLengthUnitsParametersSetDataType_encodeBinary(const UA_SetLengthUnitsParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetLengthUnitsParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetLengthUnitsParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETLENGTHUNITSPARAMETERSSETDATATYPE], NULL);
}

/* SetMotionCoordinationParametersSetDataType */
static UA_INLINE size_t
UA_SetMotionCoordinationParametersSetDataType_calcSizeBinary(const UA_SetMotionCoordinationParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationParametersSetDataType_encodeBinary(const UA_SetMotionCoordinationParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetMotionCoordinationParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetMotionCoordinationParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETMOTIONCOORDINATIONPARAMETERSSETDATATYPE], NULL);
}

/* SetTorqueUnitsParametersSetDataType */
static UA_INLINE size_t
UA_SetTorqueUnitsParametersSetDataType_calcSizeBinary(const UA_SetTorqueUnitsParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsParametersSetDataType_encodeBinary(const UA_SetTorqueUnitsParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SetTorqueUnitsParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SetTorqueUnitsParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SETTORQUEUNITSPARAMETERSSETDATATYPE], NULL);
}

/* StopMotionParametersSetDataType */
static UA_INLINE size_t
UA_StopMotionParametersSetDataType_calcSizeBinary(const UA_StopMotionParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_StopMotionParametersSetDataType_encodeBinary(const UA_StopMotionParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_StopMotionParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_StopMotionParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_STOPMOTIONPARAMETERSSETDATATYPE], NULL);
}

/* ConfigureStatusReportParametersSetDataType */
static UA_INLINE size_t
UA_ConfigureStatusReportParametersSetDataType_calcSizeBinary(const UA_ConfigureStatusReportParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportParametersSetDataType_encodeBinary(const UA_ConfigureStatusReportParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ConfigureStatusReportParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ConfigureStatusReportParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CONFIGURESTATUSREPORTPARAMETERSSETDATATYPE], NULL);
}

/* EnableSensorParametersSetDataType */
static UA_INLINE size_t
UA_EnableSensorParametersSetDataType_calcSizeBinary(const UA_EnableSensorParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableSensorParametersSetDataType_encodeBinary(const UA_EnableSensorParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableSensorParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableSensorParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLESENSORPARAMETERSSETDATATYPE], NULL);
}

/* DisableSensorParametersSetDataType */
static UA_INLINE size_t
UA_DisableSensorParametersSetDataType_calcSizeBinary(const UA_DisableSensorParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableSensorParametersSetDataType_encodeBinary(const UA_DisableSensorParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableSensorParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableSensorParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLESENSORPARAMETERSSETDATATYPE], NULL);
}

/* EnableGripperParametersSetDataType */
static UA_INLINE size_t
UA_EnableGripperParametersSetDataType_calcSizeBinary(const UA_EnableGripperParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableGripperParametersSetDataType_encodeBinary(const UA_EnableGripperParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableGripperParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableGripperParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEGRIPPERPARAMETERSSETDATATYPE], NULL);
}

/* DisableGripperParametersSetDataType */
static UA_INLINE size_t
UA_DisableGripperParametersSetDataType_calcSizeBinary(const UA_DisableGripperParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableGripperParametersSetDataType_encodeBinary(const UA_DisableGripperParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableGripperParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableGripperParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEGRIPPERPARAMETERSSETDATATYPE], NULL);
}

/* EnableRobotParameterStatusParametersSetDataType */
static UA_INLINE size_t
UA_EnableRobotParameterStatusParametersSetDataType_calcSizeBinary(const UA_EnableRobotParameterStatusParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusParametersSetDataType_encodeBinary(const UA_EnableRobotParameterStatusParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_EnableRobotParameterStatusParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_EnableRobotParameterStatusParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ENABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE], NULL);
}

/* DisableRobotParameterStatusParametersSetDataType */
static UA_INLINE size_t
UA_DisableRobotParameterStatusParametersSetDataType_calcSizeBinary(const UA_DisableRobotParameterStatusParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusParametersSetDataType_encodeBinary(const UA_DisableRobotParameterStatusParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_DisableRobotParameterStatusParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_DisableRobotParameterStatusParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_DISABLEROBOTPARAMETERSTATUSPARAMETERSSETDATATYPE], NULL);
}

/* CRCL_JointDetailsDataType */
static UA_INLINE size_t
UA_CRCL_JointDetailsDataType_calcSizeBinary(const UA_CRCL_JointDetailsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointDetailsDataType_encodeBinary(const UA_CRCL_JointDetailsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_JointDetailsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_JointDetailsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_JOINTDETAILSDATATYPE], NULL);
}

/* CRCL_ActuateJointDataType */
static UA_INLINE size_t
UA_CRCL_ActuateJointDataType_calcSizeBinary(const UA_CRCL_ActuateJointDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ActuateJointDataType_encodeBinary(const UA_CRCL_ActuateJointDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_ActuateJointDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_ActuateJointDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_ACTUATEJOINTDATATYPE], NULL);
}

/* ActuateJointsDataType */
static UA_INLINE size_t
UA_ActuateJointsDataType_calcSizeBinary(const UA_ActuateJointsDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ActuateJointsDataType_encodeBinary(const UA_ActuateJointsDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ActuateJointsDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ActuateJointsDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSDATATYPE], NULL);
}

/* CRCL_SettingsStatusDataType */
static UA_INLINE size_t
UA_CRCL_SettingsStatusDataType_calcSizeBinary(const UA_CRCL_SettingsStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SettingsStatusDataType_encodeBinary(const UA_CRCL_SettingsStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCL_SettingsStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCL_SettingsStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_SETTINGSSTATUSDATATYPE], NULL);
}

/* CRCLStatusDataType */
static UA_INLINE size_t
UA_CRCLStatusDataType_calcSizeBinary(const UA_CRCLStatusDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLStatusDataType_encodeBinary(const UA_CRCLStatusDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLStatusDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLStatusDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSTATUSDATATYPE], NULL);
}

/* CRCLCommandsUnionDataType */
static UA_INLINE size_t
UA_CRCLCommandsUnionDataType_calcSizeBinary(const UA_CRCLCommandsUnionDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsUnionDataType_encodeBinary(const UA_CRCLCommandsUnionDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLCommandsUnionDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLCommandsUnionDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLCOMMANDSUNIONDATATYPE], NULL);
}

/* CRCLSkillDataType */
static UA_INLINE size_t
UA_CRCLSkillDataType_calcSizeBinary(const UA_CRCLSkillDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_CRCLSkillDataType_encodeBinary(const UA_CRCLSkillDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_CRCLSkillDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_CRCLSkillDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCLSKILLDATATYPE], NULL);
}

/* ActuateJointsParametersSetDataType */
static UA_INLINE size_t
UA_ActuateJointsParametersSetDataType_calcSizeBinary(const UA_ActuateJointsParametersSetDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMETERSSETDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_ActuateJointsParametersSetDataType_encodeBinary(const UA_ActuateJointsParametersSetDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMETERSSETDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_ActuateJointsParametersSetDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_ActuateJointsParametersSetDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_ACTUATEJOINTSPARAMETERSSETDATATYPE], NULL);
}

/* SAMYRobotDataType */
static UA_INLINE size_t
UA_SAMYRobotDataType_calcSizeBinary(const UA_SAMYRobotDataType *src) {
    return UA_calcSizeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE]);
}
static UA_INLINE UA_StatusCode
UA_SAMYRobotDataType_encodeBinary(const UA_SAMYRobotDataType *src, UA_Byte **bufPos, const UA_Byte *bufEnd) {
    return UA_encodeBinary(src, &UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE], bufPos, &bufEnd, NULL, NULL);
}
static UA_INLINE UA_StatusCode
UA_SAMYRobotDataType_decodeBinary(const UA_ByteString *src, size_t *offset, UA_SAMYRobotDataType *dst) {
    return UA_decodeBinary(src, offset, dst, &UA_TYPES_CRCL[UA_TYPES_CRCL_SAMYROBOTDATATYPE], NULL);
}

#endif /* TYPES_CRCL_GENERATED_ENCODING_BINARY_H_ */
