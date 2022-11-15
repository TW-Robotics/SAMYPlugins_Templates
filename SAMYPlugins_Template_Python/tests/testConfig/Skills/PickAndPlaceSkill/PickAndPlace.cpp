#include <PickAndPlace.h>
#include <skillsScriptingAPI.h>

#include <functional>
#include <iostream>


extern "C"{ // This is important, since avoid name mangling of the symbols, so the SAMYCore can find the correct chunck of compiled assembly code

    /* The parameters that receives the function are the parameters exposed in the skill parametersSet of the SAMYCore. 
	When you click "Start" method of the matching skill, the values are read and passed as arguments of this function, and this function 
	is then executed from a thread.
	At the moment, arguments has to be constant pointers to constant data, aka TypeName const * const parameterName 
	(e.g. UA_UInt32 const * const param1). T
	his is due to the fact that libffi has problems handing unions and I cannot pass them by value correctly in a portable way. 
	I will try to fix this but I am not sure is possible.
	What you should do is just at the very beggining of the skill copy them into a value and then doing with them whatever you want. E.g.:

	    void testFunction2( UA_UInt32 const * const param1, UA_UInt32 const * const param2 ){
		UA_UInt32 param1_v = *param1; // You can do whatevery you want with param1_v now
		UA_UInt32 param2_v = *param2; // You can do whatevery you want with param2_v now

	I am planning to write a compiler-preprocessor based on Clang for automating these stuff so you can write code without these artifacts, 
	but for the moment should be fine like this.
    */
    void pickAndPlaceSkill( UA_CRCL_PoseDataType const * const pickPose,
                      UA_CRCL_PoseDataType const * const placePose,
                      double const * const offset){
        UA_CRCL_PoseDataType pick = *pickPose;
        UA_CRCL_PoseDataType place = *placePose;
        double offset_local = *offset;
        std::vector<UA_CRCLCommandsParamsSetsUnionDataType> commands;

        // Create pickPose MoveToParams
        UA_MoveToParamsSetDataType pickParams;
        pickParams.name = UA_STRING("PickParameter");
        pickParams.realTimeParameter = false;
        pickParams.endPosition = pick;
        pickParams.moveStraight = false;

        // Create abovePickPose MoveToParams
        UA_MoveToParamsSetDataType abovePickParams;
        pickParams.name = UA_STRING("AbovePickParameter");
        pickParams.realTimeParameter = false;
        abovePickParams.endPosition = pick;
        abovePickParams.moveStraight = false;
        abovePickParams.endPosition.point.z = abovePickParams.endPosition.point.z + offset_local;

        // Create placePose MoveToParams
        UA_MoveToParamsSetDataType placeParams;
        pickParams.name = UA_STRING("PlaceParameter");
        pickParams.realTimeParameter = false;
        placeParams.endPosition = place;
        placeParams.moveStraight = false;

        // Create abovePlacePose MoveToParams
        UA_MoveToParamsSetDataType abovePlaceParams;
        pickParams.name = UA_STRING("AbovePlaceParameter");
        pickParams.realTimeParameter = false;
        abovePlaceParams.endPosition = place;
        abovePlaceParams.moveStraight = false;
        abovePlaceParams.endPosition.point.z = abovePlaceParams.endPosition.point.z + offset_local;


        UA_CRCLCommandsParamsSetsUnionDataType commandsUnion1;
            commandsUnion1.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_MOVETOPARAMSSET;
            commandsUnion1.fields.moveToParamsSet = abovePickParams;
            commands.emplace_back( commandsUnion1 );
        UA_CRCLCommandsParamsSetsUnionDataType commandsUnion2;
            commandsUnion1.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_MOVETOPARAMSSET;
            commandsUnion1.fields.moveToParamsSet = pickParams;
            commands.emplace_back( commandsUnion2 );
        UA_CRCLCommandsParamsSetsUnionDataType commandsUnion3;
            commandsUnion1.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_MOVETOPARAMSSET;
            commandsUnion1.fields.moveToParamsSet = abovePlaceParams;
            commands.emplace_back( commandsUnion3 );
        UA_CRCLCommandsParamsSetsUnionDataType commandsUnion4;
            commandsUnion1.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_MOVETOPARAMSSET;
            commandsUnion1.fields.moveToParamsSet = placeParams;
            commands.emplace_back( commandsUnion4 );
        UA_CRCLCommandsParamsSetsUnionDataType commandsUnion5;
            commandsUnion1.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_MOVETOPARAMSSET;
            commandsUnion1.fields.moveToParamsSet = abovePlaceParams;
            commands.emplace_back( commandsUnion5 );
        
        setCommandsBuffer( commands ); /* Sets the buffer of commands to be executed by the robot to be the previously created vector 
        of commands "commands". It does not send them yet nor modifies the CommandsBuffer variable in the SAMYCore. 
        It sets the value in the internal class representing the robot 
        (this way commands can be accumulated without requesting yet the execution). */
        sendCommandsAndWait(); /*Writes the values currently stored for the robot in the CommandsBuffer node of the robot in the SAMYCore, 
        sets the node CommandStateBuffer to value PROCESSING_PENDING, and waits until the value of CommandStateBuffer is changed 
        (usually by the SAMYPlugin) either to PROCESSING_FAILED or to AWAITING. */
    }
}
