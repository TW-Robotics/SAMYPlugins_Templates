#pragma once 

#include <cstdint>

#include <dylib.h>

#include <skillsScriptingAPI.h>

extern "C" {
        void testFunction2( UA_UInt32 const * const param1, UA_UInt32 const * const param2 );
        void testFunction( UA_UInt32 param1, UA_UInt32 param2 );
} 
