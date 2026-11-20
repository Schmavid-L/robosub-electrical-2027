
Firmware for the WS2812B LED status module used on the RoboSub electrical system.

## Purpose

This module uses a dedicated microcontroller to receive status commands over I2C and display system states through a WS2812B addressable LED.

The module is intended to provide clear visual feedback for:

- System startup
- Ready state
- Warnings
- Faults
- Communication and LED tests

## Current Status

The firmware currently includes:

- Modular C source structure
- I2C interface placeholder
- I2C command parser
- Status manager
- Pattern engine
- WS2812B driver interface
- Firmware notes and test documentation

The MCU-specific register configuration and final LED colors/patterns will be added after the microcontroller and board are finalized.

## System Architecture

Main MCU or Orin Computer
          |
          | I2C
          v
LED Controller MCU
          |
          | WS2812B data
          v
WS2812B Status LED
