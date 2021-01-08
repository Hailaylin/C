/*
 * @Author: HailayLin
 * @Date: 2020-11-24 21:12:41
 * @LastEditTime: 2020-11-24 21:31:29
 * @HailayLin: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C\7_function\B0703_提取字符串.cpp
 */

/**
 * @brief 	题号：B0703        题目:提取字符串        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
输入一个字符串，将其中的小写英文字母与数字提取出来，构成一个新的字符串并输出。
将新的字符串逆序存放，并输出。
void extract(char s1[],char s2[]); //从字符串s1中提取小写英文字母与数字组成字符串s2
void reverse(char str[]); //字符串逆序存放
例：
（1）输入：You are 250. AAA bb
输出：
ouare250bb
bb052erauo

 请注意，main()函数必须按如下所示编写：
int main()
{
    char s1[81],s2[81];
    void extract(char s1[],char s2[]);
    void reverse(char str[]);
    
    gets(s1);
    extract(s1,s2);
    puts(s2);
    reverse(s2);
    puts(s2);
    
}
# ????
 * 
 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
//从字符串s1中提取小写英文字母与数字组成字符串s2
void extract(char s1[],char s2[]){
    int i,j,len;
    len=strlen(s1);
    for(i=0,j=0;i<len;i++)
        if(islower(*(s1+i)) || isdigit(*(s1+i)))
            s2[j++]=s1[i];
    s2[j]='\0';
}
//字符串逆序存放
void reverse(char *str){
    int i=0, len=strlen(str);
    while (*(str+i) && i < len/2){
        char c = *(str+i);
        *(str+i) = *(str+len-1-i);
        *(str+len-1-i++) = c;
    }
}

int main()
{
    char s1[81],s2[81];
    void extract(char s1[],char s2[]);
    void reverse(char str[]);
    
    gets(s1);
    extract(s1,s2);
    puts(s2);
    reverse(s2);
    puts(s2);
    
}