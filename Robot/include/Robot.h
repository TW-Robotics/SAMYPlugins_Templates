#ifndef ROBOT_H
#define ROBOT_H

#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
#ifdef USE_CPP
#include <iostream>
#endif // USE_CPP

#ifdef USE_PYTHON
#include <boost/python.hpp>
#include <boost/python/class.hpp>
#include <boost/python/implicit.hpp>
#include <boost/python/module.hpp>
#include <Python.h>
#include <mutex>

class Robot
{
public:
    Robot(std::string pathToPythonRobot_, std::string address_);
    UA_Boolean initRobot();
    boost::python::object pythonRobot;
    boost::python::object pythonPlugin;
    UA_Boolean* running;
private:
    std::string address;
    std::string pathToPythonRobot;
};

#else

#ifdef USE_CPP

class RobotBase
{
public:
    RobotBase();
    ~RobotBase() = default;
    UA_Boolean online = false;
    UA_Boolean active = false;
    UA_Boolean* running;
private:
    UA_String address;
};

// Put here your robot specific Code
class Robot : public RobotBase{
public:
    Robot();
    ~Robot()=default;
private:

};

// end of robot specific Code

#else

typedef struct
{
    UA_Boolean online = false;
    UA_Boolean active = false;
    UA_Boolean* running;
    UA_String address;
} RobotBase;

// Put here your robot specific Code.

typedef struct
{
    RobotBase base;
} Robot;

// end of robot specific Code

#endif // USE_CPP

#endif // USE_PYTHON

#endif // ROBOT_H
