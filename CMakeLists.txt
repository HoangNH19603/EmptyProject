cmake_minimum_required(VERSION 3.23)
project(EmptyProject)

set(CMAKE_CXX_STANDARD 23)

add_executable(EmptyProject main.cpp Person.cpp Person.h PrintMethod.cpp PrintMethod.h Manager.cpp Manager.h)
