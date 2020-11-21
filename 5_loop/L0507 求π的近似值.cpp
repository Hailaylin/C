/*
题号：L0507        题目:求π的近似值        得分：0  
  
作业提交截止时间：2020/11/15 0:00:00	 
 	
题目内容：
按照书上131页的公式求π的近似值，直到发现某一项的绝对值小于10的-6次为止（该项不累加）。输出时保留8位小数。

输出：PI:3.14159065
*/
#include<stdio.h>
#include<math.h>
int main(){
	double PI=0.0,n=1.0,term=1.0;
	int sign=1.0;
	while(fabs(term)>=1e-6){
		PI=PI+term;
		n+=2;
		sign=-sign;
		term=sign/n;
		
	}
	PI=PI*4;
	printf("PI:%.8f",PI);
	return 0;
} 
