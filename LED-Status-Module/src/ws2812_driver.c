#include "ws2812_driver.h"

void ws2812_init(void)
{
    /*
     * Hardware-specific initialization will be added
     * after the MCU is selected.
     */
}

void ws2812_set_color(uint8_t red, uint8_t green, uint8_t blue)
{
    /*
     * Store or transmit color data here later.
     */
    (void)red;
    (void)green;
    (void)blue;
}

void ws2812_show(void)
{
    /*
     * WS2812B timing code will be added here later.
     */
}

void ws2812_clear(void)
{
    ws2812_set_color(0, 0, 0);
    ws2812_show();
}