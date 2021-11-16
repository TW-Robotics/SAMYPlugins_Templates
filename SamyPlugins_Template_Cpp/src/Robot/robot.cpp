#include "robot.h"


Robot::Robot(std::string address_, Signals* signals_):
    address(address_),
    signals(signals_)
    {
    }

int Robot::InitCanon(UA_InitCanonParametersSetDataType* init){
    std::cout << "\nRobot:\nExecute InitCanon command" << std::endl;
    std::cout << "InitCanon Name:" << init->name.data << std::endl;
    return 1;
}

int Robot::EndCanon(UA_EndCanonParametersSetDataType* endCanon){
    std::cout << "\nRobot:\nExecute EndCanon command" << std::endl;
    std::cout << "EndCanon Name:" << endCanon->name.data << std::endl;
    return 1;
}

int Robot::Message(UA_MessageParametersSetDataType* message){
    std::cout << "\nRobot:\nExecute Message command" << std::endl;
    std::cout << "Message Name:" << message->name.data << std::endl;
    return 1;
}

int Robot::MoveTo(UA_MoveToParametersSetDataType* moveTo){
    std::cout << "\nRobot:\nExecute MoveTo command\n" << std::endl;
    std::cout << "MoveStraight: " << moveTo->moveStraight << std::endl;
    // Simulate error during execution
    //signals->Halt();
    signals->Suspend();
    std::cout << "Suspend Skill for 3 seconds" << std::endl;
    sleep(100);
    signals->Resume();
    return 1;
    //UA_StopMotionDataType stop;
    //signals->StopMotion(&stop);
}

int Robot::MoveScrew(UA_MoveScrewParametersSetDataType* moveScrew){
    std::cout << "\nRobot:\nExecute MoveScrew command" << std::endl;
    std::cout << "MoveScrew Name:" << moveScrew->name.data << std::endl;
    return 1;
}

int Robot::MoveThroughTo(UA_MoveThroughToParametersSetDataType* moveThroughTo){
    std::cout << "\nRobot:\nExecute MoveThroughTo command" << std::endl;
    std::cout << "MoveThroughTo Name:" << moveThroughTo->name.data << std::endl;
    return 1;
}

int Robot::Dwell(UA_DwellParametersSetDataType* dwell){
    std::cout << "\nRobot:\nExecute Dwell command" << std::endl;
    std::cout << "Dwell Name:" << dwell->name.data << std::endl;
    return 1;
}

int Robot::ActuateJoints(UA_ActuateJointsParametersSetDataType* actuateJoints){
    std::cout << "\nRobot:\nExecute ActuateJoints command" << std::endl;
    std::cout << "ActuateJoints Name:" << actuateJoints->name.data << std::endl;
    return 1;
}



int Robot::SetEndeffector(UA_SetEndeffectorParametersSetDataType* setEndeffector){
    std::cout << "\nRobot:\nExecute setEndeffector command" << std::endl;
    std::cout << "SetEndeffector: Value" << setEndeffector->setting.fraction << std::endl;
    return 1;
}




