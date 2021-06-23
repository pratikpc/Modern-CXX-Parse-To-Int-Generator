# CMakeList.txt : CMake project for Modern-C++-Parse-To-Int, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Modern-C++-Parse-To-Int")

set (CMAKE_CXX_STANDARD 20)

# Add source to this project's executable.
add_executable (Modern-C++-Parse-To-Int "Modern-C++-Parse-To-Int.cpp" "Modern-C++-Parse-To-Int.h")

# TODO: Add tests and install targets if needed.
