/*
fb[61] 从1开始
计算一个值储存

*/

#include<stdio.h>
long long fb[61]={0,1,1};
long long f(int x)
{
    if(x==1) return fb[1];
    else if (x==2) return fb[2];
    else 
    {
        ;
    }
}

int main()
{

    printf("%lld",f(10));
}