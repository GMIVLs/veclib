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

# Fetch the Google Test Framework, and make it available.
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
  DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Find the required library package
#find_package(GTest REQUIRED)

#enable_testing()  # Enable testing in this directory

# Set the CTest command
include(CTest)

# Define the test executable
add_executable(${name} ${src})

# Set the include directory of the Library Required in Testing
target_include_directories(${name} PUBLIC
  ${include}
  GTest::gtest_main
)

# Link the test executable with necessary libraries or targets
target_link_libraries(${name} PRIVATE GTest::gtest_main)
target_link_libraries(${name} PRIVATE ${lib_path}/libvector2d.a)

# Include the GoogleTest
include(GoogleTest)

# Make the GTest to Discover all the tests in the file
gtest_discover_tests(${name})
