/**
 * @file 0805_报数退圈.c
 * @author HailayLin (hailay@qq.com)
 * @brief 链表写报数退圈
 * @version 0.2
 * @date 2020-12-10
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：0805        题目:报数退圈        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
有n个人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来几号的那位。
从键盘上输入n(n<100)，输出最后剩下人的号。
例：
（1）输入：1 输出：1
（2）输入：2 输出：2
（3）输入：3 输出：2
（4）输入：9 输出：1

 */

#include<stdio.h>
#include<stdlib.h>

typedef struct People{
    int id;
    int num;
    struct People *next;
}Peo;

const int LEN = sizeof(Peo); 

int main()
{
    Peo *create(int n);
    void printList(Peo *head, int n);
    Peo *p;
    int n;
    scanf("%d", &n);
    
    p=create(n);
    printList(p, n);

    return 0;
}
//思路：创建链表，赋值，报数退圈
Peo *baoshu(Peo *head, int n){
    Peo *node = (Peo *)malloc(LEN);

}

//创建链表
Peo *create(int n)
{
    Peo *head=NULL, *node=NULL, *end=NULL;     
    int i;
    head = (Peo *)malloc(LEN);
    end = head;                     //* end指向上一节点，node当前节点

    for (i=0; i<n; i++)
    {
        node = (Peo *)malloc(LEN);
        node->id = i+1;
        node->next = end;
        end = node;
    }

    end->next = NULL;
    return head;
}

//遍历链表，n=输出元素个数
void printList(Peo *head, int n)
{
    int i;
    Peo *p=head;
    for (i=0; i<n && p != NULL; i++)
    {
        printf("%d\n", p->id);
        p = p->next;
    }
}