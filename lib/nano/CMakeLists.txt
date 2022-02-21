# Copyright (c) Microsoft Corporation.
# Licensed under the MIT License.

set(TARGET nano)

add_library(${TARGET} OBJECT
    console.c
    syscalls.c
    sysmem.c
)
