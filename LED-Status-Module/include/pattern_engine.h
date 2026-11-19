#ifndef PATTERN_ENGINE_H
#define PATTERN_ENGINE_H

#include <stdint.h>
#include "status_manager.h"

typedef enum
{
    PATTERN_SOLID,
    PATTERN_SLOW_BLINK,
    PATTERN_FAST_BLINK,
    PATTERN_OFF
} pattern_t;

typedef struct
{
    uint8_t red;
    uint8_t green;
    uint8_t blue;
    pattern_t pattern;
} led_pattern_t;

led_pattern_t pattern_for_status(status_t status);

#endif