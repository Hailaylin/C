/**
 * @file L1001_从键盘输入到文件.c
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
    FILE *fp;
    char filename[20], ch;
    printf("请输入使用的文件名:");
    scanf("%s", filename);
    fflush(stdin);      //清空缓冲区，清\n
    if ( (fp = fopen(filename, "w") ) == NULL)
    {
        puts("不能打开文件!\n");
        exit(0);
    }
    printf("请输入要存放在文件的字符串(以#结束):");
    ch = getchar();
    while (ch != '#'){
        fputc(ch, fp);
        putchar(ch);
        ch = getchar();
    }
    fclose(fp);
    putchar('\n');
    return 0;
}