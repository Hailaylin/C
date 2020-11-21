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
    
    RandNum=rand()%1000+1;      //rand()产生正整数0~32767的数；对a求余数，余数的值在0~a-1之间
                                //1~a
                                //n~a+n-1
                                //产生[N~M]的数
    //printf("%d\n",rand_num);
    /*
    for(i=0;i<5;i++)
    {
        rand_num=rand()%1000+1;
        printf("%d\n",rand_num);
    }
    */
    do
    {
        printf("[Guess Number Game] Please enter the number you guess:");
        scanf("%d",&GuessNumber);
        if(GuessNumber>RandNum) 
            printf("[Guess Number Game] Your guess number is bigger than RandNum, please enter a smaller number again.");
        if(GuessNumber<RandNum)
            printf("[Guess Number Game] Your guess number is smaller than RandNum, please enter a bigger number again."); 
    }
    while(GuessNumber!=RandNum);

    printf("[Guess Number Game]")
    return 0;
}