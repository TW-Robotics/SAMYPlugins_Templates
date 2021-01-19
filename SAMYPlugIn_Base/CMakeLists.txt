#macro(print_all_variables)
#    message(STATUS "print_all_variables------------------------------------------{")
#    get_cmake_property(_variableNames VARIABLES)
#    foreach (_variableName ${_variableNames})
#        message(STATUS "${_variableName}=${${_variableName}}")
#    endforeach()
#    message(STATUS "print_all_variables------------------------------------------}")
#endmacro()

cmake_minimum_required(VERSION 3.0...3.12)
if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(SAMYPlugIn_Base VERSION 0.1 LANGUAGES CXX C)

option(CPP_COMPILATION "Force compilation with a C++ compiler. By default C++98. If you want to use another standard, set the variable CPP_STANDARD" OFF)
#cmake_dependent_option(SET_CPP_STANDARD "Allows setting a specific CPP standard. Default standard is C++98" OFF "CPP_COMPILATION" OFF)
set(CPP_STANDARD "98" CACHE STRING "98")
option(CPP_EXTENSIONS "Uses compiler-specific extensions to the CPP standard" OFF)

option(ROBOT_CODE_PYTHON "Set the Programming lanugage used for the robot specific code to be Python. By default the robot specific code is assumed to be C/C++. If this flag is set, C++ compiler will be used." OFF)

if(CPP_COMPILATION OR ROBOT_CODE_PYTHON)
	message(STATUS "C++ Compiler set.")
	enable_language(CXX)
	if(ROBOT_CODE_PYTHON AND (${CPP_STANDARD} EQUAL 98 OR ${CPP_STANDARD} LESS_EQUAL 11) )
		set(CPP_STANDARD 11)
		message(STATUS "Using Python template requires C++ with standard C++11 or newer. Standard C++11 set")
	endif()
	SET(CMAKE_CXX_STANDARD ${CPP_STANDARD})
	SET(CMAKE_CXX_FLAGS "-Wno-write-strings")
	FILE(GLOB_RECURSE CFILES "${CMAKE_SOURCE_DIR}/*.c")
	SET_SOURCE_FILES_PROPERTIES(${CFILES} PROPERTIES LANGUAGE CXX )
	set(CMAKE_CXX_EXTENSIONS OFF)
	if(CPP_EXTENSIONS)
		set(CMAKE_CXX_EXTENSIONS ON)
	endif()
else()
	SET(CMAKE_C_FLAGS "-Wno-write-strings")
endif()


if(ROBOT_CODE_PYTHON)
    add_compile_definitions(PYTHON_CODE=${Python})
    find_package(Python 3 COMPONENTS Interpreter Development REQUIRED) #3.8.2
    find_package(Boost COMPONENTS python REQUIRED)
    include_directories("${Python_INCLUDE_DIRS}")
    include_directories("${Boost_INCLUDE_DIRS}")
    include_directories("/usr/include/boost")
endif()

# open62541 v1.2 must be installed!
# If in custom path, then use -DCMAKE_PREFIX_PATH=/home/user/installcmake_minimum_required(VERSION 3.2)
find_package(open62541 REQUIRED COMPONENTS FullNamespace)

set(GENERATE_OUTPUT_DIR "${CMAKE_BINARY_DIR}/src_generated/")
include_directories("${GENERATE_OUTPUT_DIR}")
file(MAKE_DIRECTORY "${GENERATE_OUTPUT_DIR}")

include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/Template_internals/OPCUA_CRCL/pubsub")
include_directories("${PROJECT_SOURCE_DIR}/Template_internals/OPCUA_CRCL/deps")
include_directories("${PROJECT_SOURCE_DIR}/Template_internals/OPCUA_CRCL/include")
include_directories("${PROJECT_SOURCE_DIR}/Template_internals/OPCUA_CRCL/include/open62541/plugin")
include_directories("${PROJECT_SOURCE_DIR}/Template_internals/OPCUA_CRCL/plugins/")
include_directories("${PROJECT_SOURCE_DIR}/Template_internals/Communication/include")
include_directories("${PROJECT_SOURCE_DIR}/Template_internals/Robot/include")

# The generated files are: "namespace_${NAMESPACE_NAME}_... .c/.h"
set(NAMESPACE_NAME "crcl_opcua")
# The compiled namespace is: "${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME}"
set(NAMESPACE_PREFIX "pref")
#add_subdirectory("${PROJECT_SOURCE_DIR}/OPCUA_CRCL")


ua_generate_nodeset_and_datatypes(
        INTERNAL
        NAME "${NAMESPACE_NAME}"
        FILE_NS "${CMAKE_CURRENT_LIST_DIR}/Template_internals/OPCUA_CRCL/model/Published/CRCL.NodeSet2.xml"
        TARGET_PREFIX "${NAMESPACE_PREFIX}"
        FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/Template_internals/OPCUA_CRCL/model/Published/CRCL_OPCUA.csv"
        FILE_BSD "${CMAKE_CURRENT_LIST_DIR}/Template_internals/OPCUA_CRCL/model/Published/CRCL.Types.bsd"
        OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
    # This namespace index must match the order in which you are adding the nodeset in the source code
        NAMESPACE_MAP 2:https://crcl.org
)


add_executable(${PROJECT_NAME}
		"${UA_NODESET_CRCL_OPCUA_SOURCES}" 
		"${UA_TYPES_CRCL_OPCUA_SOURCES}" 
		"./Template_internals/Communication/Publisher.c" 
		"./Template_internals/Communication/Subscriber.c" 
		"./Template_internals/Communication/SAMYRobot.c"
		"./Template_internals/Robot/Robot.c"
		"./SAMYPlugin_Template.c"
		"main.c"
		)


# Make sure the nodeset compiler is execute before compiling the main file
add_dependencies(${PROJECT_NAME}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME}
                 )

target_link_libraries(${PROJECT_NAME} open62541::open62541)

if( ROBOT_CODE_PYTHON )
	target_link_libraries( ${PROJECT_NAME} ${Boost_LIBRARIES} ${Python_LIBRARIES} )
endif()

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES} ${Python_LIBRARIES})

