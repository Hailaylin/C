/*
��ţ�L0501        ��Ŀ:��while������1+2+3+...+100��ֵ        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/15 0:00:00	 
 	
��Ŀ���ݣ�
��while������1+2+3+...+100��ֵ��

�����sum=5050
*/
#include <stdio.h>
int main (){
	int sum=0,i=1;
	while (i<=100){
		sum=sum+i;
		i++;
	}
	printf("sum=%d",sum);
	return 0;
}
