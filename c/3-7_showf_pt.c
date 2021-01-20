/**
 * @file 3.7_showf_pt.c
 * @author HailayLin (hailay@qq.com)
 * @brief 输出long double a f e
 * @version 0.1
 * @date 2021-01-08
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>
#include<stdlib.h>
int main(){
    float f_a;
    double df_a;
    long double Lf_a=3.7e-7;
    df_a  = 6.55;
    f_a = 6.55;
    printf("float \t %%f = %f, %%a = %a, %%e = %e\n", f_a, f_a, f_a );
    printf("double \t %%f = %f, %%a = %a, %%e = %e\n", df_a, df_a, df_a);
    printf("%.10Lf\n", Lf_a);
    return 0;
}