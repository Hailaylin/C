/*
题号：L0309        题目:输入3个字符，输出它们并输出它们的ASCII码值        得分：0  
  
作业提交截止时间：2020/10/25 23:59:00	 
 	
题目内容：
利用getchar函数从键盘上输入3个字符，在屏幕上输出这3个字符，并输出它们的ASCII码值（以空格间隔）。
例1
输入：
BOY
输出：
BOY
66 79 89

例2：
输入：
abc
输出：
abc
97 98 99
*/
#include<stdio.h>
int main(){
	char c1,c2,c3;
	c1=getchar();
	c2=getchar();
	c3=getchar();
	printf("%c%c%c\n",c1,c2,c3);
	printf("%d %d %d",c1,c2,c3);
	return 0;
}
