# 2D Vector Math Library

This repository contains a simple C++ implementation of a 2D vector math library that provides functionalities and operators overload for basic vector operations in 2D space.

## Features

- Operators overloaded (+, -, *, /, +=, -=, *=, /=, and ())
- Addition and subtraction of 2D vectors
- Scalar multiplication and division
- Dot product and Projection calculations
- Vector normalization, magnitude, and reflection calculations

## Prerequisites

To build and use this library, you'll need:

- CMake (version 3.0 or higher)
- C++ compiler supporting C++17 or later

## Build Instructions

Follow these steps to build the static library using CMake:

1. Clone this repository:
    ```git
    git clone https://github.com/GMIVLs/veclib
2. Create a build directory inside the cloned repository:
   ```bash
   mkdir build
   cd build
3. Create the Makefile and required files for build the library
    ```bash
    cmake ..
    make
4. You can use the library named (libvector2d.a) in your work.

for details and information about the methods classes refere to the uml diagram and ([vector.md](https://github.com/GMVLIs/veclib/lib_docs/uml/vector.md), and [vector2d.md](https://github.com/GMVLIs/veclib/lib_docs/uml/vector2d.md) files.

