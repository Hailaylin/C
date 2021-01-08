/**
 * @file L0822_利用指向函数的指针求整数a和b的较大者.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 题号：L0822        题目:利用指向函数的指针求整数a和b的较大者        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
从键盘上输入两个整数，利用指向函数的指针求它们的较大者。
例：
（1）输入：3,5 输出：max=5
 */

#include<stdio.h>

int main()
{
    int a,b;
    int max_p(int a, int b);
    int (*p)(int, int);

    p=max_p;
    scanf("%d,%d",&a,&b);
    printf("max=%d",(*p)(a,b));
    return 0;
}

int max_p(int a,int b)
{
    return a>b?a:b;
}