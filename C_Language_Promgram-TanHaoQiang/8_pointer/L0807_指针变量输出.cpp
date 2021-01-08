/**
 * @file L0807_指针变量输出.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-01
 * 
 * @copyright Copyright (c) 2020
 * 	题号：L0807        题目:通过指针变量输出整数数组a的5个元素        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
通过指针变量输出整数数组a的5个元素。#define N 5
从键盘上输入5个整数，按顺序输出，每个元素输出时最小宽度为5。
（第3版 239页）
例：
（1）输入：1 2 3 4 5 输出：    1    2    3    4    5
 */

#include<stdio.h>
#define N 5
int main(){
    int i,num[N];
    //地址输入
    for (i=0; i<N; i++){
        scanf("%d",num+i);
    }
    //指针输出
    int * p;
    for (p=num; p<(num+N) ;p++){
        printf("%5d", *p);
    }
    return 0;
}