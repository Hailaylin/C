/**
 * @file L0823_输入两个整数，选择运算方式，进行计算.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 	题号：L0823        题目:输入两个整数，选择运算方式，进行计算        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
从键盘上输入两个整数，再选择运算方式1或2，选1时调用max函数，输出较大者；选2时调用min函数，输出较小者。

例：（1）输入：
3,2
1
输出：max=3
（2）输入：
2,3
2
输出：min=2
 */

#include<stdio.h>

int main()
{
    void max_p(int a, int b);
    void min_p(int a, int b);
    void (*p)(int, int);
    int a,b,xuan;

    scanf("%d,%d%d",&a,&b,&xuan);
    if(xuan==1)
         p=max_p;
    else p=min_p;
    (*p)(a,b);
    return 0;
}

void max_p(int a, int b)
{
    printf("max=%d",a>b?a:b);
}

void min_p(int a, int b)
{
    printf("min=%d",a<b?a:b);
}