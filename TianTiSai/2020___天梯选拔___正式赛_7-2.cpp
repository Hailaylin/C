/* 
输入在一行中给出2个正整数A和B。

输出格式:
在5行中按照格式“A 运算符 B = 结果”顺序输出和、差、积、商与余数。

输入样例:
5 3
输出样例:
在这里给出相应的输出。例如：

5 + 3 = 8
5 - 3 = 2
5 * 3 = 15
5 / 3 = 1
5 % 3 = 2
*/
#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	printf("%d %% %d = %d\n",a,b,a%b);
	return 0;
}
