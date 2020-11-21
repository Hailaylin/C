/*
题号：L0711        题目:用一个函数计算人数不同的班级的平均分        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
有两个班级，分别有5个和10个学生，调用一个average函数，分别求这两个班的平均成绩。
提示：直接利用书上195页(第3版 202页)的数据。

输出：aver1=80.40,aver2=78.20

*/
#include<stdio.h>
//n为要求平均值数的个数，array为储存要求平均数的数组
float average(int num,float array[])    
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
    float score1[5]={98.5,97,91.5,60,55};
    float score2[10]={67.5,89.5,99,69.5,77,89.5,76.5,54,60,99.5};
    float aver1,aver2;
    //  带bug的输出
    //aver1=average(5,score1);
    //aver2=average(10,score2);
    printf("aver1=%.2f,aver2=%.2f\n",average(5,score1),average(10,score2));
    

    /*
    
    */
    /*  完美输出
    aver1=average(5,score1);
    printf("aver1=%.2f,aver2=",aver1);
    aver2=average(10,score2);
    printf("%.2f\n",aver2);
    */
    return 0;
}