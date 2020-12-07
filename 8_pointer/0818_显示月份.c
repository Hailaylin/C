/**
 * @file 0818_显示月份.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：0818        题目:显示月份        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
输入月份号，输出该月的英文月名。
char *month_name[13]={"Illegal month","January","February","March","April","May","June","July","August","September","October","November","December"};
例：
（1）输入：1 输出：It is January.
（2）输入：13 输出：It is wrong.
 */

#include<stdio.h>

int main()
{
    char *month_name[13]={"Illegal month","January","February","March","April","May","June","July","August","September","October","November","December"};

    int n;
    scanf("%d",&n);
    if(n<13) printf("It is %s.",*(month_name+n));
    else printf("It is wrong.");
    
    return 0;
}