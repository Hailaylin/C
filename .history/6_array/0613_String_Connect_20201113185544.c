/*
题号：0613        题目:字符串连接        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
编一个程序，将两个字符串连接起来，不要用strcat函数。
例：
（1）输入：
abc
def
输出：abcdef
（2）输入：
12345 67
89
输出：12345 6789

思路：
    gets得到两个字符数组
    strlen计算字符串str_old[0]长度n，
    然后复制strcpy从str_old[0]到str_new
    最后在str_new后面的n-1后接上str_old[1]
    输出str_new
*/

#include<stdio.h>
#include<string.h>
#define N 100

int main()
{
    int i,n;
    char str_old[2][N],str_new[N];

    for(i=0;i<2;i++)
    {
        gets(str_old[i]);
    }

    n=str_old[0];
    printf("%d",n);
/* 测试是否有输入 OK
    for(i=0;i<2;i++)
    {
        puts(str_old[i]);
    }
*/
    return 0;
}