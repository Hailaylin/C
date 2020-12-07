/**
 * @file L0830_动态内存分配.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：L0830        题目:内存动态分配        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
建立动态数组，输入5个学生的成绩，另外用一个函数检查其中有无低于60分的，输出不合格的成绩。（每输出一个成绩后面再加一个空格）
例：
（1）输入：60 70 75 80 58  输出：58
（2）输入：50 70 75 80 58  输出：50 58 
 */

#include<stdio.h>
#include<stdlib.h>
#define N 5
int main()
{
    void check(int *num,int n);
    int *num=(int *)calloc(N,sizeof(int));
    int i;
    for ( i = 0; i < N; i++)
    {
        scanf("%d",(num+i));
    }
    check(num,N);
    free(num);
    return 0;
}

void check(int *num,int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        if (*(num+i)<60)
        {
            printf("%d ",*(num+i));
        }
    }
}