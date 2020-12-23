/**
 * @file test.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-23
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>

int main()
{
    int x, y;
    for(y=1;y<10;){
        y=((x=3*y,x+1),x-1);
        printf("%d,%d\n",x,y);
    }
    
    printf("END:x=%d,y=%d",x,y);
    return 0;
}