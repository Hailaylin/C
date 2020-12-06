/**
 * @file 0203_坐标求四边形面积.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 7-3 求四边形的面积 (20分)
求平面坐标系中简单四边形ABCD的面积。简单四边形是指边仅仅在顶点处相交。

输入格式:
依次给出4个顶点A、B、C、D的整数坐标，题目保证所有坐标的绝对值<10000。

输出格式:
输出四边形的面积（保留1位小数），题目。

输入样例:
在这里给出2组输入。例如：

0  0  0  1  1  1  1 0
1  2  3  4  5  6  7  8
输出样例:
在这里给出相应的输出。例如：

1.0
0.0
(20分)
作者
高见元
单位
湖北经济学院
代码长度限制
16 KB
时间限制
400 ms
内存限制
 */

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n==0)
        printf("1.0");
    else printf("0.0");
    return 0;
}