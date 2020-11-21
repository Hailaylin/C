/*
题号：L0504        题目:break语句练习        得分：0  
  
作业提交截止时间：2020/11/15 0:00:00	 
 	
题目内容：
在全系1000学生中，征集慈善募捐，当总数达到10万元时就结束，统计此时捐款的人数，以及平均每人捐款的数目。输入时以回车间隔，输出平均值时最小宽度为10，保留2位小数。
例：
（1）输入：
120000
输出：num=1,aver= 120000.00
（2）输入：
20000
50000
30000
输出：num=3,aver=  33333.33
*/
#include<stdio.h>
int main(){
	int i=1,total=0,amount;
	double aver;
	for(;i<=1000;i++){
		scanf("%d",&amount);
		total+=amount;
		if(total>=100000) break;
	}
	aver=total/i;
	printf("num=%d,aver=%10.2lf",i,aver);
	return 0;
}
