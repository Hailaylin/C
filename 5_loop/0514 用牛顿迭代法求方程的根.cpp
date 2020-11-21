/*
��ţ�0514        ��Ŀ:��ţ�ٵ������󷽳̵ĸ�        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/29 0:00:00	 
 	
��Ŀ���ݣ�
��ţ�ٵ������󷽳���1.5�����ĸ���a*x*x*x+b*x*x+c*x+d=0.
�Ӽ���������a,b,c,d������x��ֵ��������ʽ����ͼ��ʾ��

����
��1�����룺2.0,-4,3,-6  �����x=2.00
��2�����룺4.0,-1,3,-6.0  �����x=1.00

#���� 
# math.h
���� %lf & a,b,c
		
����  	fxk=a*pow(xk1,3)+b*pow(xk1,2)+c*xk1+d; 
		f_xk=3*a*pow(xk1,2)+2*b*xk1+c;
		xk2=xk1-(fxk)/(f_xk);
��� %.2f xk2 

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
