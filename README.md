# 2D Vector Math Library

This repository contains a simple C++ implementation of a 2D vector math library that provides functionalities and operators overload for basic vector operations in 2D space, and documentation files for these library.
------
## Features

- Operators overloaded (+, -, *, /, +=, -=, *=, /=, and ())
- Addition and subtraction of 2D vectors
- Scalar multiplication and division
- Dot product and Projection calculations
- Vector normalization, magnitude, and reflection calculations

## Prerequisites

To build and use this library, you'll need:

- CMake (version 3.20 or higher).
- C++ compiler supporting C++17 or later.
- Doxygen (version 1.9 or higher).
- Google-test Framework.
- Ctest (version 3.20 or higher).
------
## Build Instructions

Follow these steps to build the static library using CMake:

1. Install the c++ compiler if you didn't so, Please refere for your system documentation or your IDE for the instructions and version of your c++ compiler and how use it to compile and build your binary.

2. Install cmake, the package contains ctest, and cpack, please follow this link for download and install the cmake on your system ([cmake](https://gitlab.kitware.com/cmake/cmake)).

3. Install doxygen, which will generate the helps documents,to install the doxygen please following this link ([Doxygen](https://github.com/doxygen/doxygen)).

4. Google Test Framework, the google test framework will fetched with the build and compile of the vector library.

5. Clone this repository:
    ```git

    git clone https://github.com/GMIVLs/veclib

    ```

6. Use the following instruction to build the library:

   6-a: use make help for helping instructions:
   ```
   make help
   ```

   6-b: use make all for build and install and compile the library:
   ```
   make all
   ```

   6-c: use make test to run the google tests on the methods of the library:
   ```
   make test
   ```

   6-d: use make doc to build the doxy files and run lib_docs/html/index.html:
   ```
   make doc
   ```

   6-e: use make clean to clean the built files:
   ```
   make clean
   ```

7. You can use the library named (libvector2d.a) which is installed in the directory build/Release in your work, for details and information about the methods, classes, and operators overload refere to the uml diagram and ( [vector.md](lib_docs/uml/vector.md), and [vector2d.md](lib_docs/uml/vector2d.md) ) files.
