/*
L1-6 ������� (15��)
����Ҫ�������ĳ��վ���û�ע��ģ��дһ������Ϸ��Լ���С���ܡ�����վҪ���û����õ���������ɲ�����6���ַ���ɣ�����ֻ����Ӣ����ĸ�����ֺ�С���� .�������������ĸҲ�����֡�

�����ʽ��
�����һ�и���һ�������� N���� 100������� N �У�ÿ�и���һ���û����õ����룬Ϊ������ 80 ���ַ��ķǿ��ַ������Իس�������

�����ʽ��
��ÿ���û������룬��һ�������ϵͳ������Ϣ��������5�֣�

�������Ϸ������Your password is wan mei.��
�������̫�̣����ۺϷ���񣬶����Your password is tai duan le.��
������볤�ȺϷ��������ڲ��Ϸ��ַ��������Your password is tai luan le.��
������볤�ȺϷ�����ֻ����ĸû�����֣������Your password needs shu zi.��
������볤�ȺϷ�����ֻ������û����ĸ�������Your password needs zi mu.��
����������
5
123s
zheshi.wodepw
1234.5678
WanMei23333
pass*word.6
���������
Your password is tai duan le.
Your password needs shu zi.
Your password needs zi mu.
Your password is wan mei.
Your password is tai luan le.

������
���룺n��Ҫ�жϵ����� ��ѭ��&
	passwd[N][MAX] N<100 MAX 80
�жϣ�
	1.���� strlen>=6
	2.'0'~'9' Ӣ�� '.'���С���>��ÿһ���ַ�passwd[i][j]��飬ѭ��for 0~MAX,'\0' break; 
	3.����ʱ��¼engӢ����ĸ��num���ָ���,if eng==0����num==0 
	 
*/ 

#include<stdio.h>
#include<string.h>
#define N 100
#define MAX 80
int main()
{
	char passwd[N][MAX];
	int n,i,j,eng=0,num=0;
	int echo_flag[N];
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",passwd[i]);
	}
	
	for(i=0;i<n;i++)
	{
		eng=num=0;
		if(strlen(passwd[i])>=6)
		{
			for(j=0;j<MAX;j++)
			{
				if(passwd[i][j]=='\0') break;
				
				if((passwd[i][j]>='A'&&passwd[i][j]<='Z')||(passwd[i][j]>='a'&&passwd[i][j]<='z')||(passwd[i][j]>='0'&&passwd[i][j]<='9')||passwd[i][j]=='.')
				{
					if(passwd[i][j]>='0'&&passwd[i][j]<='9') num++;
					if((passwd[i][j]>='A'&&passwd[i][j]<='Z')||(passwd[i][j]>='a'&&passwd[i][j]<='z')) eng++;
				}
				if(passwd[i][j]<'.'||passwd[i][j]>'.'&&passwd[i][j]<'0'||passwd[i][j]>'9'&&passwd[i][j]<'A'||passwd[i][j]>'Z'&&passwd[i][j]<'a'||passwd[i][j]>'z') echo_flag[i]=2;
				//(passwd[i][j]=='*') echo_flag[i]=2;
				//else if(passwd[i][j]<'0'||passwd[i][j]>'9'&&passwd[i][j]<'A'||passwd[i][j]>'Z'&&passwd[i][j]<'a'||passwd[i][j]>'z') echo_flag[i]=2;//printf("Your password is tai luan le.\n");
			}
			if(num==0&&eng!=0) echo_flag[i]=3;
			if(num!=0&&eng==0) echo_flag[i]=4;
			//if(passwd[i][j]<'0'||passwd[i][j]>'9'&&passwd[i][j]<'A'||passwd[i][j]>'Z'&&passwd[i][j]<'a'||passwd[i][j]>'z') echo_flag[i]=2;
		}
		else echo_flag[i]=1;//printf("Your password is tai duan le.\n");
	}
	
	for(i=0;i<n;i++)
	{
		switch (echo_flag[i]) 
		{
			case 0:
				printf("Your password is wan mei.\n");
				break;
			case 1:
				printf("Your password is tai duan le.\n");
				break;
			case 2:
				printf("Your password is tai luan le.\n");
				break;
			case 3:
				printf("Your password needs shu zi.\n");
				break;
			case 4:
				printf("Your password needs zi mu.\n");
				break;
			default :
				break;
		}
	}
	return 0;
}
	/*
	for(i=0;i<n;i++)
	{
		printf("%s\n",passwd[i]);
	}
	*/
