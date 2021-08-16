#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include "namespace_crcl_generated.h"
#include "types_crcl_generated_handling.h"
#include <string>
#include <signals.h>

// When writing a Cpp plugin use this section.
class RobotBase
{
public:
    RobotBase();
    ~RobotBase() = default;
    UA_Boolean online = false;
    UA_Boolean active = false;
    UA_Boolean* running;
protected:
    std::string address;
};
// ---------------------------------------------------
// Put here your robot specific Code
// ---------------------------------------------------
class Robot{
public:
    Robot(std::string address_, Signals* signals_);
    ~Robot()=default;

    void ExecuteMoveTo(UA_MoveToDataType *moveTo);
    void StoppingRobot(UA_StopMotionDataType* stop);

private:
    Signals* signals;
    std::string address;
    void ConnectSignals();
};

// ---------------------------------------------------
// end of robot specific Code
// ---------------------------------------------------


#endif // ROBOT_H
