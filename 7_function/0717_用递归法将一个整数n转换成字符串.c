/**
 * @file 0710_用递归法将一个整数n转换成字符串.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-25
 * 
 * @copyright Copyright (c) 2020
 * 
 */

/**
 * @brief        C语言程序设计	 
题号：0717        题目:用递归法将一个整数n转换成字符串        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
用递归法将一个整数n转换成字符串。
例：
（1）输入：123 输出：123
（2）输入：321 输出：321
（3）输入：12345 输出：12345
 请注意，main()函数必须按如下所示编写：
#include <stdio.h>

int main()
{
    void convert(int n);
    int n;
    
    scanf("%d",&n);
    if(n<0)
    {
        putchar('-');
        n=-n;
    }
    convert(n);
    
    return 0;
}
 * 
 */

#include <stdio.h>
#include<string.h>
#define N 10

//正整数十进制数转化单个数，并且输出,递归。参考了网上和学习通答案
void convert(int n)
{
    int w;
    w=n/10;
    if(w!=0)
    {
        convert(w);
    }
    putchar(n%10+'0');
    return ;
}

int main()
{
    void convert(int n);
    int n;
    
    scanf("%d",&n);
    if(n<0)
    {
        putchar('-');
        n=-n;
    }
    convert(n);
    //printf("\n%d",'0');
    return 0;
}