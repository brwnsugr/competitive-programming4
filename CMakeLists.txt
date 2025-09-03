cmake_minimum_required(VERSION 3.10)
project(competitive-programming4 CXX)

file(GLOB MATH_SOURCES "math/*.cpp")

add_executable(${PROJECT_NAME}
        main.cpp
        test.cpp
        ${MATH_SOURCES}
)

include_directories(math)