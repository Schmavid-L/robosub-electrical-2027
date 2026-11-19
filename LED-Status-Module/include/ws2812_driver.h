#ifndef WS2812_DRIVER_H
#define WS2812_DRIVER_H

#include <stdint.h>

void ws2812_init(void);
void ws2812_set_color(uint8_t red, uint8_t green, uint8_t blue);
void ws2812_show(void);
void ws2812_clear(void);

#endif