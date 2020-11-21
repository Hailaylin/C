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
*/

#include<stdio.h>
int main()
{
    int i=0,c;
    while(c=getchar()!='\0')
    {
        i++;
    }
    printf("%d",i);
    return 0;
}