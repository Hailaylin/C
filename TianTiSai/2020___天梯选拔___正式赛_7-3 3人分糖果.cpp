/*
7-3 3人分糖果
幼儿园里，有3个小朋友编号分别是1、2、3，他们按自己的编号顺序围坐在一张圆桌旁，每个小朋友的面前分别有8、9、10颗糖果。现在做一个分糖果游戏，从1号小朋友开始，将自己的糖果平均分成三份（如果有多余的糖果，则自己立刻吃掉），自己留一份，其余两份分给相邻座位的两个小朋友。接着，2号、3号小朋友也同样这么做。请问一轮后，每个小朋友面前分别有多少糖果？

输入格式:
本题目没有输入。

输出格式:
在一行内显示以下结果。注意行末除了换行符不能有任何多余字符。

10 8 5
*/
#include<stdio.h>
int main(){
	int f1=8,f2=9,f3=10;
	
	f1=f1/3;
	f2+=f1;
	f3+=f1;
	
	f2=f2/3;
	f3+=f2;
	f1+=f2;
	
	f3=f3/3;
	f2+=f3;
	f1+=f3;
	
	printf("%d %d %d",f1,f2,f3);
	return 0;
} 
