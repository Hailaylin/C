/* 
��ţ�0516        ��Ŀ:�������ͼ��        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/29 0:00:00	 
 	
��Ŀ���ݣ�
�������ͼ����



*/


#include<stdio.h>
int main(){
	int r,i;
	
	for(r=1;r<=4;r++)
	{
		for(i=1;i<=4-r;i++)
		{
			printf(" ");
		}
		for(i=1;i<=2*r-1;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(r=3;r>=1;r--)
	{
		for(i=1;i<=4-r;i++)
		{
			printf(" ");
		}
		for(i=1;i<=2*r-1;i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
 
