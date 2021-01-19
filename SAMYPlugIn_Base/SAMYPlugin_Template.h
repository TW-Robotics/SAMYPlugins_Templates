#ifndef SAMYPLUGIN_TEMPLATE
#define SAMYPLUGIN_TEMPLATE

#include <crcl_opcua_nodeids.h>
#include <namespace_crcl_opcua_generated.h>
#include "Robot.h"

// TODO InitCanaon, EndCanon
bool executeMoveToCommand(const UA_MoveToDataType* const moveTo, Robot* robot);

bool executeSetRobotParametersCommand(const UA_SetRobotParametersDataType* parameter, Robot* robot);

bool executeSetTransSpeedCommand(const UA_SetTransSpeedDataType* const transSpeed, Robot* robot);

#endif /*SAMYPLUGIN_TEMPLATE*/
