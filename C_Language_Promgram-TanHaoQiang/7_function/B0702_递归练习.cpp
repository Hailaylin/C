/*
 * @Author: HailayLin
 * @Date: 2020-11-24 20:41:42
 * @LastEditTime: 2020-11-24 21:09:52
 * @name: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C\7_function\B0702_递归练习.cpp
 */

#include<stdio.h>

float f(float n,float x)
{
    if(n==0) return x+1.1;
    else if(n==1) return x*2.3;
    else{
        return (f(n-1,x)+2*f(n-2,x));
    }
}

int main()
{
    float x,n,output;
    scanf("%f,%f",&n,&x);
    output=f(n,x);
    printf("%.2f",output);
    return 0;
}