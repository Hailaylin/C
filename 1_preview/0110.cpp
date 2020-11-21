#include<stdio.h>
int main(){
	int a,b,e;
	scanf("%d %d",&a,&b);
	e=a+b;
	if (b<0)
		printf("%d+(%d)=%d",a,b,e);
	else
		printf("%d+%d=%d",a,b,e);
	return 0;
} 
