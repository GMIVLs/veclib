# Define the required cmake version
cmake_minimum_required(VERSION 3.20)

# Project Name and Version
project(Vector2dLib   VERSION 1.0.0
                      DESCRIPTION "Basic Vector Algebra Library Created With C++"
                      LANGUAGES CXX)

# Define the Library Name
set(lib_name vector2d)

# find all the .cpp file within the src/lib directory
file(GLOB SOURCES src/lib/*.cpp)

# Declare the -std=c++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Make the cmake create the json file
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Create a static library from the source files
add_library(${lib_name} STATIC ${SOURCES})

# Specify the .h source director for the library
target_include_directories(${lib_name} PUBLIC ${CMAKE_SOURCE_DIR}/src/include)
