/*
题号：L0407        题目:用switch语句处理菜单命令：+-* /运算        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
从键盘上输入两个整数，并输入一个四则运算符号：+ - * / ，进行相应运算并输出它们的结果。
例：
（1）输入：2,3,+  输出：2+3=5
（2）输入：3,2,-   输出：3-2=1
（3）输入：3,4,*   输出：3*4=12
（4）输入：6,2,/    输出：6/2=3
*/
#include<stdio.h>
int main(){
	int a,b,e;
	char c;
	scanf("%d,%d,%c",&a,&b,&c);
	switch(c){
		case '+':	e=a+b;break;
		case '-':	e=a-b;break;
		case '*':	e=a*b;break;
		case '/':	e=a/b;break;
	}
	printf("%d%c%d=%d",a,c,b,e);
	return 0; 
}

