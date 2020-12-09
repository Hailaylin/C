/**
 * @file L0903_统计投票.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-08
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 	题号：L0903        题目:统计投票        得分：0  
  
作业提交截止时间：2021/1/4 0:00:00	 
 	
题目内容：
有3个候选人（Li Zhang Sun），10个选民投票，每个选民仅且只能投票选一人，要求编一个统计选票的程序，先后输入被选人的名字，最后输出各人得票结果。
按照书上例题的格式进行输出。


 */


#include<stdio.h>
#include<string.h>
#define BallotMax 10

struct Candidate {
    char    name[10];
    int     count;
}man[3]={"Li",0,"Zhang",0,"Sun",0};     //定义结构体数组并且初始化

int main()
{
    char piao_name[20];
    int i, j;

    for (i=0; i < BallotMax; i++){
        scanf("%s", &piao_name);
        for (j=0; j<3; j++){
            if (strcmp(man[j].name, piao_name)==0){
                man[j].count++;
            }
        }
    }

    printf("\nResult:\n");  //别漏了前面的换行符……尽是些阴招
    for (i=0; i < 3; i++){
        printf("%5s:%d\n", man[i].name, man[i].count);
    }
    return 0;
}