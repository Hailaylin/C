/**
 * @file 0712_用牛顿迭代法求根.c
 * @author @Hailaylin (hailay@qq.com)
 * @brief 
 *      不是很想写，抄了一点0514计算
 * @version 0.1
 * @date 2020-11-24
 * 
 * @copyright Copyright (c) 2020
 * 
 * 	       C语言程序设计	 
题号：0712        题目:用牛顿迭代法求方程的根        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
用牛顿迭代法求方程的根：a*x*x*x+b*x*x+c*x+d=0
从键盘上输入a,b,c,d，根输出时保留2位小数。
例：
（1）输入：1,2,3,4 输出：x=-1.65
（2）输入：1,1,1,1 输出：x=-1.00
（3）输入：1,-2,1,0 输入：x=1.00
 请注意，main()函数必须按如下所示编写：
int main()
{
    float newton(float a,float b,float c,float d);      //牛顿迭代法求根
    float a,b,c,d,x;     

    scanf("%f,%f,%f,%f",&a,&b,&c,&d);
    x=newton(a,b,c,d);

    printf("x=%.2f\n",x);    
    return 0;
}


请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
 */
#include<stdio.h>
#include<math.h>
//a*x*x*x+b*x*x+c*x+d=0
float newton(float a,float b,float c,float d)
{
    float xk1,xk2,fxk,f_xk;
	xk2=1.5;
	do
	{
		xk1=xk2;
		fxk=a*pow(xk1,3)+b*pow(xk1,2)+c*xk1+d; 
		f_xk=3*a*pow(xk1,2)+2*b*xk1+c;
		xk2=xk1-(fxk)/(f_xk);
	}while(fabs(xk2-xk1)>=1e-5);
    return xk2;
}

int main()
{
    float newton(float a,float b,float c,float d);      //牛顿迭代法求根
    float a,b,c,d,x;     

    scanf("%f,%f,%f,%f",&a,&b,&c,&d);
    x=newton(a,b,c,d);

    printf("x=%.2f\n",x);    
    return 0;
}