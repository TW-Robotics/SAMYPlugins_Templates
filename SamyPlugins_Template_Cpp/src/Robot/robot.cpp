#include "robot.h"


Robot::Robot(std::string address_, Signals* signals_):
    address(address_),
    signals(signals_)
    {
    }

int Robot::ExecuteMoveTo(UA_MoveToParametersSetDataType* moveTo){
    std::cout << "\nRobot:\nExecute MoveTo command\n" << std::endl;
    std::cout << "MoveStraight: " << moveTo->moveStraight << std::endl;
    // Simulate error during execution
    //signals->Halt();
    std::cout << address << std::endl;
    return 1;
    //UA_StopMotionDataType stop;
    //signals->StopMotion(&stop);
}
