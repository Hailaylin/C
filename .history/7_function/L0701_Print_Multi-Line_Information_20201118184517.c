/*
	题号：L0701        题目:输出多行信息        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
输出书上170页（第3版182页）的内容，其中第1行与第3行的*为20个，字母'H'之前有两个空格。

*/
#include<stdio.h>

void print_n_stars(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("*");
    }
    printf("\n");
}

void print_how_are_you()
{
    printf("  How are you!")
}