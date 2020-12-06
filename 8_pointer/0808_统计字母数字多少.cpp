/**
 * @file 0808_统计字母数字多少.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-03
 * 
 * @copyright Copyright (c) 2020
 * 题号：0808        题目:统计字母、空格等个数        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
输入一行文字，找出其中大写字母、小写字母、空格、数字及其他字符各有多少。
例：
（1）
输入：It is never too old to learn.
输出：upper case:1,lower case:21,space:6,digit:0,others:1
 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 81

int main()
{   //返回指针?返回指向数组的指针？也行吧^\……不存了，直接输出
    void count(char *str);
    char str[N];
    gets(str);
    count(str);
    return 0;
}

//返回一个指向尾字符的指针？X 只返回output数组
void count(char *str)
{
    int i, len;
    int upper, lower, space, digit, others;
    upper=lower=space=digit=others=0;

    len=strlen(str);            //或者str[i]=='\0'就停止
    for(i=0;i<len;i++){
        if (isupper(*(str+i))) 
            upper++;
        else if (islower(*(str+i)))
            lower++;
        else if (isspace(str[i]))
            space++;
        else if(isdigit(str[i]))
            digit++;
        else others++; 
    }

    printf("upper case:%d,lower case:%d,space:%d,digit:%d,others:%d",upper,lower,space,digit,others);
}