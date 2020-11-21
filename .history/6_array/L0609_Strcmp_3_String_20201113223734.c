/*
题号：L0609        题目:找出3个字符串中的最大者        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
从键盘上输出3个字符串（以回车间隔），找出其最大者并输出。
例：
（1）输入：
China
Japan
India
输出：Japan

（2）输入：
abc
abcde
abcd
输出：abcde


分析：比较大小输出，排序？记录最大值
*/
#include<stdio.h>
#include<string.h>
#define ARRAY_NUM 3
#define MAX_CHAR_NUM 5
int main()
{
    char str_in[ARRAY_NUM][MAX_CHAR_NUM];
    int i,max;

    for(i=0;i<ARRAY_NUM;i++)
    {
        gets(str_in[i]);
    }
    
    for(i=0,max=0;i<ARRAY_NUM;i++)
    {
        if(strcmp(str_in[max],str_in[i])<0) max=i;
    }

    puts(str_in[max]);
    return 0;
}