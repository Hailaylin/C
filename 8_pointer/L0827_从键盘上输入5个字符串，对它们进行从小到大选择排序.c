/**
 * @file L0827_从键盘上输入5个字符串，对它们进行从小到大选择排序.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：L0827        题目:从键盘上输入5个字符串，对它们进行从小到大排序（选择法）        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
从键盘上输入5个字符串，对它们进行从小到大排序（选择法）。
例：
（1）输入：
Rose
Lily
Lotus
Plum
Jasmine
输出：
Jasmine
Lily
Lotus
Plum
Rose

 请注意，main()函数必须按如下所示编写：
int main()
{
    void input(char *name[],int n);
    void output(char *name[],int n);
    void sort(char *name[],int n);
    
    char str[N][81];
    char *name[N];
    int i;
    
    for(i=0; i<N; i++)
    {
        name[i]=str[i];
    }
    
    input(name,N);
    sort(name,N);
    output(name,N);
    
    return 0;
}

 */

#include<stdio.h>
#include<string.h>
#define N 5

void input(char *name[],int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%s",name[i]);
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
void output(char *name[],int n){
    int i=0;
    char *p;
    
    while(i<n){
        p=*(name+i++);
        printf("%s\n",p);
    }
}


void sort(char *name[],int n)
{
    int i, j, min;
    char *tmp;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(strcmp(*(name+min),*(name+j))>0){
                min=j;
            }
        }
        if(min!=i){
            tmp=*(name+i);
            *(name+i)=*(name+min);
            *(name+min)=tmp;
        }
    }
}

int main()
{
    void input(char *name[],int n);
    void output(char *name[],int n);
    void sort(char *name[],int n);
    
    char str[N][81];
    char *name[N];
    int i;
    
    for(i=0; i<N; i++)
    {
        name[i]=str[i];
    }
    
    input(name,N);
    sort(name,N);
    output(name,N);
    
    return 0;
}