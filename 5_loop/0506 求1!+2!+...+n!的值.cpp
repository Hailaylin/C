/*
题号：0506        题目:求1!+2!+...+n!的值        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
从键盘上输入正整数n，求1!+2!+...+n!的值。
例：
（1）输入：1 输出：sum=1
（2）输入：10 输出：sum=4037913
（3）输入：20 输出：sum=2561327494111820313
*/
#include <stdio.h>
int main(){
	int n,i,j,tmp;
	long long sum,total;
	scanf("%d",&n);
	for (i=1,total=0;i<=n;i++){
		for (j=1,sum=1;j<=i;j++){
			sum=sum*j;
		}
		total=total+sum;
	}
	printf("sum=%lld",total);
	return 0;
}
