/**
 * @file 0201_大西瓜.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-10
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 7-1 大西瓜 (15分)
炎热的夏日，西瓜是解暑的必备之物，我们有理由相信没有人在夏天是不吃西瓜的。可不？侯公子和他的好朋友吕公子便是西瓜的忠实爱好者，今天他们又要去买西瓜啦。他们选择了最大，最成熟的一个，一上秤，重为w千克。他们急急忙忙赶回家分西瓜，但是他们面临着一个难题。

侯公子和吕公子都是偶数的忠实拥护者，这就是为什么他们希望以这样的方式划分西瓜，使两个部分中的每一个重偶数公斤，而同时不必强制两个部分相等。男孩们极度疲倦，想尽快开始用餐，这也就是为什么您应该帮助他们并找出是否可以按照他们想要的方式分割西瓜的原因。可以肯定的是，他们每个人都应该得到正重的一部分，**并且吕公子认为自己是大胃王，理应比侯公子吃的多**。

输入格式:
输入一个正整数，代表西瓜的重量为w千克；

输出格式:
输出有且仅有一行，如果两位公子能够将西瓜分为符合要求的两部分则输出YES，否则输出NO； 【评测用例规模与约定】 对于30%的测试数据，N<=100; 对于全部的测试数据，N<=10000;

输入样例:
在这里给出一组输入。例如：

8
输出样例:
在这里给出相应的输出。例如：

YES
 */

#include<stdio.h>

int main()
{
    int gua, a, b, flag=0;

    scanf("%d", &gua);

    if ( gua <= 4 ) flag=0;
    else if ( gua % 2 == 0)
    {
        flag=1;
    }

    if (flag) printf("YES");
    else printf("NO");
    return 0;
}

    
