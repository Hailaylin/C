/*
��ţ�L0511        ��Ŀ:������        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/15 0:00:00	 
 	
��Ŀ���ݣ�
�Ӽ���������һ���ַ���Ҫ���������Ӧ�����롣�ַ���Ϊ����Ĺ��ɣ�
��1����a~v��A~V����ĸ��Ϊ���ĵ�4����ĸ��b��Ϊf
��2��w��Ϊa��x��Ϊb��y��Ϊc��z��Ϊd����дҲһ������
��3������ĸ�ַ�����ԭ״��

����
��1�����룺China!  �����Glmre!
��2�����룺uvwxyz �����yzabcd
*/
/*
#include<stdio.h>
int main(){
	char c;
	while(c=getchar()!=EOF){
		if(!(c>=65&&c<=90)||!(c>=97&&c<=122)) c=c;
		else if(c<=87||c<=119){
			c=c+4;
		}
			else c=c+4-26;
	printf("%c",c);
	}
	return 0;
}
*/
#include<stdio.h>
int main(){
	char c;
	c=getchar();
	while(c!='\n'){
		if(c>='A'&&c<='Z'||c>='a'&&c<='z'){
			if(c>='W'&&c<='Z'||c>='w'){
				c=c+4-26;
			}
			else c=c+4;
		}
	printf("%c",c);
	c=getchar();
	}
	return 0;
}
