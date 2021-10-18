cmake_minimum_required(VERSION 3.19)
project(Demo)

set(CMAKE_CXX_STANDARD 14)

add_executable(Demo main.cpp sstring.h sstring.cpp)
