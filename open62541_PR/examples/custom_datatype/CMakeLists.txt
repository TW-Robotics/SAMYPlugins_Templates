cmake_minimum_required(VERSION 3.0...3.12)
if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(customDataType_server)
# open62541 v1.2 must be installed!
# If in custom path, then use -DCMAKE_PREFIX_PATH=/home/user/installcmake_minimum_required(VERSION 3.2)
find_package(open62541 1.2 REQUIRED COMPONENTS FullNamespace)

#set(CMAKE_C_COMPILER "g++")
#set(CMAKE_CXX_COMPILER "g++")

add_executable(${PROJECT_NAME}
               "server_types_custom.c")

target_link_libraries(${PROJECT_NAME} open62541::open62541)
