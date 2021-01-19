#ifndef ROBOT_H
#define ROBOT_H

#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>

#ifdef PYTHON_CODE

#include <iostream>
#include <boost/python.hpp>
#include <boost/python/class.hpp>
#include <boost/python/implicit.hpp>
#include <boost/python/module.hpp>
#include <Python.h>

class Robot
{
public:
    Robot(std::string pathToPythonRobot_, std::string ipAddress_);
    void initRobot();
    boost::python::object pythonRobot;
    boost::python::object pythonPlugin;
    UA_Boolean online;

private:
    std::string ipAddress;
    std::string pathToPythonRobot;
};
#else

typedef struct
{
    UA_Boolean online;
    UA_Boolean* running;
    UA_String ipAddress;
} Robot;

#endif

#endif // ROBOT_H
