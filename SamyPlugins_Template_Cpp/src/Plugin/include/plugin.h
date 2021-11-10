#ifndef PLUGIN_H
#define PLUGIN_H

#include <open62541/client_config_default.h>
#include <open62541/client_highlevel.h>
#include <open62541/client_subscriptions.h>
#include <open62541/plugin/log_stdout.h>
#include <namespace_crcl_generated.h>
#include <namespace_crcl_generated.h>
#include <types_crcl_generated_handling.h>

#include "samy_robot.h"
#include <helpers.h>

#include <boost/thread.hpp>
#include <boost/asio/io_service.hpp>
#include <boost/asio/executor_work_guard.hpp>
#include <boost/signals2.hpp>
#include <functional>
#include <signals.h>
#include <vector>
#include <unordered_map>
#include <thread>

struct skill
{
    UA_NodeId skillNodeId;
    std::string name;
};

class Plugin
{
private:
    bool StartReadThread();
    void RunService();
    UA_StatusCode ConnectToCore();
    UA_StatusCode SubscribeToRobot();
    UA_StatusCode GetRobotNodeId(std::string robotName);
    UA_StatusCode GetSkillNodeId(std::string skillName, UA_NodeId* skillNodeId);
    UA_StatusCode GetListOfSkills();
    void ConnectSignals();
// ################ Methode Handling  ########################
    UA_StatusCode CallMethod(UA_NodeId *methodNode, UA_NodeId *objectNode);
    UA_StatusCode GetSkillMethods(UA_NodeId* skillNode, std::unordered_map<std::string, UA_NodeId> *methods);
    UA_StatusCode ResetSkill(UA_NodeId* skillNode);
    UA_StatusCode HaltSkill(UA_NodeId* skillNode);
    UA_StatusCode ResetAllSkills();
    UA_StatusCode HaltAllSkills();
// ################ Methode Handling  ########################
    void SendCommandIsDone();
    static void HandlerEvents(UA_Client *client, UA_UInt32 subId, void *subContext,
                                UA_UInt32 monId, void *monContext,
                                size_t nEventFields, UA_Variant *eventFields);
    void ExecuteSkill(UA_NodeId* skillNode);

    std::string samyCoreAddress;
    std::string samyCorePort;
    UA_Client* samy_core_client;
    UA_Client* samy_core_client_read;
    UA_NodeId* robot_node_id;
    UA_NodeId* robot_controller_node_id;
    UA_NodeId currentSkill;
    static std::vector<struct skill> skillList;
    Signals* signals;

    // Variables for reading values from server in seperate thread
    bool m_started = false;
    boost::asio::io_service m_service;
    boost::asio::executor_work_guard<boost::asio::io_context::executor_type> m_worker;
    boost::thread m_thread;

public:
    Plugin(std::string samyCoreAddress_, std::string samyCorePort_, Signals* signals_);
    ~Plugin();
    UA_StatusCode InitPlugin(std::string robotName);
    UA_StatusCode RunClient(int timeout);
    UA_StatusCode HaltCurrentSkill();
    UA_StatusCode ResetCurrentSkill();

    bool *running;
};

#endif // PLUGIN_H
