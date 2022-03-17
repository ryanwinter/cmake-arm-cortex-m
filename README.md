[![Blog](https://img.shields.io/badge/blog-Ryan%20Winter-orange?style=flat-square)](https://ryanwinter.org)

[![CI](https://github.com/ryanwinter/cmake-arm-template/actions/workflows/CI.yml/badge.svg)](https://github.com/ryanwinter/cmake-arm-template/actions/workflows/CI.yml)

# CMake for Arm Cortex-M

An example repository of using CMake with the arm-none-eabi-gcc compiler for an Arm Cortex M4 processor.

## Install the tools

1. Install the required tools, make sure they are in the system path
    1. [Git](https://git-scm.com/downloads)
    1. [CMake](https://cmake.org/download/)
    1. [Ninja](https://github.com/ninja-build/ninja/releases)
    1. [Arm GNU Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm/downloads)
    1. [OpenOCD](https://github.com/openocd-org/openocd/releases)

## Cloning

This repository includes submodules. When cloning, use the ```--recursive``` flag.
``` 
git clone --recursive https://github.com/ryanwinter/cmake-arm-cortex-m
```

## Building with CMake

### Debug

```
cmake --preset debug
cmake --build --preset debug
```

### Release

```
cmake --preset release
cmake --build --preset release
```

## Debugging with VSCode

The repository includes the necessary assets to build, flash and debug the application in VSCode using the [Embeeded Tools extension](https://marketplace.visualstudio.com/items?itemName=ms-vscode.vscode-embedded-tools)

1. Install [VSCode](https://code.visualstudio.com/Download)
1. Open the project folder in VSCode
1. Press `F5` to build, flash and run the project

## Third party

This repository includes source from the following 3rd parties.

1. [CMSIS 5](https://github.com/ARM-software/CMSIS_5)
