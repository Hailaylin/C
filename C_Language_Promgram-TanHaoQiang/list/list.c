/*
 * 
 * 写一个有关链表使用的程序，集中一下学了什么
 * 
 * 
 */
#include<stdio.h>
#include<malloc.h>
#include"libs/list.h"

typedef struct{
    int id;
    int data;
    struct list *next;
}list;


list *create(int num)
{
    //不创建节点的情况
    if (0 == num){
        puts("[Woring] 创建节点0个节点！请检查是否出错。\n");
        return NULL;
    }
    //创建节点。
    int i = 0;
    list *head = malloc(sizeof(list));
    list *node = malloc(sizeof(list));
    node = head;
    do{
        node->id = i;
        list *last = malloc(sizeof(list));
        node->next = last;
        node = last;
    }while (i < num);
    node->next = NULL;
    return head;
}


int output(const list *head, int num)
{
    //输出节点数=0情况
    if (!head){
        puts("[Woring] 要输出的链表为空链表！\n");
        return -1;
    }
    
    //遍历输出节点数据和编号
    list *node = head;
    int i;
    for (i = 0; node != NULL || i < num ; i++){
        printf("node: id = %d, data = %d\n", node->id, node->data);
        node = node ->next;
    }

    //若输出节点数小于输入的num数，报错
    if (i!=num){
        puts("[Woring] 输出节点数小于输入的num数! 请注意列表是否中断。");
        return -2;
    }
    
    //正常退出
    return 0;
}

int main()
{
    list *a;
    int num = 3;
    
    a = create(num);
    output(a, num);

    return 0;
}