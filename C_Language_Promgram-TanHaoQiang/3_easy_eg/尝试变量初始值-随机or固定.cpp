/*
	测试变量未赋值时的值
	2020年10月14日11:09:45
	不同的编译器对此问题的解决不同 
*/
#include<stdio.h>
int main(){
	int a,b,sum,c;
	printf("%d,%d,%d,%d",a,b,sum,c);
	return 0;
} 
