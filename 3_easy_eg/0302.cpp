/*
题号：0302        题目:存款本息和计算        得分：0  
  
作业提交截止时间：2020/10/25 23:59:00	 
 	
题目内容：
从键盘上输入存款金额（b），一年期定期存款利息r1，二年期定期存款利息r2，三年期定期存款利息r3，5年期定期存款利息r4，活期存款利息r5；按5种方法计算本息和（结果保留两位小数）：
（1）一次存5年期
（2）先存2年期，到期后将本息再存3年期
（3）先存3年期，到期后将本息再存2年期
（4）存1年期，到期后将本息再存1年期，连续存5次
（5）存活期存款。活期利息每一季度结算一次。
注：所有变量类型均为float
例：
（1）输入：1000 0.0414 0.0468 0.054 0.0585 0.0072  
 输出：1292.50,1270.76,1270.76,1224.86,1036.62
 */
 
 #include<stdio.h>
 #include<math.h>
 int main(){
 	float b,r1,r2,r3,r4,r5,e1,e2,e3,e4,e5;
 	scanf("%f%f%f%f%f%f",&b,&r1,&r2,&r3,&r4,&r5);
 	e1=b*(1+5*r4);
 	e2=(b*(1+2*r2))*(1+3*r3);
 	e3=(b*(1+3*r3))*(1+2*r2);
 	e4=b*pow(1+r1,5);
 	e5=b*pow(1+r5/4,4*5);
 	
 	printf("%.2f,%.2f,%.2f,%.2f,%.2f",e1,e2,e3,e4,e5);
 	return 0;
 	
 }
