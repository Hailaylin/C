/*
��ţ�L0507        ��Ŀ:��еĽ���ֵ        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/15 0:00:00	 
 	
��Ŀ���ݣ�
��������131ҳ�Ĺ�ʽ��еĽ���ֵ��ֱ������ĳһ��ľ���ֵС��10��-6��Ϊֹ������ۼӣ������ʱ����8λС����

�����PI:3.14159065
*/
#include<stdio.h>
#include<math.h>
int main(){
	double PI=0.0,n=1.0,term=1.0;
	int sign=1.0;
	while(fabs(term)>=1e-6){
		PI=PI+term;
		n+=2;
		sign=-sign;
		term=sign/n;
		
	}
	PI=PI*4;
	printf("PI:%.8f",PI);
	return 0;
} 
