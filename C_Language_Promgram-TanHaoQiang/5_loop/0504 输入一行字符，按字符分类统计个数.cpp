/*
��ţ�0504        ��Ŀ:����һ���ַ������ַ�����ͳ�Ƹ���        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/29 0:00:00	 
 	
��Ŀ���ݣ�
����һ���ַ����ֱ�ͳ������Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
����
��1�����룺I love hebeu! �����character:10,space:2,digit:0,others:1
��2�����룺2017, have a brilliant year! �����character:18,space:4,digit:4,others:2
*/
#include<stdio.h>
int main(){
	char c;
	int character,space,digit,others;
	character=space=digit=others=0;
	c=getchar();
	while(c!='\n'){
		if (c>='0'&&c<='9'){
			digit++;
		}
		else if(c==' '){
			space++;
		}
		else if(c>='A'&&c<='Z'||c>='a'&&c<='z'){
			character++;
		}
		else others++;
		c=getchar();
	}
	printf("character:%d,space:%d,digit:%d,others:%d",character,space,digit,others);
	return 0;
} 
