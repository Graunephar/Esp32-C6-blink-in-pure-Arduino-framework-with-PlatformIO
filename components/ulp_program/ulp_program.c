#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

void app_main(void) {
    // Configure GPIO 8
    gpio_pad_select_gpio(GPIO_NUM_8);
    gpio_set_direction(GPIO_NUM_8, GPIO_MODE_OUTPUT);

    // Blink loop
    while (1) {
        gpio_set_level(GPIO_NUM_8, 1);  // Turn on
        vTaskDelay(pdMS_TO_TICKS(500));
        gpio_set_level(GPIO_NUM_8, 0);  // Turn off
        vTaskDelay(pdMS_TO_TICKS(500));
    }
}