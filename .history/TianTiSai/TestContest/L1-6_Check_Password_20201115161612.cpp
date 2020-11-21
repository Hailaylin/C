/*
L1-6 检查密码 (15分)
本题要求你帮助某网站的用户注册模块写一个密码合法性检查的小功能。该网站要求用户设置的密码必须由不少于6个字符组成，并且只能有英文字母、数字和小数点 .，还必须既有字母也有数字。

输入格式：
输入第一行给出一个正整数 N（≤ 100），随后 N 行，每行给出一个用户设置的密码，为不超过 80 个字符的非空字符串，以回车结束。

输出格式：
对每个用户的密码，在一行中输出系统反馈信息，分以下5种：

如果密码合法，输出Your password is wan mei.；
如果密码太短，不论合法与否，都输出Your password is tai duan le.；
如果密码长度合法，但存在不合法字符，则输出Your password is tai luan le.；
如果密码长度合法，但只有字母没有数字，则输出Your password needs shu zi.；
如果密码长度合法，但只有数字没有字母，则输出Your password needs zi mu.。
输入样例：
5
123s
zheshi.wodepw
1234.5678
WanMei23333
pass*word.6
输出样例：
Your password is tai duan le.
Your password needs shu zi.
Your password needs zi mu.
Your password is wan mei.
Your password is tai luan le.

分析：
输入：n个要判断的密码 ，循环&
	passwd[N][MAX] N<100 MAX 80
判断：
	1.长度 strlen>=6
	2.'0'~'9' 英文 '.'才行——>对每一个字符passwd[i][j]检查，循环for 0~MAX,'\0' break; 
	3.遍历时记录eng英文字母、num数字个数,if eng==0或者num==0 
	 
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
