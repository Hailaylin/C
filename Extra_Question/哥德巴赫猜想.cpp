/**
 * @file 哥德巴赫猜想.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-02
 * 
 * @copyright Copyright (c) 2020
 * 	题号：0102        题目:哥德巴赫猜想验证        得分：0  
  
作业提交截止时间：2024/10/19 0:00:00	 
 	
题目内容：
哥德巴赫猜想：任何大于或者等于6的整数都可以写成两个素数之和。
要求：
（1）从键盘上输入整数n(n>=6)，检验6－n之内的所有偶数
（2）若检验成功则输出“6=3+3”，即一个偶数写成两个素数之和的形式（只输出一种满足要求的情况即可，且前一个数小于或等于后一个数，每输出一种情况后换行） 例：6=3+3 8=3+5  10= 3+7 等；若检验不成功，则输出"Wrong!";
（3）请大家考虑用函数实现
实验目的与要求：
（1）    掌握函数的定义、声明与调用
（2）    掌握判断一个整数是否是素数的算法
（3）    学会使用布尔类型（逻辑型）变量

例：
(1)输入： 6 输出：6=3+3
(2)输入：10 
输出：
6=3+3
8=3+5
10=3+7
 */

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
    int gdbh(int n);
    int i,n,a;
    scanf("%d",&n);
    for(i=6;i<=n;i+=2){
        a=gdbh(i);
        printf("%d=%d+%d\n",i,a,i-a);
    }
    a=gdbh(n);
    if(a==-1) printf("Wrong!");
    return 0;
}

int gdbh(int n){
    //n可以表示为两个素数和
    //从3开始
    bool isPrime(int n);
    int i,k;
    k=sqrt(n);
    for(i=3;i<n;i+=2){
        if(i<=(n-i) && isPrime(i) && isPrime(n-i)){
            return i;
        }
    }
    return -1;
}

bool isPrime(int n){
    int i,j,k;
    k=sqrt(n);
    for(i=3;i<k;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}