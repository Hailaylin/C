/**
 * @file 0103_判断素数.cpp
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2021-01-07
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：0103        题目:判断素数        得分：0  
  
作业提交截止时间：2030/1/1 0:00:00	 
 	
题目内容：
从键盘上输入一个正整数n（n>=2），判断是否为素数。
如果输入的数n小于2，则要求重新输入，直到输入的数满足条件为止。
最好使用函数实现，返回值类型为布尔类型。（#include <stdbool.h>）
例：
（1）输入：12 输出：12 is not a prime number.
（2）输入：7    输出：7 is a prime number.
（3）输入的数不满足条件时运行如下图所示：
 */

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool isPrime(int n){
    int i, k;
    k=sqrt(n);
    for (i=2; i<=k; i++){
        if (n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    scanf("%d", &n);
    while (n<2){
        printf("Please reinput n(n>=2):");
        scanf("%d", &n);
    }
    if (isPrime(n)) printf("%d is a prime number.", n);
    else printf("%d is not a prime number.", n);
    return 0;
}