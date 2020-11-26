/**
 * @file L0803_交换函数用指针.c.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-26
 * 
 * @copyright Copyright (c) 2020
 *  交换两个整数，指交换值 
 */
#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b;
    printf("[INFO] swap:请输入两个整数:");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d,%d",a,b);
    return 0;
}