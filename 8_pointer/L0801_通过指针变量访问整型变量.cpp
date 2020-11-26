 /**
 * @file L0801_通过指针变量访问整型变量.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>
int main()
{
    int a=100,b=10;     //定义a,b
    int *ap,*bp;        //定义关于a和b的指针变量ap,bp
    ap=&a,bp=&b;
    printf("*ap=%d,*bp=%d\n",*ap,*bp);
    return 0;
}