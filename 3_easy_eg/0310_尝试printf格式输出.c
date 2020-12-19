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
    long y=-43456;
    printf("%8x\n", 23456);
    printf("%#8x\n", 23456);    //! "#"输出十六进制的前导符0x
    printf("%d\n", (int)(a+y)); //! 类型转换直接截断
    printf("y=%-8ld\n", y);
    printf("y=%-08ld\n", y);
    printf("y=%08ld\n", y);
    printf("y=%+8ld\n", y);     //! +是右对齐？！

    char ch = '\123';              //! 超了？
    printf("%c\n", ch);

    return 0;
}