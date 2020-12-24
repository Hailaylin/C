#include<stdio.h>
int main()
{   
    char a[] = "morning", t;
    int i, j = 0;
    for (i=1; i<7; i++)
        if (a[j] < a[i]) j = i;//* 记录ASCII值最大的字符元素下标
    t = a[j];                  //* 找到是啥？ j=2, a[2]='r'
    a[j] = a[7];               //* a[7]是'\0'！！！！！！
    a[7] = a[j];               //* 0~6 7个元素，装完moring
    puts(a);
}

#include<stdio.h>
          main()
          { char a[ ]=”morning”,t;
            int i,j=0;
            for(i=1;i<7;i++)     if(a[j]<a[i]) j=i;
            t=a[j];    a[j]=a[7];
            a[7]=a[j];    puts(a );
           }