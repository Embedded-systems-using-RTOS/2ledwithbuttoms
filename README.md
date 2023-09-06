# ESP32 LED Control with Push Button

## Overview

This repository contains a simple example of how to control an LED using a push button on an ESP32 microcontroller. The code is written in C and uses the FreeRTOS real-time operating system for ESP32.

![Demo](demo.gif)

## Table of Contents

- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Code Explanation](#code-explanation)

## Prerequisites

Before you get started, make sure you have the following:

- An ESP32 development board
- ESP-IDF (Espressif IoT Development Framework) set up on your development environment
- A basic understanding of GPIO pins and how to connect components to your ESP32

## Installation

1. Clone this repository to your local machine using `git clone` or by downloading the ZIP file.

2. Open the project in your preferred development environment configured for ESP-IDF.

Build and flash the code to your ESP32 board using the ESP-IDF tools. Make sure to connect your board to your computer via USB and configure the correct serial port.

- idf.py build
- idf.py flash
- idf.py monitor

## Usage

After flashing the code to your ESP32 board, reset the board.

- Connect an LED to the GPIO pin defined as LED_PIN in the code (default is GPIO 27).

- Connect a push button to the GPIO pin defined as PUSH_BUTTON_PIN in the code (default is GPIO 33).

- When you press the push button, the LED should turn on, and when you release it, the LED should turn off.


## Code Explanation

Here's an overview of the code and how it works:

- The code configures two GPIO pins, one for the LED and one for the push button.
- It continuously checks the state of the push button using gpio_get_level.
- If the push button is pressed (high state), the LED is turned on; otherwise, it is turned off.
- A small delay is introduced to prevent rapid toggling of the LED when the button is held down.

## pic without Pushing the Button



## pic with Pushing the Button


