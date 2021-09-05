cmake_minimum_required(VERSION 3.19)
project(Structures)
set(CMAKE_CXX_STANDARD 17)
add_executable(Structures main.cpp scratch/ADT/ADT.cpp scratch/ADT/ADT.h util/ArrayInstance.cpp util/ArrayInstance.h scratch/Matricies/Matrices.cpp scratch/Matricies/Matrices.h STL/STL.h "scratch/LinkedList/LinkedListRaw.cpp" "scratch/LinkedList/LinkedListRaw.h" STL/Containers.h)