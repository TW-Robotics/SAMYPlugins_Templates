#include <Robot.h>
#include <string>

#ifdef USE_CPP

RobotBase::RobotBase()
  {}

Robot::Robot(std::string address_){
  address = address_;
}

#endif // USE_CPP
