#include<stdio.h>
int main()
{
    int isPrime(int xxx);
    int n;

    do
    {
        //printf("Please input a number n(n>=2):");
        scanf("%d",&n);    
    }while(n<2);
    
    if(isPrime(n)) 
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    } 
    
    return 0;
}

int isPrime(int xxx)
{
    int i;
    for(i=2;i<=xxx/2;i++)
    {
        if(xxx%i==0) return 0;
    }
    return 1;
}