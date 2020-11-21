/*
fb[61] 从1开始
存储

*/

#include<stdio.h>

long long f(int x,long long fb[])
{
    if(x==1) return fb[1];
    else if (x==2) return fb[2];
    else 
    {
        fb[x]=f(x+1)
    }
}

int main()
{
    long long fb[61]={0,1,1};
    printf("%lld",f(60,fb));
}