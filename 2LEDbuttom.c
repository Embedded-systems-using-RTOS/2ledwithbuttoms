#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

// Define the GPIO pins for the LEDs
#define LED_PIN  27
#define PUSH_BUTTON_PIN  33

void app_main(void)
{
    // Configure the GPIO pins for the LED and push button
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(PUSH_BUTTON_PIN, GPIO_MODE_INPUT);

    while(1) 
    {
        // Check the state of the push button
        if (gpio_get_level(PUSH_BUTTON_PIN) == 1)
        {  
            // If the push button is pressed (high state), turn on the LED
            gpio_set_level(LED_PIN, 1);        
        } 
        else
        {
            // If the push button is not pressed (low state), turn off the LED
            gpio_set_level(LED_PIN, 0);        
        }

        // Introduce a small delay to prevent rapid toggling
        vTaskDelay(1);
    }
}
