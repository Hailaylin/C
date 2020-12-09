/**
 * @file L0906_指向结构体数组的指针.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-08
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：L0906        题目:指向结构体数组的指针        得分：0  
  
作业提交截止时间：2021/1/4 0:00:00	 
 	
题目内容：
输入3个学生的信息（学号，姓名，成绩），利用指向结构体数组的指针输出这些信息。
输出时各信息以逗号间隔，成绩保留2位小数。

例：
（1）输入：
988 ZhangBo 88
989 LiuYue 89
990 WangXu 86
输出：
988,ZhangBo,88.00
989,LiuYue,89.00
990,WangXu,86.00
 */

#include<stdio.h>
#define N 3

typedef struct  {
    int     id;
    char    name[20];
    float   score;
}Stu;

int main()
{
    int i;
    Stu stu[N], *p;

    for (p=stu; p<stu+N; p++){
        scanf("%d %s %f", &((*p).id), &(p->name), &((*p).score));
    }

    for (p=stu; p<stu+N; p++){
        printf("%d,%s,%.2f\n", (*p).id, p->name, (*p).score);
    }

    return 0;
}