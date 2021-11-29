#ifndef ROBOT_H
#define ROBOT_H

#include <signals.h>
#include <string>
#include <iostream>
#include <time.h>

#include <namespace_crcl_generated.h>
#include <types_crcl_generated_handling.h>
#include <open62541/client_highlevel.h>
#include <plugin.h>

class Robot
{
public:
    Robot(std::string address_, Signals* signals_, Plugin* plugin_);
    ~Robot()=default;

    int InitCanon(UA_InitCanonParametersSetDataType* init);
    int EndCanon(UA_EndCanonParametersSetDataType* endCanon);
    int Message(UA_MessageParametersSetDataType* message);
    int MoveTo(UA_MoveToParametersSetDataType *moveTo);
    int MoveScrew(UA_MoveScrewParametersSetDataType* moveScrew);
    int MoveThroughTo(UA_MoveThroughToParametersSetDataType* moveThroughTo);
    int Dwell(UA_DwellParametersSetDataType* dwell);
    int ActuateJoints(UA_ActuateJointsParametersSetDataType* actuateJoints);
    int SetEndeffector(UA_SetEndeffectorParametersSetDataType *setEndeffector);
    int SetTransSpeed(UA_SetTransSpeedParametersSetDataType* setTransSpeed);

private:
    Signals* signals;
    std::string address;
    Plugin* plugin;
    UA_CRCL_SettingsStatusDataType settings;
};

#endif // ROBOT_H
