#include <stdio.h>
#include "esp_netif.h"
#include "lwip/sockets.h"
#include "freertos/FreeRTOS.h"
#include "esp_log.h"

#define TAG "app_main"
void app_main(void)
{
    ESP_LOGI(TAG,"hello world.");
}
