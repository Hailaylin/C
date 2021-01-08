/*
题号：L0503        题目:用while或do...while语句实现m+(m+1)+(m+2)+...+n的值        得分：0  
  
作业提交截止时间：2020/11/15 0:00:00	 
 	
题目内容：
从键盘上输入两个正整数m和n，要求m小于或者等于n，计算m+(m+1)+(m+2)+...+n的值。
例：
（1）输入：1,100 输出：sum=5050
（2）输入：3,333 输出：sum=55608
（3）输入：100,100 输出：sum=100
*/
#include<stdio.h>
int main(){
	int m,n,sum;
	scanf("%d,%d",&m,&n);
	while (m<=n){
		sum=sum+m;
		m++; 
	}
	printf("sum=%d",sum);
	return 0;	
}
