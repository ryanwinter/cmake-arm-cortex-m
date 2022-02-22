set(TARGET cortex_arm_example)

add_executable(${TARGET} 
    main.c
)

target_link_libraries(${TARGET}
    cmsis
    nano
)

target_include_directories(${TARGET} 
    PUBLIC 
        .
)

target_link_directories(${TARGET}
    PRIVATE
        .
)

target_linker_script(${TARGET}
    gcc_arm.ld
)
