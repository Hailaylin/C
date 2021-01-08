/*
C语言程序设计	 
题号：L0602        题目:用数组来处理Fibonacci数列问题        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
从键盘上输入n(n<=40并且n>=2)，输出Fibonacci数列的前n项，要求：每行最多输出5个数，每个数输出时最小宽度为12。

例：
（1）输入：33
输出：
*/

#include<stdio.h>
int main()
{
    int fi[40]={1,1},i,n;

    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        fi[i]=fi[i-1]+fi[i-2];
    }

    for(i=1;i<=n;i++)
    {
        if(i%5==0) printf("%12d\n",fi[i-1]);
        else printf("%12d",fi[i-1]);
    }
    return 0;
}