/* 
7-5 �������-�����¶�ת���� (15��)
����2��������lower��upper��lower��upper��100���������һ��ȡֵ��ΧΪ[lower��upper]����ÿ������2���϶ȵĻ���-�����¶�ת����

�¶�ת���ļ��㹫ʽ��C=5��(F?32)/9�����У�C��ʾ�����¶ȣ�F��ʾ�����¶ȡ�

�����ʽ:
��һ��������2���������ֱ��ʾlower��upper��ֵ���м��ÿո�ֿ���

�����ʽ:
��һ�������"fahr celsius"

����ÿ�����һ�������¶�fahr�����ͣ���һ�������¶�celsius��ռ��6���ַ���ȣ����Ҷ��룬����1λС������

������ķ�Χ���Ϸ��������"Invalid."��

��������1:
32 35
�������1:
fahr celsius
32   0.0
34   1.1
��������2:
40 30
�������2:
Invalid.
*/
#include<stdio.h>
int main(){
	int lower,upper,f;
	double c;
	scanf("%d %d",&lower,&upper);
	f=lower;
	if (lower<=upper&&upper<=100){
		printf("fahr celsius\n");
		for(;f<=upper;f+=2){
			c=5*(f-32)/9.0;
			printf("%d %5.1f\n",f,c);//���е����⣿ 
		}
	}
	else printf("Invalid.");
	return 0;
}
