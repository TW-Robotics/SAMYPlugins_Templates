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

set(CPP_COMPILATION "Force compilation with a C++ compiler. By default C++98. If you want to use another standard, set the variable CPP_STANDARD" ON)
#cmake_dependent_option(SET_CPP_STANDARD "Allows setting a specific CPP standard. Default standard is C++98" OFF "CPP_COMPILATION" OFF)
set(CPP_STANDARD "98" CACHE STRING "98")
set(CPP_EXTENSIONS "Uses compiler-specific extensions to the CPP standard" OFF)

if(CPP_COMPILATION)
	message(STATUS "C++ Compiler set.")
        add_compile_definitions(USE_CPP)
  set(CPP_STANDARD 11)
	enable_language(CXX)
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
include_directories("${PROJECT_SOURCE_DIR}/Template_internals/Helpers/include")
include_directories("${PROJECT_SOURCE_DIR}/Robot/include")

# The generated files are: "namespace_${NAMESPACE_NAME}_... .c/.h"
set(NAMESPACE_NAME_CRCL "crcl")
# The compiled namespace is: "${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME}"
set(NAMESPACE_PREFIX "pref")
#add_subdirectory("${PROJECT_SOURCE_DIR}/OPCUA_CRCL")

ua_generate_nodeset_and_datatypes(
        INTERNAL
        NAME "${NAMESPACE_NAME_CRCL}"
        FILE_NS "${CMAKE_CURRENT_LIST_DIR}/Template_internals/OPCUA_CRCL/model/Published/CRCL.NodeSet2.xml"
        TARGET_PREFIX "${NAMESPACE_PREFIX}"
        FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/Template_internals/OPCUA_CRCL/model/Published/CRCL.csv"
        FILE_BSD "${CMAKE_CURRENT_LIST_DIR}/Template_internals/OPCUA_CRCL/model/Published/CRCL.Types.bsd"
        OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
    # This namespace index must match the order in which you are adding the nodeset in the source code
        NAMESPACE_MAP 2:https://crcl.org
)

add_executable(${PROJECT_NAME}
                ${UA_NODESET_CRCL_SOURCES}
                ${UA_TYPES_CRCL_SOURCES}
		"./Template_internals/Communication/Publisher.c"
		"./Template_internals/Communication/Subscriber.c"
		"./Template_internals/Communication/SAMYRobot.c"
		"./Robot/Robot.c"
		"./SAMYPlugin_Template.c"
    "./Template_internals/Helpers/helpers.c"
		"main.c"
		)

# Make sure the nodeset compiler is execute before compiling the main file
add_dependencies(${PROJECT_NAME}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_CRCL}
                 )

target_link_libraries(${PROJECT_NAME} open62541::open62541)
