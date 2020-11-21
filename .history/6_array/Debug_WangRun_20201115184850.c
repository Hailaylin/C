/*
编写一个程序，将两个字符串s1和s2进行比较，若s1>s2，输出一个正数（第一个不相同的字符的ASCII码差值）；若s1=s2，输出0；若s1<s2，输出一个负数（第一个不相同的字符的ASCII码差值）。
例：
（1）输入：
abc
abc
输出：0
（2）输入：
ab
abc
输出：-99
（3）输入：
ddd
cde
输出：1
*/
#include<stdio.h>
#include<string.h> 
#include<math.h>
int main()
{
	char s1[81],s2[82];
	int i,a,b;
	gets(s1);
	gets(s2);
	if(strcmp(s1,s2)>0)
	{
		for(i=0;s1[i] != '\0';i++)
		{
			if(s1[i]!=s2[i])
			{
				a=abs(s1[i]-s2[i]);
				printf("%d\n",a);
				break;
			}
		}
	}
	else if(strcmp(s1,s2)==0)
	{
		printf("0\n");
	}
	else if(strcmp(s1,s2)<0)
	{
		for(i=0;s1[i] != '\0';i++)
		{
			if(s1[i]!=s2[i])
			{
				b=abs(s1[i]-s2[i]);
				printf("%d\n",b);
				break;
			}
		}
	}
	return 0;
}