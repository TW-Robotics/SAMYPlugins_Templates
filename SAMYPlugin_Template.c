#include <SAMYPlugin_Template.h>
#include "Robot.h"

#ifdef USE_PYTHON


bool executeInitCanonCommand(const UA_InitCanonDataType* const initCanon, Robot* robot){
    return true;
}

bool executeEndCanonCommand(const UA_EndCanonDataType* const endCanon, Robot* robot){
    return true;
}

bool executeMoveToCommand(const UA_MoveToDataType* const moveTo, Robot* robot,
                          std::mutex* robot_access){
    std::string state;
    boost::python::object py_state;
    try
    {
        robot_access->lock();
        robot->pythonPlugin.attr("moveto")(robot->pythonRobot, moveTo->commandID, moveTo->moveStraight,
                                           moveTo->endPosition.point.x, moveTo->endPosition.point.y,
                                           moveTo->endPosition.point.z, moveTo->endPosition.xAxis.i,
                                           moveTo->endPosition.xAxis.j, moveTo->endPosition.xAxis.k,
                                           moveTo->endPosition.zAxis.i, moveTo->endPosition.zAxis.j,
                                           moveTo->endPosition.zAxis.k);
        robot_access->unlock();
        printf("C++ check state\n");
        while (robot->running){
            usleep(100);
            robot_access->lock();
            py_state = robot->pythonPlugin.attr("get_state")(robot->pythonRobot);
            robot_access->unlock();
            state = boost::python::extract<std::string>(py_state);
            printf("C++ STATE: %s\n", state.c_str());
            if (strcmp(state.c_str(), "STOPPING") == 0) break;
        }
        printf("Finished Move To Command %d C++\n", moveTo->commandID);
        return true;
    }
    catch (const boost::python::error_already_set&)
    {
        PyErr_Print();
        std::cout << "Error in move_to" << std::endl;
        return false;
    }
}

bool executeSetTransSpeedCommand(const UA_SetTransSpeedDataType* const transSpeed, Robot* robot){
    try
    {
        robot->pythonPlugin.attr("set_trans_speed")(robot->pythonRobot, transSpeed->transSpeed.fields.transSpeedAbsoluteDataType.setting);
        return true;
    }
    catch (const boost::python::error_already_set&)
    {
        PyErr_Print();
        std::cout << "Error in move_to" << std::endl;
        return false;
    }
}

bool executeSetEndEffectorCommand(const UA_SetEndEffectorDataType* const setEndEffector, Robot* robot){
    try
    {
        robot->pythonPlugin.attr("set_end_effector")(robot->pythonRobot, setEndEffector->commandID,
                                                     setEndEffector->setting);
        return true;
    }
    catch (const boost::python::error_already_set&)
    {
        PyErr_Print();
        std::cout << "Error in move_to" << std::endl;
        return false;
    }
}

bool executeStopRobot(Robot* robot){
    printf("\nStopping Robot\n\n");
    try
    {
        robot->pythonPlugin.attr("stop")(robot->pythonRobot);
        return true;
    }
    catch (const boost::python::error_already_set&)
    {
        PyErr_Print();
        std::cout << "Error in stop" << std::endl;
        return false;
    }
}

bool executeRunBufferedCommands(Robot* robot){
    printf("\nRunning buffered commands\n\n");
    try
    {
        robot->pythonPlugin.attr("run_buffered_commands")(robot->pythonRobot);
        return true;
    }
    catch (const boost::python::error_already_set&)
    {
        PyErr_Print();
        std::cout << "Error in run_buffered_commands" << std::endl;
        return false;
    }
}

bool executeSetMode(Robot* robot, int mode){
    printf("\nSet Mode (live/buffered)\n\n");
    try
    {
        robot->pythonPlugin.attr("set_mode")(robot->pythonRobot, 20, mode);
        return true;
    }
    catch (const boost::python::error_already_set&)
    {
        PyErr_Print();
        std::cout << "Error in run_buffered_commands" << std::endl;
        return false;
    }
}

bool executeSetRobotParametersCommand(const UA_SetRobotParametersDataType* parameter, Robot* robot){
    return true;
}

#else

bool executeInitCanonCommand(const UA_InitCanonDataType* const initCanon, Robot* robot){
    return true;
}

bool executeEndCanonCommand(const UA_EndCanonDataType* const endCanon, Robot* robot){
    return true;
}

bool executeMoveToCommand(const UA_MoveToDataType* const moveTo, Robot* robot){
    return true;
}

bool executeSetTransSpeedCommand(const UA_SetTransSpeedDataType* const transSpeed, Robot* robot){
    return true;
}

bool executeSetEndEffectorCommand(const UA_SetEndEffectorDataType* const setEndEffector, Robot* robot){
    return true;
}

bool executeStopRobot(Robot* robot){
}

bool executeRunBufferedCommands(Robot* robot){
}

bool executeSetMode(Robot* robot, int mode){
}

bool executeSetRobotParametersCommand(const UA_SetRobotParametersDataType* parameter, Robot* robot){
    return true;
}

#endif
