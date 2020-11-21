/*
题号：B0603        题目:计算学生平均成绩并查找最高成绩        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
有一个班有4个学生，期末考试有5门课进行了考试，老师将这些成绩输入到计算机，
计算每个人平均成绩，并查找平均成绩最高的学生，输出他（她）的序号和平均成绩（最小宽度为7，保留2位小数）。
例：
输入：
90 90 90 90 90
89 89 89 89 89
78 68 89 89 77
90 91 91 92 92
输出：
stu_order=3 科目平均成绩最高的那一位
max=  91.20 %7.2d

分析：
    纵向学生，横向课程 Score[STU][LESSON] 4 5
    for i j 遍历，StuMaxScore[i]+=Score[i][j],在j中求和;i中赋值0?x
    StuOrder=i
    
    for i
    比较，选择最大一个，假定第一个最大，
    判定条件(StuMaxScore[i]>StuMaxScore[i+1]) 交换（整一个交换函数试试？√）
    
*/
#include<stdio.h>
#define STU 4
#define LESSON 5
int main()
{
    int i,j,StuOrder;
    int Score[STU][LESSON],StuMaxScore[STU];

    for(i=0;i<STU;i++)
    {
        for(j<0;j<LESSON;j++)
        {
            scanf("%d",&Score[i][j]);
            StuMaxScore[i]+=Score[i][j];
        }
    }

    for(i=0;i<STU;i++)
    {
        
    }
}
