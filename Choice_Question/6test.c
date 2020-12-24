#include<stdio.h>
#include<string.h>
int main()
{ char a[80]="AB",b[80]="LMNP";
   int i=0;
   strcat(a,b);
   puts(a);
   puts(b);
   while(a[i++]!='\0'){
       printf("i=%d, a[%d]=%c, b[%d]=%c\n", i, i, a[i], i, b[i]);
       b[i]=a[i];
   }
   puts(b);
}