/*
    C_Task_2
    print multiplication table

    要求按照输入的阶数n打印i从1到n的jxi的乘法表(j=0;j<=i;j++)

    输入：n
    运算：
    输出：乘法表

    Written by HailayLin 2020年11月10日11:45:30
*/

#include<stdio.h>
int main()
{
    int n,i,j;
    
    printf("[Multiplication_Table] Please enter table`s edge:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%dx%d=%d\t",j,i,j*i);
        }
        printf("\n");
    }

    printf("[Multiplication_Table] Thank you for your using.");
    return 0;
}