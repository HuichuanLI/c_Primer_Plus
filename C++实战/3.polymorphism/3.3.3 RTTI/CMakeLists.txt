cmake_minimum_required(VERSION 3.15)
project(pointer)

set(CMAKE_CXX_STANDARD 14)

add_executable(auto_ptr Person.h Student.cpp Student.h Teacher.cpp Teacher.h main.cpp)