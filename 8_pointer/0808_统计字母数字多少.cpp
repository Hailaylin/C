/**
 * @file 0808_统计字母数字多少.cpp
 * @author your name (you@domain.com)
 * @brief 代码整洁之道 小胖+Hailay
 * @version 0.5
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
#include<ctype.h>
#define N 81

int main()
{   
    void count(char *str);
    char str[N];
    gets(str);
    count(str-1);
    return 0;
}

void count(char *str)
{
    int upper=0, lower=0, space=0, digit=0, others=0;

    while ( ( *++str = getchar() )  == '\n' ? *str = 0 : ( isupper( *str )  ? ++upper : ( islower(*str) ? ++lower : ( isspace(*str) ? ++space : ( isdigit(*str) ? ++digit : ( *str == '\0' ? 0 : ++others ) ) ) ) ) ) ;

    printf("upper case:%d,lower case:%d,space:%d,digit:%d,others:%d", upper, lower, space, digit, others);
}

/*
注:
    1. count(str-1)虽然越界，但是没有访问越界的元素，只是把地址减一个char长度，后面调用函数又在访问数组元素前自增1，没事
    2. 输入不用gets()用getchar()在杜哥oj会出问题0分，在vscode用getchar()没问题,用getchar()更简洁，少一行
*/