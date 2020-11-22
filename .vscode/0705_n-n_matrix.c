/*
	题号：0704        题目:n*n矩阵转置        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入n(0<n<11)，再输入n*n矩阵的元素；按照一定格式输出矩阵；矩阵转置，再输出矩阵。（输出时每个元素的最小宽度为5）
（1）
输入：
2
1 2 3 4
输出：
    1    2
    3    4
Afer transposation:
    1    3
    2    4

（2）
输入：
3
1 2 3 4 5 6 7 8 9
输出：
    1    2    3
    4    5    6
    7    8    9
Afer transposation:
    1    4    7
    2    5    8
    3    6    9
 请注意，main()函数必须按如下所示编写：
int main()
{
    void input(int a[][N],int n);
    void output(int a[][N],int n);
    void convert(int a[][N],int n);
    int a[N][N];
    int n;  
    
    scanf("%d",&n);
    
    input(a,n);
    output(a,n);
    convert(a,n);
    printf("Afer transposation:\n");
    output(a,n);
    
    return 0;
}

请将调试好的程序源代码
（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
*/
#include<stdio.h>
#define N 11
int main()
{
    void input(int a[][N],int n);
    void output(int a[][N],int n);
    void convert(int a[][N],int n);
    int a[N][N];
    int n;  
    
    scanf("%d",&n);
    
    input(a,n);
    output(a,n);
    convert(a,n);
    printf("Afer transposation:\n");
    output(a,n);
    
    return 0;
}

void input(int a[][N],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}

void output(int a[][N],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%5d",a[i][j]);
        }
        printf("\n");
    }
}

void convert(int a[][N],int n)
{
    int i,j;
    int output[N][N];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            output[j][i]=a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            a[i][j]=output[i][j];
        }
    }
}