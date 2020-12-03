/**
 * @file L0808_数组a中n个数反序.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-01
 * 
 * @copyright Copyright (c) 2020
 * 题号：L0808        题目:将数组a中n个整数按相反顺序存放        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
从键盘上输入6个整数到数组，将它们按相反顺序存放再输出。
按相反顺序存放的函数：void inv(int *x, int n); 
利用： #define N 6
输出时每个元素的最小宽度为6。
例：
（1）输入：1 2 3 4 5 6  输出：     6     5     4     3     2     1
（2）输入：3 2 1 6 5 4  输出：    4     5     6     1     2     3

 */

#include<stdio.h>

#define N 6

//用指针交换数
/*void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
*/
//指针交换数(easier way)
void swap(int *a, int *b){
    int tmp;
    tmp=*a,*a=*b,*b=tmp;
}

//交换头尾数（偶次个数组元素适用）
/*void inv(int *x, int n){
    int i,j,m;
    m = (n-1) / 2;
    for (i=0; i<=m ;i++){    //执行n+1/2的次数，不然等于没交换
        //交换i和j=n-1-i的数
        j=n-1-i;
        swap((x+i),(x+j));
    }
}
*/
//交换头尾数（指针法）
void inv(int *x, int n){
    int *p,*q,tmp;
    for(p=x,q=x+n-1;p<q;p++,q--){
        swap(p,q);
    }
}

/*   输入n个数的整形数组    */
void inputi(int *arr, int n){
    int *p;
    for (p=arr; p<(arr+n); p++){
        scanf("%d",p);
    }
}

/*  输出n个数的整型数组     */
void outputi(int *arr, int n){
    int *p;
    for(p=arr;p<(arr+n);p++){   //如果这里的arr改成p，那么就会无限循环，因为p++，自己回改变，永远达不到终止条件
        printf("%6d",*p);
    }
}

int main(){
    int num[N];
    inputi(num,N);
    inv(num,N);
    outputi(num,N);
    return 0;
}