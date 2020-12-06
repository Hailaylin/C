/**
 * @file 0807_截取字符串.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-03
 * 
 * @copyright Copyright (c) 2020
 * 题号：0807        题目:截取字符串        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
输入一个字符串，写一函数，将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。
void copystr(char *p1, char *p2, int m);
例：
（1）输入：
abc
5
输出：Input error!
（2）输入：
Nothing is impossible to a willing heart.
9
输出：is impossible to a willing heart.

 请注意，main()函数必须按如下所示编写：
int main()
{
    void copystr(char *p1, char *p2, int m);
    char str1[81],str2[81];
    int m;
    
    //printf("Please input string:\n");
    gets(str1);
    
    //printf("Please input the begin location of the character:\n ");
    scanf("%d",&m);
    
    if(strlen(str1)<m)
    {
        printf("Input error!");
    }
    else
    {
        copystr(str1,str2,m);
        printf("%s\n",str2);
    }

    return 0;
}
 */

#include<stdio.h>
#include<string.h>
//把p1的m位后的字符给p2
void copystr(char *p1, char *p2, int m){
    int i,j;
    for(i=m-1,j=0;p1[i]!='\0';i++){
        p2[j++]=p1[i];
    }
    p2[j]='\0';
}

int main()
{
    void copystr(char *p1, char *p2, int m);
    char str1[81],str2[81];
    int m;
    
    //printf("Please input string:\n");
    gets(str1);
    
    //printf("Please input the begin location of the character:\n ");
    scanf("%d",&m);
    
    if(strlen(str1)<m)
    {
        printf("Input error!");
    }
    else
    {
        copystr(str1,str2,m);
        printf("%s\n",str2);
    }

    return 0;
}