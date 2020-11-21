/*


*/

#include<stdio.h>
long long f(int x)
{
    if(x==1) return 1;
    else if (x==2) return 1;
    else return f(x-1)+f(x-2);
}
int main()
{
    printf("%lld",f(10));
}