/**
 * @file 0801_.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-29
 * 
 * @copyright Copyright (c) 2020
 * 题号：0801        题目:对3个整数进行从大到小排序        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
从键盘上输入3个整数，进行从大到小排序并输出。
输出每个整数后再加一空格进行间隔。
例：
（1）输入：1 2 3 输出：3 2 1
（2）输入：2 3 1  输出：3 2 1
 请注意，main()函数必须按如下所示编写：
int main()
{
    void swap(int *p1, int *p2);
    int n1,n2,n3;
    int *p1,*p2,*p3;
    
    scanf("%d%d%d",&n1,&n2,&n3);
    
    p1=&n1; p2=&n2; p3=&n3; 
    
    if(n1<n2) { swap(p1,p2);}
    if(n1<n3) { swap(&n1,&n3);}
    if(n2<n3) { swap(p2,p3);}
    
    printf("%d %d %d \n",n1,n2,n3);
    
    return 0;
}

 */
#include<stdio.h>
void swap(int *p1, int *p2){
    int tmp;
    tmp=*p1;
    *p1=*p2;
    *p2=tmp;
}

int main()
{
    void swap(int *p1, int *p2);
    int n1,n2,n3;
    int *p1,*p2,*p3;
    
    scanf("%d%d%d",&n1,&n2,&n3);
    
    p1=&n1; p2=&n2; p3=&n3; 
    
    if(n1<n2) { swap(p1,p2);}
    if(n1<n3) { swap(&n1,&n3);}
    if(n2<n3) { swap(p2,p3);}
    
    printf("%d %d %d \n",n1,n2,n3);
    
    return 0;
}