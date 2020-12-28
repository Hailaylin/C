/**
 * @file 7test.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-28
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */
#include<stdio.h>
int main()
{ int k=4,m=1,p; int func(int,int);
 p=func(k,m);printf("%d,",p);
 p=func(k,m);printf("%d\n",p);
}
func(int a,int b)
{ static int m=0,i=2;
  i+=m+1;
  m=i+a+b;
  return(m);
}