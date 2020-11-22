/*
7-2 装睡 (10分)
你永远叫不醒一个装睡的人 —— 但是通过分析一个人的呼吸频率和脉搏，
你可以发现谁在装睡！
医生告诉我们，正常人睡眠时的呼吸频率是每分钟15-20次，脉搏是每分钟50-70次。
下面给定一系列人的呼吸频率与脉搏，请你找出他们中间有可能在装睡的人，即至少一项指标不在正常范围内的人。

输入格式：
输入在第一行给出一个正整数N（≤10）。
随后N行，每行给出一个人的名字（仅由英文字母组成的、长度不超过3个字符的串）、其呼吸频率和脉搏（均为不超过100的正整数）。

输出格式：
按照输入顺序检查每个人，如果其至少一项指标不在正常范围内，则输出其名字，每个名字占一行。

输入样例：
4
Amy 15 70
Tom 14 60
Joe 18 50
Zoe 21 71
输出样例：
Tom
Zoe
*/

#include<stdio.h>
struct Man
{
    char name[10];
    int breath;
    int maibo;
}man[10];

int main()
{
    int i,n;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d",man[i].name,&man[i].breath,&man[i].maibo);
    }

    for(i=0;i<n;i++)
    {
        //printf("%s %d %d\n",man[i].name,man[i].breath,man[i].maibo);
        if( (man[i].breath < 15 || man[i].breath > 20) || ())/* || (man[i].maibo> 70 && man[i].maibo < 50)*/
        {
            printf("%d\n",i);
        }
    }
    return 0;
}