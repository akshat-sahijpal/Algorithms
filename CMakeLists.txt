cmake_minimum_required(VERSION 3.19)
project(Structures)

set(CMAKE_CXX_STANDARD 14)

add_executable(Structures main.cpp scratch/ADT/ADT.cpp scratch/ADT/ADT.h util/ArrayInstance.cpp util/ArrayInstance.h)