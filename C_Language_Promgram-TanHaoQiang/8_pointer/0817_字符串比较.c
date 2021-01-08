/**
 * @file 0817_字符串比较.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：0817        题目:字符串比较        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
写一函数，实现两个字符串的比较。当两个字符串相等时，返回0，否则返回第一个不相同的字符的ASCII相减的值。
例：
（1）输入：
abc
ab
输出：99
（2）输入：
abc
abc
输出：0
 请注意，main()函数必须按如下所示编写：
int main()
{
    char str1[81],str2[81];
    int STRCMP(char *p1, char *p2);
    
    int n;
    
    //printf("Please input two strings:\n");
    gets(str1);
    gets(str2);
    
    n=STRCMP(str1,str2);    
    printf("%d\n",n);
    
    return 0;
}
 */

#include<stdio.h>

int STRCMP(char *p1, char *p2){
    int i;
    for(i=0; *(p1+i)!='\0' || *(p2+i)!='\0'; i++){
        if(*(p1+i)!=*(p2+i)) return *(p1+i)-*(p2+i);
    }
}

int main()
{
    char str1[81],str2[81];
    int STRCMP(char *p1, char *p2);
    
    int n;
    
    //printf("Please input two strings:\n");
    gets(str1);
    gets(str2);
    
    n=STRCMP(str1,str2);    
    printf("%d\n",n);
    
    return 0;
}