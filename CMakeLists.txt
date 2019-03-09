cmake_minimum_required(VERSION 3.1.0)

project(CF)

file(GLOB SRC "*.cpp")


add_executable(${PROJECT_NAME} ${SRC})