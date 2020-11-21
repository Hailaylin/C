/*
题号：L0501        题目:用while语句计算1+2+3+...+100的值        得分：0  
  
作业提交截止时间：2020/11/15 0:00:00	 
 	
题目内容：
用while语句计算1+2+3+...+100的值。

输出：sum=5050
*/
#include <stdio.h>
int main (){
	int sum=0,i=1;
	while (i<=100){
		sum=sum+i;
		i++;
	}
	printf("sum=%d",sum);
	return 0;
}
