/* 
题号：0516        题目:输出菱形图案        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
输出以下图案：



*/


#include<stdio.h>
int main(){
	int r,i;
	
	for(r=1;r<=4;r++)
	{
		for(i=1;i<=4-r;i++)
		{
			printf(" ");
		}
		for(i=1;i<=2*r-1;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(r=3;r>=1;r--)
	{
		for(i=1;i<=4-r;i++)
		{
			printf(" ");
		}
		for(i=1;i<=2*r-1;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
 
