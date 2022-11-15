# Always set the cmake min version.
cmake_minimum_required(VERSION 3.0)

set (PROJECT_VERSION "1.0")
set (LIBRARY_NAME "testFunction2")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})
#set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR})

add_definitions(-w)
# Set the variable PROJ_NAME to whatever your library's name is, PROJECT_VERSION should be a version string like "0.1"
project(Skill_1_project VERSION ${PROJECT_VERSION})

find_package(open62541 1.2 REQUIRED COMPONENTS FullNamespace)

# Create our library target
add_library(${LIBRARY_NAME} SHARED)

include_directories( ${CMAKE_CURRENT_SOURCE_DIR} )
# The following is generated at compile time of the SAMYCore in the root SAMYCore project folder. Allows including all the used headers by the SAMYCore_API, so we can use all the types, etc.
include("../../../SAMYCore_Library_includes.cmake")
include_SAMYCore_Library_headers()


target_sources(${LIBRARY_NAME}
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/Skill_1.cpp
)

# This will name your output .so files "libsomething.1.0" which is pretty useful
set_target_properties(${LIBRARY_NAME}
    PROPERTIES
    PREFIX "lib" # It will add lib as prefix to the library
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION}
)

# Let's set compiler-specific flags
if (${CMAKE_CXX_COMPILER_ID} STREQUAL "GNU")
    # G++
    target_compile_options(${LIBRARY_NAME} PRIVATE -Wall -Wextra)
elseif(${CMAKE_CXX_COMPILER_ID} STREQUAL "MSVC")
    # MSVC
    target_compile_options(${LIBRARY_NAME} PRIVATE /EHsc /MTd /W2 /c)
    # Set the DLLEXPORT variable to export symbols
    target_compile_definitions(${LIBRARY_NAME} PRIVATE WIN_EXPORT)
endif()


target_link_libraries( ${LIBRARY_NAME} "${CMAKE_SOURCE_DIR}/../../../build/SAMYCore_Library.so.2.0")

