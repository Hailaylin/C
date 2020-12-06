/**
 * @file L0819_指针变量++L0818.c
 * @author your name (you@domain.com)
 * @brief 就加个指针变量……
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 	题号：L0819        题目:将字符串a复制为字符串b，然后输出字符串b        得分：0  
  
作业提交截止时间：2020/12/14 0:00:00	 
 	
题目内容：
从键盘上输入字符串a，将字符串a复制为字符串b，然后输出字符串b。
用指针变量来处理。
（第3版 例8.12）
例：
（1）输入：Have a good time!  输出：Have a good time!
（2）输入：No pain, no gain!  输出：No pain, no gain!
 */

#include<stdio.h>
#define N 30
//效率——少用了i的循环标志变量，程序好看多了
int main()
{
    char str1[N], str2[N];
    char *p_str1=str1, *p_str2=str2;    //定义指针直接初始化
    //输入 用gets(str1)太老土;
    gets(str1);
    /*      //这个输入有问题，指针输入，但是vscode编译没问题，oj有问题
    for(;(*p_str1=getchar())!='\n';p_str1++){
        ;               //putchar(*p_str1); 看看有没有问题
    }
    //p_str1++;
    *p_str1='\0';
    p_str1=str1;        //操作完后回归原位，不然后面的操作就会失败QAQ
    */
    //给str2
    for(;*p_str1!='\0';p_str1++,p_str2++){
        *p_str2=*p_str1;
    }
    *p_str2='\0';
    p_str2=str2;        //操作后指针重新初始化养成习惯
    //输出str2
    printf("%s",str2);//不能在str2的位置写p_str2……？ 不是*p_str2,而是p_str2就是str2.
    return 0;
}