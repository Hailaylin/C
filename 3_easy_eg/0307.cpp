/*
��ţ�0307        ��Ŀ:��Բ�ܳ���Բ�����Բ��������Բ�������Բ�����        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/1 0:00:00	 
 	
��Ŀ���ݣ�
�Ӽ���������Բ�뾶r��Բ����h���Զ��ż�����������������Բ�ܳ���Բ�����
Բ��������Բ�������Բ�������Ҫ��������˵����ȡС�����2λ���֡�
���б���������Ϊdouble���ͣ�Բ������ #define PI 3.1415926 �����塣
����
��1�����룺1.5,3  �������������ʾ��
Circumference:9.42,Circular area:7.07
Spherical surface area:28.27,Ball volume:14.14,Cylinder volume:21.21

��2�����룺2.2,3.3  �������������ʾ��
Circumference:13.82,Circular area:15.21
Spherical surface area:60.82,Ball volume:44.60,Cylinder volume:50.18
*/
#include<stdio.h>
#include<math.h>

#define  PI 3.1415926

int main(){
	double Circumference,Circular_area,Spherical_surface_area,Ball_volume,Cylinder_volume;
	double r,h;
	scanf("%lf,%lf",&r,&h);
	Circumference=2*PI*r;
	Circular_area=PI*pow(r,2);
	Spherical_surface_area=4*PI*pow(r,2);
	Ball_volume=4.0/3*PI*pow(r,3);
	Cylinder_volume=h*Circular_area;
	printf("Circumference:%.2lf,Circular area:%.2lf\n",Circumference,Circular_area);
	printf("Spherical surface area:%.2lf,Ball volume:%.2lf,Cylinder volume:%.2lf",Spherical_surface_area,Ball_volume,Cylinder_volume); 
	return 0;
}
