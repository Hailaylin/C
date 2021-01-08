/**
 * @file L0828_对字符串进行排序（指向指针数据的指针变量）.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：L0828        题目:对字符串进行排序（指向指针数据的指针变量）        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
从键盘上输入5个字符串，对它们进行从小到大排序（选择法）。
使用指向指针数据的指针变量。
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
    void input(char **p,int n);
    void output(char **p,int n);
    void sort(char **p,int n);
    
    char str[N][81];
    char *name[N];
    char **p;
    int i;
    for(i=0;i<N; i++)
    {
        *(name+i)=str[i];
    }
    p=name;
    
    input(p,N);
    sort(p,N);
    output(p,N);

    return 0;
}
 */
#include<stdio.h>
#include<string.h>
#define N 5

void input(char **p,int n){
    int i;
    for(i=0;i<n;i++){
        scanf("%s",*(p+i));
    }
}


void output(char **p,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%s\n",*(p+i));
    }
}

void sort(char **p,int n){
    int i,j,min;
    char *temp=NULL;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++)
            if(strcmp(*(p+min),*(p+j))>0) min=j;
        if(min!=i){
            temp=*(p+min);
            *(p+min)=*(p+i);
            *(p+i)=temp;
        }
    }
}

int main()
{
    void input(char **p,int n);
    void output(char **p,int n);
    void sort(char **p,int n);
    
    char str[N][81];
    char *name[N];
    char **p;
    int i;
    for(i=0;i<N; i++)
    {
        *(name+i)=str[i];
    }
    p=name;
    
    input(p,N);
    sort(p,N);
    output(p,N);

    return 0;
}