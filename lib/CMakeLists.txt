cmake_minimum_required(VERSION 3.19)

# This is where the drivers files are located
# This may contain other directories as well such as HAL/Devices etc.
add_subdirectory(drivers)

# This is where the submodule is located added by git as project dependency
add_subdirectory(submodules)
