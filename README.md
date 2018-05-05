# clang-blueprint

| Build Status |                                                                                |
|--------------|--------------------------------------------------------------------------------|
| Travis       | [![Travis Build Status][travis-build-status-svg]][travis-build-status]         |

Example CMake project that incorporates awesome Clang tooling.

Current status: *Work in progress*.

## Requirements

### Ubuntu 18.04

```bash
$ sudo apt install gcc g++ clang clang-tidy cmake doxygen graphviz
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

```bash
$ cmake ..
$ make clang-tidy
```

## References

- [Clang](https://clang.llvm.org/) - Compiler Framework
- [CMake](https://cmake.org/) - Cross Platform Build System
- [Catch2](https://github.com/catchorg/Catch2/) - Unit Testing
- [Doxygen](www.doxygen.org/) - Documentation Generation

<!-- Badges -->
[travis-build-status]: https://travis-ci.org/johnthagen/clang-blueprint
[travis-build-status-svg]: https://travis-ci.org/johnthagen/clang-blueprint.svg?branch=master
