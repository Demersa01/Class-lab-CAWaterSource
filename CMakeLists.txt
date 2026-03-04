cmake_minimum_required(VERSION 3.10)
project(class_lab)

set(CMAKE_CXX_STANDARD 20)

add_executable(class_lab main.cpp
        watersource.h
        CAReservoir.h
        snowpack.h
        watersource.cpp
        snowpack.cpp
        CAReservoir.cpp)
