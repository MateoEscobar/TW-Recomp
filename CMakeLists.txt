cmake_minimum_required(VERSION 3.21)

project(TW-Recomp C CXX)

# 64-bit only — Warriors uses 64-bit pointers throughout; a 32-bit configure
# dies at link with missing OpenGL symbols, which reads as a library issue
# rather than the real cause (wrong arch).
if(CMAKE_SIZEOF_VOID_P AND NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR
        "TW-Recomp requires a 64-bit toolchain; this one targets ${CMAKE_SIZEOF_VOID_P}-byte pointers.\n"
        "  Windows: configure from the \"x64 Native Tools Command Prompt for VS\"\n"
        "           (not the plain \"Developer Command Prompt\", which defaults to x86).\n"
        "  Visual Studio generator: pass -A x64.")
endif()

# Pin MSVC C runtime for the whole tree so all targets use the same runtime.
# Without this, third-party submodules that default to /MT mix with /MD targets
# and lld-link refuses the mismatch.
if(MSVC OR CMAKE_CXX_COMPILER_FRONTEND_VARIANT STREQUAL "MSVC")
    cmake_policy(SET CMP0091 NEW)
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>DLL"
        CACHE STRING "C runtime for every target")
endif()

# Parallel compile in Visual Studio generator (avoids sequential unity builds).
if(CMAKE_GENERATOR MATCHES "Visual Studio")
    add_compile_options(/MP)
endif()

# Default to Release — an empty CMAKE_BUILD_TYPE compiles at -O0 and the
# recompiled game runs too slowly to be playable.
if(NOT CMAKE_BUILD_TYPE AND NOT CMAKE_CONFIGURATION_TYPES)
    set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(WIN32)
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS _CRT_NONSTDC_NO_WARNINGS)
endif()

# ---- Subcomponents ----
# Guards check for the actual CMakeLists.txt so cmake -B build succeeds even
# when a component directory is still a placeholder (before TWR-8 adds them).

option(TW_BUILD_RECOMP   "Build ps2xRecomp"   ON)
option(TW_BUILD_RUNTIME  "Build ps2xRuntime"  ON)
option(TW_BUILD_ANALYZER "Build ps2xAnalyzer" ON)

if(TW_BUILD_RECOMP AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/ps2xRecomp/CMakeLists.txt")
    add_subdirectory("ps2xRecomp")
endif()

if(TW_BUILD_RUNTIME AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/ps2xRuntime/CMakeLists.txt")
    add_subdirectory("ps2xRuntime")
endif()

if(TW_BUILD_ANALYZER AND EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/ps2xAnalyzer/CMakeLists.txt")
    add_subdirectory("ps2xAnalyzer")
endif()
