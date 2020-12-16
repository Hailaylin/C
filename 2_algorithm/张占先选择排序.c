/**
 * @file 张占先排序.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-16
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>
#define N 10

typedef struct Student{
    int id;         //学号
    float scroe;    //分数
    char name[20];  //姓名
}Stu;


//张占先的排序方法：也是选择法（张式选择法）。选择法是记录下标。+指针
void xianSort(Stu *a, int n){
    for (int i = 0 ; i<n-1 ; i++){                  //趟次
        for (int j = i+1; j<n; j++){
            if ((*(a+i)).scroe < (a+j)->scroe){     //指针的用法
                Stu temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    Stu stu[n],*p=stu;

    for (int i = 0; i < n ; i++){
        scanf("%s%f", stu[i].name, &stu[i].scroe);
    }
    xianSort(stu, n);
    for (int i = 0; i < n ; i++){
        printf("%s %4.2f\n", stu[i].name, stu[i].scroe);
    }

    return 0;
}