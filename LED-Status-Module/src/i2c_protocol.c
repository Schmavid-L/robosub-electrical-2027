#include "i2c_protocol.h"
#include "status_manager.h"

bool i2c_process_command(const uint8_t *data, uint8_t length)
{
    /* Reject empty or invalid messages. */
    if (data == 0 || length == 0)
        return false;

    switch (data[0])
    {
        /* Set the LED status using the second byte. */
        case I2C_CMD_SET_STATUS:
            if (length < 2)
                return false;

            switch (data[1])
            {
                case I2C_STATUS_BOOTING:
                    status_set(STATUS_BOOTING);
                    return true;

                case I2C_STATUS_READY:
                    status_set(STATUS_READY);
                    return true;

                case I2C_STATUS_WARNING:
                    status_set(STATUS_WARNING);
                    return true;

                case I2C_STATUS_FAULT:
                    status_set(STATUS_FAULT);
                    return true;

                default:
                    return false;
            }

        /* Turn the LED off. */
        case I2C_CMD_LED_OFF:
            status_set(STATUS_OFF);
            return true;

        /* Test behavior will be added with the WS2812B driver. */
        case I2C_CMD_LED_TEST:
            return true;

        /* No response handling has been added yet. */
        case I2C_CMD_PING:
            return true;

        default:
            return false;
    }
}