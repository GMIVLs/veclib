# CMakeLists.txt in src directory

# Include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Source files
#set(SOURCES
#    lib/vector.cpp
#    lib/vector2d.cpp
#)
# find all the .cpp file within the src/lib directory
file(GLOB_RECURSE SOURCES src/lib/*.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Create a static library from the source files
add_library(vector2d STATIC ${SOURCES})
target_include_directories(vector2d PUBLIC ${CMAKE_SOURCE_DIR}/include)

# Create the executable and link with the static library
add_executable(Vector main.cpp)
target_link_libraries(Vector PRIVATE vector2d)
