# minimum version of cmake for this project
cmake_minimum_required(VERSION 3.20)

# The Project Name Setting
project(Vector2dLib
      VERSION 1.0.0
      LANGUAGES CXX
    )

# Set the Binary Name
set(name vector_test)

# Set the files Source
set(src vector_2d_test.cpp)

# Set the header files directory
set(include ${CMAKE_SOURCE_DIR}/../build/Release/include)

# Set path to the required library
set(lib_path ${CMAKE_SOURCE_DIR}/../build/Release/lib)

# Set the Standard Required
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the required library package
find_package(GTest REQUIRED)

enable_testing()  # Enable testing in this directory

# Define the test executable
add_executable(${name} ${src})
target_include_directories(${name} PUBLIC ${include})

# Link the test executable with necessary libraries or targets
target_link_libraries(${name} PRIVATE gtest_main)
target_link_libraries(${name} PRIVATE ${lib_path}/vector2d)

# Add the test
add_test(
  NAME Vector_creation              # Name of the test case
  COMMAND ${name}        # Command to run the test
  WORKING_DIRECTORY ${CMAKE_BINARY_DIR}  # Set the working directory
)
