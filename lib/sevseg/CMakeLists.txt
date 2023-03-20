add_library(sevseg
        sevseg.h
        sevseg.c)

target_include_directories(sevseg PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(sevseg pico_stdlib)