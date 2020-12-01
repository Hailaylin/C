/**
 * @file 0804_位移数.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-30
 * 
 * @copyright Copyright (c) 2020
 * 	       C语言程序设计	 
题号：0804        题目:数据移动m个位置        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
从键盘上输入n(n<50)，再输入n个整数。编写一个函数实现以下功能：使前面各数顺序向后移m个位置，最后m个数变成最前面m个数。见图8.43（291页 第3版265页图8.28）
输出数组时每个元素的最小宽度为6。
例：
（1）输入：
6
1 2 3 4 5 6
3
输出：     4     5     6     1     2     3
（2）输入：
10
1 2 3 4 5 6 7 8 9 0
7
输出：     4     5     6     7     8     9     0     1     2     3

 请注意，main()函数必须按如下所示编写：
int main()
{
    void input(int *p, int n) ;
    void move(int num[], int n, int m);
    void output(int *p,int n);
    int num[N],n,m;
    
    //printf("Please input the number n:");
    scanf("%d",&n);
    
    //printf("Please input %d numbers:\n",n);
    input(num,n);
    
    //printf("Please input the number m:");
    scanf("%d",&m);
    
    move(num,n,m);
    output(num,n);
            
    return 0;
}
 */

#include<stdio.h>
#include<string.h>
#define N 50

void input(int *p, int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
}
void output(int *p,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%6d",*(p+i));
    }
}

void move(int num[], int n, int m){
    
}
int main()
{
    void input(int *p, int n) ;
    void move(int num[], int n, int m);
    void output(int *p,int n);
    int num[N],n,m;
    
    //printf("Please input the number n:");
    scanf("%d",&n);
    
    //printf("Please input %d numbers:\n",n);
    input(num,n);
    
    //printf("Please input the number m:");
    scanf("%d",&m);
    
    move(num,n,m);
    output(num,n);
            
    return 0;
}