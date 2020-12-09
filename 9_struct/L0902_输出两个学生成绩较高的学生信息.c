/**
 * @file L0902_输出两个学生成绩较高的学生信息.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-08
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：L0902        题目:输出两个学生成绩较高的学生信息        得分：0  
  
作业提交截止时间：2021/1/4 0:00:00	 
 	
题目内容：
输入两个学生的学号、姓名和成绩，输出成绩较高的学生的学号、姓名和成绩。
其中成绩输出时最小宽度为6位，保留2位小数。
（第3版 273-274页）
例：
（1）输入：
1013 Chendi 80
1014 KangLiyuan 81
输出：
The higher score is:
1014 KangLiyuan  81.00
 */

#include<stdio.h>
struct Student {
    char    id[5];      //定为4会溢出，和下一个元素name一起输出（没有得到'\0'）
    char    name[20];
    float   score;
}stu[2];

int main()
{
    int i=0, n;
    struct Student tmp;
    for (i=0; i<2; i++){
        scanf("%s %s %f", &stu[i].id, &stu[i].name, &stu[i].score);
    }

    printf("The higher score is:\n");
    i=0;
    if(stu[1].score<stu[0].score) i=0;
    else if (stu[1].score>stu[0].score) i=1;
    else {
        for(i=0;i<2;i++){
            printf("%s %s %6.2f\n",stu[i].id, stu[i].name, stu[i].score);
        }
        return 0;
    }
    printf("%s %s %6.2f",stu[i].id, stu[i].name, stu[i].score);

    return 0;
}