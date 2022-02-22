set(TARGET nano)

add_library(${TARGET} OBJECT
    console.c
    syscalls.c
    sysmem.c
)
