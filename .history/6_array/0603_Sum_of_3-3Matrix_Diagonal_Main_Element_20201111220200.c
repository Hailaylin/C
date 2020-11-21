/*
题号：0603        题目:计算3*3矩阵的主对角线元素之和        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
从键盘上输入3*3矩阵的元素，计算其主对角线上元素之和。
例：
（1）输入：1 2 3 4 5 6 7 8 9   输出：sum=15
（2）输入：33 435 4 76 87 45 75 56 923   输出：sum=1043

分析：
输入：循环一层一维数组列i；二层行j scanf % &
运算：3*3矩阵，就是00,11,22+20,02
输出：sum=%d sum


*/

#include<stdio.h>

#define N 3                     //矩阵大小

int main()
{
    int i,j,sum=0,matrix[N][N];
    
    for(i=0;i<=N-1;i++)
    {
        for(j=0;j<=N-1;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    for(i=0;i<=N-1;i++)
    {
        for(j=0;j<N-1;j++)
        {
            if(matrix[i][i]!=matrix[i][j-i])
            {
                sum = sum+matrix[i][i]+matrix[j-i];
            }
            else sum = sum+matrix[i];
        }
    }

    for(i=0;i<=N-1;i++)
    {
        for(j=0;j<=N-1;j++)
        {
            printf("i=%d\tj=%d\t%d\n",i,j,matrix[i][j]);
        }
    }

    printf("sum=%d",sum);

    return 0;
}