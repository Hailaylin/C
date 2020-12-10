/**
 * @file 0813_积分计算sinxcosx.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-10
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：0813        题目:矩形法计算积分        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
从键盘上输入积分的下限a与积分的上限b，利用矩形法计算如图所示的3个积分值。
积分时n的取值为1000，输出时保留2位小数。
例：
（1）输入：0,1 输出：0.46,0.84,1.72
（2）输入：0,2 输出：1.42,0.91,6.38
 */

#include<stdio.h>
#include<math.h>
#define N 1000          //积分区间等分数量
int main()
{
    double a, b;
    double f(double a, double , double n, double (*fun)(double));

    //输入积分区间
    scanf("%lf,%lf", &a, &b);
    
    //输出
    printf("%.2f,%.2f,%.2f", f(a, b, N, sin), f(a, b, N, cos), f(a, b, N, exp));
    return 0;
}

double f(double a, double b, double n, double (*fun)(double))
{
    int i;
    double fx=0, h;
    //计算
    h = fabs(a-b)/n;     //n等分积分区间长度

    for (i=0; i<n; i++)
    {
        fx = fx + (*fun)(a+i*h)*h; //去n等分积分区间长度的中间位置值，累加
    }   //算法:参考《高等数学（下册）》P42 微积分的近似计算，取右端点

    return fx;
}
