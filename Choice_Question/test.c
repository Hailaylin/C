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
    int t;
    int a=1,b=2,c=2;
    while(a<b<c)
    {
        t=a;
        a=b;
        b=t;//交换a,b值,交换了两次……没有考虑到循环执行到底的情况
        c--;
    }
    printf("%d,%d,%d",a,b,c);
    return 0;
}