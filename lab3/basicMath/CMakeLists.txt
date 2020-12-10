cmake_minimum_required(VERSION 3.13.4)

project(basicMath)

add_library(basicMath STATIC basicMath.cpp)

install(TARGETS basicMath DESTINATION lib)
install(FILES basicMath.h DESTINATION include)
