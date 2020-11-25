/*
	       C语言程序设计	 
题号：0706        题目:字符串连接（函数实现）        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入两个字符串，将它们连接后再输出。
不允许使用strcat与strcpy函数。
例：
（1）输入：
abc
123
输出：abc123
（2）输入：
Have
 a brilliant day!
输出：Have a brilliant day!
 请注意，main()函数必须按如下所示编写：
int main()
{
    void link(char str1[],char str2[], char str3[]) ;
    char str1[81];
    char str2[81];
    char str3[162];
    
    gets(str1);
    gets(str2); 
    link(str1,str2,str3); //将字符串str1与字符串str2连接成 str3
    puts(str3); 
    return 0;
}


请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
*/

#include<stdio.h>
#include<string.h>
void link(char str1[],char str2[], char str3[])
{
    int i,j,len1,len2;
    len1=strlen(str1);
    len2=strlen(str2);
    //测量长度，把str1,str2接到str3上
    //先复制str1到str3
    for(i=0;i<len1;i++)
    {
        str3[i]=str1[i];
    }
    //再复制str2到str3
    //初始化j
    j=0;
    for(i=len1;i<len1+len2;i++)
    {
        str3[i]=str2[j++];
    }
    str3[len1+len2]='\0';
}

int main()
{
    void link(char str1[],char str2[], char str3[]) ;
    char str1[81];
    char str2[81];
    char str3[162];
    
    gets(str1);
    gets(str2); 
    link(str1,str2,str3); //将字符串str1与字符串str2连接成 str3
    puts(str3); 
    return 0;
}