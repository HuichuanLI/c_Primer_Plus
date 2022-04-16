cmake_minimum_required(VERSION 3.15)
project(pointer)

set(CMAKE_CXX_STANDARD 14)

add_executable(auto_ptr Student.cpp Person.cpp Person.h Student.h inertit.cpp)