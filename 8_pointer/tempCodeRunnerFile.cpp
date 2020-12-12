#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define N 100

int main()
{   //返回指针?返回指向数组的指针？也行吧^\……不存了，直接输出
    void count(char *str);
    char str[N];
    count(str);
    return 0;
}

//代码整洁之道 小胖+Hailay
void count(char *str)
{
    int upper=0, lower=0, space=0, digit=0, others=0;
    //如果第一行是\n就直接输出0,bug.    
    while ( isupper( ( *++str = getchar() )  == '\n' || '\0' ? *str = 0 : *str )  ? ++upper : ( islower(*str) ? ++lower : ( isspace(*str) ? ++space : ( isdigit(*str) ? ++digit : ( *str == '\0' ? 0 : ++others ) ) ) ) ) ;

    printf("upper case:%d,lower case:%d,space:%d,digit:%d,others:%d", upper, lower, space, digit, others);
}