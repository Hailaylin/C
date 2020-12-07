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

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#define N 81
int main()
{
    int my_atoi(char *a);
    char a[N];
    gets(a);
    my_atoi(a);
    return 0;
}

int my_atoi(char *a){
    int i,j=0;
    char tmp[10];
    //遍历找数，前后非数字就不存
    for(i=0;*(a+i)!='\0';i++){
        j=0;
        if(isdigit(*(a+i))){
            while (isdigit(*(a+i+j)))
            {
                *(tmp+j++)=*(a+i+j);
            }
            i+=j;
            printf("%8d",atoi(tmp));
        }
        for(j=0;j<10;j++){
            *(tmp+j)='\0';
        }
    }
    return 0;       //找不到返回0
}