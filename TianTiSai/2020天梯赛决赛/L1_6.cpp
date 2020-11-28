/**
 * @file L1_6.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-28
 * 
 * @copyright Copyright (c) 2020
 * L1-6 吃火锅 (15分)
chg.jpg

以上图片来自微信朋友圈：这种天气你有什么破事打电话给我基本没用。但是如果你说“吃火锅”，那就厉害了，我们的故事就开始了。

本题要求你实现一个程序，自动检查你朋友给你发来的信息里有没有 chi1 huo3 guo1。

输入格式：
输入每行给出一句不超过 80 个字符的、以回车结尾的朋友信息，信息为非空字符串，仅包括字母、数字、空格、可见的半角标点符号。当读到某一行只有一个英文句点 . 时，输入结束，此行不算在朋友信息里。

输出格式：
首先在一行中输出朋友信息的总条数。然后对朋友的每一行信息，检查其中是否包含 chi1 huo3 guo1，并且统计这样厉害的信息有多少条。在第二行中首先输出第一次出现 chi1 huo3 guo1 的信息是第几条（从 1 开始计数），然后输出这类信息的总条数，其间以一个空格分隔。题目保证输出的所有数字不超过 100。

如果朋友从头到尾都没提 chi1 huo3 guo1 这个关键词，则在第二行输出一个表情 -_-#。

输入样例 1：
Hello!
are you there?
wantta chi1 huo3 guo1?
that's so li hai le
our story begins from chi1 huo3 guo1 le
.
输出样例 1：
5
3 2
输入样例 2：
Hello!
are you there?
wantta qi huo3 guo1 chi1huo3guo1?
that's so li hai le
our story begins from ci1 huo4 guo2 le
.
输出样例 2：
5
-_-#
 */

#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,end=0,xinxi=0,huoguo=0,first=-1;
    char massage[101][80];
    char c;
    
    for(i=0;i<100;i++)
    {
        cin.getline(massage[i],81,'\n');
        if(massage[i][0]=='.') break;
    }
    printf("%d\n",xinxi=i);

    for(i=0;i<xinxi;i++)
    {
        for(j=0;j<strlen(massage[i]);j++)
        {
            char temp[15];
            //strncpy_s(temp,massage[i],1,1);
            if(massage[i][j]=='c')//匹配火锅
            {
                for(int m=0;m<14;m++)
                {
                    temp[m]=massage[i][j+m];  
                }
                if(strcmp(temp,"chi1 huo3 guo1")==0)
                {
                    huoguo++;
                    if(first==-1) first=i+1;
                    break;
                }
            }

        }
    }
    if(huoguo!=0)
        printf("%d %d\n",first,huoguo);
    else printf("-_-#\n");
    /*
    for(i=0;i<xinxi-1;i++){
        puts(massage[i]);
    }
    */
    return 0;
}
/**
 * @brief 
 *         for(j=0;j<80;j++)
        {
            c=getchar();
            massage[i][j]=c;
            if(c=='\n')
            {
                xinxi++;
                massage[i][j+1]='\0';
                break;
            }
            if(c=='.')
            {
                end=1;
                break;
            }
        }
        if(end==1)
        {
            break;
        }
 */
/*
    for(i=1;i<=100;i++)//1~100条消息
    {
       for(j=0;(massage[i][j]=getchar())!='\n';j++)
        {
            if(massage[i][j]=='.')
            {
                end=1;
                break;
            }
        }
        if(end==1)
        {
            break;
        }
    }*/