#ifndef PLUGIN_H
#define PLUGIN_H

#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>
#include <open62541/client_subscriptions.h>
#include <open62541/plugin/log_stdout.h>
#include "namespace_crcl_generated.h"
#include "types_crcl_generated.h"
#include "types_crcl_generated_handling.h"

#include "samy_robot.h"
#include <helpers.h>

#include <boost/signals2.hpp>
#include <functional>
#include <signals.h>
#include <vector>
#include <unordered_map>

struct skill
{
    UA_NodeId skillNodeId;
    std::string name;
};

class Plugin
{
private:
    void MonitorLastSkillSucceededVariable(UA_Server *server, SAMYRobot* robots);
    void MonitorNextSkillIdVariable(UA_Server* server, SAMYRobot* robot);
    static void UpdateAndExecuteRequestedSkill(UA_Server *server, UA_UInt32 monitoredItemId,
                                      void *monitoredItemContext, const UA_NodeId *nodeId,
                                      void *nodeContext, UA_UInt32 attributeId,
                                      const UA_DataValue *value);
    UA_Client* samy_core_client;
    UA_NodeId* robot_node_id;
    UA_NodeId* robot_controller_node_id;
    UA_MonitoredItemCreateResult monResponse;
    UA_MonitoredItemCreateRequest monRequest;
    static std::vector<struct skill> skillList;
    Signals * signals;
public:
    Plugin(Signals* signals_);
    ~Plugin();
    static void handler_events(UA_Client *client, UA_UInt32 subId, void *subContext,
                                UA_UInt32 monId, void *monContext,
                                size_t nEventFields, UA_Variant *eventFields);

    UA_StatusCode ConnectToCore(std::string samyCoreAddress, std::string samyCorePort);
    UA_StatusCode GetRobotNodeId(std::string robotName);
    UA_StatusCode GetSkillNodeId(std::string skillName, UA_NodeId* skillNodeId);
    UA_StatusCode GetSkillMethods(UA_NodeId* skillNode, std::unordered_map<std::string, UA_NodeId> *methods);
    UA_StatusCode callMethod(UA_NodeId *methodNode, UA_NodeId *objectNode);
    UA_StatusCode resetAllSkills();
    UA_StatusCode GetListOfSkills();
    UA_StatusCode RunClient(int timeout);
    UA_StatusCode SubscribeToRobot();
    void ExecuteSkill(UA_NodeId* skillNode);
    void SendCommandIsDone();
    bool *running;

};

#endif // PLUGIN_H
