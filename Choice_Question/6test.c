//下面程序的功能是从键盘输入一行字符，统计其中有多少个单词，单词之间用空格分隔。请选择填空。
#include<stdio.h>
int main()
{ char s[80],c1,c2=' ';
  int i=0,num=0;
  gets(s);
  while(s[i]!='\0')
 { c1=s[i];
    if(i==0) c2=' ';
    else c2=s[i-1];
    if(c1!=' ' && c2==' ') num++;
     i++;
  }
printf("There are %d words.\n",num);
}