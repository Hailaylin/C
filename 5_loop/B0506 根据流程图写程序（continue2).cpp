/*
��ţ�B0506        ��Ŀ:��������ͼд����continue2)        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/29 0:00:00	 
 	
��Ŀ���ݣ�
��������ͼд����
����
��1�����룺1 �����2
��2�����룺2 �����6
��3�����룺3 �����6

*/
#include<stdio.h>
int main(){
	int n,i,sum;
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++){
		if (i%3==0) continue;
		sum+=2*i;
	}
	printf("%d",sum);
	return 0;
}
