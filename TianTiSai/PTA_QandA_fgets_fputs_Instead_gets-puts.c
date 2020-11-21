#include<stdio.h>
#define N 100
int main()
{
    char str[N];
    int i;

    fgets(str,N,stdin);     //第一个放数组名；第二个数组大小，第三个stdin
    fputs(str,stdout);      //第一个数组名，第二个stdout,从键盘上输入输出

    return 0;
}