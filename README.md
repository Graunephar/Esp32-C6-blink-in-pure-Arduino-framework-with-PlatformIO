# ESP32-C6-on-board-RGB-LED-example-in-Arduino-and-PlatformIO
ESP32 C6 on-board RGB LED example in Arduino and PlatformIO

This program is a basic example of how to use the on-board LED in Arduino. If you would rather have an example in ESP-IDF, you can find it in [this repo](https://github.com/Graunephar/ESP32-C6-on-board-LED-blink-example-in-ESP-IDF-with-PlatformIO).

I needed a barebones PlatformIO Hello World program for the ESP32-C6 in Arduino. When setting up a new environment, sometimes you just need a simple setup that requires no outside hardware to run so you can test everything before you start developing.

Since I couldn't find anything, I decided to create one for myself. I thought it would be obvious to use the on-board RGB LED since it's already there.

So here it is. The program blinks the built-in LED and changes its color between red, green, and blue.