/**
 * @file 选择排序模板.c
 * @author HailayLin (hailay@qq.com)
 * @brief https://www.runoob.com/w3cnote/selection-sort.html
 * @version 0.1
 * @date 2020-12-08
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */
#include<stdio.h>
#define N 81

void swap(int *a,int *b) //交換兩個變數
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int len)
{
    int i,j;

    for (i = 0 ; i < len - 1 ; i++)
    {
        int min = i;
        for (j = i + 1; j < len; j++)     //走訪未排序的元素
                if (arr[j] < arr[min])    //找到目前最小值
                        min = j;    //紀錄最小值
        swap(&arr[min], &arr[i]);    //做交換
    }
}

int main(){
    int n, i;
    int arr[N];
    
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d",(arr+i));
    }

    selection_sort(arr, n);

    for(i=0;i<n;i++){
        printf("%5d",*(arr+i));
    }

    return 0;
}