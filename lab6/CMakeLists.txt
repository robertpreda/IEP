cmake_minimum_required(VERSION 3.13.4)

project(pizza)

add_executable(pizza main.cpp)

install(TARGETS pizza DESTINATION bin)