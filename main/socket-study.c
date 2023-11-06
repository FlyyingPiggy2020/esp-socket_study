/*
 * Copyright (c) 2023 by Moorgen Tech. Co, Ltd.
 * @FilePath     : socket-study.c
 * @Author       : lxf
 * @Date         : 2023-11-05 17:50:41
 * @LastEditors  : flyyingpiggy2020 154562451@qq.com
 * @LastEditTime : 2023-11-06 14:23:08
 * @Brief        :
 */

/*---------- includes ----------*/

#include "esp_log.h"
#include "esp_netif.h"
#include "freertos/FreeRTOS.h"
#include "lwip/sockets.h"
#include "socket_study_example.h"
#include <stdio.h>
/*---------- macro ----------*/

#define TAG      "app_main"
#define SSID     "4075"
#define PASSWORD "13429395999"
/*---------- type define ----------*/
/*---------- variable prototype ----------*/
/*---------- function prototype ----------*/
/*---------- variable ----------*/
/*---------- function ----------*/

void app_main(void)
{
    ESP_LOGI(TAG, "connect to wifi");
    char *ssid = SSID;
    char *passwd = PASSWORD;
    connect_wifi(ssid, passwd);
}
/*---------- end of file ----------*/