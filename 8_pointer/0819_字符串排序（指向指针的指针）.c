/**
 * @file 0819_字符串排序（指向指针的指针）.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：0819        题目:字符串排序（指向指针的指针）        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
输入正整数n（n<20），再输入n个字符串，对它们从大到小排序，然后再输出。
void bubbleSort(char **p,int n);
例：
（1）输入：
5
Li shanya
Shi yan
Wang qingzhu
Li ruishan
Zhao lei
输出：
Ordered strings:
Zhao lei
Wang qingzhu
Shi yan
Li shanya
Li ruishan
 */

#include<stdio.h>
#include<string.h>
#define N 20

void input(char **p,int n){
    int i;
    for(i=0;i<n+1;i++){
        gets(*(p+i));
    }
}


void output(char **p,int n){
    int i;
    for(i=0;i<n;i++){
        puts(*(p+i));
    }
}

void bubbleSort(char **p,int n){
    int i,j;
    char *temp=NULL;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n-i-1;j++){
            if(strcmp(*(p+j),*(p+j+1))>0){
                temp=*(p+j+1);
                *(p+j+1)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
}

int main()
{
    void input(char **p,int n);
    void output(char **p,int n);
    void bubbleSort(char **p,int n);
    
    char str[N][81];
    char *name[N];
    char **p;
    int i;
    int n;

    scanf("%d",&n);

    for(i=0;i<n; i++)
    {
        *(name+i)=str[i];
    }
    p=name;
    
    input(p,n);
    //bubbleSort(p,n);
    output(p,n);

    return 0;
}