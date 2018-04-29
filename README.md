# clang-blueprint

| Build Status |                                                                                |
|--------------|--------------------------------------------------------------------------------|
| Travis       | [![Travis Build Status][travis-build-status-svg]][travis-build-status]         |

Example CMake project that incorporates awesome Clang tooling.

Current status: *Work in progress*.

## Requirements

### Ubuntu 18.04

```bash
$ sudo apt install gcc g++ clang cmake
```

## Build

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

In the `build` directory:

```bash
$ ./clang-blueprint
```

<!-- Badges -->
[travis-build-status]: https://travis-ci.org/johnthagen/clang-blueprint
[travis-build-status-svg]: https://travis-ci.org/johnthagen/clang-blueprint.svg?branch=master
