/**
 * @file 0821_整数排序-指向指针的指针.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-08
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：0821        题目:整数排序（指向指针的指针）        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
用指向指针的指针的方法对n个整数从大到小排序并输出。
输入n(n<20)，再输入n个整数，输出这些数，排序后再输出（每个数的最小宽度为8）。
void input(int *p, int n);
void output(int **p, int n);
void bubbleSort(int **p,int n);
void seleSort(int **p,int n);

例：
（1）输入：
5
1 2 3 4 5
输出：
       1       2       3       4       5
Ordered numbers:
       5       4       3       2       1
 请注意，main()函数必须按如下所示编写：
int main()
{
    void input(int *p, int n);
    void output(int **p, int n);
    void bubbleSort(int **p,int n);
    void seleSort(int **p,int n);
    
    int a[N];
    int n,i;
    int *pa[N];
    
    //printf("Please input number n:");
    scanf("%d",&n);
     
    input(a,n);
    for(i=0; i<N; i++)
    {
        pa[i]=&a[i];    
    }    
    output(pa,n);
    bubbleSort(pa,n);
    //seleSort(pa,n);
        
    printf("Ordered numbers:\n");
    output(pa,n);
    
    return 0;
}
 */
#include<stdio.h>
#define N 20

void input(int *p, int n)
{
    int i;
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
}

void output(int **p, int n)
{
    int i;
    for(i=0;i<n;i++){
        printf("%8d",**(p+i));
    }
    printf("\n");
}

void bubbleSort(int **p,int n)
{
    int i, j;
    int temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(**(p+j)<**(p+j+1)){
                temp=**(p+j+1);
                **(p+j+1)=**(p+j);
                **(p+j)=temp;
            }
        }
    }
}

void seleSort(int **p,int n)
{
    int i, j, max, temp;
    for (i = 0; i<n-1; i++){
        max = i;
        for (j = i+1; j<n; j++){
            if (**(p+max)>**(p+j)){
                max = j;
            }
        }
        if (max != i){
            temp=**(p+max);     //交换的时候小心i写成j……真是思路不清晰
            **(p+max)=**(p+i);
            **(p+i)=temp;
        }
    }
}

int main()
{
    void input(int *p, int n);
    void output(int **p, int n);
    void bubbleSort(int **p,int n);
    void seleSort(int **p,int n);
    
    int a[N];
    int n,i;
    int *pa[N];
    
    //printf("Please input number n:");
    scanf("%d",&n);
     
    input(a,n);
    for(i=0; i<N; i++)
    {
        pa[i]=&a[i];    
    }    
    output(pa,n);
    //bubbleSort(pa,n);
    seleSort(pa,n);
        
    printf("Ordered numbers:\n");
    output(pa,n);
    
    return 0;
}