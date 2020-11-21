/*
fb[61] 从1开始
计算一个值储存一个值

*/

#include<stdio.h>
#define N 33000             //unsigned long long最大算到3250
unsigned long long fb[N]={0,1,1};
unsigned long long f(int x)
{
    if (x<=2) return fb[x];
    else if (f(x-1)!=0)
    {
        return fb[x]=fb[x-1]+fb[x-2];
    }
    else 
    {
        return f(x-1)+f(x-2);
    }
}

int main()
{
    int n;
    printf("请输入要计算的斐波那契数列项数：");
    scanf("%d",&n);
    printf("%llu",f(n));
    return 0;
}