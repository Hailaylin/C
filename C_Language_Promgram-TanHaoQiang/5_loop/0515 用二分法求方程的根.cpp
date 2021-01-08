/*
题号：0515        题目:用二分法求方程的根        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
用二分法求方程在（-10，10）之间的根：a*x*x*x+b*x*x+c*x+d=0.
从键盘上输入a,b,c,d，计算x。
例：
（1）输入：2,-4,3,-6  输出：x=2.00
（2）输入：4,-1,3,-6  输出：x=1.00

精度控制有两种方式：
（1）一种是 f(c)的绝对值小于10的-5次方（c为中点）
（2）一种是 |a-b| 小于10的-5次方。
给定精确度ξ,用二分法求函数f(x)零点近似值的步骤如下：
1 确定区间[a,b],验证f(a)·f(b)<0,给定精确度ξ.
2 求区间(a,b)的中点c.
3 计算f(c).

(1) 若f(c)=0,则c就是函数的零点;
(2) 若f(a)·f(c)<0,则令b=c;
(3) 若f(c)·f(b)<0,则令a=c.
(4) 判断是否达到精确度ξ:即若|a-b|<ξ,则得到零点近似值a(或b),否则重复2-4.
*/
#include<stdio.h>
#include<math.h>

#define xi 1e-5 

int main(){
	double fe,ff,fz,a,b,c,d,e,f,z;			//f*函数值；e,f区间；z重点 
	scanf("%lf,%lf,%lf,%lf",&a,&b,&c,&d);	//输入方程 
	
	e=-10;f=10;								//区间赋值 
	
	while(fabs(a-b)>=xi)
	{
		fe=a*pow(e,3)+b*pow(e,2)+c*e+d;
		ff=a*pow(f,3)+b*pow(f,2)+c*f+d;
		z=(e+f)/2;
		fz=a*pow(z,3)+b*pow(z,2)+c*z+d;
		if(fz==0) 
		{
			//printf("x=%.2f",z);
			break;	
		}
		else if (fe*fz<0) f=z;
			else e=z; 
	}
	
	printf("x=%.2f",z);
	return 0;
}
