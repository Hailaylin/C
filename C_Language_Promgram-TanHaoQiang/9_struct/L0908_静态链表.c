/**
 * @file L0908_静态链表.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-14
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>

struct Stu{
    int     num;
    float   score;
    struct Stu *next;
};

int main()
{
    struct Stu a, b, c, *head, *p;
    printf("结构体占用字节数 %zd, %zd\n", sizeof(struct Stu), sizeof(a));
    a.num=10101; a.score=89.5;
    b.num=10103; b.score=90;
    c.num=10107; c.score=85;

    head=&a;
    a.next=&b;
    b.next=&c;
    c.next=NULL;

    p=head;

    do{
        printf("%d %5.1f\n", p->num, p->score);
        p=p->next;
    } while (p!=NULL);
    return 0;
}