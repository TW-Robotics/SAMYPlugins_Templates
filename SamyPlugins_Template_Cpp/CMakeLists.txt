
cmake_minimum_required(VERSION 3.0...3.12)
if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(SAMYPluginLib VERSION 0.1 LANGUAGES CXX C)

set(CPP_EXTENSIONS "Uses compiler-specific extensions to the CPP standard" OFF)

add_compile_definitions(USE_CPP)
set(CPP_STANDARD 11)
enable_language(CXX)
find_package(Boost COMPONENTS)
include_directories("${Boost_INCLUDE_DIRS}")
SET(CMAKE_CXX_STANDARD ${CPP_STANDARD})
SET(CMAKE_CXX_FLAGS "-Wno-write-strings")
FILE(GLOB_RECURSE CFILES "${CMAKE_SOURCE_DIR}/*.c")
SET_SOURCE_FILES_PROPERTIES(${CFILES} PROPERTIES LANGUAGE CXX )
set(CMAKE_CXX_EXTENSIONS OFF)
if(CPP_EXTENSIONS)
        set(CMAKE_CXX_EXTENSIONS ON)
endif()

# open62541 v1.2 must be installed!
# If in custom path, then use -DCMAKE_PREFIX_PATH=/home/user/installcmake_minimum_required(VERSION 3.2)
find_package(open62541 REQUIRED COMPONENTS FullNamespace)

set(GENERATE_OUTPUT_DIR "${CMAKE_BINARY_DIR}/src_generated/")
include_directories("${GENERATE_OUTPUT_DIR}")
file(MAKE_DIRECTORY "${GENERATE_OUTPUT_DIR}")

include_directories("${PROJECT_SOURCE_DIR}"
                    "${PROJECT_SOURCE_DIR}/src/OPCUA_CRCL/pubsub"
                    "${PROJECT_SOURCE_DIR}/src/OPCUA_CRCL/deps"
                    "${PROJECT_SOURCE_DIR}/src/OPCUA_CRCL/include"
                    "${PROJECT_SOURCE_DIR}/src/OPCUA_CRCL/include/open62541/plugin"
                    "${PROJECT_SOURCE_DIR}/src/OPCUA_CRCL/plugins/"
                    "${PROJECT_SOURCE_DIR}/src/Communication/include"
                    "${PROJECT_SOURCE_DIR}/src/Helpers/include"
                    "${PROJECT_SOURCE_DIR}/src/Plugin/include")

# The generated files are: "namespace_${NAMESPACE_NAME}_... .c/.h"
set(NAMESPACE_NAME_CRCL "crcl")
# The compiled namespace is: "${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME}"
set(NAMESPACE_PREFIX "pref")
#add_subdirectory("${PROJECT_SOURCE_DIR}/OPCUA_CRCL")

ua_generate_nodeset_and_datatypes(
        INTERNAL
        NAME "${NAMESPACE_NAME_CRCL}"
        FILE_NS "${CMAKE_CURRENT_LIST_DIR}/src/OPCUA_CRCL/model/Published/CRCL.NodeSet2.xml"
        TARGET_PREFIX "${NAMESPACE_PREFIX}"
        FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/src/OPCUA_CRCL/model/Published/CRCL.csv"
        FILE_BSD "${CMAKE_CURRENT_LIST_DIR}/src/OPCUA_CRCL/model/Published/CRCL.Types.bsd"
        OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
    # This namespace index must match the order in which you are adding the nodeset in the source code
        NAMESPACE_MAP 2:https://crcl.org
)

add_library(${PROJECT_NAME}
            ${UA_NODESET_CRCL_SOURCES}
            ${UA_TYPES_CRCL_SOURCES}
            #"./src/Communication/samy_robot.c"
            "./src/Plugin/plugin.cpp"
            "./src/Helpers/helpers.cpp"
            )

# Make sure the nodeset compiler is execute before compiling the main file
add_dependencies(${PROJECT_NAME}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME_CRCL}
                 )

target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES} open62541::open62541)

# Build the test robot
include_directories("${PROJECT_SOURCE_DIR}/src/Robot/include")
link_directories("${PROJECT_SOURCE_DIR}/build")
add_executable(test_robot "./src/Robot/main.cpp"
                          "src/Robot/robot.cpp")

target_link_libraries(test_robot SAMYPluginLib.a ${Boost_LIBRARIES} open62541::open62541)
