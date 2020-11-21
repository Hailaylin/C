/*
题号：B0503        题目:根据流程图写程序（break)        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
根据下面流程图写程序。
例：
（1）输入：
10
20
输出：30
（2）输入：
22
输出：22
*/
#include<stdio.h>
int main(){
	int i=1,n,sum=0;
	for(n=0;i<=100;i++){
		scanf("%d",&n);
		sum+=n;
		if(sum>20) break;
	}
	printf("%d",sum);
	return 0;
}
