/*
7-2 谁是赢家 (10分)
某电视台的娱乐节目有个表演评审环节，每次安排两位艺人表演，他们的胜负由观众投票和 3 名评委投票两部分共同决定。
规则为：如果一位艺人的观众票数高，且得到至少 1 名评委的认可，该艺人就胜出；
或艺人的观众票数低，但得到全部评委的认可，也可以胜出。
节目保证投票的观众人数为奇数，所以不存在平票的情况。本题就请你用程序判断谁是赢家。

输入格式：
输入第一行给出 2 个不超过 1000 的正整数 Pa 和 Pb，分别是艺人 a 和艺人 b 得到的观众票数。
题目保证这两个数字不相等。随后第二行给出 3 名评委的投票结果。数字 0 代表投票给 a，数字 1 代表投票给 b，其间以一个空格分隔。

输出格式：
按以下格式输出赢家：

The winner is x: P1 + P2
其中 x 是代表赢家的字母，P1 是赢家得到的观众票数，P2 是赢家得到的评委票数。

输入样例：
327 129
1 0 1
输出样例：
The winner is a: 327 + 1
鸣谢安阳师范学院软件学院李栋同学完善测试数据。

分析：输入数据，比对观众数据：
\

    全部评委投票，则Sum_PingWei=3胜出
    
*/
#include<stdio.h>
int main()
{
    int i,P[2],PingWei[3];
    int Sum_PingWei[2]={0,0};
    
    scanf("%d%d",&P[0],&P[1]);
    for(i=0;i<3;i++)
    {
        scanf("%d",&PingWei[i]);
        if(PingWei==0)
        {
            Sum_PingWei[0]++;
        }
        else Sum_PingWei[1]++;
    }

    if(Sum_PingWei==3)
    {
        printf("The winner is a: %d + 3",P[1]);
    }
    else if (Sum_PingWei==0)
    {
        printf("The winner is a: %d + 3",P[0]);
    }
    else
    {
        if(P[0]>P[1])
        {
            printf("The winner is a: %d + %d",P[0],Sum_PingWei);
        }
        else
        {
            printf("The winner is a: %d + %d",P[1],Sum_PingWei);
        }
    }
    return 0;   
}