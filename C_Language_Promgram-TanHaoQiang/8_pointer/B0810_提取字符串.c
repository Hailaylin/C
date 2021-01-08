/**
 * @file B0810_提取字符串.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-08
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 	题号：B0801        题目:提取字符串        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
输入一个字符串，将其中的大写英文字母与数字提取出来，构成一个新的字符串并输出。
将新的字符串逆序存放，并输出。
void extract(char *p1, char *p2); //从字符串p1中提取大写英文字母与数字组成字符串p2
void reverse(char *p); //字符串逆序存放
例：
（1）输入：You are 250. AAA bb
输出：
Y250AAA
AAA052Y

 请注意，main()函数必须按如下所示编写：
int main()
{
    char s1[81],s2[81];
    void extract(char *p1, char *p2);
    void reverse(char *p);
    
    gets(s1);
    extract(s1,s2);
    puts(s2);
    reverse(s2);
    puts(s2);
    
}

 */

#include<stdio.h>
#include<ctype.h>
#include<string.h>

void extract(char *p1, char *p2)
{
    int i, j;
    for(i=0,j=0;*(p1+i)!='\0';i++){
        if(isdigit(*(p1+i))||isupper(*(p1+i))){
            *(p2+j++)=*(p1+i);
        }
    }
    *(p2+j)='\0';
}
/*      效率低下的算法
void reverse(char *p)
{
    int i, j;
    char temp[81];
    int len=strlen(p);
    for(i=len-1,j=0; i>=0 ;i--){    //常错i>=0 写成i<=0 ;分清楚。
        *(temp+j++)=*(p+i);
    }
    *(temp+j)='\0';
    for(i=0;i<len;i++){
        *(p+i)=*(temp+i);
    }
    *(p+i+1)='\0';
}
*/
void reverse(char *p)
{
    int i, len = strlen(p);
    for ( i = 0 ; i < len / 2 ; i++ ){
        char temp = *(p+i);
        *(p+i) = *(p+len-i-1);
        *(p+len-i-1) = temp;
    }
}

int main()
{
    char s1[81],s2[81];
    void extract(char *p1, char *p2);
    void reverse(char *p);
    
    gets(s1);
    extract(s1,s2);
    puts(s2);
    reverse(s2);
    puts(s2);
    
}