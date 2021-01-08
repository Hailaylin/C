/**
 * @file L0905_指向结构变量的指针.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-08
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 	题号：L0905        题目:指向结构体变量的指针        得分：0  
  
作业提交截止时间：2021/1/4 0:00:00	 
 	
题目内容：
利用结构体变量的指针给学生信息赋值（包括学号、姓名、成绩），然后再输出。
输出时各信息以逗号间隔，成绩保留2位小数。
例：
（1）输入：1017 Sun_Huancheng 86
输出：1017,Sun_Huancheng,86.00
 */

#include<stdio.h>

typedef struct Student{
    int     id;
    char    name[20];
    float   score;
}Stu;

int main()
{
    Stu stu, *p;
    p=&stu;
    scanf("%d %s %f", &(stu.id), &((*p).name), &(p->score));

    printf("%d,%s,%.2f", stu.id, (*p).name, p->score);
    return 0;
}