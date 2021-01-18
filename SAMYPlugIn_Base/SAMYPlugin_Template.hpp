#ifndef SAMYPLUGIN_TEMPLATE
#define SAMYPLUGIN_TEMPLATE

#include <crcl_opcua_nodeids.h>
#include <namespace_crcl_opcua_generated.h>
#include "Robot.hpp"

// TODO InitCanaon, EndCanon
bool executeMoveToCommand(const UA_MoveToDataType* const moveTo, Robot* extruder);

bool executeSetRobotParametersCommand(const UA_SetRobotParametersDataType* parameter, Robot* extruder);

bool executeSetTransSpeedCommand(const UA_SetTransSpeedDataType* const transSpeed, Robot* extruder);

#endif /*SAMYPLUGIN_TEMPLATE*/
