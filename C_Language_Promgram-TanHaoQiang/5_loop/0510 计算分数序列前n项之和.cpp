/*
��ţ�0510        ��Ŀ:�����������ǰn��֮��        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/29 0:00:00	 
 	
��Ŀ���ݣ�
��һ���������У�2/1,3/2,5/3,8/5,...���Ӽ���������n��������ǰn��֮�͡�
���ʱ����2λС����
����
��1�����룺20 �����32.66
��2�����룺1   �����2.00

#���� 
double
for n
a/b sum+=a/b tmp=a;a=a+b;b=tmp 
%.2f
*/
#include<stdio.h>
int main(){
	int n,i;
	double sum,a,b,tmp;
	scanf("%d",&n);
	for(sum=0,a=2,b=1,i=1;i<=n;i++) {
		sum+=a/b;
		tmp=a;
		a+=b;
		b=tmp;
	}
	printf("%.2f",sum);
	return 0;
}
