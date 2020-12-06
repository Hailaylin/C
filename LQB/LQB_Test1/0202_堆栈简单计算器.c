/**
 * @file 0202_堆栈简单计算器.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 7-2 简单计算器 (20分)
 * 
 * 题目复制不行，看pta
cal.jpg

本题要求你为初学数据结构的小伙伴设计一款简单的利用堆栈执行的计算器。如上图所示，计算器由两个堆栈组成，一个堆栈 S
​1
​​  存放数字，另一个堆栈 S
​2
​​  存放运算符。计算器的最下方有一个等号键，每次按下这个键，计算器就执行以下操作：

从 S
​1
​​  中弹出两个数字，顺序为 n
​1
​​  和 n
​2
​​ ；
从 S
​2
​​  中弹出一个运算符 op；
执行计算 n
​2
​​  op n
​1
​​ ；
将得到的结果压回 S
​1
​​ 。
直到两个堆栈都为空时，计算结束，最后的结果将显示在屏幕上。

输入格式：
输入首先在第一行给出正整数 N（1<N≤10
​3
​​ ），为 S
​1
​​  中数字的个数。

第二行给出 N 个绝对值不超过 100 的整数；第三行给出 N−1 个运算符 —— 这里仅考虑 +、-、*、/ 这四种运算。一行中的数字和符号都以空格分隔。

输出格式：
将输入的数字和运算符按给定顺序分别压入堆栈 S
​1
​​  和 S
​2
​​ ，将执行计算的最后结果输出。注意所有的计算都只取结果的整数部分。题目保证计算的中间和最后结果的绝对值都不超过 10
​9
​​ 。

如果执行除法时出现分母为零的非法操作，则在一行中输出：ERROR: X/0，其中 X 是当时的分子。然后结束程序。

输入样例 1：
5
40 5 8 3 2
/ * - +
输出样例 1：
2
输入样例 2：
5
2 5 8 4 4
* / - +
输出样例 2：
ERROR: 5/0
(20分)
作者
陈越
单位
浙江大学
代码长度限制
16 KB
时间限制
400 ms
内存限制
64 MB
 */

#include<stdio.h>
int main()
{
    int s1[1000];
    char s2[1000];
    int n;

    scanf("%d",&n); 
    
    for(int i=0;i<n;i++){
        scanf("%d",&s1[i]);
    }
    char c;
    getchar();
    for(int i=0;i<n-1;i++){
        while((c=getchar())!=' '&& c!='\n'){
            s2[i]=c;
        }
    }
    s2[n-1]='\0';
    /*for(int i=0;i<n;i++){
        printf("s2[%d]=%c",i,s2[i]);
        printf("s1[%d]=%d\n",i,s1[i]);
    }
    */
    //提取n,n-1数,op操作符
    int j;
    for(j=n-2;j>=0;j--){  //循环次数
        //printf("j=%d\t",j);
        //a=s1[j], b=s1[j+1];
        switch (s2[j]){
            case '+':{
                s1[j]=s1[j]+s1[j+1];
                break;
            }
            case '-':{
                s1[j]=s1[j]-s1[j+1];
                break;
            }
            case '*':{
                s1[j]=s1[j]*s1[j+1];
                break;
            }
            case '/':{
                if(s1[j+1]==0){
                    printf("ERROR: %d/0",s1[j]);
                    return 0;
                }
                s1[j]=s1[j]/s1[j+1];
                break;
            }
            default:break;
        }
    }
    printf("%d",s1[0]);
    return 0;
}