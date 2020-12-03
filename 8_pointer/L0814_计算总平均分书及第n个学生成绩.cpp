/**
 * @file L0814_计算总平均分书及第n个学生成绩.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-03
 * 
 * @copyright Copyright (c) 2020
 * 	题号：L0814        题目:计算总平均分数以及第n个学生的成绩        得分：0  
  
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
//计算平均成绩
void average(float *p,int n)
{
    float sum=0;
    float *p_end;
    p_end=p+n-1;
    for(;p<=p_end;p++){
        sum+=*(p);
    }
    printf("average=%.2f\nThe score of No.2 are:\n",sum/n);
}
//输出第几个学生的全部成绩
void search(float (*p)[4],int n)
{
    int i;
    //float *lie;
    //lie=*(p+n);
    for(i=0;i<4;i++){
        printf("%.2f ",*(*(p+n)+i));
    }
}

int main()
{
    void average(float *p,int n);
    void search(float (*p)[4],int n);
    float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    
    average(*score,12);
    search(score,2);
    
    return 0;
}