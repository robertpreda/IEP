cmake_minimum_required(VERSION 3.13.4)

project(figures)

add_executable(figures main.cpp)

install(TARGETS figures DESTINATION bin)