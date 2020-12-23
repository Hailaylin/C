/**
 * @file test.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-23
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>

int main()
{
    int x, y;
    x=y=0;
    while(x<15)
    y++,x+=++y;
    printf("%d,%d", y, x);
    return 0;
}