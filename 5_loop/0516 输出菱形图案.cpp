/* 

0516        题目:输出菱形图案

分析：二维数组str[7][7]储存，循环输出 
*/
#include<stdio.h>
int main(){
	int i;
	char str[7][10]={
		"   *   ",
		"  ***  ",
		" ***** ",
		"*******",
		" ***** ",
		"  ***  ",
		"   *   ",
	};
	for (i=0;i<=6;i++)
	{
		printf("%s\n",str[i]);
	}
	return 0;
}
