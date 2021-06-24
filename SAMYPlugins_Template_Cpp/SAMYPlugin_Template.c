#include <SAMYPlugin_Template.h>
#include "Robot.h"


bool stopRobotCommand(Robot* robot){
  return true;
}

bool runBufferedCommands(Robot* robot){
  return true;
}

bool setMode(Robot* robot, int mode){
  return true;
}

//---------------CRCL Commands--------------------------

bool initCanonCommand(Robot* robot, const UA_InitCanonDataType* const initCanon ){
    return true;
}

bool endCanonCommand(Robot* robot, const UA_EndCanonDataType* const endCanon){
    return true;
}

bool messageCommand(Robot* robot, const UA_MessageDataType* const message){
    return true;
}

bool moveToCommand(Robot* robot, const UA_MoveToDataType* const moveTo){
    return true;
}

bool moveScrewCommand(Robot* robot, const UA_MoveScrewDataType* const moveScrew){
    return true;
}

bool moveThroughToCommand(Robot* robot, const UA_MoveThroughToDataType* const moveThroughTo){
    return true;
}

bool dwellCommand(Robot* robot, const UA_DwellDataType* const dwell){
    return true;
}

bool actuateJointsCommand(Robot* robot, const UA_ActuateJointsDataType* const actuateJoints){
    return true;
}

bool configureJointsReportsCommand(Robot* robot,
                const UA_ConfigureJointReportsDataType* const configureJointsReports){
    return true;
}

bool setDefaultJointPositionsToleranceCommand(Robot* robot,
                const UA_SetDefaultJointPositionsTolerancesDataType* const tolerance){
    return true;
}

bool getStatusCommand(Robot* robot){
    return true;
}

bool closeToolChangerCommand(Robot* robot){
    return true;
}

bool openToolChangerCommand(Robot* robot){
    return true;
}

bool setRobotParametersCommand(Robot* robot, const UA_SetRobotParametersDataType* const parameter){
    return true;
}

bool setEndeffectorParametersCommand(Robot* robot,
                                     const UA_SetEndeffectorParametersDataType* const parameters){
    return true;
}

bool setEndeffectorCommand(Robot* robot, const UA_SetEndeffectorDataType* const setEndeffector){
    return true;
}

bool setTransAccelCommand(Robot* robot, const UA_SetTransAccelDataType* const transAccel){
    return true;
}

bool setTransSpeedCommand(Robot* robot, const UA_SetTransSpeedDataType* const transSpeed){
    return true;
}

bool setRotAccelCommand(Robot* robot, const UA_SetRotAccelDataType* const rotAccel){
    return true;
}

bool setRotSpeedCommand(Robot* robot, const UA_SetRotSpeedDataType* const rotSpeed){
    return true;
}

bool setAngleUnitsCommand(Robot* robot, const UA_SetAngleUnitsDataType* const angleUnits){
    return true;
}

bool setEndPoseToleranceCommand(Robot* robot, const UA_SetEndPoseToleranceDataType* const endPoseTolerance){
    return true;
}

bool setForceUnitsCommand(Robot* robot, const UA_SetForceUnitsDataType* const forceUnits){
    return true;
}

bool setIntermediatePoseToleranceCommand(Robot* robot, const UA_SetIntermediatePoseToleranceDataType* const tolerance){
    return true;
}

bool setLengthUnitsCommand(Robot* robot, const UA_SetLengthUnitsDataType* const lengthUnits){
    return true;
}

bool setMotionCoordinationCommand(Robot* robot, const UA_SetMotionCoordinationDataType* const motionCoordination){
    return true;
}

bool setTorqueUnitsCommand(Robot* robot, const UA_SetTorqueUnitsDataType* const torqueUnits){
    return true;
}

bool stopMotionCommand(Robot* robot, const UA_StopMotionDataType* const stopMotion){
    return true;
}

bool configureStatusReportCommand(Robot* robot, const UA_ConfigureStatusReportDataType* const comfigureStatusReport){
    return true;
}

bool enableSensorCommand(Robot* robot, const UA_EnableSensorDataType* const enableSensor){
    return true;
}

bool disableSensorCommand(Robot* robot, const UA_DisableSensorDataType* const disableSensor){
    return true;
}

bool enableGripperCommand(Robot* robot, const UA_EnableGripperDataType* const enableGripper){
    return true;
}

bool disableGripperCommand(Robot* robot, const UA_DisableGripperDataType* const disableGripper){
    return true;
}

bool enableRobotParamterStatusCommand(Robot* robot, const UA_EnableRobotParameterStatusDataType* const robotStatus){
    return true;
}

bool disableRobotParamterStatusCommand(Robot* robot, const UA_DisableRobotParameterStatusDataType* const robotStatus){
    return true;
}

