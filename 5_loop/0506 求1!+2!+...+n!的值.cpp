/*
��ţ�0506        ��Ŀ:��1!+2!+...+n!��ֵ        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/29 0:00:00	 
 	
��Ŀ���ݣ�
�Ӽ���������������n����1!+2!+...+n!��ֵ��
����
��1�����룺1 �����sum=1
��2�����룺10 �����sum=4037913
��3�����룺20 �����sum=2561327494111820313
*/
#include <stdio.h>
int main(){
	int n,i,j,tmp;
	long long sum,total;
	scanf("%d",&n);
	for (i=1,total=0;i<=n;i++){
		for (j=1,sum=1;j<=i;j++){
			sum=sum*j;
		}
		total=total+sum;
	}
	printf("sum=%lld",total);
	return 0;
}
