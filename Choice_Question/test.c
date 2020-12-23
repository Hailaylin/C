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
    t=0;
    int flag;
    while(flag=printf("*"))
    {
    t++;
    if(t<3) break;
    }
    printf("\nflag=%d,t=%d\n",flag,t);
    return 0;
}