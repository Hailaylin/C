/*��ţ�L0406        ��Ŀ:���տ��Գɼ��ĵȼ�����ٷ��Ʒ�����        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/5 23:59:00	 
 	
��Ŀ���ݣ�
�Ӽ���������ѧ���ɼ����ַ��ͣ������տ��Գɼ��ĵȼ�����ٷ��Ʒ����Ρ�
A��Ϊ85�����ϣ�B��Ϊ70-85�֣�C��Ϊ60-69�֣�D��Ϊ60�����¡�
����
��1�����룺A  �����Your score:85~100
��2�����룺B  �����Your score:70~84
��3�����룺C  �����Your score:60~69
��4�����룺D  �����Your score:<60
*/
#include<stdio.h>
int main(){
	char l,*o[1];		//l=students score level,o=output score
	scanf("%c",&l);
	switch(l){
		case 'A':	o[0]="85~100";break;
		case 'B':	o[0]="70~84";break;
		case 'C':	o[0]="60~69";break;
		case 'D':	o[0]="<60";break;
	} 
	printf("Your score:%s",*o);
	return 0;
} 
