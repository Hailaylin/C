/* 题号：B0504        题目:根据流程图写程序（continue)        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
根据流程图写程序。
例：
（1）输入：1 输出：1
（2）输入：2 输出：3
（3）输入：3 输出：3
*/
#include<stdio.h>
int main(){
	int n,i,sum;
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++){
		if(i%3==0) continue;
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
