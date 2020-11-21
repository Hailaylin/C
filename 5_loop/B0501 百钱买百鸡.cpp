/*
题号：B0501        题目:百钱买百鸡        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
今有鸡翁一，值钱伍；鸡母一，值钱三；鸡雏三，值钱一。凡百钱买鸡百只，问鸡翁、母、雏各几何？
公鸡5元一只，母鸡3元一只，小鸡1元三只。给你100元钱，买100只鸡回来，问如何买？

输出：
cocks:0,hens:25,chickens:75
cocks:4,hens:18,chickens:78
(共4种情况)
*/

#include<stdio.h>
int main(){
	int g,m,x;
	
	for(g=0;g<=100;g++)
	{
		for(m=1;m<=100;m++)
		{
			for(x=1;x<=100;x++)
			{
				if((5*g+3*m+x)==100&&(g+m+3*x==100))
				{
					printf("cocks:%d,hens:%d,chickens:%d\n",g,m,3*x);
					break;	
				}
			}
		}
	}
	
	return 0;
}
