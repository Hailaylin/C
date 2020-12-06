/**
 * @file L0818_.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 题号：L0818        题目:将字符串a复制为字符串b，然后输出字符串b        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
从键盘上输入字符串a，将字符串a复制为字符串b，然后输出字符串b。
（第3版 例8.11）
例：
（1）输入：Have a good time!  输出：Have a good time!
（2）输入：No pain, no gain!  输出：No pain, no gain!
 */

//按照书上的写,用字符数组+指针
#include<stdio.h>
#define N 30
int main()
{
    int i;
    char str1[N], str2[N];
    char *str_p1=str1, *str_p2=str2;
    gets(str1);
    //用指针复制
    for(i=0;*(str_p1+i)!='\0';i++){
        *(str_p2+i)=*(str_p1+i);
    }
    *(str_p2+i)='\0';
    //逐个输出，不用    puts(str_p2);
    for(i=0;*(str_p2+i)!='\0';i++){
        putchar(*(str_p2+i));
    }

    return 0;
}