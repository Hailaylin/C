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
    //测试int的能否成为判断while循环的数
    int a = +0; double b = -0;
    int flag=4;
    while (flag != 0 && a){
        flag--;
        printf("1. Yes!\n");
    }
    for (flag = 4; flag >= 0 && b ; flag--) printf("2. Yes!\n");
    //实践证明int负数整数都表示非0——真
    return 0;
}