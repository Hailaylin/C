#include<stdio.h>
#include<stdlib.h>
typedef struct players
{
    char name[30];
    char faculty[30];
    char song[60];
    double point[12];
    double aver;
    struct players *next;
}player;

player *creat(int n)
{
    player *head,*node,*end;
    head=(player *)malloc(sizeof(player));
    end=head;
    for (int i = 0; i < n; i++)
    {
        node=(player *)malloc(sizeof(player));
        scanf("%s%s%s",node->name,node->faculty,node->song);
        end->next=node;
        end=node;
    }
    end->next=NULL;
    return head;
}

void people(player *x)
{
    static int i=1;
    double max,min;
    printf("现在有请%d号选手上场，来自%s学院的%s，他的参赛歌曲为《%s》。\n",i,&x->faculty,&x->name,&x->song);
    scanf("\n");
    printf("%d号选手比赛完毕，请各位评委开始打分。\n",i);
    for (int i = 0; i < 12; i++)
    {
        scanf("%lf",&x->point[i]);
    }
    max=x->point[0];
    min=x->point[0];
    printf("请各位评委亮分\n");
    for (int i = 0; i < 12; i++)
    {
        if (max<x->point[i])
        {
            max=x->point[i];
        }
        if (min>x->point[i])
        {
            min=x->point[i];
        }
        x->aver+=x->point[i];
        printf("%5.1lf",x->point[i]);
    }
    x->aver=(x->aver-max-min)/10;
    printf("\n");
    printf("去掉一个最高分%lf，去掉一个最低分%lf,%d号选手的最终分数为%5.1lf。",max,min,i++,x->aver);
    return ;
}

void sort(void *a,void *b)
{

}

void songmatch()
{
    int num;
    scanf("%d",&num);
    player *h=creat(num);
    
    while (h->next!=NULL)
    {
        h=h->next;
        people(h);
    }
    //链表排序
    
    
    
    printf("我宣布，本次大赛最后的成绩为\n");

    
    return ;
}