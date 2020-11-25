/*
       C语言程序设计	 
题号：0705        题目:字符串反序        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入一下字符串，反序存放（用函数实现），输出反序存放后的字符串。
例：
（1）输入：abcde 输出：edcba
（2）输入：I love C. 输出：.C evol I
 请注意，main()函数必须按如下所示编写：
int main()
{
    void inverse(char s[]);
    char str[81];
    
    gets(str);
    inverse(str);
    puts(str); 
    return 0;
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
    void inverse(char s[]);
    char str[81];
    
    gets(str);
    inverse(str);
    puts(str); 
    return 0;
}
//测量输入字符串长度后循环反序输出
void inverse(char s[])
{
    int len,i;
    char tmp[81];           //缓存字符数组
    len=strlen(s);          //测量字符串长度
    strcpy(tmp,s);          //复制字符串数组s到tmp
    for(i=0;i<len;i++)      //循环赋值
    {
        s[i]=tmp[len-i-1];  //注意条件：字符串长度len-i-1(字符串数组从0开始)
    }
}