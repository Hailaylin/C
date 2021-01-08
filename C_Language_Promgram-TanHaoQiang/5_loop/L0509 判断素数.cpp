/*
题号：L0509        题目:判断素数        得分：0  
  
作业提交截止时间：2020/11/15 0:00:00	 
 	
题目内容：
从键盘上输入一个大于3的整数n，判定它是否为素数。
例：
（1）输入：5 输出：5 is a prime number.
（2）输入：6 输出：6 is not a prime number.
*/
#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=2;i<n;i++)
		if(n%i==0) break;
	if(i<n) printf("%d is not a prime number.",n);
	else printf("%d is a prime number.",n);
	return 0;
}
