/*
 C语言程序设计	 
题号：L0715        题目:局部变量与外部变量同名        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
练习书上的例7.15，其中局部变量a的值从键盘上输入。
理解和掌握局部变量与全局变量的作用域和生存期。
例：
（1）输入：8 输出：max=8
（2）输入：2 输出：max=5

*/
#include<stdio.h>
int a=3,b=5;

int max(int a,int b)
{
    return a>b?a:b;
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("max=%d",max(a,b));
    return 0;
}