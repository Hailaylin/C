/*
L1-5 �ж��� (15��)
�ж�������кܼ򵥣������Ҫ����д���򵥵ĳ��������ʦ���Ⲣͳ��ѧ�����ж���ĵ÷֡�

�����ʽ��
�����ڵ�һ�и������������� 100 �������� N �� M���ֱ���ѧ���������ж���������
�ڶ��и��� M �������� 5 ������������ÿ���������ֵ��
�����и���ÿ�����Ӧ����ȷ�𰸣�0 �����ǡ���1 �����ǡ���
��� N �У�ÿ�и���һ��ѧ���Ľ�����ּ���Կո�ָ���

�����ʽ��
���������˳�����ÿ��ѧ���ĵ÷֣�ÿ������ռһ�С�

����������
3 6
2 1 3 3 4 5
0 0 1 0 1 1
0 1 1 0 0 1
1 0 1 0 1 0
1 1 0 0 1 1
���������
13
11
12

������
�������������,n<100
	����n������mѡ������
	��Ŀ��ֵAnswerScore[N]
	��Ŀ����AnswerTF[N]
	����ѧ���ش�StuAnswer[N]
���㣺ͳ��ѧ������
	StuScore[i]=��ȷ��*ѧ����*����;
���:ѭ�����StuScore[i]\n
	
*/
#include<stdio.h>
#define N 100
int main()
{
	int i,j,n,m,temp;
	int AnswerScore[N],AnswerTF[N],StuAnswer[N][N],StuScore[N];
	
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&AnswerScore[i]);
	}
	
	for(i=0;i<m;i++)
	{
		scanf("%d",&AnswerTF[i]);
	}
	
	for(i=0;i<n;i++)		//i ѧ����� 
	{
		StuScore[i]=0;
		for(j=0;j<m;j++)	//j ��� 
		{
			scanf("%d",&StuAnswer[i][j]);
			if(StuAnswer[i][j]==AnswerTF[j])
			{
				StuScore[i]=StuScore[i]+AnswerScore[j];
			}
			//StuScore[i]=StuScore[i]+AnswerScore[j]*AnswerTF[j]*StuAnswer[i][j];//error
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",StuScore[i]);
	}
	return 0;
}
