/*��ţ�L0401        ��Ŀ:����һԪ���η��̵ĸ�        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/11/5 23:59:00	 
 	
��Ŀ���ݣ�
�Ӽ���������һԪ���η��̵�ϵ����a,b,c
���㲢������̵ĸ�������2λС������
����
��1�����룺6,3,1  �����No real roots.
��2�����룺2,4,1  �����x1=-0.29,x2=-1.71
��3�����룺1.0,-2,1 �����x1=1.00,x2=1.00
*/
#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,disc,p,q,x1,x2;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	disc=pow(b,2)-4*a*c;
	if (disc<0) printf("No real roots.");
		else{
			p=-b/2.0/a;
			q=sqrt(disc)/2.0/a;
			printf("x1=%.2f,x2=%.2f",p+q,p-q);
		}
	return 0;
}
