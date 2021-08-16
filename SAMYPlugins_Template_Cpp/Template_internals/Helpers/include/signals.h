#ifndef SIGNALS_H
#define SIGNALS_H

#include <boost/signals2.hpp>

struct Signals{
    boost::signals2::signal<void(UA_InitCanonDataType*)> InitCanon;
    boost::signals2::signal<void(UA_EndCanonDataType*)> EndCanon;
    boost::signals2::signal<void(UA_MessageDataType*)> Message;
    boost::signals2::signal<void(UA_MoveToDataType*)> MoveTo;
    boost::signals2::signal<void(UA_MoveScrewDataType*)> MoveScrew;
    boost::signals2::signal<void(UA_MoveThroughToDataType*)> MoveThroughTo;
    boost::signals2::signal<void(UA_DwellDataType*)> Dwell;
    boost::signals2::signal<void(UA_ActuateJointsDataType*)> ActuateJoints;
    boost::signals2::signal<void(UA_ConfigureJointReportsDataType*)> ConfigureJointReports;
    boost::signals2::signal<void(UA_ConfigureJointReportsDataType*)> ConfigureJointReport;
    boost::signals2::signal<void(UA_SetDefaultJointPositionsTolerancesDataType*)> SetDefaultJointPositionsTolerances;
    boost::signals2::signal<void(UA_GetStatusDataType*)> GetStatus;
    boost::signals2::signal<void(UA_CloseToolChangerDataType*)> CloseToolChanger;
    boost::signals2::signal<void(UA_OpenToolChangerDataType*)> OpenToolChanger;
    boost::signals2::signal<void(UA_SetRobotParametersDataType*)> SetRobotParameters;
    boost::signals2::signal<void(UA_SetEndeffectorParametersDataType*)> SetEndeffectorParameters;
    boost::signals2::signal<void(UA_SetEndeffectorDataType*)> SetEndeffector;
    boost::signals2::signal<void(UA_SetTransAccelDataType*)> SetTransAccel;
    boost::signals2::signal<void(UA_SetTransSpeedDataType*)> SetTransSpeed;
    boost::signals2::signal<void(UA_SetRotAccelDataType*)> SetRotAccel;
    boost::signals2::signal<void(UA_SetRotSpeedDataType*)> SetRotSpeed;
    boost::signals2::signal<void(UA_SetAngleUnitsDataType*)> SetAngleUnits;
    boost::signals2::signal<void(UA_SetEndPoseToleranceDataType*)> SetEndPoseTolerance;
    boost::signals2::signal<void(UA_SetForceUnitsDataType*)> SetForceUnits;
    boost::signals2::signal<void(UA_SetIntermediatePoseToleranceDataType*)> SetIntermediatePoseTolerance;
    boost::signals2::signal<void(UA_SetLengthUnitsDataType*)> SetLengthUnits;
    boost::signals2::signal<void(UA_SetMotionCoordinationDataType*)> SetMotionCoordination;
    boost::signals2::signal<void(UA_SetTorqueUnitsDataType*)> SetTorqueUnit;
    boost::signals2::signal<void(UA_StopMotionDataType*)> StopMotion;
    boost::signals2::signal<void(UA_ConfigureStatusReportDataType*)> ConfigureStatusReport;
    boost::signals2::signal<void(UA_EnableSensorDataType*)> EnableSensor;
    boost::signals2::signal<void(UA_DisableSensorDataType*)> DisableSensor;
    boost::signals2::signal<void(UA_EnableGripperDataType*)> EnableGripper;
    boost::signals2::signal<void(UA_DisableGripperDataType*)> DisableGripper;
    boost::signals2::signal<void(UA_EnableRobotParameterStatusDataType*)> EnableRobotParameterStatus;
    boost::signals2::signal<void(UA_DisableRobotParameterStatusDataType*)> DisableRobotParameterStatus;
};

#endif
