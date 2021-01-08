/**
 * @file 0814_逆序排序.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：0814        题目:逆序排列        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
从键盘上输入正整数n(n<50)，再输入n个整数。
输出原顺序的数据，对它们进行逆序排列，并输出（最小宽度为8）。
void input(int *p, int n);
void output(int *p, int n);
void sort(int *p, int n);

例：
（1）输入：
5
1 2 3 4 5
输出：
       1       2       3       4       5
       5       4       3       2       1
（2）输入：
6
1 2 6 4 7 8
输出：
       1       2       6       4       7       8
       8       7       4       6       2       1

 请注意，main()函数必须按如下所示编写：
int main()
{
    void input(int *p, int n);
    void output(int *p, int n);
    void sort(int *p, int n);  
    int n;
    int num[N];
    
    //printf("Please input the nubers of the data(n):");
    scanf("%d",&n);
    
    input(num,n);
    output(num,n);
    sort(num,n);
    output(num,n);
        
    return 0;
}
 */
#include<stdio.h>
#define N 50

void input(int *p, int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%d",(p+i));
    }
}

void output(int *p, int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%8d",*(p+i));
    }
    printf("\n");
}

void sort(int *p, int n){
    int tmp[N];
    int i,j=n-1;
    for(i=0;i<n;i++){
        *(tmp+j--)=*(p+i);
    }
    for(i=0;i<n;i++){
        *(p+i)=*(tmp+i);
    }
}

int main()
{
    void input(int *p, int n);
    void output(int *p, int n);
    void sort(int *p, int n);  
    int n;
    int num[N];
    
    //printf("Please input the nubers of the data(n):");
    scanf("%d",&n);
    
    input(num,n);
    output(num,n);
    sort(num,n);
    output(num,n);
        
    return 0;
}