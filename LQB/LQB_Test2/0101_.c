/**
 * @file 0101_.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-10
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * ，到2020年12月10日，计算10902240分钟前是第几天
 */

#include<stdio.h>

int main(){

    int h, d, y, yushu;

    h = 10902240 / 60;
    d = h / 24;
    y = (d -5) / 365;
    yushu =( y - 5) % 365;
    //year = 闰年有 2020 2016 2012 2008 2004 2020
    printf("y=%d, yu=%d\n", y, yushu);
    return 0;
}
