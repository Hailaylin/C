/**
 * @file 0808_统计字母数字多少.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.2
 * @date 2020-12-03
 * @update 2020年12月12日23:38:02
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
    count(str);
    return 0;
}

//代码整洁之道 小胖+Hailay
void count(char *str)
{
    int upper=0, lower=0, space=0, digit=0, others=0;

    while ( isupper(  ( *++str = getchar() )  == '\n' ? *str = 0 : *str)  ? ++upper : ( islower(*str) ? ++lower : ( isspace(*str) ? ++space : ( isdigit(*str) ? ++digit : ( *str == '\0' ? 0 : ++others ) ) ) ) ) ;

    printf("upper case:%d,lower case:%d,space:%d,digit:%d,others:%d", upper, lower, space, digit, others);
}
