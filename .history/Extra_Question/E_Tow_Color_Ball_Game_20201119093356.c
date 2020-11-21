/*
从键盘上输入一个整数n,n属于[1,100]，随机形成n注双色球并输出。
双色球：
备注：红球一共6组，每组从1-33中抽取一个，六个互相不重复；然后蓝球是从1-16中抽取一个数字，整个组成一注双色球。
例：2020-114期一等奖为 01，05，11，24，30，32：03
请做出来的同学11月22号前先给我发信息，该同学的平时成绩会适当加分。
http://c.biancheng.net/view/2043.html C语言随机数生成
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//生成n个不重复的随机球,随机数范围1~max,存在数组array中
void rand_ball(int n,int max,int array[])
{
    int i,j,z;
    srand((unsigned)time(NULL));
    array[0]=(rand()%max+1);
    for(i=0;i<n;i++)
    {
        //有问题，会
        for(j=1;j<=i;j++)
        {
            //srand((unsigned)time(NULL));
            z=(rand()%max+1);
            if(array[i-1]!=z)
            {
                array[i]=z;
            }
        }
    }
}

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n,i,j;
    int red_ball[12],bule_ball[2];
    scanf("%d",&n);

    for(j=0;j<n;j++)
    {
        rand_ball(6,33,red_ball);
        qsort(red_ball,6,sizeof(int),cmpfunc);
        for(i=0;i<5;i++)
        {
            printf("%2d,",red_ball[i]);
        }
        printf("%2d:",red_ball[i]);
        rand_ball(1,16,bule_ball);
        printf("%2d",bule_ball[0]);
        printf("\n");

        for(i=0;i<6;i++)
        {
            red_ball[i]=0;
        }
        bule_ball[0]=0;

        Sleep(1000);
    }
    return 0;
}