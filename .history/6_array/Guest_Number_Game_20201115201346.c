/*
猜数游戏
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i,n,RandNum,GuessNumber;
    //time_t t;
    //make a rand number
    srand((unsigned)time(NULL));//&t
    
    RandNum=rand()%100+1;       //rand
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
        printf("[Guess Number Game] Please enter the number you guess:");
        scanf("%d",&GuessNumber);
    }

    return 0;
}