/*
题号：0612        题目:计算字符串长度        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
从键盘上输入一个字符串，输出它的长度。（要求不要使用strlen函数）

例：
（1）输入：abc 123
输出：7
（2）输入：The longest journey begins with the first step.
输出：47

思路：
    先输入scanf %s str
    然后循环比对是否为\n或者\0后-1，然后累加
*/
/*第一版，vscode可以用，提交不通过
#include<stdio.h>
int main()
{
    int i=0,c;
    while(c=getchar()!='\n')
    {
        i++;
    }
    printf("%d",i);
    return 0;
}
*/
/* 第二版
#include<stdio.h>
#define N 100
int main()
{
    int i;
    char str[N]={'\0'};

    scanf("%s",str);
    for(i=0;i<N;i++)
    {
        if(str[i]=='\0') break;
    }
    printf("%d",i);
    return 0;
}
*/
#include<stdio.h>
#define N 100
int main()
{
    int i=0,c;
    char str[N];
    while(c=getchar()!='\0')
    {
        str[i]=c;
        i++;
    }
    printf("%d",i);
    return 0;
}