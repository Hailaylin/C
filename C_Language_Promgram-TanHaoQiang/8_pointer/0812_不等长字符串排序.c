/**
 * @file 0812_不等长字符串排序.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：0812        题目:不等长字符串排序        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
从键盘上输入5个不等长字符串，对它们进行排序（从小到大）。
用指针数组实现。
例：
（1）输入：
Chen hongyu
Shao Mingchen
Ma jingchao
Zhang shuyu
Wei kaixuan
输出：
 请注意，main()函数必须按如下所示编写：
int main()
{
    void sort(char *s[]);
    void input(char *s[]);
    void output(char *s[]);
    
    char *p[N];
    char str[N][81];
    int i;
    
    for(i=0; i<N; i++)
    {
        p[i]=str[i];
    }
    
    //printf("Please input %d strings:\n",N);
    input(p);
    sort(p);
    printf("After sorting:\n");
    output(p);
    
    return 0;
}
 */
#include<stdio.h>
#include<string.h>
#define N 5

void input(char *s[]){
    int n=N;
    int i;
    for(i=0;i<n;i++){
        gets(s[i]);
    }
}

/*  自己写的output
void output(char *name[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%s\n",name[i]);
    }
}
*/

//课本改进版output
void output(char *s[]){
    int n=N;
    int i=0;
    char *p;
    
    while(i<n){
        p=*(s+i++);
        printf("%s\n",p);
    }
}


void sort(char *s[])
{
    int n=N;
    int i, j, min;
    char *tmp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(strcmp(*(s+min),*(s+j))>0){
                min=j;
            }
        }
        if(min!=i){
            tmp=*(s+i);
            *(s+i)=*(s+min);
            *(s+min)=tmp;
        }
    }
}


int main()
{
    void sort(char *s[]);
    void input(char *s[]);
    void output(char *s[]);
    
    char *p[N];
    char str[N][81];
    int i;
    
    for(i=0; i<N; i++)
    {
        p[i]=str[i];
    }
    
    //printf("Please input %d strings:\n",N);
    input(p);
    sort(p);
    printf("After sorting:\n");
    output(p);
    
    return 0;
}