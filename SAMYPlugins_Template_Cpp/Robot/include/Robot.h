#ifndef ROBOT_H
#define ROBOT_H

#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
#ifdef USE_CPP
#include <iostream>
#include <mutex>

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
class Robot : public RobotBase{
public:
    Robot(std::string address_);
    ~Robot()=default;
private:

};

// ---------------------------------------------------
// end of robot specific Code
// ---------------------------------------------------

#else
// When writing a pure C plugin put use this section.
typedef struct
{
    UA_Boolean online = false;
    UA_Boolean active = false;
    UA_Boolean* running;
    UA_String address;
} RobotBase;

// ---------------------------------------------------
// Put here your robot specific Code.
// ---------------------------------------------------

typedef struct
{
    RobotBase base;
} Robot;

// ---------------------------------------------------
// end of robot specific Code
// ---------------------------------------------------

#endif // USE_CPP

#endif // ROBOT_H
