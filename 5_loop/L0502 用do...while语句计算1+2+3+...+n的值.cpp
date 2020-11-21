/*
题号：L0502        题目:用do...while语句计算1+2+3+...+n的值        得分：0  
  
作业提交截止时间：2020/11/15 0:00:00	 
 	
题目内容：
从键盘上输入一个正整数n，计算1+2+3+...+n的值。
例：
（1）输入：1  输出：sum=1
（2）输入：2  输出：sum=3
（3）输入：4  输出：sum=10
（4）输入：100 输出：sum=5050
*/
#include <stdio.h>
int main(){
	int sum=0,i=1,n=0;
	scanf("%d",&n);
	do
	{
		sum=sum+i;
		i++;	
	}
	while (i<=n);
	printf("sum=%d",sum);
	return 0;
}
