/*
��ţ�L0204        ��Ŀ:��������ַ�        �÷֣�100  
  
��ҵ�ύ��ֹʱ�䣺2020/10/21 12:00:00	 
 		for(i=0;i<=5;i++)
		output[5-i]=input[i];(5-i����Ӧ����4)
		printf("%s",output);
��Ŀ���ݣ�
�Ӽ���������5�������ַ�������������ǡ�
����
��1�����룺ABCDE  �����EDCBA
��2�����룺Ac3%#   �����#%3cA
*/
#include<stdio.h>
int main(){
	char input[5];
	int i;
	scanf("%s",input);
	for(i=0;i<=4;i++){
		printf("%c",input[4-i]);	
	}
	return 0;
}
