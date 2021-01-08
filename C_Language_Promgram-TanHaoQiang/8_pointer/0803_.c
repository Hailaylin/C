/**
 * @file 0803_.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-29
 * 
 * @copyright Copyright (c) 2020
 * 	题号：0803        题目:数组中的最小数最大数与其它数对换        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换。
写3个函数：输入10个数；进行处理；输出10个数。
输出时每个数的最小宽度为6。
void input(int *p, int n); //输入十个整数
void max_array(int *p, int n); //将最大的数与最后一个数对换
void min_array(int *p, int n); //将最小的数与第一个数对换
void output(int *p,int n); //输出数组

例：
（1）输入：1 234 43 345 7 5 78 9 0 34
输出： 0 234 43 34 7 5 78 9 1 345
请注意，main()函数必须按如下所示编写：
#include <stdio.h>
#define N 10

int main()
{
void input(int *p, int n); //从键盘上输入n个整数到p所指向的数组
void max_array(int *p, int n); //找到p所指向数组中的最小数与第一个数组元素互换
void min_array(int *p, int n); //找到p所指向数组中的最大数与最后一个数组元素互换
void output(int *p,int n); //输出p所指向的数组中的n个数
int num[N];

input(num,N);
max_array(num,N);
min_array(num,N);
output(num,N);

return 0;
}

 */

#include <stdio.h>
#define N 10

void input(int *p, int n) //从键盘上输入n个整数到p所指向的数组
{
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
}

void max_array(int *p, int n) //找到p所指向数组中的最大数与最后一个数组元素互换
{
    int max=n-1,i,tmp=0;
    for(i=0;i<n;i++){
        if(p[i]>p[max]) max=i;
    }
    if(p[n-1]!=p[max]){
        tmp=p[max];
        p[max]=p[n-1];
        p[n-1]=tmp;
    }
}

void min_array(int *p, int n) //找到p所指向数组中的最小数与第一个数组元素互换
{
    int i,min=0,tmp;
    for(i=0;i<n;i++){
        if(p[i]<p[min]) min=i;
    }
    //if(p[0]!=p[min]){
        tmp=p[0];
        p[0]=p[min];
        p[min]=tmp;
    //}
}
void output(int *p,int n) //输出p所指向的数组中的n个数
{
    int i;
    for(i=0;i<n;i++){
        printf("%6d",p[i]);
    }
    //printf("%6d",p[i]);
}

int main()
{
void input(int *p, int n); //从键盘上输入n个整数到p所指向的数组
void max_array(int *p, int n); //找到p所指向数组中的最小数与第一个数组元素互换
void min_array(int *p, int n); //找到p所指向数组中的最大数与最后一个数组元素互换
void output(int *p,int n); //输出p所指向的数组中的n个数
int num[N];

input(num,N);
max_array(num,N);
min_array(num,N);
output(num,N);

return 0;
}