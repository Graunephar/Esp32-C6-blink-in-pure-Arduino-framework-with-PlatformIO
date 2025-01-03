# ESP32-C6-on-board-RGB-LED-example-in-Arduino-and-PlatformIO


This program is a basic example of how to use the on-board LED in pure Arduino. If you would like an overview of the different options on the ESP32-C6 I have an overview of my different example repositpries on (a GitHub Gist that can be found on this link.)[https://gist.github.com/Graunephar/57a9882cb3a2ab98be8d63a59ab16ef3]

I needed a barebones PlatformIO Hello World program for the ESP32-C6 in Arduino. When setting up a new environment, sometimes you just need a simple setup that requires no outside hardware to run so you can test everything before you start developing.

Since I couldn't find anything, I decided to create one for myself. I thought it would be obvious to use the on-board RGB LED since it's already there.

So here it is. The program blinks the built-in LED and changes its color between red, green, and blue.

## Two Ways to Run Arduino on ESP32-C6

Arduino can be used in two distinct ways on the ESP32-C6, which is essential to understand for choosing the right approach for your needs.

### 1. **Arduino as a Component in ESP-IDF**
Here  Arduino is integrated as a component in an ESP-IDF project. In this setup:
- ESP-IDF handles the build process, and Arduino’s functions (`setup()` and `loop()`) are incorporated into the broader ESP-IDF environment.
- You gain access to both Arduino APIs and advanced ESP-IDF features, such as ultra-low-power operations, precise hardware configurations, and custom peripheral management.

- **Use Case**: Suitable for advanced applications requiring both Arduino’s simplicity and ESP-IDF’s advanced hardware features.

If you would rather do this I have an example of how to do it (in the repo here)[]

### 2. **Pure Arduino Framework**
In this approach, Arduino is used as the sole framework. It’s typically run using the Arduino IDE or PlatformIO in Arduino-only mode. This is the standard way of running Arduino and focuses exclusively on its libraries and APIs. 

- **Use Case**: Ideal for simpler applications or when you don’t need advanced control over the ESP32-C6 hardware.
- **Features**: Limited to Arduino's functionality without access to ESP-IDF-specific features like ULP or FreeRTOS configurations.

This project demonstrates the second approach,


