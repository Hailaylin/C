#include<stdio.h>
#include<string.h>
int main()
{
    char a[81];
    char *p;
    int i,j,len,m=0,num=0;
    int b[81];
    gets(a);
    p=a;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(*(p+i)>='0'&&*(p+i)<='9')
        {
            m=*(p+i)-'0';
            for(j=i+1;j<len;j++)
            {
                if(*(p+j)>='0'&&*(p+j)<='9')
                {
                    m=m*10+*(p+j)-'0';
                    i++;
                }
                else break;
            }
            b[num]=m;
            num++;
        }
        
    }
    for(i=0;i<num;i++)
        printf("%8d",b[i]);
    return 0;
}