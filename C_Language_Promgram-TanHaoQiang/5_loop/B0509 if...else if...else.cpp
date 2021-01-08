/*
题号：B0509        题目:if...else if...else        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
从键盘上输入x,y，计算z，均使用float类型，最后输出时保留2位小数。
例：
（1）输入：1.0,1 输出：1.41
（2）输入：1,0 输出：1.84
（3）输入：-1,1 输出：0.14
*/
/* 第一种解法的判断语句 
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
	//第二种写法的判断语句
	if (x>0){
		if (y>0) 	z=sqrt(x+y);
		else 		z=sin(x)+cos(y);
	}
	else if (y>0)  	z=exp(x-y);
		else 		z=fabs(pow(x,y));
	printf("%.2f",z);
	return 0;
}
