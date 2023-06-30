# Java Utilities in C++23

This project is an ambitious effort to bring the power and flexibility of the `java.util` package to the world of C++. We aim to replicate as many of the `java.util` classes in C++23 as possible, providing C++ developers with a set of familiar, robust and efficient utilities.

## Requirements

- C++23 Compiler (GCC, Clang, MSVC)
- CMake (version 3.21 or higher)
- JetBrains' CLion (or any other preferred IDE)

## Structure
```
JavaUtil
├── CMakeLists.txt
├── include
│ ├── java_util
├── src
│ ├── java_util
├── tests
├── docs
├── examples
└── third_party
```

- **include**: Contains all header files grouped in `java_util` subdirectory.
- **src**: Contains source code files, organized in `java_util` subdirectory.
- **tests**: Contains unit tests for each class.
- **docs**: Contains documentation for each class.
- **examples**: Contains sample programs demonstrating the usage of the classes.
- **third_party**: Contains any third-party libraries or dependencies.

## Building

To build the project, you need to have CMake installed on your system. Then, you can follow these steps:

1. Clone this repository.
2. Navigate to the root directory in your terminal.
3. Run `cmake .` to generate the Makefile.
4. Run `make` to compile the code.

## Usage

Include the necessary headers from the `include` directory in your code. Please refer to the documentation in `docs` directory for detailed usage information of each class.

## Contributing

We welcome contributions from the community. If you wish to contribute, please fork the repository, make your changes, and open a pull request.

## License

This project is licensed under the MIT License. See `LICENSE` file for details.