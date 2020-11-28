/**
 * @file L1_4.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-28
 * 
 * @copyright Copyright (c) 2020
 * L1-4 调和平均 (10分)
N 个正数的算数平均是这些数的和除以 N，它们的调和平均是它们倒数的算数平均的倒数。本题就请你计算给定的一系列正数的调和平均值。

输入格式：
每个输入包含 1 个测试用例。每个测试用例第 1 行给出正整数 N (≤1000)；第 2 行给出 N 个正数，都在区间 [0.1,100] 内。

输出格式：
在一行中输出给定数列的调和平均值，输出小数点后2位。

输入样例：
8
10 15 12.7 0.3 4 13 1 15.6
输出样例：
1.61
作者
陈越
单位
浙江大学
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB

 */

#include<stdio.h>
int main(){
    int n;
    double num[10000];
    double dao_sum=0,aver=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&num[i]);
        dao_sum=dao_sum+1.0/num[i];
    }
    aver=dao_sum/n;
    printf("%.2f",1.0/aver);
    return 0;
}