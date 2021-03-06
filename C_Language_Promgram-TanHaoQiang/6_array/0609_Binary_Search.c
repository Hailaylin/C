/*
题号：0609        题目:折半查找法        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
#define N 15
int a[N]={1,2,3,4,5,6,7,8,9,11,12,13,16,19,21};
已经有15个数按由小到大的顺序存放在一数组中，输入一个数，用折半查找法找出该数是数组中的第几个元素，如果该数不在数组中，则输出：No
例：
（1）输入：1 输出：num=1
（2）输入：21 输出：num=15
（3）输入：10 输出：No
（4）输入：18 输出：No
（5）输入：0  输出：No
（6）输入：30 输出：No


*/

#include<stdio.h>
#define N 15
int main()
{
    int a[N]={1,2,3,4,5,6,7,8,9,11,12,13,16,19,21};
    int x,b,t,m,flag;

    scanf("%d",&x);

    b=0;
    t=N;
    flag=0;

    if(x>21) b=t+1;
    while (b<=t)
    {
        m=(b+t)/2;
        if (x==a[m]) 
        {
            flag=1;
            break;
        }
        else if(x>a[m])
        {
            b=m+1;
        }
        else 
        {
            t=m-1;
        }
    }
    
    if(flag) printf("num=%d",m+1);
    else printf("No");
    return 0;
}