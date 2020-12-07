/**
 * @file L0826_对例8.25中的学生，找出其中有不及格的课程的学生及其学生号.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：L0826        题目:对例8.25中的学生，找出其中有不及格的课程的学生及其学生号        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
有a个学生，每个学生有b门课程的成绩。找出不及格学生，输出该学生的全部成绩。用指针函数实现。使用274页例题中的数据即可。
输出时每门成绩最小宽度为8，保留2位小数。

输出：
No.2 score:   56.00   89.00   67.00   88.00
No.3 score:   34.00   78.00   90.00   66.00
 请注意，main()函数必须按如下所示编写：
int main()
{
    float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    float *search(float (*p)[4],int n);
    float *search2(float (*p)[4]);
    float *p;
    int i,j;
    
    
    for(i=0; i<3; i++)
    {
        p=search2(score+i);
        if(p==*(score+i))
        {
            printf("No.%d score:",i+1);
            for(j=0; j<4; j++)    
            {
                printf("%8.2f",*(p+j));
            }
            printf("\n");
        }    
    }

    return 0;
}
 */

#include<stdio.h>

float *search2(float (*p)[4]){
    int i;
    for(i=0;i<3;i++){
        if(*(*p+i)<60) return (*p+i);
    }
    return NULL;
}

int main()
{
    float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    float *search(float (*p)[4],int n);
    float *search2(float (*p)[4]);
    float *p;
    int i,j;
    
    for(i=0; i<3; i++)
    {
        p=search2(score+i);
        if(p==*(score+i))
        {
            printf("No.%d score:",i+1);
            for(j=0; j<4; j++)    
            {
                printf("%8.2f",*(p+j));
            }
            printf("\n");
        }    
    }

    return 0;
}