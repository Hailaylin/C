/**
 * @file L0814_计算总平均分数以及第n个学生的成绩.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-01
 * 
 * @copyright Copyright (c) 2020
 * 题号：L0814        题目:计算总平均分数以及第n个学生的成绩        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
有一个班，3个学生，各学业4门课，计算计算总平均分数以及第n个学生的成绩。
直接利用书上的数据和程序即可，程序运行结果即书上的运行结果。
 请注意，main()函数必须按如下所示编写：
int main()
{
    void average(float *p,int n);
    void search(float (*p)[4],int n);
    float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    
    average(*score,12);
    search(score,2);
    
    return 0;
}
 */

#include<stdio.h>

int main()
{
    void average(float *p,int n);
    void search(float (*p)[4],int n);
    float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
        
    average(*score,12);
    search(score,2);
    
    return 0;
}