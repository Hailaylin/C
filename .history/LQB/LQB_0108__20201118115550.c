/*
fb[61] 从1开始
计算一个值储存一个值

*/

#include<stdio.h>
long long fb[61]={0,1,1};
long long f(int x)
{
    if(x==1) return 1;
    else if (x==2) return 1;
    else if (f(x-1)!=0)
    {
        return fb[x]=f
    }
}

int main()
{

    printf("%lld",f(40));
}