/**
 * @file 国王的赏赐_循环.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-02
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>

int main(){
    unsigned long long sum=0;
    unsigned long long s=1;
    int ge;

    for(ge=1;ge<=64;ge++){
        sum+=s;
        s=s<<1;
    }
    double dun;
    dun=sum*2.3/100/1000/1000/10000;
    printf("%llu\n%.0lf",sum,dun);
    return 0;
}