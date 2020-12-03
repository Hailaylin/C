/**
 * @file L0805_输出两个数.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-01
 * 
 * @copyright Copyright (c) 2020
 * 题号：L0805        题目:输入3个整数，按从大到小的顺序排序并输出。        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
练习书上230页（第3版235页）的例题。
例：
（1）输入：1 2 3 输出：3,2,1
（2）输入：1 3 2 输出：3,2,1
（1）输入：3 1 2 输出：3,2,1
 */

#include<stdio.h>

#define N 3

//用指针交换数
void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

//从大到小排序，三个数.交换顺序错了？
void sort3(int *a, int *b, int *c){
    if (*a < *b) swap(a ,b);
    if (*a < *c) swap(a ,c);
    if (*b < *c) swap(b ,c);
}

int main(){
    int num[N];
    int i;
    //输入要排序的N个数
    for (i=0; i<N; i++){
        scanf("%d",&num[i]);
    }
    //排序操作输出
    int *p1, *p2, *p3;
    p1=&num[0], p2=&num[1], p3=&num[2];
    sort3(p1, p2, p3);
    for (i=0; i<N-1; i++){
        printf("%d,",num[i]);
    }
    printf("%d",num[i]);
    return 0;
}