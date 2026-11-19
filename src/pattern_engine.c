#include "pattern_engine.h"

led_pattern_t pattern_for_status(status_t status)
{
    led_pattern_t pattern = {
        .red = 0,
        .green = 0,
        .blue = 0,
        .pattern = PATTERN_OFF
    };

    switch (status)
    {
        case STATUS_BOOTING:
            pattern.blue = 80;
            pattern.pattern = PATTERN_SLOW_BLINK;
            break;

        case STATUS_READY:
            pattern.green = 80;
            pattern.pattern = PATTERN_SOLID;
            break;

        case STATUS_WARNING:
            pattern.red = 80;
            pattern.green = 60;
            pattern.pattern = PATTERN_SLOW_BLINK;
            break;

        case STATUS_FAULT:
            pattern.red = 100;
            pattern.pattern = PATTERN_FAST_BLINK;
            break;

        case STATUS_OFF:
        default:
            pattern.pattern = PATTERN_OFF;
            break;
    }

    return pattern;
}