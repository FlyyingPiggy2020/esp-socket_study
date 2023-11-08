/*
 * Copyright (c) 2023 by Moorgen Tech. Co, Ltd.
 * @FilePath     : _tcp_client.c
 * @Author       : lxf
 * @Date         : 2023-11-06 17:00:57
 * @LastEditors  : flyyingpiggy2020 154562451@qq.com
 * @LastEditTime : 2023-11-08 10:55:16
 * @Brief        : tcp client
 */

/*---------- includes ----------*/

#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "netinet/in.h"
#include "sys/socket.h"
/*---------- macro ----------*/

#define TAG "tcp_client"
/*---------- type define ----------*/
/*---------- variable prototype ----------*/
/*---------- function prototype ----------*/
/*---------- variable ----------*/

TaskHandle_t tcp_client_task_handle;
/*---------- function ----------*/
void _tcp_client(void *p)
{
    ESP_LOGI(TAG, "tcp client start");
    while (1) {
        /* code */
        vTaskDelay(1);
    }
}
void _tcp_client_init(void)
{
    xTaskCreate(_tcp_client, "tcp_client", 2048, NULL, 10, &tcp_client_task_handle);
}
