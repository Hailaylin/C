/*
1030 完美数列 (25分)
给定一个正整数数列，和正整数 p，设这个数列中的最大值是 M，最小值是 m，如果 M≤mp，则称这个数列是完美数列。

现在给定参数 p 和一些正整数，请你从中选择尽可能多的数构成一个完美数列。

输入格式：
输入第一行给出两个正整数 N 和 p，其中 N（≤1e5​ ）
是输入的正整数的个数，p（≤1e9 ）是给定的参数。
第二行给出 N 个正整数，每个数不超过 1e​9
​​ 。

输出格式：
在一行中输出最多可以选择多少个数可以用它们组成一个完美数列。

输入样例：
10 8
2 3 20 4 5 1 6 7 8 9
输出样例：
8

分析：N<1e5 正整数个数，放到数列SeqInput[N]；p <1e9 给定参数；
    第二行循环输入N个正整数;i<N ++
    先对输入的正整数排序，找最小值；
    如果数列最大值M<=m*p;就是完美数列；不满足就退出 if
        然后分别排序找后面愈来愈大的项,，不满足条件就退出
    输出SeqOutput[i]中i+1

    用什么排序方法？学过一个冒泡、选择，
    冒泡排序数组名可以不变
*/

#include<stdio.h>
#define SeqInput_MAX 100000
/*
void swap(int *a,int *b);
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
*/
int main()
{
    int i,j,m,q,n,temp;
    int SeqInput[SeqInput_MAX];

    scanf("%d%d",&n,&q);

    for(i=0;i<n;i++)
    {
        scanf("%d",&SeqInput[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("SeqInput[%d]=%d\t",i,SeqInput[i]);
    }
    printf("n=%d,q=%d\n",n,q);

    for(i=0;i<n-1;i++)        //冒泡排序从小到大排序，先会用
    {
        for(j=0;j<n-i-1;j++)
        {
            if(SeqInput[j]>SeqInput[j+1])
            {
                //swap(&SeqInput[j],&SeqInput[j+1]);
                temp=SeqInput[j];
                SeqInput[j]=SeqInput[j+1];
                SeqInput[j+1]=temp;
                //printf("i=%d,SeqInput[%d]=%d\t",i,j,SeqInput[j]);
            }
        }
        printf("\n");
    }


    for(i=0;i<n;i++)
    {
        printf("SeqInput[%d]=%d\t",i,SeqInput[i]);
    }
    return 0;
}
