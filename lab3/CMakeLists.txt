cmake_minimum_required(VERSION 3.13.4)

project(lab3)

add_subdirectory(./basicMath)

add_executable(myapp main.cpp)

target_link_libraries(myapp basicMath)

install(TARGETS myapp DESTINATION bin)
