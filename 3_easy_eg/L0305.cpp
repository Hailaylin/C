/*
题号：L0305        题目:求一元二次方程的根        得分：0  
  
作业提交截止时间：2020/10/25 23:59:00	 
 	
题目内容：
求a*x*x+b*x+c=0方程的根。
要求：
（1）所有变量类型都为double
（2）从键盘上输入a,b,c，以空格或者回车间隔
（3）分行输出方程的两个根（数据最小宽度为8），保留3位小数。
例：
（1） 
输入： 1 3 2
输出： 
x1=   -1.000
x2=   -2.000
*/ 

#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c,delta,x1,x2;
	scanf("%lf%lf%lf",&a,&b,&c);
	delta=pow(b,2)-4*a*c;
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
	printf("x1=%8.3f\n",x1);
	printf("x2=%8.3f",x2);
	return 0;
} 
