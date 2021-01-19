#include <SAMYPlugin_Template.h>
#include "Robot.h"

bool executeMoveToCommand(const UA_MoveToDataType* const moveTo, Robot* robot){
    return true;
}

bool executeSetRobotParametersCommand(const UA_SetRobotParametersDataType* parameter, Robot* robot){
    return true;
}

bool executeSetTransSpeedCommand(const UA_SetTransSpeedDataType* const transSpeed, Robot* robot){
    return true;
}
