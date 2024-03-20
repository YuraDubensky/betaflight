
#pragma once

#include "drivers/display.h"

#include "osd/osd.h"

typedef struct customTargetCoordinates_s {
    uint8_t screenPosX;
    uint8_t screenPosY;
} customTargetCoordinates_t;

typedef struct customTargetFontCoordinates_s {
    uint8_t screenCellPosX;
    uint8_t screenCellPosY;
    uint8_t charOffset;
} customTargetFontCoordinates_t;

typedef struct targetDrawingCoordinates_s {
    customTargetFontCoordinates_t* items;
    uint8_t size;
} targetDrawingCoordinates_t;

targetDrawingCoordinates_t * getTargetDrawingCoordinates(int x, int y);