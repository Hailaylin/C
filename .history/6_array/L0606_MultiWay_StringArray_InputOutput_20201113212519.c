/*
题号：L0606        题目:字符数组的输入输出        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
从键盘上输入字符数组的各个元素，然后再输出这个字符数组的每个元素。
尝试用多种方式实现。
例：
（1）输入：I am a student.  输出：I am a student.
（2）输入：You are what you think. 输出：You are what you think.

分析：
    输入 getchar,gets,scanf
    输出 putchar,puts,printf
*/
#include<stdio.h>
#include<string.h>
#define N 100
int main()
{
    /* 方法一
    char str[N];
    gets(str);
    puts(str);
    */

   ///* 方法二
   char str1[N],str2[N];
   int i;
   for(i=0;i<N;i++)
   {
       scanf("%s",str2);
       strcpy(str1,str2);
   }
   
   printf("%s",str1);
   //*/
    return 0;
}