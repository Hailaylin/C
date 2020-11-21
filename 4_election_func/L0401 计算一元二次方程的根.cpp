/*题号：L0401        题目:计算一元二次方程的根        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
从键盘上输入一元二次方程的系数：a,b,c
计算并输出方程的根（保留2位小数）。
例：
（1）输入：6,3,1  输出：No real roots.
（2）输入：2,4,1  输出：x1=-0.29,x2=-1.71
（3）输入：1.0,-2,1 输出：x1=1.00,x2=1.00
*/
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,disc,p,q,x1,x2;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	disc=pow(b,2)-4*a*c;
	if (disc<0) printf("No real roots.");
		else{
			p=-b/2.0/a;
			q=sqrt(disc)/2.0/a;
			printf("x1=%.2f,x2=%.2f",p+q,p-q);
		}
	return 0;
}
