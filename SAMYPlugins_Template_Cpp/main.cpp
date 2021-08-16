#include "robot.h"
#include "plugin.h"

#include <signal.h>
#include <boost/signals2.hpp>
#include <memory>

#include "namespace_crcl_generated.h"
#include "types_crcl_generated_handling.h"
#include <signals.h>

const size_t array_size = 9;
UA_Boolean running = true;

static void stopHandler(int sign) {
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_SERVER, "received ctrl-c");
    running = false;
}



int main(int argc, char** argv) {

    signal(SIGINT, stopHandler);
    signal(SIGTERM, stopHandler);
    printf("C++: Starting Plugin\n");

    std::string address; // address of robot
    std::string samyCoreAddress;
    std::string samyCorePort;

    if (argc == 4){
        samyCoreAddress = argv[1];
        samyCorePort = argv[2];
        address = argv[3];
    } else {
        std::cout << "To few arguments: \n"
                     "\"address of SAMYCore\" \"port of SAMYCore\" "
                     "\"address of robot\"" << std::endl;
        return -1;
    }

    Signals signals;
    Plugin plugin(&signals);
    plugin.running = &running;

    // Creating the robot object
    std::cout << "Conecting to Robot" << std::endl;
    std::shared_ptr<Robot> robot(new Robot(address, &signals));

    // Connect methodes to signals
    signals.MoveTo.connect(boost::bind(&Robot::ExecuteMoveTo, robot, _1));
    signals.StopMotion.connect(boost::bind(&Robot::StoppingRobot, robot, _1));


    // Connect to SAMYCore and start listending for commands.
    UA_StatusCode retval = UA_STATUSCODE_GOOD;
    retval = plugin.ConnectToCore(samyCoreAddress, samyCorePort);

    // Stopping the robot when the program ends.
    UA_StopMotionDataType stop;
    stop.stopCondition = UA_CRCL_STOPCONDITIONENUMDATATYPE_NORMAL;
    signals.StopMotion(&stop);

    return retval == UA_STATUSCODE_GOOD ? EXIT_SUCCESS : EXIT_FAILURE;
}
