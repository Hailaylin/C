/*
题号：0510        题目:计算分数序列前n项之和        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
有一个分数序列：2/1,3/2,5/3,8/5,...，从键盘上输入n，计算其前n项之和。
输出时保留2位小数。
例：
（1）输入：20 输出：32.66
（2）输入：1   输出：2.00

#分析 
double
for n
a/b sum+=a/b tmp=a;a=a+b;b=tmp 
%.2f
*/
#include<stdio.h>
int main(){
	int n,i;
	double sum,a,b,tmp;
	scanf("%d",&n);
	for(sum=0,a=2,b=1,i=1;i<=n;i++) {
		sum+=a/b;
		tmp=a;
		a+=b;
		b=tmp;
	}
	printf("%.2f",sum);
	return 0;
}
