/*
题号：0604        题目:往排好序的数组中插入元素        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
有一个已经排好序的数组，元素分别是：1,3,5,7,9，从键盘上输入一个元素，将这个元素插入到数组中，使数组仍保持从小到大排序。
输出时各元素的最小宽度为5。
例：
（1）输入：0  输出：    0    1    3    5    7    9
（2）输入：2  输出：  1    2    3    5    7    9
（3）输入：5  输出：  1    3    5    5    7    9
（4）输入：10  输出：  1    3    5    7    9   10

分析：插入元素，先在数组中插入-1,判断前后几个数的大小，最后去掉-1

*/
#include<stdio.h>
#define N 20
#define A 5
int main()
{
    int arr[N]={1,3,5,7,9},new_arr[N],n,i,m,j;
    int flag=0;

    scanf("%d",&n);

    for(i=0;i<N;i++)
    {
        new_arr[i]=-1;
    }

    for(i=1,m=0;m<A;i+=2)   //判断条件和自增变量不同，挺乱
    {
        new_arr[i]=arr[m++];
    }

    for(j=1;j<=2*A;j+=2,flag++)
    {
        if(n<=new_arr[j]) 
        {
            new_arr[j-1]=n;
            break;
        }
        if(flag==5) new_arr[j+1]=n;
    }

    for(i=0;i<N;i++)
    {
        if(new_arr[i]!=-1) printf("new_arr[%d]=%d",i,new_arr[i]); //new_arr[%d]=
    }

    return 0;
}