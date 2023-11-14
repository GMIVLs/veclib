cmake_minimum_required(VERSION 3.12)
project(VecLib)


# Include directories
include_directories(${CMAKE_SOURCE_DIR}/src/include)

# Set C++ standard

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add subdirectory for the source code
add_subdirectory(src)


