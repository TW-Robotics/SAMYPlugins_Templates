#ifndef ROBOT_H
#define ROBOT_H

#include <signals.h>
#include <string>
#include <iostream>

#include <namespace_crcl_generated.h>
#include <types_crcl_generated_handling.h>

class Robot
{
public:
    Robot(std::string address_, Signals* signals_);
    ~Robot()=default;

    int ExecuteMoveTo(UA_MoveToParametersSetDataType *moveTo);

private:
    Signals* signals;
    std::string address;
};

#endif // ROBOT_H
