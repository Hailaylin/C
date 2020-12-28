/**
 * @file 8test.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-28
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>
int main()
{  int x[5]={2,4,6,8,10}, *p,**pp;
    p=x;   pp=&p;
    printf("%3d",*(p++)); printf("%3d\n",**pp);
}