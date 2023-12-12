/*
 * @Author: Yu userszy@163.com
 * @Date: 2023-12-10 11:18:34
 * @LastEditors: Yu userszy@163.com
 * @LastEditTime: 2023-12-10 15:18:38
 * @FilePath: /learngit/test1.c
 * @Description: 
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */
#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = a + b;
    printf("c = a + b the result is :%d\r\n",c);
    return 0;
}

#define inv_riio_sun_ii_data_num        86

typedef struct inv_data
{
    /* data */
    uint16_t inv_device_add;
    uint16_t inv_net_add;
    uint8_t  inv_device_data;
    uint8_t  inv_data_attrebute; 
}inv_data;

inv_data inv_riio_sun_ii_data[inv_riio_sun_ii_data_num] = 
{
    {0x0100, 0x0100, 0x12, 0x21},
    {0x0100, 0x0100, 0x12, 0x21},

}
