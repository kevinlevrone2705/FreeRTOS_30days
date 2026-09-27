#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void hello_task(void *pvParameter)
{
    while (1) {
        printf("Day2: Hello from FreeRTOS running inside Visual Studio Code!\n");
        vTaskDelay(pdMS_TO_TICKS(1000));
    }


}
void app_main(void) {
    xTaskCreate(hello_task, "Hello Task", 2048, NULL, 5, NULL);
}