/**
 * @file M0401_期末考试_判断素数.c
 * @author HailayLin (hailay@qq.com)
 * @brief 写一个判断素数的函数
 * @version 0.1
 * @date 2020-12-28
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrimer(int num){
    int i;
    if (fabs(num)<2) return false;
    for (i=2; i<=sqrt(fabs(num)); i++)
        if (num % i == 0) return false;
    return true;
}

int main(){
    puts("请输入一个要判断的数:");
    int num;
    scanf("%d", &num);
    if (isPrimer(num)) puts("Yes!");
    else puts("No!");
    return 0;
}