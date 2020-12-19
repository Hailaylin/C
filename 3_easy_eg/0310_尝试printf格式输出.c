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
int main()
{
    int a=7;
    float y=4.7;
    printf("%8x\n", 23456);
    printf("%#8x\n", 23456); //! "#"输出十六进制的前导符0x
    printf("%d", (int)(a+y));//! 类型转换直接截断
    return 0;
}