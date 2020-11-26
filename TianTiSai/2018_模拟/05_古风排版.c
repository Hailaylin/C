/**
 * @file 05_古风排版.cpp
 * @author HailayLin (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-26
 * 
 * @copyright Copyright (c) 2020
 * 7-5 古风排版 (20分)
中国的古人写文字，是从右向左竖向排版的。本题就请你编写程序，把一段文字按古风排版。

输入格式：
输入在第一行给出一个正整数N（<100），是每一列的字符数。第二行给出一个长度不超过1000的非空字符串，以回车结束。

输出格式：
按古风格式排版给定的字符串，每列N个字符（除了最后一列可能不足N个）。

输入样例：
4
This is a test case
输出样例：
asa T
st ih
e tsi
 ce s
 */

#include<stdio.h>
//#include<iostream>
#include<string.h>
#define MAX 100
//using namespace std;
int main()
{
    int i,j,lie,str_order=0,len;
    char str[MAX],c;
    char output[100][100];
    
    scanf("%d",&lie);
    c=getchar();
    //getline(cin,str);//要string 类型的数组，没学到就不乱用了
    for(i=0;(c=getchar())!='\n';i++)
    {
        str[i]=c;
    }
    len=strlen(str);
    //初始全赋值' '.
    for(i=0;i<MAX;i++)
    {
        for(j=0;j<MAX;j++)
        {
            output[i][j]=' ';
        }
    }
    printf("len=%d,lie=%d len/lie=%d\n",len,lie,len/lie);
    //右对齐存放
    for(i=0;i<=len/lie;i++)
    {
        for(j=0;j<lie;j++)
        {
            output[j][i]=str[str_order++];
        }
        //output[j++][i]='\0';
    }
    //printf("%s",);
    for(i=0;i<=len/lie;i++)
    {
        for(j=0;j<lie;j++)
        {
            putchar(output[i][j]);
        }
        printf("\n");
    }
    return 0;
}