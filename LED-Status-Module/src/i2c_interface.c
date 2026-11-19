#include "i2c_interface.h"
#include "i2c_protocol.h"

void i2c_init(void)
{
    /* MCU-specific I2C setup will be added later. */
}

void i2c_receive(const uint8_t *data, uint8_t length)
{
    /* Process the complete message received from the I2C master. */
    (void)i2c_process_command(data, length);
}