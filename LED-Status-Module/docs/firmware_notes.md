# LED Firmware Notes

## Architecture

```text
Main controller
      │
      │ I2C
      ▼
LED-controller MCU
      │
      │ WS2812B data
      ▼
WS2812B LED

Current I2C Commands
0x01 STATUS [VALUE]
0x02 LED OFF
0x03 LED TEST
0x04 PING



Status values:
0x00 BOOTING
0x01 READY
0x02 WARNING
0x03 FAULT


Firmware Modules
i2c_interface       Handles MCU I2C hardware
i2c_protocol        Interprets received commands
status_manager      Stores the current system status
pattern_engine      Converts status into LED patterns
ws2812_driver       Sends data to the LED
main                Initializes and runs the firmware