#include <stdio.h>
#define FUDGE(y)    2.84+y
#define PR(x)         printf("%d",(int)(x))
#define PRINT1(x)    PR(x);putchar('\n')
int main() { int x=2; PRINT1(FUDGE(5)*x); }