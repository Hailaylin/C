/**
 * @file L1003_fgets.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
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
    FILE *from, *to;
    char str[N], ffromN[20], ftoN[20];
    puts("请输入要打开的文件名(复制来源);复制去向:");
    scanf("%s%s", ffromN, ftoN);
    if ( (from = fopen(ffromN, "r")) == NULL || (to = fopen(ftoN, "w")) == NULL){
        puts("无法打开文件!\n");
        exit(0);
    }
    fgets(str, N, from);
    fputs(str, to);
    puts(str);
    putchar(10);
    fclose(from);
    fclose(to);
    return 0;
}