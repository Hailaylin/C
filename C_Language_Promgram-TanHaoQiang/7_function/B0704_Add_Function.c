/*
题号：B0704        题目:两个数相加（函数）        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入两个实数，利用函数add计算它们的和，输出它们的和（保留3位小数）。
例：
（1）输入：1.23,2.22 输出：3.450

关键代码如下图所示：

*/
#include<stdio.h>
float add(float a,float b)
{
    return (a+b);
}
int main()
{
    float a,b,c;
    scanf("%f,%f",&a,&b);
    c=add(a,b);
    printf("%.3f",c);
    return 0;
}