/**
 * @file L1011_文件信息复制.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-15
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *from, *to;
    char ch, ffromN[20], ftoN[20];
    puts("请输入要打开的文件名(复制来源);复制去向:");
    scanf("%s%s", ffromN, ftoN);
    if ( (from = fopen(ffromN, "r")) == NULL || (to = fopen(ftoN, "w")) == NULL){
        puts("无法打开文件!\n");
        exit(0);
    }
    while ( (ch = fgetc(from)) && !feof(from)){
        fputc(ch, to);
        putchar(ch);
    }
    putchar(10);
    fclose(from);
    fclose(to);
    return 0;
}