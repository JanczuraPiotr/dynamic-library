cmake_minimum_required(VERSION 3.17)
project(dynamic_library)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY	${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY	${PROJECT_SOURCE_DIR}/bin)
set(LIB_SOURCE_DIR					${PROJECT_SOURCE_DIR}/lib)

add_subdirectory(app)
