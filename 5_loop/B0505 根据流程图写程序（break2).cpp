/*题号：B0505        题目:根据流程图写程序（break2)        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
根据下面的流程图写程序。
例：
（1）输入：
10
1
输出：22
（2）输入：22 输出：44

*/
#include<stdio.h>
int main(){
	int i,n,sum;
	for(i=1,sum=0;i<=100;i++)
	{
		scanf("%d",&n);
		sum+=2*n;
		if (sum>20) break;
	}
	printf("%d",sum);
}
