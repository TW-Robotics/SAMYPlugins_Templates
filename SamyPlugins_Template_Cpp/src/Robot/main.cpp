
#include "plugin.h"
#include "robot.h"

#include <memory>
#include <signal.h>
#include <signals.h>
#include <boost/signals2.hpp>
#include <boost/bind.hpp>
#include <thread>
#include <chrono>

#include "namespace_crcl_generated.h"
#include "types_crcl_generated_handling.h"


UA_Boolean running = true;
static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_CLIENT, "received ctrl-c");
    running = false;
}

int main(int argc, char** argv)
{
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);

    std::string address; // address of robot
    std::string samyCoreAddress;
    std::string samyCorePort = "4840";
    std::string robotName;

    if (argc == 4){
        samyCoreAddress = argv[1];
        robotName = argv[2];
        address = argv[3];
    } else {
        std::cout << "To few arguments: \n"
                     "\"address of SAMYCore\" \"name of Robot\" "
                     "\"address of robot\"" << std::endl;
        return -1;
    }

    Signals signals; // Struct of all available signals (all CRCL-commands and signals for skill methods)
    Plugin plugin(samyCoreAddress, samyCorePort, &signals);
    plugin.running = &running;

    // Creating the robot object
    std::cout << "Connecting to Robot..." << std::endl;
    std::shared_ptr<Robot> robot(new Robot(address, &signals, &plugin));
    std::cout << "Connected to Robot" << std::endl;

    // Connect methods to signals
    signals.InitCanon.connect(boost::bind(&Robot::InitCanon, robot, _1));
    signals.EndCanon.connect(boost::bind(&Robot::EndCanon, robot, _1));
    signals.Message.connect(boost::bind(&Robot::Message, robot, _1));
    signals.MoveTo.connect(boost::bind(&Robot::MoveTo, robot, _1));
    signals.MoveScrew.connect(boost::bind(&Robot::MoveScrew, robot, _1));
    signals.MoveThroughTo.connect(boost::bind(&Robot::MoveThroughTo, robot, _1));
    signals.Dwell.connect(boost::bind(&Robot::Dwell, robot, _1));
    signals.ActuateJoints.connect(boost::bind(&Robot::ActuateJoints, robot, _1));
    signals.SetEndeffector.connect(boost::bind(&Robot::SetEndeffector, robot, _1));

    // Connect to SAMYCore and start listending for commands.
    UA_StatusCode retval = UA_STATUSCODE_GOOD;
    retval = plugin.InitPlugin(robotName);
    printf("Starting RunClient.\n");
    retval = plugin.RunClient(1000);
    printf("RunClient has returned.\n");

    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
