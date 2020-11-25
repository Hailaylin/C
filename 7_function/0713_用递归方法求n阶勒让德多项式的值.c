/*
 * @Author: HailayLin
 * @Date: 2020-11-24 18:36:58
 * @LastEditTime: 2020-11-24 20:40:33
 * @HailayLin: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C\7_function\0713_用递归方法求n阶勒让德多项式的值.c
 */

/**
 * @brief 
 * 题号：0713        题目:用递归方法求n阶勒让德多项式的值        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
用递归方法求n阶勒让德多项式的值，递归方式参照书上219页内容。
从键盘上依次输入x与n，输出时保留4位小数。
例：
（1）输入：4 3 输出：2.8333
（2）输入：3.2 0 输入：1.0000
（3）输入：3.2 1 输出：3.2000
（4）输入：3.2 2 输出：2.7000
 * 
 */

#include<stdio.h>

float lerangde(float x,int n)
{
    float pn,pn1,pn2;
    if(n==0) return 1;
    else if(n==1) return x;
    else
    {
        return (((2*n-1)*x-lerangde(x,n-1)-(n-1)*lerangde(x,n-2))/n);
    }
}

int main()
{
    float x,ler;
    int n;
    scanf("%f %d",&x,&n);
    ler=lerangde(x,n);
    printf("%.4f",ler);
    return 0;
}