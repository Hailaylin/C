/*
L1-5 判断题 (15分)
判断题的评判很简单，本题就要求你写个简单的程序帮助老师判题并统计学生们判断题的得分。

输入格式：
输入在第一行给出两个不超过 100 的正整数 N 和 M，分别是学生人数和判断题数量。
第二行给出 M 个不超过 5 的正整数，是每道题的满分值。
第三行给出每道题对应的正确答案，0 代表“非”，1 代表“是”。
随后 N 行，每行给出一个学生的解答。数字间均以空格分隔。

输出格式：
按照输入的顺序输出每个学生的得分，每个分数占一行。

输入样例：
3 6
2 1 3 3 4 5
0 0 1 0 1 1
0 1 1 0 0 1
1 0 1 0 1 0
1 1 0 0 1 1
输出样例：
13
11
12

分析：
输入完后输出结果,n<100
	输入n人数，m选择题数
	题目分值AnswerScore[N]
	题目正误AnswerTF[N]
	输入学生回答StuAnswer[N]
运算：统计学生分数
	StuScore[i]=正确答案*学生答案*分数;
输出:循环输出StuScore[i]\n
	
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
	
	for(i=0;i<n;i++)		//i 学生编号 
	{
		StuScore[i]=0;
		for(j=0;j<m;j++)	//j 题号 
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
