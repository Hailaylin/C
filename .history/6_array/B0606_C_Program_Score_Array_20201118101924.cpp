/*
题号：B0606        题目:C语言程序排序        得分：0  
  
作业提交截止时间：2020/11/18 12:00:00	 
 	
题目内容：
2020年，河北工程大学计算机大类共招生210人，
第一学期期末进行了“C语言程序”的期末考试。
从键盘上输入学生成绩，按从大到小的顺序将成绩排序并输出。
输出时每名学生的成绩最小宽度为6，保留1位小数，每行输出10名学生的成绩。

分析：
    输入210人成绩 lf double StuScore[N] 210
    运算：排序sort
        用冒泡排序
        用选择排序（学习一波）
    输出：for i 每10个换行一个
        %6.1f 

*/
#include<stdio.h>
#include<algorithm>
#include<iostream>
#define N 210

using namespace std;

bool compare(int a,int b)

int main()
{
    int i;
    double StuScore[N];

    for(i=0;i<N;i++)
    {
        scanf("%lf",StuScore[i]);
    }

    sort(StuScore,StuScore+N);

}