/*
��ţ�L0202        ��Ŀ:����ͬ�������䣩        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/10/21 12:00:00	 
 	
��Ŀ���ݣ�
    ��һ��������ͬʱ����һЩ�������ӣ������˽��ж���ֻ���Ͷ���ֻ�ã����˶���˵����ֻ�����㼦���õ���ͷ����16���ܽ�����40�����ܲ����Լ����������ֻ���Ͷ���ֻ�á�
    �Ӽ��������뼦���õ���ͷ�����ܽ�������������õĸ�����
����
��1�����룺16 40 �����chicken=12,rabbits=4
��2�����룺16 32 �����chicken=16,rabbits=0
��3�����룺6912 25180 �����chicken=1234,rabbits=5678
*/
#include<stdio.h>
int main(){
	int chicken,rabbits,total_head,total_foot;
	scanf("%d%d",&total_head,&total_foot);
	chicken=(4*total_head-total_foot)/2;
	rabbits=(total_foot-2*total_head)/2;
	printf("chicken=%d,rabbits=%d",chicken,rabbits);
	return 0;
}
