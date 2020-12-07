/**
 * @file L0824_输入两个整数及四则运算符号，进行相应计算，并输出结果.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 题号：L0824        题目:输入两个整数及四则运算符号，进行相应计算，并输出结果        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
从键盘上输入两个整数a,b，再输入一个四则运算符号（+ - * /），进行相应函数调用，并输出相应结果。
要求使用switch与指向函数的指针实现。
（1）输入：
2,3
+  
输出：2+3=5
（2）输入：
3,2
-   
输出：3-2=1
（3）输入：
3,4
*   
输出：3*4=12
（4）输入：6,2,/    输出：6/2=3
 */

#include<stdio.h>

int main()
{
    int add(int a, int b);
    int minus(int a, int b);
    int multiply(int a, int b);
    int divide(int a, int b);
    void calculator(int a, int b, int (*p)(int ,int));

    int a,b;
    char op;
    
    scanf("%d,%d %c",&a,&b,&op);

    switch (op)
    {
    case '+':
        calculator(a,b,add);
        break;
    case '-':
        calculator(a,b,minus);
        break;
    case '*':
        calculator(a,b,multiply);
        break;
    case '/':
        calculator(a,b,divide);
        break;
    default:
        break;
    }

    return 0;
}

void calculator(int a, int b, int (*p)(int ,int)){
    printf("%d",(*p)(a,b));
}

int add(int a, int b){
    printf("%d+%d=",a,b);
    return a+b;
}

int minus(int a, int b){
    printf("%d-%d=",a,b);
    return a-b;
}

int multiply(int a, int b){
    printf("%d*%d=",a,b);
    return a*b;
}

int divide(int a, int b){
    printf("%d/%d=",a,b);
    return a/b;
}