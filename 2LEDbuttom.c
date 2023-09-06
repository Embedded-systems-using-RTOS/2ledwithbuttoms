#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"

// Define the GPIO pins for the LEDs
#define LED_PIN  27
#define PUSH_BUTTON_PIN  33

void app_main(void)
{
    gpio_set_direction(LED_PIN, GPIO_MODE_OUTPUT);
    gpio_set_direction(PUSH_BUTTON_PIN, GPIO_MODE_INPUT);

    while(1) 
    {       
        if (gpio_get_level(PUSH_BUTTON_PIN) == 1)
        {  
            gpio_set_level(LED_PIN, 1);        
        } 
        else
        {
            gpio_set_level(LED_PIN, 0);        
        }

        vTaskDelay(1);
    }
}
