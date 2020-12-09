/**
 * @file L0901_结构体变量的初始化和引用.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-08
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：L0901        题目:结构体变量的初始化和引用        得分：0  
  
作业提交截止时间：2021/1/4 0:00:00	 
 	
题目内容：
把一个学生的信息放在一个结构体变量中，然后输出这个学生的信息。
使用297页书上的信息（第3版271页）。

输出：
NO.:10101
name:Li Lin
sex:M
address:123 Beijing Road
 */

#include<stdio.h>
struct Student {
    char    NO[20];
    char    name[10];
    char    sex[4];
    char    address[50];
}xiaoming={"10101","Li Lin","M","123 Beijing Road"};
int main(){
    printf("NO.:%s\nname:%s\nsex:%s\naddress:%s",xiaoming.NO,xiaoming.name,xiaoming.sex,xiaoming.address);
    return 0;
}