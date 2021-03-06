/*
题号：0608        题目:寻找二维数组的鞍点        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
从键盘上输入4*5的二维数组的元素，查找这个数组是否有鞍点。
若存在鞍点，则输出鞍点的值及它的行列下标，若没有鞍点则输出 No

二维数组鞍点的定义：存在一个二维数组a[n][m],有一个元素a[i][j],在i行中它是最大的元素，
在j列中它是最小的元素，则认为a[i][j]，关于二维数组中的鞍点的个数的问题，未找到准确的定义，一个二维数组最多只有一个鞍点。

例：
（1）输入：
1 2 3 4 5
2 4 6 8 10
3 6 9 12 15
4 8 12 16 20
输出：a[0][4]=5
（2）输入：
1 2 3 4 11
2 4 6 8 12
3 6 9 10 15
4 8 12 16 7
输出：No
*/
#include<stdio.h>

int main()
{
    int i,j,m,max,min,col,row,flag,fmin;
    int a[4][5];

    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    flag=0;             //flag=0 == 没找到，1找到了
    for(i=0;i<4;i++)
    {
        max=a[i][0];
        row=i;
        col=0;
        for(j=0;j<5;j++)
        {
            if(max<a[i][j])
            {
                max=a[i][j];
                col=j;
            }
        }

        fmin=0;         //标记有没有找到比a[i][col]更大的
        for(m=0;m<4;m++)
        {
            if(max>a[m][col])
            {
                fmin=1;
                break;
            }
        }
        if(fmin==0)
        {
            flag=1;
            break;
        }
    }

    if(flag) printf("a[%d][%d]=%d",row,col,max);
    else printf("No");
    return 0;
}