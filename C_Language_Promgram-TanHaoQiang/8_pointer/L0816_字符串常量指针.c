/**
 * @file L0816_字符串常量指针.c
 * @author your name (you@domain.com)
 * @brief 用各种方法存取字符串 
 *        谭浩强书p254
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>
#define N 30
int main(){
    char str_old[]="I`m super man?\n";
    char *str_p="Yes, I am.\n";

    printf("str_old_add=%x, value=%s",&str_old,str_old);
    printf("str_p_add=%x, value=%s",str_p,str_p);
    printf("str_p[3]=%c=*(str_p+3)=%c\n",str_p[3],*(str_p+3));
    return 0;
}