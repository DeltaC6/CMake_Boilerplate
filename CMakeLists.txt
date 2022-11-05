cmake_minimum_required(VERSION 3.19)

project(
    Boilerplate
    VERSION     1.0
    DESCRIPTION "A simple boilerplate for C++ applications using CMake"
    LANGUAGES   CXX C
)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(CTest)

enable_testing()

################################################################################
## LIBRARY TARGET
# This is where all libraries exists including submodules and drivers
# Note library folder have to be included before your executables targets
add_subdirectory(lib)

################################################################################
## EXECUTABLE TARGET
# This is where the main program exists
add_subdirectory(core)

# This is where the test program exists
add_subdirectory(tests)

################################################################################
## DOCUMENTTIONS
add_subdirectory(doc)
################################################################################