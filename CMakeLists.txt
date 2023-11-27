cmake_minimum_required(VERSION 3.0)

project(CPPTINYCOMPLIER)

    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall")
    set(SRC_ROOT_FILE ${CMAKE_CURRENT_SOURCE_DIR})
    message("HELLO!")
    message(${SRC_ROOT_FILE})
    message("WORLD!")

    set(EXECUTABLE_OUTPUT_PATH ${SRC_ROOT_FILE})
    set(
        SOURCE_FILE 
        ${SRC_ROOT_FILE}/src/compiler/Scan.h
        ${SRC_ROOT_FILE}/src/compiler/Scan.cpp
        ${SRC_ROOT_FILE}/src/EntryPoint.cpp
    )
    message(${SOURCE_FILE})

    include_directories(${SRC_ROOT_FILE}/src/include)
    include_directories(${SRC_ROOT_FILE}/src/compiler)

    add_executable(MainTest_cmake ${SOURCE_FILE})