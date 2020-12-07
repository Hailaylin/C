/**
 * @file L0825_利用指针函数输出学生信息.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 	题号：L0825        题目:利用指针函数输出学生信息        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
有a个学生，每个学生有b门课程的成绩。要求在用户输入学生序号以后，能输出该学生的全部成绩。用指针函数实现。使用274页例题中的数据即可。
输出时每门成绩最小宽度为8，保留2位小数。
例：
（1）输入：3  输出：   34.00   78.00   90.00   66.00

 请注意，main()函数必须按如下所示编写：
int main()
{
    float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    float *search(float (*p)[4],int n);
    float *p;
    int i,k;
    
    scanf("%d",&k);
    p=search(score,k-1);
    for(i=0; i<4; i++)
    {
        printf("%8.2f",*(p+i));
    }
    printf("\n");
    
    
    return 0;
}

 */

#include<stdio.h>
float *search(float (*p)[4], int n){
    float *pt=NULL;
    pt=*(p+n);
    return pt;
}
int main()
{
    float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    float *search(float (*p)[4],int n);
    float *p;
    int i,k;
    
    scanf("%d",&k);
    p=search(score,k-1);
    for(i=0; i<4; i++)
    {
        printf("%8.2f",*(p+i));
    }
    printf("\n");
    
    
    return 0;
}

