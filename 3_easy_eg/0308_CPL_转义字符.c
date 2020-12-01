/**
 * @file 0308_CPL_转义字符.c
 * @author your name (you@domain.com)
 * @brief  输出几个转义字符
 * @version 0.1
 * @date 2020-12-01
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<stdio.h>
#include<string.h>
int main()
{
    printf("\',\",\?,\\,etc,回车\r换行\n");     //实践证明/r没用?在windows环境下没有用qaq?有，回到第一行，替换掉已经输出的字符
    return 0;
}

/**
 * @brief 换行\n回车\r区别
 * 1、使用方式的不同

回车 \r 本义是光标重新回到本行开头，r的英文return，控制字符可以写成zhuanCR，即Carriage Return。换行 \n 本义是光标往下一行（不一定到下一行行首），n的英文newline，控制字符可以写成LF，即Line Feed
2、使用环境不同

在不同的操作系统这几个字符表现不同，比如在WIN系统下，这两个字符就是表现的本义，在UNIX类系统，换行\n就表现为光标下一行并回到行首，在MAC上，\r就表现为回到本行开头并往下一行，至于ENTER键的定义是与操作系统有关的。通常用的Enter是两个加起来。

3、表达意思的不同

\n 10 换行NL，\r 13 回车CR。/r (return)： 回到本行行首，这就会把这一行以前的输出覆掉；/n (newline)：换行＋回车，把光标先移到下一行,然后换到行首->也就是下一行的行首。Unix系统里，每行结尾只有“<换行>”，即“\n”；Windows系统里面，每行结尾是“<回车><换行>”，即“\r\n”；Mac系统里，每行结尾是“<回车>”,即“\r”。
 * 
 */