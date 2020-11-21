/*
#��ţ�L0201        ��Ŀ:����ͬ��        �÷֣�100    
��ҵ�ύ��ֹʱ�䣺2020/10/21 12:00:00	 
��Ŀ���ݣ�
    ��һ��������ͬʱ����һЩ�������ӣ������˽��ж���ֻ���Ͷ���ֻ�ã�
	���˶���˵����ֻ�����㼦���õ���ͷ����16���ܽ�����40��
	���ܲ����Լ����������ֻ���Ͷ���ֻ�á�
����
�����chicken=12,rabbits=4

#�㷨
s1 ����int chicken rabbits 

*/ 
#include<stdio.h>
int main(){
	int chicken=0,rabbits=0,total_head=16,total_foot=40;
	chicken=(4*total_head-total_foot)/2;
	rabbits=(total_foot-2*total_head)/2;
	printf("chicken=%d,rabbits=%d",chicken,rabbits);
	return 0;
}
