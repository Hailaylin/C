/*
       C语言程序设计	 
题号：0711        题目:起泡法排序        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入6个实数，对它们进行从小到大排序（起泡法）。
输出时每个实数保留2位小数，输出每个实数后再输出一个空格来进行间隔。
输入函数可用：void intput(float a[], int n);
输出函数可用：void output(float a[], int n);
排序函数可用：void bubble(float a[], int n);

例：
（1）输入：1.1 2.2 3.3 4.4 5.5 6.6  输出：1.10 2.20 3.30 4.40 5.50 6.60
（2）输入：1 3 5 2 8 6  输出：1.00 2.00 3.00 5.00 6.00 8.00
（3）输入：6.6 5 4 3 2 1 输出：1.00 2.00 3.00 4.00 5.00 6.60
 请注意，main()函数必须按如下所示编写：
int main()
{
    void input(float a[],int n);
    void output(float  a[],int n);
    void bubbleSort(float  a[],int n); //冒泡法排序
    
    float a[N];
        
    input(a,N);
    bubbleSort(a,N);
    output(a,N); 
    
    return 0;
}

*/

#include<stdio.h>
#define N 6
int main()
{
    void input(float a[],int n);
    void output(float  a[],int n);
    void bubbleSort(float  a[],int n); //冒泡法排序
    
    float a[N];
        
    input(a,N);
    bubbleSort(a,N);
    output(a,N); 
    
    return 0;
}

void input(float a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
}

void output(float  a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%.2f ",a[i]);
    }
}

void bubbleSort(float  a[],int n)
{
    int i,j;
    float temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;i<n-i-1;i++)
        {
            if(a[j]>a[j+1]) //前一个数大于后一个数就交换
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}