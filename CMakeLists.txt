cmake_minimum_required(VERSION 3.12)
project(Todo_Lists)

#Set c++ standard (eg: c++ 17)
set(CMAKE_CXX_STANDARD 17)

#include header files
include_directories(include)

#create library from cpp files
add_library(todolists src/todolists.cpp)

#create executable todo
add_executable(todo src/main.cpp)

#link todo executable with todolits library
target_link_libraries(todo todolists)