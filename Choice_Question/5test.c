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
    int a=5, *p1, **p2;
    p1=&a;
    p2=&p1;
    printf("a=%d, p1=%x, *p1=%d, p2=%x, *p2=%x, **p2=%d\n", a, p1, *p1, p2, *p2, **p2);
    return 0;
}