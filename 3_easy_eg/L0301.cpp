/*
题号：L0301        题目:华氏温度转换成摄氏温度        得分：0  
  
作业提交截止时间：2020/10/25 23:59:00	 
 	
题目内容：
从键盘上输入华氏温度，按公式将其换成摄氏温度，保留两位小数。
公式：摄氏温度=5/9*(华氏温度-32)
要求变量名都用float类型。
例：
（1）输入：32  输出：0.00
（2）输入：41  输出：5.00
（3）输入：123 输出：50.56
*/ 
#include<stdio.h>
int main(){
	float hs,ss;
	scanf("%f",&hs);
	ss=5.0/9*(hs-32);//整数除整数=整数 
	printf("%.2f",ss);
	return 0;
}
