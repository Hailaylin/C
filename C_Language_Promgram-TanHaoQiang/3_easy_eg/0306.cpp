/*��ţ�0306        ��Ŀ:��������        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/10/25 23:59:00	 
 	
��Ŀ���ݣ�
�Ӽ���������5���ַ�������scanf()��������getchar()�����������������Ƴ����벢���(��putchar����)��������ɣ���ԭ����ĸ�����4����ĸ����ԭ������ĸ�����磬��ĸ'A'�����4����ĸ��'E'����'E'������'A'��
����
��1�����룺China  �����Glmre
��2�����룺Korea �����Osvie
��3�����룺xyzXY �����|}~\]
*/

#include<stdio.h>
int main(){
	char str[5];
	int i=0;
	while((*(str+i++)  = getchar() + 4) != '\n' + 4);
	*(str+i) = '\0';
	printf("%s",str);
	return 0;
}