/*
题号：L0711        题目:用一个函数计算人数不同的班级的平均分        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
有两个班级，分别有5个和10个学生，调用一个average函数，分别求这两个班的平均成绩。
提示：直接利用书上195页(第3版 202页)的数据。

输出：aver1=80.40,aver2=78.20

*/
#include<stdio.h>
#define N 10
//n为要求平均值数的个数，array为储存要求平均数的数组
float average(int num,int array[])    
{
    int i;
    float sum;
    for(i=0;i<num;i++)
    {
        sum+=array[i];
    }
    return (sum/num);
}

int main()
{
    int i;
    int score1[]={98.5,97,91.5,60,55};
    int score2={67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5};

    printf("aver1=%.2f,aver2=%.2f",average(5,score1),average(10,score2));
    return 0;
}