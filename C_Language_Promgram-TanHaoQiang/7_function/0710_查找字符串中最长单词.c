/*
 	       C语言程序设计	 
题号：0710        题目:查找字符串中的最长单词        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入一个字符串，单词之间用空格间隔，查找并输出最长单词（单词不包括标点符号）。
例：
（1）输入：I love China.  输出：China
（2）输入：You are wonderful! 输出：wonderful
（3）输入：I adore you!  输出：adore
 请注意，main()函数必须按如下所示编写：
int main()
{
    bool isCharacter(char);  //判断字符是不是字母 布尔类型（逻辑）true false 
    int longest(char[]);  //搜寻最长单词，返回单词第一个字母的数组下标
    char str[81];
    int i; 
        
    gets(str);
    
    for(i=longest(str); isCharacter(str[i]); i++) //输出最长单词 
    {
        putchar(str[i]);
    }
    putchar('\n');
    
    return 0;
}


请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。  
*/


#include<stdio.h>
#include<string.h>
#include<stdbool.h>                     //c++才有bool类型变量，c默认没有，要引用stdbool.h才能用bool，不然gcc编译不通过，_Bool也不行
//判断字符是不是字母 布尔类型（逻辑）true false
bool isCharacter(char c)                //记得定义char c，声明时可以省略变量名c，但是最好加上
{
    if( (c>='A' && c<='Z') || (c>='a' && c<='z') )
        return true;                    //记得<"=",不加“=”就少了条件
    else                                //可以省略else,因为上面的条件后直接return退出函数
        return false;
}

//搜寻最长单词，返回单词第一个字母的数组下标
int longest(char str[])
{   //思路：找到单词，循环判断长度并与已经记录的单词最大值比较，记录大者下标
    bool isCharacter(char);             //声明引用函数，不声明可能报错(看isCharacter放的位置，在这个函数前面就没事)
    int i,j,max=0,max_order;
    for(i=0;str[i]!='\0';i++)           //在'\0'前，i为str[i]下标
    {
        for(j=i;isCharacter(str[j]);j++)//从字符数组第i个数开始，如果是字母就让j+1
            ;                           //让for循环啥也不执行，防止与下面的语句混用
        if(max<j-i)                     //第j个字符减去起始的i字符，就等于word的长度
        {                               //逻辑：当当前字符>之前标记的max字符长度，就把当前字符长度记为max
            max=j-i;                    
            max_order=i;                //记录max单词长度首字母的下标
        }
    }
    //printf("max=%d\n",max);             //测试
    return max_order;                   //循环结束，返回最大值下标
}

int main()
{
    bool isCharacter(char);     //判断字符是不是字母 布尔类型（逻辑）true false 
    int longest(char[]);        //搜寻最长单词，返回单词第一个字母的数组下标
    char str[81];
    int i; 
        
    gets(str);
    
    for(i=longest(str); isCharacter(str[i]); i++) //输出最长单词 
    {
        putchar(str[i]);
    }
    putchar('\n');
    
    return 0;
}