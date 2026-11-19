#ifndef I2C_PROTOCOL_H
#define I2C_PROTOCOL_H

#include <stdbool.h>
#include <stdint.h>

#define LED_I2C_ADDRESS 0x42

typedef enum
{
    I2C_CMD_SET_STATUS = 0x01,
    I2C_CMD_LED_OFF    = 0x02,
    I2C_CMD_LED_TEST   = 0x03,
    I2C_CMD_PING       = 0x04
} i2c_command_t;

typedef enum
{
    I2C_STATUS_BOOTING = 0x00,
    I2C_STATUS_READY   = 0x01,
    I2C_STATUS_WARNING = 0x02,
    I2C_STATUS_FAULT   = 0x03
} i2c_status_code_t;

bool i2c_process_command(const uint8_t *data, uint8_t length);

#endif