/**
 * @file 200601_printf.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-16
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：200601        题目:输入圆半径输出其周长和面积        得分：0  
  
作业提交截止时间：2020/12/28 0:00:00	 
 	
题目内容：
写出解决下列问题的算法（用传统流程图或自然语言描述算法，5分），并编写程序（5分）
输入圆的半径，计算并输出圆的周长和面积，要求输出保留2位小数。
样例：
输入：1
输出：6.28,3.14
 */

#include<stdio.h>
#define PI 3.1415926535
int main()
{
    double r;
    scanf("%lf", &r);
    printf("%.2f,%.2f", 2*PI*r, PI*r*r);
}