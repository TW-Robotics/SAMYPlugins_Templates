#include <robot.h>


RobotBase::RobotBase(){}


Robot::Robot(std::string address_, Signals* signals_):
    address(address_),
    signals(signals_)
    {}

void Robot::ExecuteMoveTo(UA_MoveToDataType* moveTo){
    std::cout << "\nRobot:\nExecute MoveTo command\n" << std::endl;
    std::cout << address << std::endl;
    UA_StopMotionDataType stop;
    signals->StopMotion(&stop);
}

void Robot::StoppingRobot(UA_StopMotionDataType* stop){
    std::cout << "Robot: Stopping Robot from Slot" << std::endl;
}

