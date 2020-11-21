/*
题号：0505        题目:求a+aa+aaa+...的值        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
从键盘上输入a(0<a<10)和n，计算a+aa+aaa+...+aa...aaa(n个a)的值。
例：
（1）输入：2 5  输出：24690
（2）输入：9 9  输出：1111111101
*/
#include <stdio.h>
int main(){
	int a,n,i,sum,term;
	scanf("%d%d",&a,&n);
	for (i=1,sum=0,term=a;i<=n;i++){
		sum=sum+term;
		term=term*10+a;
	}
	printf("%d",sum);
	return 0;
}
