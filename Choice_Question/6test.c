#include<stdio.h>

void fun()
{
    static int a[2][2];
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(*a+i));
    }
    
}

int main()
{
    fun();
    return 0;
}

