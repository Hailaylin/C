/**
 * @file 0101.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 4-1
2020 年 7 月 1 日是***（敏感字）成立 99 周年纪念日。

***（敏感字）成立于 1921 年 7 月 23 日。

请问从 1921 年 7 月 23 日中午 12 时到 2020 年 7 月 1 日中午 12 时一共包

含多少分钟？
 */

#include<stdio.h>
#define H_min 60 
#define Day_H 24
int main()
{
    int time1, time2;
    
    //思路
    //整年计算一年的分钟数，闰年多加一点
    int year_total_min=365*Day_H*H_min;
    //整年闰年分钟数
    int year_leap_total_min=365*Day_H*H_min;
    //非整年
    //一年是该年的多少天…？手算
    int day_begin_min=(31-23+31*3+30*2)*Day_H*H_min;
    int day_end_min=(3*31+30*2+28)*Day_H*H_min;
    int sum=day_begin_min+day_end_min;

    for(int i=1921;i<2020;i++){
        if(i%4==0&&i%100!=0 || i%400==0){
            sum+=year_leap_total_min;
        }
        else sum+=year_total_min;
    }
    printf("%d",sum);
    return 0;
}