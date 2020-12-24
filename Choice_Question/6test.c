#include<stdio.h>
int main()
{   
 int a[3]={3*0};
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", a[i]);
    }
    
    int i;
    for(i=0;i<3;i++)
      scanf("%d",&a[i]);
    for(i=1;i<3;i++) a[0]=a[0]+a[i];
    printf("%d\n",a[0]);
}