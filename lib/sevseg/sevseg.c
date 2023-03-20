#include "sevseg.h"

void sevseg_init(sevseg_typedef *sevseg)
{
    sevseg->pins_mask = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6] | 1 << sevseg->segPins[7] | 1 << sevseg->digitPins[0] | 1 << sevseg->digitPins[1] | 1 << sevseg->digitPins[2] | 1 << sevseg->digitPins[3]);

    sevseg->digitMap[seg0] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5]);
    sevseg->digitMap[seg1] = (uint32_t)(1 << sevseg->segPins[1] | 1 << sevseg->segPins[2]);
    sevseg->digitMap[seg2] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[seg3] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[seg4] = (uint32_t)(1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[seg5] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[seg6] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[seg7] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[2]);
    sevseg->digitMap[seg8] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[seg9] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segA] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segB] = (uint32_t)(1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segC] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5]);
    sevseg->digitMap[segD] = (uint32_t)(1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segE] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segF] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segG] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segH] = (uint32_t)(1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segI] = (uint32_t)(1 << sevseg->segPins[4] | 1 << sevseg->segPins[5]);
    sevseg->digitMap[segJ] = (uint32_t)(1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3]);
    sevseg->digitMap[segK] = (uint32_t)(1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segL] = (uint32_t)(1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5]);
    sevseg->digitMap[segM] = (uint32_t)0;
    sevseg->digitMap[segN] = (uint32_t)(1 << sevseg->segPins[2] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segO] = (uint32_t)(1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segP] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segQ] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segR] = (uint32_t)(1 << sevseg->segPins[4] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segS] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segT] = (uint32_t)(1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segU] = (uint32_t)(1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5]);
    sevseg->digitMap[segV] = (uint32_t)(1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5]);
    sevseg->digitMap[segW] = (uint32_t)0;
    sevseg->digitMap[segX] = (uint32_t)(1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segY] = (uint32_t)(1 << sevseg->segPins[1] | 1 << sevseg->segPins[2] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[5] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segZ] = (uint32_t)(1 << sevseg->segPins[0] | 1 << sevseg->segPins[1] | 1 << sevseg->segPins[3] | 1 << sevseg->segPins[4] | 1 << sevseg->segPins[6]);
    sevseg->digitMap[segDP] = (uint32_t)(1 << sevseg->segPins[7]);
    sevseg->digitMap[segDash] = (uint32_t)(1 << sevseg->segPins[6]);
    sevseg->digitMap[segUnder] = (uint32_t)(1 << sevseg->segPins[3]);
    sevseg->digitMap[segBlank] = (uint32_t)0;
    sevseg->digitMap[digPos0] = (uint32_t)(1 << sevseg->digitPins[1] | 1 << sevseg->digitPins[2] | 1 << sevseg->digitPins[3]);
    sevseg->digitMap[digPos1] = (uint32_t)(1 << sevseg->digitPins[0] | 1 << sevseg->digitPins[2] | 1 << sevseg->digitPins[3]);
    sevseg->digitMap[digPos2] = (uint32_t)(1 << sevseg->digitPins[0] | 1 << sevseg->digitPins[1] | 1 << sevseg->digitPins[3]);
    sevseg->digitMap[digPos3] = (uint32_t)(1 << sevseg->digitPins[0] | 1 << sevseg->digitPins[1] | 1 << sevseg->digitPins[2]);

    gpio_init_mask(sevseg->pins_mask);
    gpio_set_dir_out_masked(sevseg->pins_mask);

    sevseg->digitCodes[0] = sevseg->digitMap[segDash];
    sevseg->digitCodes[1] = sevseg->digitMap[segDash];
    sevseg->digitCodes[2] = sevseg->digitMap[segDash];
    sevseg->digitCodes[3] = sevseg->digitMap[segDash];
}

void sevseg_refresh(sevseg_typedef *sevseg)
{
    for (uint8_t digitNum = 0; digitNum < 4; digitNum++)
    {
        gpio_put_masked(sevseg->pins_mask, (sevseg->digitCodes[digitNum] | sevseg->digitMap[digitNum + digPos0]));
        sleep_us(100);
    }
}

void sevseg_write_digitSegments(sevseg_typedef *sevseg, uint8_t digitPosition, uint8_t segmentMask)
{
    sevseg->digitCodes[digitPosition] = 0;
    for (uint8_t bitPosition = 0; bitPosition < 8; bitPosition++)
    {
        sevseg->digitCodes[digitPosition] |= (uint32_t)((1 & (segmentMask >> bitPosition)) << sevseg->segPins[bitPosition]);
    }
}

void sevseg_write_segments(sevseg_typedef *sevseg, uint8_t segmentMask[])
{
    for (uint8_t digitPosition = 0; digitPosition < 4; digitPosition++) {
        sevseg->digitCodes[digitPosition] = 0;
        for (uint8_t bitPosition = 0; bitPosition < 8; bitPosition++)
        {
            sevseg->digitCodes[digitPosition] |= (uint32_t)((1 & (segmentMask[digitPosition] >> bitPosition)) << sevseg->segPins[bitPosition]);
        }
    }
}

void sevseg_write_number(sevseg_typedef *sevseg, uint16_t value, uint8_t hex, uint8_t decPlaces)
{
    if(hex) {
        for (uint8_t digitPosition = 0; digitPosition < 4; digitPosition++) {
            sevseg->digitCodes[digitPosition] = sevseg->digitMap[value % 0x10];
            value /= 0x10;

            if(digitPosition == decPlaces) sevseg->digitCodes[digitPosition] |= sevseg->digitMap[segDP];
        }
    }
    else {
        for (uint8_t digitPosition = 0; digitPosition < 4; digitPosition++) {
            sevseg->digitCodes[digitPosition] = sevseg->digitMap[value % 10];
            value /= 10;

            if(digitPosition == decPlaces) sevseg->digitCodes[digitPosition] |= sevseg->digitMap[segDP];
        }
    }
}