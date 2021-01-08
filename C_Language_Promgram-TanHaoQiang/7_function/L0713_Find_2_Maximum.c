/*
       C语言程序设计	 
题号：L0713        题目:查找矩阵中元素的最大值        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
有一个3*4的矩阵，求所有元素中的最大值。
从键盘上输入12个整数，作为矩阵的元素；
然后按一定格式（每个元素最小宽度为5）输出这些元素；查找最大值并输出。

例：（1）输入：1 2 3 4 5 6 7 8 9 10 11 12
输出：
    1    2    3    4
    5    6    7    8
    9   10   11   12
max=12
（2）输入：1 2 333 4 5 66 7 8 98 105 11 12
输出：
    1    2  333    4
    5   66    7    8
   98  105   11   12
max=333

*/
#include<stdio.h>
#define COL 3
#define ROW 4 
int main()
{
    int num[COL][ROW];
    int i,j,max_i=0,max_j=0;

    for(i=0;i<COL;i++)
    {
        for(j=0;j<ROW;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }

    for(i=0;i<COL;i++)
    {
        for(j=0;j<ROW;j++)
        {
            printf("%5d",num[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<COL;i++)
    {
        for(j=0;j<ROW;j++)
        {
            if(num[i][j]>num[max_i][max_j])
            {
                max_i=i;
                max_j=j;
            }
        }
    }

    printf("max=%d",num[max_i][max_j]);
    return 0;
}
