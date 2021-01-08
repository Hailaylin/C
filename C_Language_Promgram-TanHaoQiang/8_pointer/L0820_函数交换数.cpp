/**
 * @file L0820_函数交换数.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 题号：L0820        题目:用函数实现字符串的复制        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
从键盘上输入字符串a，将字符串a复制为字符串b，然后输出字符串b。
用函数来实现。
（第3版 例8.13）
例：
（1）输入：Have a good time!  输出：Have a good time!
（2）输入：No pain, no gain!  输出：No pain, no gain!
 */

#include<stdio.h>
#define MAX 81
int main()
{
    void copy_str(char *from, char *to);
    char str1[MAX], str2[MAX];
    
    gets(str1);
    copy_str(str1,str2);
    puts(str2);
}

void copy_str(char *from, char *to)
{
    while(*to++=*from++);
}