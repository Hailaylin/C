/**
 * @file 0809a_指针二维数组尝试.cpp
 * @author your name (you@domain.com)
 * @brief 用好二维数组指针+函数
 * @version 0.1
 * @date 2020-12-05
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>
#define N 5
int main()
{
    int arr[N][N]={{1,2,3,4,5},{6,7,8,9}};
    int *p;
    int (*q)[N];
    void mat_add(int arr[][N]);
    void mat_num(int arr[][N]);

    //p=arr;  //不能直接像一位数组一样等于
    p=&arr[0][0];       //把元素的地址给p
    printf("p=&a[0]=%x=%x arr=%x *p=%x p+1=%x\n",p,&arr[0],arr,*p,p+1);
    printf("p+1=%x *(p+5)=%x\n",p+1,*(p+5));

    q=&arr[0];
    //printf("*q=%d q=%x *(q+1)=%d q+1=%x *(p+1)=%d\n",*q,q,*(q+1),q+1, *(p+1) );
    //output:*q=6422004 q=61fdf4 *(q+1)=6422024 q+1=61fe08*(p+1)=2
    //q=arr;        //两种写法等价
    printf("*q=%d q=%x *(q+1)=%d q+1=%x *(*q+1)=%d\n",*q,q,*(q+1),q+1, *(*q+1) );

    printf("输出数组地址\n");
    mat_add(arr);
    
    printf("输出数组值\n");
    mat_num(arr);

    return 0;
}

void mat_add(int arr[][N]){
    int i,j,n=N;
    for(i=0;arr+i<arr+n;i++){
        for(j=0;arr+j<arr+n;j++){
            printf("%x\t",(*(arr+i)+j));
        }
        printf("\n");
    }
}

void mat_num(int arr[][N]){
    int i,j,n=N;
    for(i=0;arr+i<arr+n;i++){
        for(j=0;arr+j<arr+n;j++){
            printf("%x\t",*(*(arr+i)+j));
        }
        printf("\n");
    }   
}

void mat_fill(int );