cmake_minimum_required(VERSION 3.13.4)

project(animals)

add_executable(animals main.cpp)

install(TARGETS animals DESTINATION bin)