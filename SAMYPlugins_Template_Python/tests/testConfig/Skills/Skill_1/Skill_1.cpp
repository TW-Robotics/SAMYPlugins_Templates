#include <Skill_1.h>
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
    void testFunction2( UA_UInt32 const * const param1, UA_UInt32 const * const param2 ){
        UA_UInt32 param1_v = *param1;
        UA_UInt32 param2_v = *param2;

        std::vector<UA_CRCLCommandsParamsSetsUnionDataType> commands;

	std::cout << "<---------------- BEGIN testFunction2 ---------->" << std::endl;
	std::cout << *param1 << std::endl;
	std::cout << *param2 << std::endl;

	SAMYCoreAPI_dummy(); // Prints a message

	std::cout << "Setting PENDING state" << std::endl;
        SAMYCoreAPI_dummyCommandState_Pending(); // Sets the value of the CommandStateBuffer of the skill in the SAMYCore to PROCESSING_PENDING

	std::cout << "Before Waiting 1" << std::endl;
	SAMYCoreAPI_dummyWait(); /* Stops the execution of this script until you change the CommandStateBuffer of the skill in the SAMYCore either 
				to PROCESSING_FAILED or to AWAITING */

	std::cout << "Setting RUNNING state" << std::endl;
	SAMYCoreAPI_dummyCommandState_Running(); // Writes the value of the CommandStateBuffer of the skill in the SAMYCore  to PROCESSING_RUNNING

	std::cout << "Before Waiting 2" << std::endl;
	SAMYCoreAPI_dummyWait(); // Waits again

        std::cout << "<---------------- TESTING ACTUAL API ---------->" << std::endl;

        if( param1_v == 0 ){
	    
	    UA_InitCanonParamsSetDataType c1;
	    c1.name = UA_STRING( "UA_InitCanonParamsSetDataType" );
	    c1.realTimeParameter = false;
	    c1.realTimeParameterNodeID = UA_NODEID_NUMERIC( 5, 0 );

	    UA_CRCLCommandsParamsSetsUnionDataType commandsUnion1;
	    commandsUnion1.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_INITCANONPARAMSSET;
	    commandsUnion1.fields.initCanonParamsSet = c1;



	    UA_CRCL_PoseDataType pose1;
	    pose1.id = 743;
	    pose1.name = UA_STRING( "POSE1" );
	    pose1.point.id = 87;
	    pose1.point.name = UA_STRING( "POINT NAME" );
	    pose1.point.x = 0.987;
	    pose1.point.y = 6.543;
	    pose1.point.z = 1.467;
	    pose1.xAxis.id = 8711;
	    pose1.xAxis.name = UA_STRING( "xVector NAME" );
	    pose1.xAxis.i = 0.987;
	    pose1.xAxis.j = 6.543;
	    pose1.xAxis.k = 1.467;
	    pose1.zAxis.id = 8764;
	    pose1.zAxis.name = UA_STRING( "zVector NAME" );
	    pose1.zAxis.i = 5.987;
	    pose1.zAxis.j = 8.543;
	    pose1.zAxis.k = 121.467;

	    UA_MoveToParamsSetDataType c2;
	    c2.name = UA_STRING( "UA_MoveToParamsSetDataType" );
	    c2.realTimeParameter = false;
	    c2.realTimeParameterNodeID = UA_NODEID_NUMERIC( 5, 0 );
	    c2.endPosition = pose1;
	    c2.moveStraight = true;

	    UA_CRCLCommandsParamsSetsUnionDataType commandsUnion2;
	    commandsUnion2.switchField = UA_CRCLCOMMANDSPARAMSSETSUNIONDATATYPESWITCH_MOVETOPARAMSSET;
	    commandsUnion2.fields.moveToParamsSet = c2;



	    commands.emplace_back( commandsUnion1 );
	    commands.emplace_back( commandsUnion2 );

        }else{
		std::cout << "Error executing skill" << std::endl;
	}

        setCommandsBuffer( commands ); /* Sets the buffer of commands to be executed by the robot to be the previously created vector 
		of commands "commands". It does not send them yet nor modifies the CommandsBuffer variable in the SAMYCore. 
		It sets the value in the internal class representing the robot 
		(this way commands can be accumulated without requesting yet the execution). */
        sendCommandsAndWait(); /*Writes the values currently stored for the robot in the CommandsBuffer node of the robot in the SAMYCore, 
		sets the node CommandStateBuffer to value PROCESSING_PENDING, and waits until the value of CommandStateBuffer is changed 
		(usually by the SAMYPlugin) either to PROCESSING_FAILED or to AWAITING. */

	std::cout << "<---------------- FINISHING testFunction2 ---------->" << std::endl;
    }
    void testFunction( UA_UInt32 param1, UA_UInt32 param2 ){
	std::cout << "<- testFunction ->" << std::endl;
    }

}
