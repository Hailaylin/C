/* 
������һ���и���2��������A��B��

�����ʽ:
��5���а��ո�ʽ��A ����� B = �����˳������͡����������������

��������:
5 3
�������:
�����������Ӧ����������磺

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
