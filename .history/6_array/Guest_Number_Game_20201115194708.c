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

    srand((unsigned)time(&t));//&t
    
    rand_num=rand()%1000+1;
    
    printf("%d",rand_num);
    return 0;
}