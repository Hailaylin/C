/* ��ţ�B0504        ��Ŀ:��������ͼд����continue)        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/29 0:00:00	 
 	
��Ŀ���ݣ�
��������ͼд����
����
��1�����룺1 �����1
��2�����룺2 �����3
��3�����룺3 �����3
*/
#include<stdio.h>
int main(){
	int n,i,sum;
	scanf("%d",&n);
	for(i=1,sum=0;i<=n;i++){
		if(i%3==0) continue;
		sum+=i;
	}
	printf("%d",sum);
	return 0;
}
