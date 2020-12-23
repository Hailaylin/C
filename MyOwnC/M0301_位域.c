/**
 * @file M0301_位域.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-23
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

//一个表示0~127年龄的结构体，位域变量
#include<stdio.h>

enum sex {boy, girl};
char *strsex[]={"boy", "girl"};

struct {
    unsigned int age :7 ;
    unsigned int sex :1 ;
}Peo;

int main()
{
    Peo.age = 19;
    Peo.sex = boy;
    printf("Peo.age=%3d, sex=%4s, sizeof(Peo)=%d\n", Peo.age, strsex[Peo.sex], sizeof(Peo));

    Peo.age = 127;
    Peo.sex = girl;
    printf("Peo.age=%3d, sex=%4s, sizeof(Peo)=%d\n", Peo.age, *(strsex+Peo.sex), sizeof(Peo));
    return 0;
}