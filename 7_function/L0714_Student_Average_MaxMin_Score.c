/*
       C语言程序设计	 
题号：L0714        题目:计算10个学生成绩的平均成绩、最高分、最低分。        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入10个学生的成绩，写一个函数，
当主函数调用此函数后，能求出平均分、最高分和最低分。
例：
（1）输入：89 95 87.5 100 67.5 97 59 84 73 90 输出：max=100.00,min=59.00,average=84.20
*/

#include<stdio.h>

#define N 10

//n个学生，array学生列表，out输出[0]平均分,[1]最高分,[2]最低分
void Stu(int n,float array[],float out[])
{
    int i,o_max=0,o_min=0;
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum+=array[i];
        if(array[i]>array[o_max])
        {
            o_max=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(array[i]<array[o_min])
        {
            o_min=i;
        }
    }
    out[0]=sum/n;
    out[1]=array[o_max];
    out[2]=array[o_min];
}

int main()
{
    int i;
    float StuScore[N],output[3];

    for(i=0;i<N;i++)
    {
        scanf("%f",&StuScore[i]);
    }
    Stu(N,StuScore,output);
    printf("max=%.2f,min=%.2f,average=%.2f",output[1],output[2],output[0]);
    return 0;
}