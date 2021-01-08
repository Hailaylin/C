/*
题号：L0303        题目:小写字母转换为大写字母        得分：0  
  
作业提交截止时间：2020/10/25 23:59:00	 
 	
题目内容：
从键盘上输入一个小写字母，输出其对应的大写字母及大写字母对应的ASCII码值。
例：
（1）输入：a   输出：A 65
（2）输入：e   输出：E 69
（3）输入：p   输出：P 80
*/
#include<stdio.h>
int main(){
	char xiao,da;
	xiao=getchar();
	da=xiao-32;
	printf("%c %d",da,da);
	return 0;
}
