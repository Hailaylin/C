/*
	题号：B0605        题目:字符串逆序存放        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
从键盘上输入一个字符串，将其逆序存放并输出。
例：
（1）输入：abc 输出：cba
（2）输入：abc 123 输出：321 cba
*/
#include<stdio.h>
#include<string.h>
#define N 10
int main()
{
    char str[2][N];
    int i,j,len;
    gets(str[0]);
    
    len=strlen(str[0]);
    printf("%d",len);
    for(i=len,j=0;i>=0;i--)
    {
        str[1][j++]=str[0][i];
    }

    puts(str[1]);
}