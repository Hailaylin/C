/*
题号：0514        题目:用牛顿迭代法求方程的根        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
用牛顿迭代法求方程在1.5附近的根：a*x*x*x+b*x*x+c*x+d=0.
从键盘上输入a,b,c,d，计算x的值。迭代公式如下图所示：

例：
（1）输入：2.0,-4,3,-6  输出：x=2.00
（2）输入：4.0,-1,3,-6.0  输出：x=1.00

#分析 
# math.h
输入 %lf & a,b,c
		
计算  	fxk=a*pow(xk1,3)+b*pow(xk1,2)+c*xk1+d; 
		f_xk=3*a*pow(xk1,2)+2*b*xk1+c;
		xk2=xk1-(fxk)/(f_xk);
输出 %.2f xk2 

*/
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,d,fxk,f_xk,xk1,xk2;
	scanf("%lf,%lf,%lf,%lf",&a,&b,&c,&d);
	xk2=1.5;
	do
	{
		xk1=xk2;
		fxk=a*pow(xk1,3)+b*pow(xk1,2)+c*xk1+d; 
		f_xk=3*a*pow(xk1,2)+2*b*xk1+c;
		xk2=xk1-(fxk)/(f_xk);
	}while(fabs(xk2-xk1)>=1e-5);
	printf("x=%.2f",xk2);
	return 0;
}
