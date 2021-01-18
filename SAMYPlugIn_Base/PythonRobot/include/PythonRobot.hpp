#ifndef ROBOT_H
#define ROBOT_H

#include <boost/python.hpp>
#include <boost/python/class.hpp>
#include <boost/python/implicit.hpp>
#include <boost/python/module.hpp>
#include <Python.h>

#include <string>

class Robot
{
public:
    Robot(std::string pathToPythonRobot_, std::string ipAddress_);
    void initRobot();
    boost::python::object pythonRobot;
    boost::python::object pythonPlugin;

private:
    std::string ipAddress;
    std::string pathToPythonRobot;
};

#endif // ROBOT_H
