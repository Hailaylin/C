/*
题号：0307        题目:求圆周长、圆面积、圆球表面积、圆球体积与圆柱体积        得分：0  
  
作业提交截止时间：2020/11/1 0:00:00	 
 	
题目内容：
从键盘上输入圆半径r和圆柱高h（以逗号间隔），计算与输出求圆周长、圆面积、
圆球表面积、圆球体积与圆柱体积。要求有文字说明，取小数点后2位数字。
所有变量均定义为double类型，圆周率用 #define PI 3.1415926 来定义。
例：
（1）输入：1.5,3  输出如下两行所示：
Circumference:9.42,Circular area:7.07
Spherical surface area:28.27,Ball volume:14.14,Cylinder volume:21.21

（2）输入：2.2,3.3  输出如下两行所示：
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
