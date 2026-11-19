#ifndef I2C_INTERFACE_H
#define I2C_INTERFACE_H

#include <stdint.h>

/* Initializes the MCU I2C peripheral. */
void i2c_init(void);

/* Passes a received I2C message to the protocol handler. */
void i2c_receive(const uint8_t *data, uint8_t length);

#endif