/*
 题号：0404        题目:求3个整数中的最大数        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
从键盘上输入3个整数，输出其中最大的数。
例：
（1）输入：2,3,4    输出：max=4
（2）输入：4,5,2    输出：max=5
（2）输入：66,5,2    输出：max=66
*/
#include <stdio.h>
int main(){
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	if(c>b) b=c;
	if(b>a) a=b;
	if(c>a) c=a;
	printf("max=%d",a);
	return 0;
} 
