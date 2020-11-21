/*
题号：L0502B        题目:计算1+3+5+7+...+n的值        得分：0  
  
作业提交截止时间：2020/11/15 0:00:00	 
 	
题目内容：
从键盘上输入一个正整数n，它是奇数，计算1与n之间所有奇数的和：1+3+5+7+...+n
例：
（1）输入：1  输出：sum=1
（2）输入：3  输出：sum=4
（3）输入：99 输出：sum=2500
*/
#include<stdio.h>
int main(){
	int n,i=1,sum=0;
	scanf("%d",&n);
	while (i<=n){
		sum=sum+i;
		i=i+2;
	}
	printf("sum=%d",sum);
	return 0;
}
