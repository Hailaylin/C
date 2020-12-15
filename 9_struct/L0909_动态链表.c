/**
 * @file L0909_动态链表.c
 * @author HailayLin (hailay@qq.com)
 * @brief 尝试建立一个单项动态链表
 * @version 0.1
 * @date 2020-12-15
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 河北工程大学将于下周举办大学生歌手竞赛，来自各个学院的n名同学通过初赛进入到了总决赛。
总决赛共12名评委，评委打分范围为0-10分，可存在0.5分的情况。
每名选手比赛结束后，评委开始打分，该名选手的最后得分=（评委打分之和-最高分-最低分）/10。
最后，按照分数从高到低宣布比赛成绩。
请你为此次竞赛编写一个软件，实现上述功能。
要求：有一定的输出信息：
“现在有请1号选手上场，来自信电学院的李**，他的参赛歌曲为《****》。”
“1号选手比赛完毕，请各位评委开始打分。”
“请各位评委亮分：**** ***** ”
“去掉一个最高分：***，去掉一个最低分：***，1号选手李**的最后分数为***。”
“我宣布，本次大赛最后的成绩为：
第1名，来自信电学院的李***，他演唱的歌曲为《***》，最后得分为**
第2名，来自………………”
注：大家可以考虑使用（1）数组（2）结构体（3）链表等不同方式来实现，试比较这三者之间的优缺点。
做出来的同学请把你的思路录屏发给我。
 */

//用文件输入输出？文件输入
//不用想一步到位，先会用动态链表再说


#include<stdio.h>
#include<stdlib.h>

typedef struct Student{
    int id;
    char name[20];
    char school[40];        //大学里面的学院、系用school
    float score;
    struct Student *next;
} LinkList;

int main()
{
    int n;
    LinkList *stu;
    LinkList *createLinkList(int n);
    void printLinkList(LinkList *list);
    int changeLinkListValue(LinkList *list, int n);
    int delet(LinkList *list, int n);
    int insert(LinkList *list, int n);

    scanf("%d", &n);
    stu = createLinkList(n);
    printLinkList(stu);
    insert(stu, 1);
    printLinkList(stu);

    return 0;
}

/*      创建链表，返回链表首地址    */
LinkList *createLinkList(int n)
{
    LinkList *head=NULL, *node=NULL, *end=NULL;
    int i;
    head = (LinkList *)malloc(sizeof(LinkList));
    end = head;     //不让结尾节点空着……n=0就是起始节点head=end节点?其实是尾部节点end指向了head
    for (i=0; i<n; i++)
    {
        node = (LinkList *)malloc(sizeof(LinkList));     //创建节点
        node->id = i+1;
        printf("请输入选手姓名 分数：");
        scanf("%s%f", node->name, &node->score);   //测试只输入几个……找了半天bug竟然是&……无语了
        end->next = node;
        end = node;
    }
    end->next = NULL;
    return head;
}

/*      遍历输出链表值  */
void printLinkList(LinkList *list)
{
    while (list->next != NULL)
    {
        list = list->next;
        printf("stu.id=%d, stu.name=%s, stu.score=%.2f\n", list->id, list->name, list->score);
    }
}

/*      修改链表的值,成功返回1    */
int changeLinkListValue(LinkList *list, int n)
{
    int i;
    for (i=0; i < n && list->next != NULL ; i++)
    {
        list = list->next;
    }
    if (list != NULL){
        printf("请输入要更改的值,名字 分数:");
        scanf("%s%f", list->name, &list->score);
        return 1;
    }
    else{
        puts("节点不存在!\n");
        return 0;
    }
}

/*      删除节点，成功返回1     */
int delet(LinkList *list, int n)
{
    LinkList *first, *second;
    second = list;
    for (int i = 0 ; i < n && second->next != NULL; i++){
        first = second;
        second = second->next;
    }
    if (list != NULL){
        first->next = second->next;
        free(second);
        return 1;
    }
    else{
        puts("节点不存在!\n");
        return 0;
    }
}

/*      插入节点    */
int insert(LinkList *list, int n)
{
    LinkList *first, *second = list, *ins = (LinkList *)calloc(1, sizeof(LinkList));
    printf("请输入要插入的值,名字 分数:");
    scanf("%s%f", ins->name, &ins->score);
    for (int i = 0; i < n && second != NULL; i++){
        first = second;
        second = second->next;
    }
    if (second != NULL){
        ins->next = second->next;
        first->next = ins;
        return 1;
    }
    else {
        puts("节点不存在!\n");
        return 0;
    }
}