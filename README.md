# ESP8266 NeoPixel Matrix

A 5x5 NeoPixel Matrix project built with ESP8266 and WS2812B LEDs.

## Features

* 5x5 NeoPixel Matrix support
* Serpentine (zig-zag) LED mapping
* Matrix-style animation effect
* Compatible with ESP8266 boards
* Easy to customize and extend

## Hardware

* ESP8266 NodeMCU / Wemos D1 Mini
* WS2812B 5x5 NeoPixel Matrix
* 5V Power Supply
* Jumper Wires

## Wiring

| NeoPixel Matrix | ESP8266    |
| --------------- | ---------- |
| DIN             | GPIO2 (D4) |
| 5V              | 3V3        |
| GND             | GND        |

## Required Library

* Adafruit NeoPixel

Install from Arduino IDE:

Sketch → Include Library → Manage Libraries

Search for:

Adafruit NeoPixel

## Installation

1. Clone the repository

```bash
git clone https://github.com/YOUR_USERNAME/esp8266-neopixel-matrix.git
```

2. Open the `.ino` file in Arduino IDE

3. Select your board:

* NodeMCU 1.0 (ESP-12E Module)
* LOLIN(WEMOS) D1 Mini

4. Upload the sketch

## Matrix Layout

This project uses a 5x5 serpentine layout starting from the top-left corner.

Example:

0 → 1 → 2 → 3 → 4

9 ← 8 ← 7 ← 6 ← 5

10 → 11 → 12 → 13 → 14

19 ← 18 ← 17 ← 16 ← 15

20 → 21 → 22 → 23 → 24

## Future Improvements

* Binary Clock Mode
* Real Time Clock
* NTP Synchronization
* Multiple Animation Modes
* Web Configuration Interface
* Brightness Control

## License

MIT License

## Author

Created by Mehdi using ESP8266 and NeoPixel Matrix.
