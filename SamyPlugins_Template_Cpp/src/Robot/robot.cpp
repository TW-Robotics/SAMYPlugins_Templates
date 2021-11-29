#include "robot.h"


Robot::Robot(std::string address_, Signals* signals_, Plugin* plugin_):
    address(address_),
    signals(signals_),
    plugin(plugin_)
    {
        //Set default values
        settings.transSpeedAbsolute.setting = 10;
        settings.transAccelAbsolute.setting = 10;
        settings.lengthUnitName = UA_CRCL_LENGTHUNITENUMDATATYPE_METER;
        settings.rotAccelAbsolute.setting = 1.2;
        settings.rotSpeedAbsolute.setting = 1.2;
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
    UA_CRCL_PoseDataType pose;
    pose.name = UA_STRING("Test");
    pose.point.x = 100;
    pose.point.y = 200;
    UA_Boolean boolTest = true;
    //Test write infoSource
    UA_StatusCode retval;
    UA_NodeId id = plugin->infoSources.at("CameraBased_Pose_ABB_0");
    UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Info Node Id : %d", id.identifier.numeric);
    UA_Variant *myVariant = UA_Variant_new();
    UA_Variant_setScalar(myVariant, &pose, &UA_TYPES_CRCL[UA_TYPES_CRCL_CRCL_POSEDATATYPE]);
    retval = UA_Client_writeValueAttribute(plugin->samy_core_client_read, plugin->infoSources.at("CameraBased_Pose_ABB_0"), myVariant);
    UA_Variant_delete(myVariant);
    if (retval == UA_STATUSCODE_GOOD){
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "Writing was succesfull");
    } else {
        UA_LOG_INFO(UA_Log_Stdout, UA_LOGCATEGORY_USERLAND, "%s", UA_StatusCode_name(retval));
    }

    // Simulate error during execution
    //signals->Halt();
//    signals->Suspend();
//    std::cout << "Suspend Skill for 3 seconds" << std::endl;
//    sleep(100);
//    signals->Resume();
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

int Robot::SetTransSpeed(UA_SetTransSpeedParametersSetDataType* setTransSpeed){
    if (setTransSpeed->transSpeed.switchField == UA_CRCL_TRANSSPEEDDATATYPESWITCH_TRANSSPEEDABSOLUTEDATATYPE){
        settings.transSpeedAbsolute.setting = setTransSpeed->transSpeed.fields.transSpeedAbsoluteDataType.setting;
    } else {
        settings.transSpeedRelative.fraction.fraction = setTransSpeed->transSpeed.fields.transSpeedRelativeDataType.fraction.fraction;
    }
}


