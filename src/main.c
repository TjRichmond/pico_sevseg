#include "sevseg.h"

int main()
{
    sevseg_typedef my_sevseg = {
        .segPins = {13, 2, 3, 4, 5, 6, 7, 8},
        .digitPins = {9, 10, 11, 12}};

    stdio_init_all();

    sevseg_init(&my_sevseg);

    sevseg_write_digitSegments(&my_sevseg, 2, (uint8_t)0b10101010);

    uint8_t segMask[4] = {
        0b01010101, 0b01010101, 0b01010101, 0b01010101
    };

    sevseg_write_segments(&my_sevseg,segMask);
    
    while (true)
    {
        sevseg_write_number(&my_sevseg,(uint16_t)0xABCD,1,2);
        sevseg_refresh(&my_sevseg);
    }
}
