/**
 * @file 0204.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 7-4 德才论 (25分)
宋代史学家司马光在《资治通鉴》中有一段著名的“德才论”：“是故才德全尽谓之圣人，才德兼亡谓之愚人，德胜才谓之君子，才胜德谓之小人。凡取人之术，苟不得圣人，君子而与之，与其得小人，不若得愚人。”

现给出一批考生的德才分数，请根据司马光的理论给出录取排名。

输入格式：
输入第一行给出 3 个正整数，分别为：N（≤10
​5
​​ ），即考生总数；L（≥60），为录取最低分数线，即德分和才分均不低于 L 的考生才有资格被考虑录取；H（<100），为优先录取线——德分和才分均不低于此线的被定义为“才德全尽”，此类考生按德才总分从高到低排序；才分不到但德分到线的一类考生属于“德胜才”，也按总分排序，但排在第一类考生之后；德才分均低于 H，但是德分不低于才分的考生属于“才德兼亡”但尚有“德胜才”者，按总分排序，但排在第二类考生之后；其他达到最低线 L 的考生也按总分排序，但排在第三类考生之后。

随后 N 行，每行给出一位考生的信息，包括：准考证号、德分、才分，其中准考证号为 8 位整数，德才分为区间 [0, 100] 内的整数。数字间以空格分隔。

输出格式：
输出第一行首先给出达到最低分数线的考生人数 M，随后 M 行，每行按照输入格式输出一位考生的信息，考生按输入中说明的规则从高到低排序。当某类考生中有多人总分相同时，按其德分降序排列；若德分也并列，则按准考证号的升序输出。

输入样例：
14 60 80
10000001 64 90
10000002 90 60
10000011 85 80
10000003 85 80
10000004 80 85
10000005 82 77
10000006 83 76
10000007 90 78
10000008 75 79
10000009 59 90
10000010 88 45
10000012 80 100
10000013 90 99
10000014 66 60
输出样例：
12
10000013 90 99
10000012 80 100
10000003 85 80
10000011 85 80
10000004 80 85
10000007 90 78
10000006 83 76
10000005 82 77
10000002 90 60
10000014 66 60
10000008 75 79
10000001 64 90
(25分)
作者
陈丽
单位
浙江大学
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
 */

#include<iostream>
#include<algorithm>

struct Student
{
    char id[10];
    int  descore;
    int  caiscore;
    int  sumscore;
}stu[10000];

int stu_total, min_score, good_score;
using namespace std;
int main()
{
    
    scanf("%d%d%d",&stu_total,&min_score,&good_score);

    for(int i=0;i<stu_total;i++){
        cin>>stu[i].id>>stu[i].descore>>stu[i].caiscore;
    }
    //遍历找人数？求总分，然后再排序
    int first_luqu_num=0, min_stu_num=stu_total;
    int second_luqu_num=0,third_luqu_num=0,four_luqu_num=0;
    for(int i=0;i<stu_total;i++){
        stu[i].sumscore=stu[i].descore+stu[i].caiscore;
        if(stu[i].descore>=good_score&&stu[i].caiscore>=good_score)
        {
            first_luqu_num++;
        }
        if(stu[i].caiscore < good_score && stu[i].descore >= good_score)
        {
            second_luqu_num++;
        }
        if(stu[i].descore<good_score&&(stu[i].descore>stu[i].caiscore))
        {
            third_luqu_num++;
        }
        if(stu[i].descore<min_score||stu[i].caiscore)
        {
            min_stu_num--;
        }
    }
    four_luqu_num=min_stu_num-first_luqu_num-second_luqu_num-third_luqu_num;
    printf("min_stu_num=%d\nfirst_luqu_num=%d\nsecond_luqu_num%d\nthird_luqu_num=%d\nfour_luqu_num=%d\n",min_stu_num,first_luqu_num,second_luqu_num,third_luqu_num,four_luqu_num);
    sort(stu,stu+stu_total,cmp1);
} // namespace std;
//排序3次，不同分类
int cmp1(struct Student a, struct Student b){
    if((a.descore>=good_score&&a.caiscore>=good_score)&&(b.descore>=good_score&&b.caiscore>=good_score))
    {
        return (a.descore+a.caiscore)-(b.caiscore+b.descore);
    }
}

int cmp(struct Student a, struct Student b){

}