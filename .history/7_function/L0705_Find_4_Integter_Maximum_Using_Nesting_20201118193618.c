/*
    C语言程序设计	 
题号：L0705        题目:找出4个整数中的最大值        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
输入4个整数，找出其中最大的数，用函数的嵌套调用来实现。
例：
（1）输入：1 2 3 4  输出：max=4
（2）输入：1 6 3 4  输出：max=6
（3）输入：9 2 -3 4  输出：max=9
（4）输入：1 2 33 4  输出：max=33
*/
// 书上例子
#include<stdio.h>
int max4(int a,int b,int c,int d)
{
    int max2(int a,int b);
    int m;
    m=max2(a,b);
    m=max2(m,c);
    m=max2(m,d);
    return m;
}

int max2(int a,int b)
{
    return (a>b? a:b);
}

int main()
{
    int i,num[4];
    for(i=0;i<4;i++)
    {
        scanf("%d",num[i]);
    }
    printf("%d",max4(num[0],num[1],num[2]))
}