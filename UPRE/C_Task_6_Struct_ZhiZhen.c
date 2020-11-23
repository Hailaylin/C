/*
定义一个函数交换结构体变量内容
*/
#include<stdio.h>

struct student {
    char name[10];
    char sex[5];
    char id[15];
};


void swap_struct( struct student *a,struct student *b)
{
    struct student temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{

    struct student std1={"林嘉濠","男","202030701"};
    struct student std2={"林夕玥","女","207230101"};

    printf("Print the firts struct.\n");
    printf("stu1:name=%s,sex=%s,id=%s\n",std1.name,std1.sex,std1.id);
    printf("stu2:name=%s,sex=%s,id=%s\n",std2.name,std2.sex,std2.id);

    swap_struct(&std1,&std2);
    
    printf("Print the second struct.\n");
    printf("2stu1:name=%s,sex=%s,id=%s\n",std1.name,std1.sex,std1.id);
    printf("2stu2:name=%s,sex=%s,id=%s\n",std2.name,std2.sex,std2.id);
    
    return 0;
}