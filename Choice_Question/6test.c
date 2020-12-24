#include<stdio.h>
main()
{char str[]="SSWLIA",c;
 int k;
 for(k=2;(c=str[k])!='\0';k++)
  {switch(c)
   {case 'I':++k;break;
     case 'L':continue;
     default :putchar(c);continue;
    }
  putchar('*');

}
}