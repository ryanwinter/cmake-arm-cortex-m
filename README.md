[![CI](https://github.com/ryanwinter/cmake-arm-template/actions/workflows/CI.yml/badge.svg)](https://github.com/ryanwinter/cmake-arm-template/actions/workflows/CI.yml)

# cmake-arm-cortex-m4

An example repository of using CMake with the arm-none-eabi-gcc compiler for an Arm Cortex M4 processor.

# Cloning

This repository includes submodules. When cloning, use the ```--recursive``` flag.
``` 
git clone --recursive https://github.com/ryanwinter/cmake-arm-cortex-m
```

# Building

## Debug

```
cmake --preset debug
cmake --build --preset debug
```

## Release

```
cmake --preset release
cmake --build --preset release
```

## Third party

This repository includes source from the following 3rd parties.

1. [CMSIS 5](https://github.com/ARM-software/CMSIS_5)
