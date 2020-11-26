/**
 * @file L0802_指针交换数求两数排序.cpp
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
    int a,b;
    int *p1,*p2,*temp;
    printf("[INFO] 请输入两个数，空格间隔；从大到小输出a,b:\n");
    scanf("%d%d",&a,&b);
    p1=&a,p2=&b;
    if(a<b)
    {
        temp=p2;
        p2=p1;
        p1=temp;
    }
    printf("max=%d,min=%d\n",*p1,*p2);
    return 0;
}