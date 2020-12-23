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
    //测试double的能否成为判断while循环的数
    double a = 1.11, b = -1.11;
    int flag=4;
    while (flag != 0 && a){
        flag--;
        printf("1. Yes!\n");
    }
    for (flag = 4; flag >= 0 && b ; flag--) printf("2. Yes!\n");
    //实践证明double负数整数都表示非0——真
    return 0;
}