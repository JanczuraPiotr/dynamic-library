set("BIN_NAME" use-lib)


include_directories (${LIB_SOURCE_DIR}/..)

add_executable (${BIN_NAME} main.cpp
        ${LIB_SOURCE_DIR}/lib.h
        )

target_link_libraries (${BIN_NAME} lib)