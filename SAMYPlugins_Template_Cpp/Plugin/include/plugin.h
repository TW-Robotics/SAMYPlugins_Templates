#ifndef PLUGIN_H
#define PLUGIN_H

#include <open62541/plugin/log_stdout.h>
#include <open62541/server.h>
#include <open62541/server_config_default.h>
#include "samy_robot.h"
#include <helpers.h>
#include <open62541/client_subscriptions.h>
#include "namespace_crcl_generated.h"
#include "types_crcl_generated_handling.h"
#include <boost/signals2.hpp>
#include <functional>
#include <signals.h>

class Plugin
{
private:
    void MonitorLastSkillSucceededVariable(UA_Server *server, SAMYRobot* robots);
    static void UpdateAndExecuteRequestedSkill(UA_Server *server, UA_UInt32 monitoredItemId,
                                      void *monitoredItemContext, const UA_NodeId *nodeId,
                                      void *nodeContext, UA_UInt32 attributeId,
                                      const UA_DataValue *value);

    void ExecuteSkill();

    SAMYRobot robot;
    Signals * signals;
public:
    Plugin(Signals* signals_);
    ~Plugin();
    UA_StatusCode ConnectToCore(std::string samyCoreAddress, std::string samyCorePort);
    void SendCommandIsDone();

    bool *running;

    // Signals

};

#endif // PLUGIN_H
