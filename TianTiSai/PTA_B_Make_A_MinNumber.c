/*
1023 组个最小数 (20分)
给定数字 0-9 各若干个。你可以以任意顺序排列这些数字，但必须全部使用。
、目标是使得最后得到的数尽可能小（注意 0 不能做首位）。
例如：给定两个 0，两个 1，三个 5，一个 8，我们得到的最小的数就是 10015558。

现给定数字，请编写程序输出能够组成的最小的数。

输入格式：
输入在一行中给出 10 个非负整数，顺序表示我们拥有数字 0、数字 1、……数字 9 的个数。
整数间用一个空格分隔。
**10 个数字的总个数不超过 50，且至少拥有 1 个非 0 的数字。**

输出格式：
在一行中输出能够组成的最小的数。

输入样例：
2 2 0 0 0 3 0 0 1 0
输出样例：
10015558

分析：
    N<50
    scanf循环输入，数组num[10]储存
    先输出一个1，再输出0,……从小到大排序输出
    若没有1，就向后延续……2,3etc，只输出一次，flag记录 ?不用
        第一位输出最小数，从1开始
        第二位后从小到大排
            从零开始，num[i]个数，输出num[i]个i,
            存到新数组？int output[]
*/

#include<stdio.h>
#include<string.h>
#define N 50

int main()
{
    int i,j,m,output_flag,itemp_flag;                  //m记录第一个数是啥，然后遇到m就减少输出一个数 ;flag记录下标        output数组下标?不用了，用strcat拼接就行
    int num[10],itemp[N],output[N];
    char temp[N];     //缓存数组，暂时储存n个数的数组形式

    for(i=0;i<10;i++)           //输入
    {
        scanf("%d",&num[i]);
    }
/*
    for(i=0;i<10;i++)           //输入
    {
        printf("%d\t",num[i]);
    }
*/
    for(i=1;i<10;i++)           //输出第一个数
    {
        if(num[i]!=0)
        {
            output[0]=i;
            m=i;
            break;
        }
    }
    //printf("%d",output[0]);

    for(i=0,output_flag=1;i<10;i++)
    {
        if(i==m)
        {
            for(j=0,itemp_flag=0;j<num[i]-1;j++)
            {
                itemp[itemp_flag++]=i;
            }
            for(j=0;j<num[i]-1;j++)
            {
                output[output_flag++]=itemp[j];
            }
        }
        else
        {
            for(j=0,itemp_flag=0;j<num[i];j++)
            {
                itemp[itemp_flag++]=i;
            }
            for(j=0;j<num[i];j++)
            {
                output[output_flag++]=itemp[j];
            }
        }
    }

    for(i=0;i<output_flag;i++)
    {
        printf("%d",output[i]);
    }
    return 0;
}
/*  逻辑要变动
    如果i==m就要少输出一个
    不是就照样输出
    不用字符数组……直接用int也行，不存数
    for(i=0;i<10;i++)           //输出第二个数及以后的数
    {
        if(num[i]!=0)           //判断该数是否只有0个，0个就不输出了
        {
            for(j=0;j<num[i];j++)
            {                   //j是干啥的？j次循环，j个数
                temp[i]=i+48;
                printf("i=%d;temp[]=%s\n",i,temp);
            }
            strcat(output,temp);
        }
    }
*/