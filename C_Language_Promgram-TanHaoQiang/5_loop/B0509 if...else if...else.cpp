/*
��ţ�B0509        ��Ŀ:if...else if...else        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/29 0:00:00	 
 	
��Ŀ���ݣ�
�Ӽ���������x,y������z����ʹ��float���ͣ�������ʱ����2λС����
����
��1�����룺1.0,1 �����1.41
��2�����룺1,0 �����1.84
��3�����룺-1,1 �����0.14
*/
/* ��һ�ֽⷨ���ж���� 
	if (x>0&&y>0) 	z=sqrt(x+y);
	if (x>0&&y<=0) 	z=sin(x)+cos(y);
	if (x<=0&&y>0)	z=exp(x-y);
	if (x<=0&&y<=0)	z=fabs(pow(x,y));
*/ 
#include<stdio.h>
#include<math.h>
int main(){
	float x,y,z;
	scanf("%f,%f",&x,&y);
	//�ڶ���д�����ж����
	if (x>0){
		if (y>0) 	z=sqrt(x+y);
		else 		z=sin(x)+cos(y);
	}
	else if (y>0)  	z=exp(x-y);
		else 		z=fabs(pow(x,y));
	printf("%.2f",z);
	return 0;
}
