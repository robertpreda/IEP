cmake_minimum_required(VERSION 3.13.4)

project(camera)

add_executable(camera main.cpp)

install(TARGETS camnera DESTINATION bin)