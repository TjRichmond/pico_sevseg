#ifndef _SEVSEG_H_
#define _SEVSEG_H_

#include <stdint.h>
#include <stdio.h>
#include "pico/stdlib.h"

enum segValue {
    seg0, seg1, seg2, seg3, seg4, seg5,
    seg6, seg7, seg8, seg9, segA, segB,
    segC, segD, segE, segF, segG, segH,
    segI, segJ, segK, segL, segM, segN,
    segO, segP, segQ, segR, segS, segT,
    segU, segV, segW, segX, segY, segZ,
    segDP, segDash, segUnder, segBlank,
    digPos0, digPos1, digPos2, digPos3
};

typedef struct
{
    uint8_t digitPins[4];
    uint8_t segPins[8];
    uint32_t pins_mask;
    uint32_t digitMap[44];
    uint32_t digitCodes[4];
    uint16_t prevCodes[4];
} sevseg_typedef;

void sevseg_init(sevseg_typedef *sevseg);

void sevseg_refresh(sevseg_typedef *sevseg);

void sevseg_write_digitSegments(sevseg_typedef *sevseg, uint8_t digitPosition, uint8_t segmentMask);

void sevseg_write_segments(sevseg_typedef *sevseg, uint8_t segmentMask[]);

void sevseg_write_number(sevseg_typedef *sevseg,  uint16_t value, uint8_t hex, uint8_t decPlaces);

#endif