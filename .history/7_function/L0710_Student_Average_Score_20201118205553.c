/*
	       C语言程序设计	 
题号：L0710        题目:求学生平均成绩        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入5个学生的成绩，计算平均成绩。
注意：成绩的输入和平均成绩的计算请使用数组作形参的函数。
提示：使用 #define N 5
例：
（1）输入：90 90 91 91 90  输出：average=90.40
（2）输入：90 90 100 80 80 输出：average=88.00

*/
/*//尝试函数传递数组名后，改变形参数组元素，是否后改变实参数组元素值
#include<stdio.h>
#define N 10
void average(int array[])
{
    int i;
    for(i=2;i<N+2;i++)
    {
        array[i-2]=i;
    }
}

int main()
{
    int aver[N];
    int i;
    for(i=0;i<N;i++)
    {
        aver[i]=i;
        printf("aver_old[%d]%d\t",i,aver[i]);
    }
    printf("\n");
    average(aver);
    for(i=0;i<N;i++)
    {
        printf("aver_new[%d]%d\t",i,aver[i]);
    }
    return 0;
}
*/

#include<stdio.h>
#define N 5
//n为要求平均值数的个数，array为储存要求平均数的数组
float average(float num,int array[])    
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
    int i,score[N];

    for()
}