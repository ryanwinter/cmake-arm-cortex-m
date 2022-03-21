set(TARGET specs)

set(FILES console.c)
if(CMAKE_C_COMPILER_ID STREQUAL "GNU")
    list(APPEND FILES
        syscalls.c
        sysmem.c
    )
endif()

add_library(${TARGET} OBJECT ${FILES})
