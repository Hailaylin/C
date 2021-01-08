/**
 * @file 0806_求字符串长度.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-03
 * 
 * @copyright Copyright (c) 2020
 * 题号：0806        题目:求字符串长度        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
写一函数，求一个字符串长度。
int length(char *p);

例：
（1）输入：A good medicine tastes bitter. 输出：len=30
（2）输入：An idle youth, a needy age. 输出：len=27
（3）输入：abc 输出：len=3
 请注意，main()函数必须按如下所示编写：
int main()
{
    int length(char *p);
    int len;
    char str[81];
    
    //printf("Please input string:\n");
    gets(str);
    
    len=length(str);
    printf("len=%d\n",len);
    
    return 0;
}
 */

#include<stdio.h>

int length(char *p)
{
    int i;
    for(i=0;p[i]!='\0';i++)
        ;
    return i;
}


int main()
{
    int length(char *p);
    int len;
    char str[81];
    
    //printf("Please input string:\n");
    gets(str);
    
    len=length(str);
    printf("len=%d\n",len);
    
    return 0;
}
