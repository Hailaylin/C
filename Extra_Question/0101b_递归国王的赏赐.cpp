/**
 * @file 0101b_递归国王的赏赐.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-02
 * 
 * @copyright Copyright (c) 2020
 * 题号：0101b        题目:国王的赏赐（递归函数）        得分：0  
  
作业提交截止时间：2024/10/19 0:00:00	 
 	
题目内容：
    古代印度的一位国王为了奖赏发明国际象棋的宰相，问他要什么赏赐。聪明的宰相说，“我所要的从一粒大米（没错，是１粒，不是１两或１斤）开始。在这个有６４格的棋盘上，第一格里放１粒大米，第二格里放２粒，第三格里放４粒，即每下一格粒数加倍，……，如此下去，一直放满到棋盘 上的６４格。这就是我所要的赏赐。”
   请你计算一下宰相所要的赏赐的大米粒数，并估算大致有多少万吨（假设100粒大米的重量约为2.3克）。
   据国家统计局网站消息，国家统计局对全国31个省(区、市)农业生产经营户的抽样调查和农业生产经营单位的全面统计显示，2016年，全国粮食总产量61623.9万吨（12324.8亿斤）。

第一行输出大米粒数，第二行输出约多少万吨（取0位小数）。
请使用递归函数计算。
 */

#include<stdio.h>
#include<math.h>
#define  llongu unsigned long long

 unsigned long long count(int n){
    unsigned long long ge(int n);
    if (n==1) return ge(1);
    if (n>=2) return (count(n-1)+ge(n));
}

unsigned long long ge(int n)
{
    unsigned long long sum;
    if (n==1) return 1;
    else return ge(n-1)*2;
}

int main(){
    unsigned long long sum=0;
    unsigned long long count(int n);
    sum=count(64);
    double dun;
    dun=sum*2.3/100/1000/1000/10000;
    printf("%llu\n%.0lf",sum,dun);
    return 0;
}


/**
 * @brief     unsigned long long s=1;
    int ge;

    for(ge=1;ge<=64;ge++){
        sum+=s;
        s=s<<2;
    }
 * 
 */