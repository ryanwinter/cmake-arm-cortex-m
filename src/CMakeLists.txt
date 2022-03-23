set(TARGET cortex_arm_example)

add_executable(${TARGET} 
    main.c
)

target_link_libraries(${TARGET}
    cmsis
    specs
)

target_include_directories(${TARGET} 
    PUBLIC 
        .
)

target_link_directories(${TARGET}
    PRIVATE
        .
)

target_link(${TARGET}
    ${CMAKE_CURRENT_LIST_DIR}/link_${CMAKE_C_COMPILER_ID}
)
