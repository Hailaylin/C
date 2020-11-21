/*
       C语言程序设计	 
题号：L0709        题目:求n个数的最大值及它的位置        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入n(0<n<=10)，再输入n个整数，输出其中值最大的元素及它是第几个数。
例如：
例：
（1）输入：
5
1 2 3 4 5
输出：max=5,loc=5
（2）输入：
3
1 7 5
输出：max=7,loc=2
（3）输入：
7
11 12 13 39 15 16 17
输出：max=39,loc=4


分析:书p190 按照书上的方法敲，用函数
*/
#include<stdio.h>
#define N 10

int max(int a,int b)
{
    return (a>b?a:b);
}
int main()
{
    int n,m,i,loc;
    int num[N];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",num[N]);
    }

    m=num[0];
    for(i=1;i<n;i++)
    {
        if(m<max(m,num[i]))     //如果两个数最大的那个数比之前标记的最大数要大，就记录最大数
        {
            m=max(m,num[i]);    //把两者最大数给m
            n=i;                //n标记当前角标
        }
    }

    printf("max=%d,loc=%d",m,n+1);
}