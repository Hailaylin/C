#include<stdio.h>
int main()
{ int a[6],i;
  for(i=1;i<6;i++)
  {  a[i]=9*(i-2+4*(i>3))%5;  printf("%2d",a[i]); }
}
