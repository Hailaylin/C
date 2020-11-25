/**
 * @file M0202_cpp_getchar输入数组尝试.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include<iostream>
using namespace std;
int main()
{
    char c,str[81];
    int i=0;
    while((c=getchar())!='\n')
    {
        str[i++]=c;
    }
    str[i]='\0';
    cout<<str;
    return 0;
}