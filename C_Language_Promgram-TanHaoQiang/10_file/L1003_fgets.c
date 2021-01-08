/**
 * @file L1003_fgets.c
 * @author HailayLin (hailay@qq.com)
 * @brief 输入若干字符串排序后输出到文件中
 * @version 0.1
 * @date 2020-12-16
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#define N 81
int main()
{
    FILE *to;
    int n;
    puts("请输入要排序的字符串个数:");
    scanf("%d", &n);
    char *str = (char *)malloc(sizeof(char));
    for (int i = 0; i < n; i++)
    {
        scanf("%s", (str+i));
    }
    
    return 0;
}