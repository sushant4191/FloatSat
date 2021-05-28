
/** READ THIS!!!! **/
/** To compute this value please use tutorials/development-tests/cpuspeedtest.cpp  and core/yieldtime.cpp**/

#include "rodos.h"
namespace RODOS {
bool        getIsHostBigEndian()         { return isHostBigEndian; }
int32_t        getSpeedKiloLoopsPerSecond() { return 350000; }   // see rodos-tutorials/development-tests/cpuspeedtest.cpp
int32_t        getMaxIdleCntPerSecond()     { return 2766194; }  // see rodos-tutorials/development-tests/cpuspeedtest.cpp
int32_t        getYieldTimeOverhead()       { return 990; }      // see tutorials/core/yieldtime.cpp
const char* getHostCpuArch()             { return "x86"; }
const char* getHostBasisOS()             { return "posix"; }
} // namespace RODOS
