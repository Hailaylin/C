/*
��ţ�L0509        ��Ŀ:�ж�����        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/15 0:00:00	 
 	
��Ŀ���ݣ�
�Ӽ���������һ������3������n���ж����Ƿ�Ϊ������
����
��1�����룺5 �����5 is a prime number.
��2�����룺6 �����6 is not a prime number.
*/
#include<stdio.h>
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=2;i<n;i++)
		if(n%i==0) break;
	if(i<n) printf("%d is not a prime number.",n);
	else printf("%d is a prime number.",n);
	return 0;
}
