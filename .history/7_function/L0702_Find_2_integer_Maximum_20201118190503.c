/*
  C语言程序设计	 
题号：L0702        题目:输入两个整数，输出其中的较大者。        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入两个整数，以逗号间隔，输出其中的较大者。
例：
（1）输入：1,2 输出：max=2
（2）输入：4,4 输出：max=4
（3）输入：6,5 输出：max=6

关键代码如下图所示：
c=max(a,b)
*/
#include<stdio.h>

int max(int x,int y)
{
    /*
    int z;
    z=x>y:
    */
    return (x>y? x:y);
}

int main()
{
    int a,b,c;

    scanf("%d,%d",&a,&b);
    printf("max=%d",c=max(a,b));
    return 0;
}