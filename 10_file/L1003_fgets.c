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
    FILE *from, *to;    //记得加个反斜杠
    char str[N], ffromN[81]="D:\\Onedrive\\C\\10_file\\1001c.txt", ftoN[81]="D:\\Onedrive\\C\\10_file\\1003.txt";
    if ( (from = fopen(ffromN, "r")) == NULL || (to = fopen(ftoN, "w")) == NULL){
        puts("无法打开文件!\n");
        exit(0);
    }
    fgets(str, N, from);
    fputs(str, to);
    puts(str);
    fclose(from);
    fclose(to);
    return 0;
}