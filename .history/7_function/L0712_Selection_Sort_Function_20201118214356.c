/*

 	       C语言程序设计	 
题号：L0712        题目:选择法排序        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入6个整数，用选择法对它们从小到大排序，然后输出排序后的结果。
要求：输入、输出、排序都使用函数完成，例如输入函数 void input(int a[], int n)。输出时各元素用空格间隔（即输出每一个元素的数值后再输出一个空格）。
#define N 6
void input(int a[], int n);
void output(int a[],int n);
void sort(int a[],int n);

例：
（1）输入：6 5 4 3 2 1  输出：1 2 3 4 5 6
（2）输入：4 5 6 4 5 6  输出：4 4 5 5 6 6 
（3）输入：1 2 3 4 5 6  输出：1 2 3 4 5 6
（4）输入：3 2 1 4 5 6  输出：1 2 3 4 5 6
*/

#include<stdio.h>
#define N 6

void input(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
//输出a[]的n个数
void outout(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

//选择排序，输入要排序的数组名a[]和元素个数n
void selection_sort(int a[],int n)
{
    int i,j,max;
    for(i=0;i<n;i++)
    {
        max=a[0];
        for(j=i+1;j<n;j++)
        {

        }
    }
}

void swap(int * a,int * b)
{
    int temp;
    temp=*a;
    *a=*b;
    
}
