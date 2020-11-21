/*
fb[61] 从1开始
存储

*/

#include<stdio.h>

long long f(int x)
{
    long long fb[61]={0,1,1};
    if(x==1) return fb[1];
    else if (x==2) return fb[2];
    else return fb[x]=f(x-1)+f(x-2);
}

int main()
{
    long long fb[61]={0,1,1};
    int i;

    for(i=3;i<61;i++)
    {
        fb[i]=fb[i-1]+fb[i-2];
    }
    printf("%lld",ff[60]);
}