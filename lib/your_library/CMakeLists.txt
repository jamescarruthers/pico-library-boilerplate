# lib/your_cpp_library/CMakeLists.txt

# Define the library target
add_library(your_library STATIC
    src/your_library.cpp
)

# Specify the include directory for your library
target_include_directories(your_library PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/include
)

# Link with the Pico SDK libraries and include directories
target_link_libraries(your_library pico_stdlib)

# If your library needs access to hardware-specific SDK libraries, link them here as well
# For example, if your library uses I2C:
# target_link_libraries(your_cpp_library pico_stdlib hardware_i2c)
