
#include "plugin.h"
#include "robot.h"

#include <signal.h>
#include <signals.h>
#include <boost/signals2.hpp>
#include "namespace_crcl_generated.h"
#include "types_crcl_generated_handling.h"
#include <memory>

UA_Boolean running = true;
static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}

int main(int argc, char** argv)
{
    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);
    printf("C++: Starting Plugin\n");

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


    Signals signals; // Struct of all available signals (all CRCL-commands, signals for skill methods)
    Plugin plugin(&signals);
    plugin.running = &running;

    // Creating the robot object
    std::cout << "Conecting to Robot" << std::endl;
    std::shared_ptr<Robot> robot(new Robot(address, &signals));

    // Connect methodes to signals
    signals.MoveTo.connect(boost::bind(&Robot::ExecuteMoveTo, robot, _1));

    // Connect to SAMYCore and start listending for commands.
    UA_StatusCode retval = UA_STATUSCODE_GOOD;
    retval = plugin.ConnectToCore(samyCoreAddress, samyCorePort);
    printf("Connected to SAMY Core.\n");
    plugin.GetRobotNodeId(robotName);
    printf("Got Robot Node Id.\n");
    plugin.SubscribeToRobot();
    printf("Subscribed to NextSkillNodeId.\n");
    plugin.GetListOfSkills();
    printf("Starting RunClient.\n");
    plugin.RunClient(1000);
    printf("RunClient has returned.\n");

    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
