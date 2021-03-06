/*
C语言程序设计	 
题号：L0704        题目:求3个实数和的平方根        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入3个实数，用函数计算它们和的平方根，输出时保留两位小数。
例：
（1）输入 1,2,3  输出：2.45
（2）输入 2.3,3.5,6.7  输出：3.54
（3）输入 3,3,3  输出：3.00
*/
#include<stdio.h>
#include<math.h>

float add_sqrt(float a,float b,float c)
{
    return (sqrt(a+b+c));
}

int main()
{
    float a,b,c;
    scanf("%f,%f,%f",&a,&b,&c);
    printf("%.2f",add_sqrt(a,b,c));
    return 0;
}