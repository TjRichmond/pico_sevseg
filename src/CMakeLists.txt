add_executable(pico_sevseg
        main.c
        )

# pull in common dependencies
target_link_libraries(pico_sevseg pico_stdlib sevseg)

# enable usb output, disable uart output
pico_enable_stdio_usb(pico_sevseg 1)
pico_enable_stdio_uart(pico_sevseg 0)

# create map/bin/hex file etc.
pico_add_extra_outputs(pico_sevseg)