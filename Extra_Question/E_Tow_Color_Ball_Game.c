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
#include<windows.h>         //使用Sleep(ms)的条件
//生成n个不重复的随机球,随机数范围1~max,存在数组array中
void rand_ball(int n,int max,int array[])
{
    int i,j,z,flag=0,same=0;
    srand((unsigned)time(NULL));
    for(i=0;i<n;i++)    //产生n个随机数并储存
    {
        //有问题，会产生相同的数,不能只比较前后两个数，要比较已经获取的所有数
        do
        {
            z=rand()%max+1;
            for(j=0;j<i;j++)
            {
                if(array[j]==z)
                {
                    break;
                }
            }
        }while(j<i);
        array[i]=z;
    }
}


//qsort排序顺序
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n,i,j;
    int red_ball[6],bule_ball[1];
    scanf("%d",&n);                     //输出n组球

    for(j=0;j<n;j++)
    {
        rand_ball(6,33,red_ball);       //生成6个不重复的随机红球
        qsort(red_ball,6,sizeof(int),cmpfunc);//qsort排序
        for(i=0;i<5;i++)                //输出红球
        {
            printf("%02d,",red_ball[i]);
        }
        printf("%02d:",red_ball[i]);    //输出蓝球
        rand_ball(1,16,bule_ball);      //生产随机蓝球
        printf("%02d\n",bule_ball[0]);  //输出蓝球

        for(i=0;i<6;i++)                //数组清零
        {
            red_ball[i]=0;
        }
        bule_ball[0]=0;

        Sleep(2000);                    //暂停2秒
    }
    return 0;
}