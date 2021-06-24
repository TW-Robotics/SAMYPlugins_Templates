#ifndef SAMYPLUGIN_TEMPLATE
#define SAMYPLUGIN_TEMPLATE

#include <namespace_crcl_generated.h>
#include "Robot.h"
// add use CPP compiler if
#include <string>
#include <mutex>


bool stopRobotCommand(Robot* robot);

bool runBufferedCommands(Robot* robot);

bool setMode(Robot* robot, int mode);

//---------------CRCL Commands--------------------------

bool initCanonCommand(Robot* robot, const UA_InitCanonDataType* const initCanon );

bool endCanonCommand(Robot* robot, const UA_EndCanonDataType* const endCanon);

bool messageCommand(Robot* robot, const UA_MessageDataType* const message);

bool moveToCommand(Robot* robot, const UA_MoveToDataType* const moveTo);

bool moveScrewCommand(Robot* robot, const UA_MoveScrewDataType* const moveScrew);

bool moveThroughToCommand(Robot* robot, const UA_MoveThroughToDataType* const moveThroughTo);

bool dwellCommand(Robot* robot, const UA_DwellDataType* const dwell);

bool actuateJointsCommand(Robot* robot, const UA_ActuateJointsDataType* const actuateJoints);

bool configureJointsReportsCommand(Robot* robot,
                const UA_ConfigureJointReportsDataType* const configureJointsReports);

bool setDefaultJointPositionsToleranceCommand(Robot* robot,
                const UA_SetDefaultJointPositionsTolerancesDataType* const tolerance);

bool getStatusCommand(Robot* robot);

bool closeToolChangerCommand(Robot* robot);

bool openToolChangerCommand(Robot* robot);

bool setRobotParametersCommand(Robot* robot, const UA_SetRobotParametersDataType* const parameter);

bool setEndeffectorParametersCommand(Robot* robot,
                                     const UA_SetEndeffectorParametersDataType* const parameters);

bool setEndeffectorCommand(Robot* robot, const UA_SetEndeffectorDataType* const setEndeffector);

bool setTransAccelCommand(Robot* robot, const UA_SetTransAccelDataType* const transAccel);

bool setTransSpeedCommand(Robot* robot, const UA_SetTransSpeedDataType* const transSpeed);

bool setRotAccelCommand(Robot* robot, const UA_SetRotAccelDataType* const rotAccel);

bool setRotSpeedCommand(Robot* robot, const UA_SetRotSpeedDataType* const rotSpeed);

bool setAngleUnitsCommand(Robot* robot, const UA_SetAngleUnitsDataType* const angleUnits);

bool setEndPoseToleranceCommand(Robot* robot, const UA_SetEndPoseToleranceDataType* const endPoseTolerance);

bool setForceUnitsCommand(Robot* robot, const UA_SetForceUnitsDataType* const forceUnits);

bool setIntermediatePoseToleranceCommand(Robot* robot, const UA_SetIntermediatePoseToleranceDataType* const tolerance);

bool setLengthUnitsCommand(Robot* robot, const UA_SetLengthUnitsDataType* const lengthUnits);

bool setMotionCoordinationCommand(Robot* robot, const UA_SetMotionCoordinationDataType* const motionCoordination);

bool setTorqueUnitsCommand(Robot* robot, const UA_SetTorqueUnitsDataType* const torqueUnits);

bool stopMotionCommand(Robot* robot, const UA_StopMotionDataType* const stopMotion);

bool configureStatusReportCommand(Robot* robot, const UA_ConfigureStatusReportDataType* const comfigureStatusReport);

bool enableSensorCommand(Robot* robot, const UA_EnableSensorDataType* const enableSensor);

bool disableSensorCommand(Robot* robot, const UA_DisableSensorDataType* const disableSensor);

bool enableGripperCommand(Robot* robot, const UA_EnableGripperDataType* const enableGripper);

bool disableGripperCommand(Robot* robot, const UA_DisableGripperDataType* const disableGripper);

bool enableRobotParamterStatusCommand(Robot* robot, const UA_EnableRobotParameterStatusDataType* const robotStatus);

bool disableRobotParamterStatusCommand(Robot* robot, const UA_DisableRobotParameterStatusDataType* const robotStatus);


#endif // SAMYPLUGIN_TEMPLATE
