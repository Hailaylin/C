/*��ţ�0409        ��Ŀ:������������һ���������ĸ���λ        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/5 23:59:00	 
 	
��Ŀ���ݣ�
�Ӽ���������һ��������5λ������5λ������������Ҫ��
��1��������Ǽ�λ����
��2���ֱ����ÿһλ���֣�������С���Ϊ2����
��3�������������λ���֣�������С���Ϊ2����
����
��1�����룺3   �����num=1,natural order: 3,reverse order: 3
��2�����룺56  �����num=2,natural order: 5 6,reverse order: 6 5
��3�����룺123  �����num=3,natural order: 1 2 3,reverse order: 3 2 1
��4�����룺4569  �����num=4,natural order: 4 5 6 9,reverse order: 9 6 5 4
��5�����룺36987  �����num=5,natural order: 3 6 9 8 7,reverse order: 7 8 9 6 3
*/
//printf("num[%d]=%c\t",i,num[i]);
#include <stdio.h>
int main(){
	char num[4];
	int i,total_num=0;
	scanf("%s",&num);
	
/*			����numλ��		*/
/*	���ǰ�����������		*/
	for(i=0;i<=4;i++) {
		if (num[i]!=0) total_num++;
	}
	printf("num=%d,natural order:",total_num); 
	
/*		  	�������		*/							 
	for(i=0;i<=4;i++) {
		if (num[i]!=0) printf("%2c",num[i]);
	}
	printf(",reverse order:");

/*		���������벿��	*/
	for(i=4;i>=0;i--) {
		if (num[i]!=0) printf("%2c",num[i]);
	}
	return 0;
}
 
