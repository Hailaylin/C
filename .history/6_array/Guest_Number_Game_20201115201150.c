/*
猜数游戏
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i,n,RandNum,GuessNumber;
    time_t t;

    srand((unsigned)time(NULL));//&t
    
    //rand_num=rand()%10+1;
    //printf("%d\n",rand_num);
    /*
    for(i=0;i<5;i++)
    {
        rand_num=rand()%1000+1;
        printf("%d\n",rand_num);
    }
    */
    while(GuessNumber!=RandNum)
    {
        printf("")
        scanf("%d",&GuessNumber);
    }

    return 0;
}