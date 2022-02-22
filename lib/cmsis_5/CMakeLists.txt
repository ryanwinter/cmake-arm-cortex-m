set(TARGET cmsis)

add_library(${TARGET} 
    OBJECT
        Device/ARM/ARMCM4/Source/startup_ARMCM4.c
        Device/ARM/ARMCM4/Source/system_ARMCM4.c
)

target_compile_definitions(${TARGET}
    PRIVATE
        ARMCM4_FP
)

target_include_directories(${TARGET}
    PRIVATE
        CMSIS/Core/Include
        Device/ARM/ARMCM4/Include
)
