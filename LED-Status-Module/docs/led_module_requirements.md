# LED Status Module Requirements

## Purpose

The module will display submarine system status using a WS2812B LED.

## Communication

The LED module will communicate with the main MCU through UART.

The UART command format is not finalized.

## Initial Commands

- PING
- STATUS 0
- STATUS 1
- STATUS 2
- STATUS 3
- STATUS OFF
- TEST

## Base Tests

1. Confirm the module powers on.
2. Confirm PING receives an OK response.
3. Confirm each STATUS command changes the LED output.
4. Confirm STATUS OFF turns the LED off.
5. Confirm invalid commands produce an error.
6. Confirm TEST activates a test pattern.
7. Confirm the module returns to a known state after reset.

## Hardware Decisions Still Needed

- Main MCU controls the WS2812B directly or separate LED MCU
- MCU board
- UART voltage and baud rate
- LED data pin
- Power supply
- Connector type

## Design Goal

The module should be reusable with different MCU boards and should keep board-specific code separate from the status and command logic.