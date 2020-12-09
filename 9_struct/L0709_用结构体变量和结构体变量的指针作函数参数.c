/**
 * @file L0709_用结构体变量和结构体变量的指针作函数参数.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-08
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：L0907        题目:用结构体变量和结构体变量的指针作函数参数        得分：0  
  
作业提交截止时间：2021/1/4 0:00:00	 
 	
题目内容：
有5个结构体变量，内含学生信息（学号、姓名、3门课程成绩和平均成绩），输入他们的成绩，计算平均成绩并输出平均成绩最高的学生的信息。
输出是时各信息间用逗号间隔，成绩都保留2位小数。
(使用函数)
例：
（1）输入：
1004 ZhangShuyu 85 80 79
1008 LiShuang 85 83 82
1006 ChenHongyu 83 79 80
1013 ChenDi 79 85 76
1001 GuoTengyang 75 79 79
输出：
The highest score:
1008,LiShuang,85.00,83.00,82.00,83.33
 */

#include<stdio.h>
#define N 5

typedef struct {
    int     id;         //学号id
    char    name[20];   //名字，开大
    float   score[3];   //三门课程分数
    float   aver;       //平均分
}Stu;

int main()
{
    Stu stu[N], *p;
    int i, max;
    /*      输入        */
    for (p=stu; p<stu+N; p++){
        (*p).aver=0;
        scanf("%d %s", &(p->id), &(p->name));
        for (i=0; i<3; i++){
            scanf("%f", &((*p).score[i]));
            (*p).aver += (*p).score[i];
        }
        (*p).aver /= 3;
    }   
    /*      寻找max     */
    for (i=0, max=0; i<N; i++){
        if (stu[i].aver > stu[max].aver) max=i;
    }
    /*  输出max学生信息  */
    p=stu+max;
    printf("The highest score:\n%d,%s,", (p->id), (p->name));
    for (i=0; i<3; i++){
        printf("%.2f,", (*p).score[i]);
    }
    printf("%.2f\n",p->aver);

    return 0;
}