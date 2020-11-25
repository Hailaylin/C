/**
 * @file L0810_指针10数排序.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-25
 * 
 * @copyright Copyright (c) 2020
 *
 *        C语言程序设计	 
题号：L0810        题目:对10个整数进行从大到小排序        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入10个整数，按从大到小排序。
（第3版 例8.9）
可利用：#define N 10
输入函数：void input(int *x, int n);
输出函数：void output(int *x, int n);
排序函数：void sort(int *x, int n);
输出时每个元素的最小宽度为5。
例：
（1）输入：1 3 5 4 2 7 6 9 8 10 
输出：   10    9    8    7    6    5    4    3    2    1 
 */

#include<stdio.h>
#define N 10
//输入n个数，输入数组名，+n个数
void input(int *x, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",(x+i));
    }
}

void output(int *x, int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%5d",*(x+i));
    }
}

void sort(int *x, int n)
{
    int i,j,max,temp;
    //选择排序，从大到小
    for(i=0;i<n-1;i++)
    {
        max=i;
        for(j=i+1;j<n;j++)
        {
            if(*(x+j)>*(x+max))
            {
                max=j;
            }
        }
        if(max!=i)
        {
            temp=*(x+max);
            *(x+max)=*(x+i);
            *(x+i)=temp;
        }
    }
}

int main()
{
    void input(int *x, int n);
    void output(int *x, int n);
    void sort(int *x, int n);

    int num[N];
    input(num,N);
    sort(num,N);
    output(num,N);
    return 0;
}