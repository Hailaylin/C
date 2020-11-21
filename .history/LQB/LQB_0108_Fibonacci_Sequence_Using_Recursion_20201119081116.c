/*
题号：0108        题目:请用递归函数计算斐波那契数列的第60项        得分：100  
  
作业提交截止时间：2025/10/26 0:00:00	 
 	
题目内容：
请用递归函数计算斐波那契数列的第60项，要求时间不大于1秒种。


fb[61] 从1开始
思路：
    计算一个值储存一个值

*/

#include<stdio.h>
#define N 33000             //unsigned long long最大算到32500项
unsigned long long fb[N]={0,1,1};
/*
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
*/
unsigned long long f(int x)
{
    if(fb[x]!=0) return fb[x];
    fb[x]=f(x-1)

}

int main()
{
    int n;
    printf("请输入要计算的斐波那契数列项数：");
    scanf("%d",&n);
    printf("%llu",f(n));
    return 0;
}