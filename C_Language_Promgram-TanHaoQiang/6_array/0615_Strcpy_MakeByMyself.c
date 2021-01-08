/*
题号：0615        题目:字符串复制        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
输入一个字符串，将它复制到另外一个字符数组中。
不允许使用strcpy，复制时，字符串结束标志也要复制过去。
例：
（1）输入：abc de 输出：abc de
（2）输入：The longest journey begins with the first step.
输出：The longest journey begins with the first step.
*/

#include<stdio.h>
#define N 100
int main()
{
    int i;
    char str[2][N];     //两个数组，0为输入（复制来源），1为输出（复制目的）

    gets(str[0]);

    for(i=0;i<N;i++)
    {
        if(str[0][i]=='\0')
        {
            str[1][i]=str[0][i];
            str[1][i+1]='\0';
        }
        else str[1][i]=str[0][i];
    }

    puts(str[1]);
    return 0;
}