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
    else 
    {
        f(x-1)
        return fb[x]=f(x-1)+f(x-2);
    }
}

int main()
{

    printf("%lld",f(60));
}