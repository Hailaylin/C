/*
题号：0605        题目:数组逆序存放        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
从键盘上输入n(1<n<11)，再输入n个整数，将它们存放到一个数组中，然后按逆序存放再输出。
输出时各数组元素以空格间隔：输出每个数组元素后再输出一个空格。
例：
（1）输入：
5
1 2 3 4 5  
输出：5 4 3 2 1 
（2）
输入：
6 
1 9 8 7 6 5  
输出：5 6 7 8 9 1 

分析：输入元素个数n;输入数组；逆序输出 


*/

#include<stdio.h>
#define N 12
int main()
{
    int arr[N]={0},arr_ni[N]={0},i,n;

    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=n;i>0;i--)
    {
        arr_ni[i]=arr[n-i];
    }

    for(i=1;i<=n;i++)
    {
        printf("%d ",arr_ni[i]);
        //printf("arr_ni[%d]=%d\t",i,arr_ni[i]);
    }

    return 0;
}