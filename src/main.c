#include "i2c_interface.h"
#include "status_manager.h"
#include "ws2812_driver.h"

int main(void)
{
    /* Initialize the LED controller hardware. */
    i2c_init();
    ws2812_init();

    /* Start in the booting state. */
    status_set(STATUS_BOOTING);

    while (1)
    {
        /*
         * I2C messages will be received through the
         * MCU-specific interrupt or callback code.
         */

        /* LED pattern timing will be added later. */
    }

    return 0;
}