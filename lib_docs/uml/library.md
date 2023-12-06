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
|                                                                                                             |
|
|
|
|
|                                             +-----Library-----+
|                                             |  Libvector2d.a  |
|                                             +-----------------+
|
|
|
|
|
|
|
|
+----------------------------------------------------------------------------------------------------+
```

## Features

### Vector Classes

#### 1. `vector`

- **Description**: This class encapsulates general vector operations and functionalities.
- **Usage**: Provides methods for manipulating vectors, such as addition, subtraction, multiplication, and other common vector operations.

#### 2. `vector2d`

- **Description**: A specific implementation of 2D vectors with additional functionalities.
- **Usage**: Offers methods tailored for 2D vectors, including operations like calculating magnitude, normalization, dot product, and cross product.

#### 3. `immutable::vector2d`

- **Description**: An immutable version of the `vector2d` class, ensuring immutability of vector properties after initialization.
- **Usage**: Allows for creating immutable 2D vectors without modification after instantiation.

### Logging

- **Description**: Includes a logging mechanism to facilitate logging messages within the library.
- **Usage**: Enables users to log messages related to library operations, errors, or debugging information.

## Usage

### Compilation

To link `libvector2d.a` with your project during compilation, use the `-lvector2d` flag and ensure the library's directory is included in the linker search path.

### Example Usage

```cpp
#include <iostream>
#include "vector.h" // Include necessary headers

int main() {
    // Create vectors and perform operations
    // Example code snippet here...
    return 0;
}
