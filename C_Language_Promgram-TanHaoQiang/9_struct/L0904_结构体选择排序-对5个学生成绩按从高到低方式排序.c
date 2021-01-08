/**
 * @file L0904_结构体选择排序-对5个学生成绩按从高到低方式排序.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-08
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 	题号：L0904        题目:对5个学生成绩按从高到低方式排序        得分：0  
  
作业提交截止时间：2021/1/4 0:00:00	 
 	
题目内容：
从键盘上输入5个学生的信息（包括学号、姓名、成绩），要求按照成绩的高低顺序输出各学生的信息。
利用结构体存储学生信息，采用选择法排序。
输出时学生学号的最小宽度为6，姓名的最小宽度为15，成绩的最小宽度为6、保留2位小数（3个信息用逗号间隔）。

struct Student
{
    int num;
    char name[20];
    float score;
};
 */

#include<stdio.h>
#define N 5

typedef struct Student
{
    int     num;        //学号
    char    name[20];   //姓名，字符开大一点也无所谓
    float   score;      //分数
}Stu;

int main()
{
    Stu stu[N], temp;
    int i, j, n, max;

    for (i=0; i<N; i++){
        scanf("%d %s %f", &stu[i].num, &stu[i].name, &stu[i].score);
    }   //小心输入float时,用 %f，而不是%d

    for (i=0; i<N-1; i++){
        max=i;
        for (j=i+1; j<N; j++)
            if (stu[max].score < stu[j].score)
                max=j;
        if(max != i){
            temp = stu[max];
            stu[max] = stu[i];
            stu[i] = temp;
        }
    }

    for (i=0; i<N; i++){
        printf("%6d,%15s,%6.2f\n", stu[i].num, stu[i].name, stu[i].score);
    }

    return 0;
}