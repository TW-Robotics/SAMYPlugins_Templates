cmake_minimum_required(VERSION 3.0...3.12)
if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

#macro(print_all_variables)
#    message(STATUS "print_all_variables------------------------------------------{")
#    get_cmake_property(_variableNames VARIABLES)
#    foreach (_variableName ${_variableNames})
#        message(STATUS "${_variableName}=${${_variableName}}")
#    endforeach()
#    message(STATUS "print_all_variables------------------------------------------}")
#endmacro()

#set(CMAKE_CXX_STANDARD 17)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
#set(CMAKE_CXX_EXTENSIONS OFF)

project(client VERSION 0.1 LANGUAGES C CXX)
# open62541 v1.2 must be installed!
# If in custom path, then use -DCMAKE_PREFIX_PATH=/home/user/installcmake_minimum_required(VERSION 3.2)
find_package(open62541 1.2 REQUIRED COMPONENTS FullNamespace)

set(CMAKE_C_COMPILER "g++")
set(CMAKE_CXX_COMPILER "g++")


set(GENERATE_OUTPUT_DIR "${CMAKE_BINARY_DIR}/src_generated/")
include_directories("${GENERATE_OUTPUT_DIR}")
file(MAKE_DIRECTORY "${GENERATE_OUTPUT_DIR}")

include_directories("${PROJECT_SOURCE_DIR}")
include_directories("${PROJECT_SOURCE_DIR}/../OPCUA_CRCL/deps")
include_directories("${PROJECT_SOURCE_DIR}/../OPCUA_CRCL/include")
include_directories("${PROJECT_SOURCE_DIR}/../OPCUA_CRCL/include/open62541/plugin")
include_directories("${PROJECT_SOURCE_DIR}/../OPCUA_CRCL/plugins/")



# The generated files are: "namespace_${NAMESPACE_NAME}_... .c/.h"
set(NAMESPACE_NAME "crcl_opcua")
# The compiled namespace is: "${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME}"
set(NAMESPACE_PREFIX "pref")
#add_subdirectory("${PROJECT_SOURCE_DIR}/OPCUA_CRCL")

ua_generate_nodeset_and_datatypes(
        INTERNAL
        NAME "${NAMESPACE_NAME}"
        FILE_NS "${CMAKE_CURRENT_LIST_DIR}/../OPCUA_CRCL/model/Published/CRCL.NodeSet2.xml"
        TARGET_PREFIX "${NAMESPACE_PREFIX}"
        FILE_CSV "${CMAKE_CURRENT_LIST_DIR}/../OPCUA_CRCL/model/Published/CRCL_OPCUA.csv"
        FILE_BSD "${CMAKE_CURRENT_LIST_DIR}/../OPCUA_CRCL/model/Published/CRCL.Types.bsd"
        OUTPUT_DIR "${GENERATE_OUTPUT_DIR}"
    # This namespace index must match the order in which you are adding the nodeset in the source code
        NAMESPACE_MAP 2:https://crcl.org
)

add_executable(${PROJECT_NAME}
               ${UA_NODESET_CRCL_OPCUA_SOURCES}
               ${UA_TYPES_CRCL_OPCUA_SOURCES}
               "client.c")

# Make sure the nodeset compiler is execute before compiling the main file
add_dependencies(${PROJECT_NAME}
                 ${NAMESPACE_PREFIX}-ns-${NAMESPACE_NAME}
                 )

target_link_libraries(${PROJECT_NAME} open62541::open62541 yaml-cpp)
