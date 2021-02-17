#include <Robot.h>

#ifdef USE_PYTHON
Robot::Robot(std::string pathToPythonRobot_, std::string ipAddress_):
    pathToPythonRobot(pathToPythonRobot_),
    ipAddress(ipAddress_)
{
    // Allow Python to load modules from the current directory.
    setenv("PYTHONPATH", pathToPythonRobot.c_str(), 1);
    // Initialize Python.
    Py_Initialize();
}

UA_Boolean Robot::initRobot()
{
    namespace python = boost::python;
    try
    {
        //std::cout << "Import Python module from " << pathToPythonRobot << std::endl;
        python::object robot_module = python::import("RobotLib");
        // Create an instance of Robot class as python object
        std::cout << "loading the robot object" << std::endl;
        python::object robot_object = robot_module.attr("Robot")(ipAddress);
        python::object plugin_object = python::import("plugin");
        std::cout << "Robot Object created" << std::endl;
        pythonRobot = robot_object;
        pythonPlugin = plugin_object;
    }
    catch (const boost::python::error_already_set&)
    {
        PyErr_Print();
        python::object empty;
        std::cout << "RobotObject is empty" << std::endl;
        pythonRobot = empty;
    }
}
#else
int RobotBase(){}

#endif

