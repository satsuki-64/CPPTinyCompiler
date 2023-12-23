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
        ${SRC_ROOT_FILE}/src/kernel/register/v_register.h
        ${SRC_ROOT_FILE}/src/kernel/proc/proc.h
        ${SRC_ROOT_FILE}/src/kernel/instruction/v_instruction_set.h
        
        ${SRC_ROOT_FILE}/src/kernel/proc/alloc_proc.h
        ${SRC_ROOT_FILE}/src/kernel/proc/alloc_proc.cpp
        
        ${SRC_ROOT_FILE}/src/kernel/register/alloc_reg.h
        ${SRC_ROOT_FILE}/src/kernel/register/alloc_reg.cpp
        
        ${SRC_ROOT_FILE}/src/kernel/instruction/instruction_eval.h
        ${SRC_ROOT_FILE}/src/kernel/instruction/instruction_eval.cpp

        ${SRC_ROOT_FILE}/src/kernel/kernel.h

        ${SRC_ROOT_FILE}/src/compiler/Scan.h
        ${SRC_ROOT_FILE}/src/compiler/Scan.cpp

        ${SRC_ROOT_FILE}/src/include/core.h
        ${SRC_ROOT_FILE}/src/EntryPoint.cpp
    )
    message(${SOURCE_FILE})

    
    include_directories(${SRC_ROOT_FILE}/src/kernel/register)
    include_directories(${SRC_ROOT_FILE}/src/kernel/proc)
    include_directories(${SRC_ROOT_FILE}/src/kernel/instruction)

    include_directories(${SRC_ROOT_FILE}/src/kernel)
    include_directories(${SRC_ROOT_FILE}/src/compiler)
    include_directories(${SRC_ROOT_FILE}/src/include)
    

    add_executable(MainTest_cmake ${SOURCE_FILE})