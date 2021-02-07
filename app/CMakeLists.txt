cmake_minimum_required(VERSION 3.17)

set("PROJECT_NAME" use-lib)

project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -Wall -Wpedantic -Wextra -Werror -Wconversion -pedantic-errors -Weffc++ -MMD -MP -MF")
set(CMAKE_CXX_STANDARD_LIBRARIES "-static-libgcc -static-libstdc++ -luser32 -lws2_32 ${CMAKE_CXX_STANDARD_LIBRARIES}")
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Bstatic,--whole-archive -lwinpthread -Wl,--no-whole-archive")

include_directories (${LIB_SOURCE_DIR})

add_executable (${PROJECT_NAME} main.cpp
        ${LIB_SOURCE_DIR}/lib.h
        )

target_link_libraries (${PROJECT_NAME} lib )

