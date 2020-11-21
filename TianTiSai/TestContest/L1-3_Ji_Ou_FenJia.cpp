/*
L1-3 奇偶分家 (10分)
给定N个正整数，请统计奇数和偶数各有多少个？

输入格式：
输入第一行给出一个正整N（≤1000）；第2行给出N个非负整数，以空格分隔。

输出格式：
在一行中先后输出奇数的个数、偶数的个数。中间以1个空格分隔。

输入样例：
9
88 74 101 26 15 0 34 22 77
输出样例：
3 6
*/
#include<stdio.h>
#define N 1000

int main()
{
	int Ji=0,Ou=0,len,i;
	int num[N];
	
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<len;i++)
	{
		if(num[i]%2==0)
		{
			Ou++;
		}
		if((num[i]+1)%2==0)
		{
			Ji++;
		}
	}
	/*
	for(i=0;i<len;i++)
	{
		printf("%d\t",num[i]);
	}
	*/
	printf("%d %d",Ji,Ou);
	return 0;
}
