/*
题号：L0703        题目:输入3个实数，求它们的最大值。        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入3个实数，输出它们的最大值。
例：
（1）输入：1 2 3  输出：max=3.00
（2）输入：2.3 5.6 3.3 输出：max=5.60
（3）输入：9.9 5 2.1  输出：max=9.90
*/
#include<stdio.h>

float max(float x,float y)
{
    return (x>y? x:y);
}

int main()
{
    int num[3],i,m;

    scanf("%f%f%f",&num[0],&num[1],&num[2]);
    for(i=1,m=num[0];i<3;i++)
    {
        if(m<max(m,num[i]))
        {
            m=max(m,num[i]);
        }
    }
    printf("max=%f",m);
}