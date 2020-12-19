/**
 * @file 0310_尝试printf格式输出.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-18
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai 
 */

//*要单独写注释才有这种颜色……

#include<stdio.h>
#include<math.h>
int main()
{
    char ch = 'A'+'6'-'3';
    char str[20]="I love StarDust!";
    printf("%c,%d\n", ch, ch);
    printf("%-20s\n", str);
    return 0;
}