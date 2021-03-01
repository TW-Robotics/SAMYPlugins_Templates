#include <Robot.h>

#ifdef USE_PYTHON

Robot::Robot(std::string pathToPythonRobot_, std::string address_):
    pathToPythonRobot(pathToPythonRobot_),
    address(address_)
{
    // Allow Python to load modules from the given directory.
    setenv("PYTHONPATH", pathToPythonRobot.c_str(), 1);
    // Initialize Python.
    Py_Initialize();
}

UA_Boolean Robot::initRobot()
{
    namespace python = boost::python;
    try
    {
        python::object robot_module = python::import("RobotLib");
        // Create an instance of Robot class as python object
        std::cout << "C++: loading the robot object" << std::endl;
        std::cout << "C++: IP Address: " << address << std::endl;;
        python::object robot_object = robot_module.attr("Robot")(address);
        python::object plugin_object = python::import("plugin");
        std::cout << "C++: Robot Object created" << std::endl;
        pythonRobot = robot_object;
        pythonPlugin = plugin_object;
        return true;
    }
    catch (const boost::python::error_already_set&)
    {
        PyErr_Print();
        python::object empty;
        std::cout << "C++: RobotObject is empty" << std::endl;
        pythonRobot = empty;
        return false;
    }
}
#else
int RobotBase(){}

#endif

