/*
猜数游戏
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i,n,rand_num;
    time_t t;

    srand((unsigned)time(NULL));//&t
    
    
    for(i=0;i<5;i++)
    {
        rand_num=rand()%1000+1;
        printf("%d\n",rand_num);
    }
    
    return 0;
}