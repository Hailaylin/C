/**
 * @file my_选择排序.c
 * @author HailayLin (hailay@qq.com)
 * @brief 考试前自己测试
 * @version 0.1 先不用可变参数类型
 * @date 2020-12-28
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>
#define NUM 5

void chooseSort (int *arr , int num)
{
    int temp;
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

void bubbleSort(int *arr, int num){
    int i, j;
    int temp;
    for (i=0; i<num-1; i++){            //趟次
        for (j=0; j<num-i-1; j++){      //每趟比较次数
            if (*(arr+j+1)<*(arr+j)){     //在j中比较前后元素
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

int main(){
    int a[NUM];
    int i;
    for (i=0; i<NUM; i++){
        scanf("%d", &a[i]);
    }
    bubbleSort(a, NUM);
    for (i=0; i<NUM; i++){
        printf("%4d", a[i]);
    }
    return 0;
}