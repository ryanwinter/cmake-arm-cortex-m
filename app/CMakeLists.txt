set(APP cortex_arm_example)

add_executable(${APP} 
    main.c
)

target_link_libraries(${APP}
    nano
)

target_include_directories(${APP} 
    PUBLIC 
        .
)

#target_link_directories(${APP} 
#    PUBLIC 
#)
