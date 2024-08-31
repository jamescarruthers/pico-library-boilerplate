cmake_minimum_required(VERSION 3.12)

# Change your executable name to something creative!
set(NAME boilerplate)

include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(${NAME} C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the SDK
pico_sdk_init()

# Add the libraries directory
add_subdirectory(lib)

# Add your source files
add_executable(${NAME}
    src/main.cpp
)

# Don't forget to link the libraries you need!
target_link_libraries(${NAME}
    pico_stdlib
    your_library
)

# create map/bin/hex file etc.
pico_add_extra_outputs(${NAME})

