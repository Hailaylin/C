#include<stdio.h>
int main()
{
    int a=012;
    int b=0x1f;
    int sum=a+b;
    printf("a=%d,b=%d,sum16=%x,sum8=%o\n",a,b,sum,sum);
    return 0;
}