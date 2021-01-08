/**
 * @file L0815_在上题的基础上，查找有一门以上课程不及格的学生，输出他们的全部课程的成绩.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-03
 * 
 * @copyright Copyright (c) 2020
 * 题号：L0815        题目:在上题的基础上，查找有一门以上课程不及格的学生，输出他们的全部课程的成绩。        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
输出时最小宽度为7，保留小数位1位，各元素之间不要加空格。

 请注意，main()函数必须按如下所示编写：
int main()
{
    void average(float *p,int n);
    void search(float (*p)[4],int n);
    float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}};
    
    search(score,3);
    
    return 0;
}

 */

#include<stdio.h>

void search(float (*p)[4],int n)
{
    int i,j,flag=0;
    for(i=0;i<n;i++){
        flag=0;
        for(j=0;j<4;j++){
            if(*(*(p+i)+j)<60){
                flag=1;
                break;
            }
        }
        if(flag){
            printf("No.%d fails,his scores are:\n",i+1);
            for(j=0;j<4;j++){
                printf("%7.1f",*(*(p+i)+j));
            }
            printf("\n");
        }
    }
}
int main()
{
    void search(float (*p)[4],int n);
    float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}};
    
    search(score,3);
    
    return 0;
}