/**
 * @file 0809_泛式编程-矩阵倒置.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-04
 * 
 * @copyright Copyright (c) 2020
 * 题号：0809        题目:n*n整型矩阵转置        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
从键盘上输入正整数n(n<20)，再输入n*n矩阵的各个元素。
输出原矩阵，进行矩阵转置，再输出转置后的矩阵。
输出时每个元素最小宽度为6。
例：
（1）输入：
3
1 2 3 4 5 6 7 8 9
输出：
     1     2     3
          4     5     6
          7     8     9
The result is:
     1     4     7
     2     5     8
     3     6     9

 */

#include<stdio.h>
#define Max 20
int main()
{
    int matrix[Max][Max];
    int i,j,border;

    void scanfMat(int (*arr)[Max],int n);
    void printfMat(int (*arr)[Max],int n);
    void inv(int (*arr)[Max],int n);
    scanf("%d",&border);

    scanfMat(matrix,border);

    //printf("The old matrix:\n");
    printfMat(matrix,border);

    inv(matrix,border);

    printf("The result is:\n");
    printfMat(matrix,border);

    return 0;
}

void scanfMat(int (*arr)[Max],int n){
    int i,j;
    for(i=0;arr+i<arr+n;i++){
        for(j=0;arr+j<arr+n;j++){
            scanf("%d",(*(arr+i)+j));
        }
    }
}

void printfMat(int (*arr)[Max],int n){
    int i,j;
    for(i=0;arr+i<arr+n;i++){
        for(j=0;arr+j<arr+n;j++){
            printf("%6d",*(*(arr+i)+j));
        }
        printf("\n");
    }
}

//交换以对角线对称的数?……算了，新开一个matrix存
void inv(int (*arr)[Max],int n){
    int i,j;
    int tmp[Max][Max];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            tmp[j][i]=arr[i][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            arr[i][j]=tmp[i][j];
        }
    }
}
