/**
 * @file 0816_字符串提取整数.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-07
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：0816        题目:字符串提取整数        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
输入一个字符串，内有数字和非数字字符，将其中连续的数字作为一个整数，依次存放到数组a中，统计共有多少个整数，并输出这些数（每个数最小宽度为8）。
例：
（1）输入：abc13 3adf ?#3535df35df  输出：      13       3    3535      35
（2）输入：You are 250. 389 89235iowerd82353iewr 输出：     250     389   89235   82353
 */

//提交不对劲，可能不让用atoi，要自己实现一遍

/*
#include<stdio.h>
//#include<stdlib.h>
#include<ctype.h>

#define N 81
int main()
{
    int my_atoi(char *a, int *num);
    int puts_i(int *a, int n);
    int a[N], count;

    char str[N];

    gets(str);          //输入字符串
    count=my_atoi(str, a);    //转化为整形存储到数组
    puts_i(a, count);          //输出数组
    
    return 0;
}

int my_atoi(char *a, int *num){
    int atoi(char *str);
    int i, j=0, num_order=0;
    char tmp[40];    //缓存开大点，怕数字爆数组
    //遍历找数，前后非数字就不存
    for (i=0; *(a+i)!='\0'; i++){
        j=0;
        if (isdigit( *(a+i))){
            while (isdigit( *(a+i+j)))
            {
                *(tmp+j++) = *(a+i+j);
            }
            *(tmp+j) = '\0';
            i+=j;
            //存到num数组,顺带统计找到的整数个数
            *(num+num_order++)=atoi(tmp);
        }
        for (j=0; j<40; j++){
            *(tmp+j) = '\0';
        }
    }
    return num_order;       //返回找到的整数个数
}

//自己实现atoi,就不引用stdlib.h了
int atoi(char *str)
{
    int i;
    int sum = 0;

    for (i = 0; *(str+i) != '\0'; i++)      //为了可读性和美观性，for循环大括号放在下面，让for循环和下面的语句不会混在一起
    {
        sum = sum * 10 + (*(str+i) - '0');
    }
    
    return sum;
}

int puts_i(int *a, int n)
{
    int i;

    for (i=0; i<n; i++)
    {
        printf("%8d", *(a+i));
    }

    return 0;
}

*/

//不用函数实现？？？？？？？难道是ctype不能用？不对啊，之前能用的来着

#include<stdio.h>
#include<string.h>
#define N 81

int main()
{
    int i, j, len, num, m, a[N];
    char str[N], *p = NULL;

    //获取字符串
    gets(str);
    len = strlen(str);

    //判断，存储
    num = 0, j=0;
    for (p = str; p < str + len; p++)
    {
        m = 0; 
        if (*p >= '0' && *p <= '9'){
            m = *p - '0';
            for (i=0; (*(p+i) >= '0' && *(p+i) <= '9'); i++)
            {
                m = m * 10 + *p - '0';
            }
            p+i;
            *(a+j++)=m;
        }
    }

    for (i=0; i<=j; i++)
    {
        printf("%8d", *(a+i));
    }

    return 0;
}