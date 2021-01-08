/**
 * @file L0804_改变指针变量的值交换数值.cpp
 * @author HailayLin (you@domain.com)
 * @brief 如题目，示范不能交换指针变量的值达到交换用函数返回两个地址，形参和实参……
 * @version 0.1
 * @date 2020-11-26
 * 
 * @copyright Copyright (c) 2020
 *  
 */

#include<stdio.h>
void swap_p(int *pa,int *pb){
    int *temp;
    temp=pa;
    pa=pb;
    pb=temp;
}
int main()
{
    void swap_p(int *pa,int *pb);
    int a,b;
    int *pa,*pb;
    scanf("%d,%d",&a,&b);
    pa=&a,pb=&b;
    if(a<b)
    {
        swap_p(pa,pb);//swap_p(&a,&b);
    }
    printf("max=%d,min=%d\n",a,b);
    return 0;
}

