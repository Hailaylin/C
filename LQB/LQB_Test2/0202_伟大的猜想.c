/**
 * @file 0202_伟大的猜想.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-10
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 7-2 伟大的猜想 (20分)
伟大的数学家DreamGrid曾经提出过这样一个猜想： 每一个正整数都可以表示为质数和合数的和。但是DreamGrid无法验证自己的猜想，这也就是你为什么需要设计出本题的程序。

现在，对于一个给定的正整数N，请你设计一个简单的程序，求解出一个质数与一个合数，使他们的和恰好为N；

需要注意的是：质数是大于1的自然数，不能由两个较小的自然数相乘而形成，显然，大于1的自然数（非质数）称为合数，1既不是质数也不是合数。

Input Specification:
输入包含多个数据，首先在第一行给出一个正整数T（1<=T<=1e5)及案例数量。

对于每个案例，每一行包含一个整数N（1<=N<=1e9)。

Output Specification:
每个案例的输出均占据一行，包含俩个整数，以空格隔开；如果存在多个有效输出，请保证输出的第一个数字在所有可能性中是尽可能小的；如果没有有效答案，请输出-1。

Sample Input:
Write a sample input here. For example:

1
15
Sample Output:
Write the corresponding sample output here. For example:

3 12
 */

//函数思想，大程序分块

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i, n;
    int j, zhi_order=0;
    //n案例数，保存结果的动态数组
    scanf("%d",&n);
    int *num=(int *)calloc(n, sizeof(int));
    int *zhishu=(int *)calloc(n, sizeof(int));      //开的质数空间太小……会出错,如sqrt(n)
    int *heshu=(int *)calloc(n, sizeof(int));       //生成质数有问题
    int *result=(int *)calloc(2*n, sizeof(int));

    void inputi(int *num, int n);
    int  zhishu_find(int *zhishu, int n);
    void zhishu_output(int *zhishu, int n);
    int  heshu_find(int *heshu, int *zhishu, int n);
    void heshu_output(int *heshu, int n);
    void caixiang(int n, int *needCai, int *result, int *zhishu, int *heshu);
    void outputi(int *result, int n);

    //输入要判断的数
    getchar();
    inputi(num, n);
    zhishu_find(zhishu, n);
    heshu_find(heshu, zhishu, n);
    caixiang(n,num,result,zhishu,heshu);
    //输出结果
    outputi(result, n);
    //释放内存
    free(num);
    free(zhishu);
    free(heshu);
    free(result);
    return 0;
}

void inputi(int *num, int n)
{
    int i;

    for (i=0; i<n; i++)
    {
        scanf("%d",(num+i));
    }
}


void outputi(int *result, int n)
{
    int i;
    for (i=0; i<n; i+=2)
    {
        if ( *(result+i) != -1 )
            printf("%d %d\n", *(result+i), *(result+i+1));
        else printf("-1\n");
    }
}

//找质数,能找对了
int zhishu_find(int *zhishu, int n)
{
    int i, j;
    int k = sqrt(n);
    //printf("k=%d\n",k);

    int zhishu_flag=1;          //是否找到质数的标志
    //输入已知素数？
    *(zhishu)=2, *(zhishu+1)=3, *(zhishu+2)=5;
    int zhi_order=3;
    //找质数,从7开始
    for (i=7; i <= n; i++){     //少找一些素数（质数），到k停止
        zhishu_flag=1;
        for (j = 2; j < i; j++) //判断i是不是素数
        {
            if (i % j == 0){
                zhishu_flag = 0;//0表示没找到
                break;
            }
        }
        if (zhishu_flag){
            *(zhishu+zhi_order++)=i;
        }
    }

    return zhi_order;
}

void zhishu_output(int *zhishu, int n)
{
    int i;
    printf("输出质数:");
    for (i=0; i<n; i++)
    {
        if (i % 3 == 0) printf("\n");
        printf("%5d", *(zhishu+i));
    }
    printf("\n");
}

//返回和数个数
int heshu_find(int *heshu, int *zhishu, int n)
{
    int heshu_produce=4, he_order=0, zhi_order=2;   //heshu_produce产生和数,质数初始为5
    while (*(zhishu+zhi_order) != 0)                //只找到最后的素数的前一个
    {
        if (*(zhishu+zhi_order) == heshu_produce){
            zhi_order++; 
        }
        else {
            *(heshu+he_order++)=heshu_produce;
        }
        heshu_produce++;
    }
    return he_order;
}

void heshu_output(int *heshu, int n)
{
    int i;
    printf("输出合数:");
    for (i=0; i<n; i++)
    {
        if (i % 3 == 0) printf("\n");
        printf("%5d", *(heshu+i));
    }
}

void caixiang(int n, int *needCai, int *result, int *zhishu, int *heshu)
{
    int i, find_flag=0;
    int zhishu_order=0, heshu_order=0, result_order=0; 
    for (i=0; i<n; i++) //needCai_order
    {
        find_flag=0;
        //判断需要猜的数是否能为质数与合数和
        for (; zhishu_order < n && *(zhishu+zhishu_order) != 0; zhishu_order++ ){
            for (; heshu_order < n && *(heshu+heshu_order) !=0; heshu_order++){
                if ( *(needCai+i) == *(zhishu+zhishu_order) + *(heshu+heshu_order) )
                {
                    *(result+result_order++) = *(zhishu+zhishu_order);
                    *(result+result_order++) = *(heshu+heshu_order);
                    find_flag=1;
                    break;
                }
            }
            if (find_flag) break;
        }
        if (find_flag==0){
            *(result+result_order++) = -1;
            *(result+result_order++) = 0;   //补0不输出
        }
    }
}