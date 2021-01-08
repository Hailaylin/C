/*
	题号：L0718        题目:扩展外部变量在程序文件中的作用域        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
练习书上例7.18：输入3个整数，求其最大值。
例：
（1）输入：11 34 5  输出：max=34
*/

#include<stdio.h>
int main()
{
    int max();
    extern int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    printf("max=%d",max());
    return 0;
}

int A,B,C;
int max()
{
    int m;
    m=A>B? A:B;
    if(C>m) m=C;
    return (m);
}