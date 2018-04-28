# clang-blueprint

| Build Status |                                                                                |
|--------------|--------------------------------------------------------------------------------|
| Travis       | [![Travis Build Status][travis-build-status-svg]][travis-build-status]         |

Example CMake project that incorporates awesome Clang tooling.

Current status: *Work in progress*.

## Requirements

### Ubuntu 18.04

```bash
$ sudo apt install gcc g++ cmake
```

## Build

```bash
$ cd build
$ cmake
$ make
```

## Run

In the `build` directory:

```
$ ./clang-blueprint
```

<!-- Badges -->
[travis-build-status]: https://travis-ci.org/johnthagen/clang-blueprint
[travis-build-status-svg]: https://travis-ci.org/johnthagen/clang-blueprint.svg?branch=master