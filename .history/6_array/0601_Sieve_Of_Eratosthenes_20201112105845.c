/*
题号：0601        题目:筛法求素数        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
要求：用筛法求出100以内的素数，输出时每个素数的最小宽度为5。
100以内的素数有：    2    3    5    7   11   13   17   19   23   29   31   37   41   43   47   53   59   61   67   71   73   79   83   89   97
*/

#include<stdio.h>
#define N 101
int main()
{
    int i,era[N]={0};

    for(i=0;i<N;i++)
    {
        era[i]=i;
    }

    for(i=0;i<N;i++)
    {
        if(era[i]!=0) printf("%5d",era[i]);
    }
    return 0;
}