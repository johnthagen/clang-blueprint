# clang-blueprint

| Build Status |                                                                                |
|--------------|--------------------------------------------------------------------------------|
| Travis       | [![Travis Build Status][travis-build-status-svg]][travis-build-status]         |

Example CMake project that incorporates awesome Clang tooling.

Current status: *Work in progress*.

## Requirements

### Ubuntu 18.04

```bash
$ sudo apt install gcc g++ clang clang-tidy cmake cppcheck doxygen graphviz
```

## Build

Use `-DCMAKE_BUILD_TYPE=Release` or `-DCMAKE_BUILD_TYPE=Debug` to specify release or debug builds.

### GCC

```bash
$ cd build
$ cmake ..
$ make
```

### Clang

```bash
$ cd build
$ cmake -DCMAKE_CXX_COMPILER=clang++ ..
$ make
```

## Run

Navigate into the `build` directory.

### Application

```bash
$ ./clang-blueprint
```

### Unit tests

```bash
$ ./unit-test
```

## Build Docs

```bash
$ cd docs
$ doxygen
$ firefox html/index.html
```

## Clang Tools

Navigate into the `build` directory.

### Clang-Tidy

Clang-Tidy is configured using the [`.clang-format`](.clang-format) configuration file. Modify
this file to control which checks should be run and configure parameters for certain checks.

```bash
$ cmake ..
$ make clang-tidy
Scanning dependencies of target clang-tidy
95 warnings generated.
7477 warnings generated.
/home/user/GitHub/clang-blueprint/src/main.cpp:10:28: warning: parameter 'argc' is unused [misc-unused-parameters]
int32_t main(const int32_t argc, const char* argv[]) {
                           ^~~~~
                            /*argc*/
/home/user/GitHub/clang-blueprint/src/main.
...
```

### Clang-Format

Clang-Format is configured using the [.clang-format](.clang-format) configuration file. Modify
this file to control how source files should be formatted.

To demonstrate `clang-format` in action, first modify [src/main.cpp](src/main.cpp) from

```cpp
    return EXIT_SUCCESS;
```

To

```cpp
    return           EXIT_SUCCESS;
```

Next, run `clang-format` on the project.

```bash
$ cmake ..
$ make clang-format
```

main.cpp will be reformatted properly to

```cpp
    return EXIT_SUCCESS;
```

## Cppcheck

To run [Cppcheck](http://cppcheck.sourceforge.net/) on the project

```bash
$ cmake ..
$ make cppcheck
[/home/user/GitHub/clang-blueprint/src/main.cpp:14]: (error) Array 'a[2]' accessed at index 3, which is out of bounds.
...
```

## References

- [Clang](https://clang.llvm.org/) - Compiler Framework
- [CMake](https://cmake.org/) - Cross Platform Build System
- [Catch2](https://github.com/catchorg/Catch2/) - Unit Testing
- [Doxygen](www.doxygen.org/) - Documentation Generation

<!-- Badges -->
[travis-build-status]: https://travis-ci.org/johnthagen/clang-blueprint
[travis-build-status-svg]: https://travis-ci.org/johnthagen/clang-blueprint.svg?branch=master
