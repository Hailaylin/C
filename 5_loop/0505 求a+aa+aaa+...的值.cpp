/*
��ţ�0505        ��Ŀ:��a+aa+aaa+...��ֵ        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/29 0:00:00	 
 	
��Ŀ���ݣ�
�Ӽ���������a(0<a<10)��n������a+aa+aaa+...+aa...aaa(n��a)��ֵ��
����
��1�����룺2 5  �����24690
��2�����룺9 9  �����1111111101
*/
#include <stdio.h>
int main(){
	int a,n,i,sum,term;
	scanf("%d%d",&a,&n);
	for (i=1,sum=0,term=a;i<=n;i++){
		sum=sum+term;
		term=term*10+a;
	}
	printf("%d",sum);
	return 0;
}
