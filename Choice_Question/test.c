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
    int t = 0, a;
    int flag;
    while(flag=printf("*"))
    {
    t++;
    a = printf("\nflag=%d,t=%d\n",flag,t);
    if(t<3) break;          //这个限制条件使得循环只执行一次
    }
    printf("%d", a);
    return 0;
}