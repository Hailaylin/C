/*
Matrix Transposition
题号：L0604        题目:矩阵转置        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
将2*3的矩阵转置成3*2的矩阵。
从键盘上输入矩阵的元素，输出原矩阵；再输出转置后的矩阵。
输出时每个元素的最小宽度为5。
例：
（1）输入：1 2 3 4 5 6
输出：
array a:
    1    2    3
    4    5    6
array b:
    1    4
    2    5
    3    6

（2）输入：1 23 4 54 345 67 878
输出：
array a:
    1   23    4
   54  345   67
array b:
    1   54
   23  345
    4   67

分析：array_1[j][i]=array_0[i][j]
*/
#include<stdio.h>
int main()
{
    int array_a[2][3],array_b[3][2];
    int i,j;

    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array_a[i][j]);
        }
    }

    printf("array a:\n");
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%5d",array_a[i][j]);
        }
        printf("\n");
    }

    printf("array b:\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            array_b[j][i]=array_a[i][j];
        }
    }

    for(j=0;j<3;j++)
    {
        for(i=0;i<2;i++)
        {
            printf("%5d",array_b[j][i]);
        }
        printf("\n");
    }
    return 0;
}