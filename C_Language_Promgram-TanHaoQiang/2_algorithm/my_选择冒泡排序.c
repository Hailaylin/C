/**
 * @file my_选择排序.c
 * @author HailayLin (hailay@qq.com)
 * @brief 考试前自己测试
 * @version 0.2 可变参数类型，默认升序（从小到大）
 * @date 2020-12-28
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>
#define NUM 5
#define elemType float          //先定义好元素的类型再排序，函数可变返回类型
                                //但是输入输出也要能改才行啊……

void chooseSort (elemType *arr , int num)
{
    elemType temp;
    int i, j, max;

    for (i=0; i<num-1; i++){
        max = i;
        for (j=i+1; j<num; j++){
            if (*(arr+j)>*(arr+max)) max = j;
        }
        if (max!=i){
            temp = *(arr+i);
            *(arr+i) = *(arr+max);
            *(arr+max) = temp;
        }
    }
}

void bubbleSort(elemType *arr, int num){
    int i, j;
    elemType temp;
    for (i=0; i<num-1; i++){            //趟次
        for (j=0; j<num-i-1; j++){      //每趟比较次数
            if (*(arr+j+1)<*(arr+j)){   //在j中比较前后元素
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

int main(){
    elemType a[NUM];
    int i;
    for (i=0; i<NUM; i++){
        scanf("%f", &a[i]);
    }
    bubbleSort(a, NUM);
    for (i=0; i<NUM; i++){
        printf("%8.2f\t", a[i]);
    }
    return 0;
}