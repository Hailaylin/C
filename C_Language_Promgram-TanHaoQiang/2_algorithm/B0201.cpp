#include<stdio.h>
#include<math.h>
int main(){
	double improve,decline;//bei;
	int n;
	scanf("%d",&n);
	improve=pow(1.01,n*365);
	decline=pow(0.99,n*365);
	printf("%.3lf",improve/decline);
	return 0;
}
