/**
 * @file M_0801_Try_pointer.cpp
 * @author HailayLin (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-26
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>
#define N 10
int main()
{
    int a[N]={1,2,3,4,5,6,7,8,9,10};
    printf("a[N]address=%x\t a[0]=%x a[1]=%x\t a=%x\t",&a[N],&a[0],&a[1],a);
    return 0;
}
