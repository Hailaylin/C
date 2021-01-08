/**
 * @file 0905_台阶的走法.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */

/**
 * @brief  	       C语言课程设计	 
题号：0905        题目:台阶的走法        得分：0  
  
作业提交截止时间：2024/10/19 0:00:00	 
 	
题目内容：
   小帅是一个非常阳光的学生，平时走路非常轻快。他上楼时经常一步上2个台阶。
   从1楼到2楼的楼梯有连续的n个台阶，问一下：如果小帅一步走1个台阶或2个台阶，他从1楼到2楼共有多少种走法？

例：
（1）输入：1 输出：1
（2）输入：2 输出：2
（3）输入：10 输出：89
 * 
 */


#include<stdio.h>

int f(int n)
{
    if(n==1||n==2) return n;    //或者1==n || 2==n
    return f(n-2)+f(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}