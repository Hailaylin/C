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
//#include<algorithm>
//#include<iostream>
/*
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}
*/
#include<stdio.h>
#define N 210
int main()
{
    int i,j,SwapTemp;
    float StuScore[N];

    for(i=0;i<N;i++)
    {
        scanf("%f",&StuScore[i]);
    }

    //sort(StuScore,StuScore+N,compare);
    
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(StuScore[j]<StuScore[j+1])
            {
                SwapTemp=StuScore[j];
                StuScore[j]=StuScore[j+1];
                StuScore[j+1]=SwapTemp;
            }
        }
    }
    
    for(i=0;i<N;i++)
    {
        
        printf("%6.1f",StuScore[i]);
        /*if(i%10==0)*/if((i+1)%10==0) printf("\n"); // if(i%10==0&&i!=0)
    }

    return 0;
}

