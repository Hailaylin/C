/*
题号：L0716        题目:静态局部变量        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
练习书上例7.16，其中局部变量a的值从键盘上输入。
例：
（1）输入：2
输出：
7
8
9
（2）输入：3
8
9
10
*/

#include<stdio.h>
int main()
{
    int f(int);
    int a,i;
    scanf("%d",&a);
    for(i=0;i<3;i++)
    {
        printf("%d\n",f(a));
    }
    return 0;
}
//这是啥
int f(int a)
{
    auto int b=0;
    static int c=3;

    b++;
    c++;
    return (a+b+c);
}