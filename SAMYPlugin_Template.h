#ifndef SAMYPLUGIN_TEMPLATE
#define SAMYPLUGIN_TEMPLATE

#include <namespace_crcl_generated.h>
#include "Robot.h"

#ifdef USE_PYTHON

#include <boost/python.hpp>
#include <boost/python/class.hpp>
#include <boost/python/implicit.hpp>
#include <boost/python/module.hpp>
#include <Python.h>
#include <string>
#include <mutex>

#endif

bool executeMoveToCommand(const UA_MoveToDataType* const moveTo, Robot* robot, std::mutex* robot_acess);

bool executeSetEndeffectorCommand(const UA_SetEndeffectorDataType* const setEndEffector, Robot* robot);

bool executeStopRobot(Robot* robot);

bool executeRunBufferedCommands(Robot* robot);

bool executeSetMode(Robot* robot, int mode);

bool executeSetRobotParametersCommand(const UA_SetRobotParametersDataType* parameter, Robot* robot);

bool executeSetTransSpeedCommand(const UA_SetTransSpeedDataType* const transSpeed, Robot* robot);

bool executeInitCanonCommand(const UA_InitCanonDataType* const initCanon, Robot* robot);

bool executeEndCanonCommand( const UA_EndCanonDataType* const endCanon, Robot* robot);

bool executeSetRobotParametersCommand(const UA_SetRobotParametersDataType* parameter, Robot* robot);

#endif /*SAMYPLUGIN_TEMPLATE*/
