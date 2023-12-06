# Static Library

## Overview

The library here, provides functionality for vector math algebra in 2D-space and logging capabilities. It is built from a set of classes designed to handle vectors, specifically `vector`, `vector2d`, `immutable::vector2d`, and a logging mechanism.

```lua
+-------------------------------------------------------------------------------------------------------------+
|                                                                                                             |
|                                                                                                             |
|          +--class--+          +----class----+          +--------class--------+          +--class--+         |
|          | vector  |          |   vector2d  |          | immutable::vector2d |          |   log   |         |
|          +---------+          +-------------+          +---------------------+          +---------+         |
|               |                      |                            |                          |              |
|               |                      |                            |                          |              |
|               |                      |                            |                          |              |
|               +----------------------+----------------------------+--------------------------+              |
|                                                     ||                                                      |
|                                                     ||                                                      |
|                                                     ||                                                      |
|                                             +-----Library-----+                                             |
|                                             |  Libvector2d.a  |                                             |
|                                             +-----------------+                                             |
|                                                                                                             |
|                                                                                                             |
+-------------------------------------------------------------------------------------------------------------+
```

## Features

### Vector Classes

#### 1. `vector`

- **Description**: This class encapsulates general vector methods and operator overload.
- **Usage**: Provides methods for manipulating vectors, such as simple methods setters, getters, display, and insertion operator overload.

#### 2. `vector2d`

- **Description**: A specific implementation of 2D vectors with additional functionalities. This class update the caller object fileds and not make a new object.
- **Usage**: Offers methods tailored for 2D vectors, including methods like finding magnitude, normalization, dot product, rotate, add, substract, multiplication, division, position update, and reflect.

#### 3. `immutable::vector2d`

- **Description**: An immutable version of the `vector2d` class, ensuring immutability of vector properties after initialization.
- **Usage**: Allows for creating immutable 2D vectors without modification it's fileds after instantiation.

#### 4. Logging

- **Description**: Includes a logging mechanism to facilitate logging messages within the library.
- **Usage**: Enables users to log messages related to library operations, errors, or debugging information.

## Usage

### Compilation

To link `libvector2d.a` with your project during compilation, use the `-lvector2d` flag and ensure the library's directory is included in the linker search path. Simply you can run the ('Makefile') in the main directory so you can compile, build, and install the library to the directory **build/Release/lib** and headers files to **build/Release/include**.

### Example Usage

```cpp
#include <iostream>
#include "vector.h"        // Include vector class
#include "vector2d.h"      // Include immutable::vector2d class
#include "vector2d_m.h"    // Include vector2d class
#include "log.h"           // Include Logger class

int main() {
    // initialization of Logger
    Logger LOG;
    LOG(INFO) << "Execution Start";
    // Create vectors and perform operations
    immutable::vector2d<double> v1 {1.0,1.0};
    immutable::vector2d<double> v2 {v1*5.0};
    std::cout << v1.add(v2) << std::endl;
    LOG(WARN) << "Becareful that v1 will not changed";
    // use of vector2d
    vector2d<int> v3 {5,5};
    vector2d<int> v4 {6,6};
    std::cout << v3.dot(v4) << std::endl;
    LOG(INFO) << "Execution End";
    return 0;
}
```

## Dependencies
External dependencies are required for the Gtest library, and the standard C++ library.

## Contributions and Issues
Contributions and bug reports are welcome! Please open an issue or pull request on the repository for any improvements or fixes.

## License
This library is provided under the [MIT License] License. Refer to the LICENSE file for more details.
