#include<stdio.h>
#include<string.h>
int main()
{
    char *str = "\ta\017bc";
    char c1 = 45;
    char c2 = '\x2d';
    char c3 = '\055';
    int len = strlen(str);
    printf("%s, len=%d, c1=%c, c2=%c, c3=%c\n", str, len, c1, c2, c3);
    return 0;
}