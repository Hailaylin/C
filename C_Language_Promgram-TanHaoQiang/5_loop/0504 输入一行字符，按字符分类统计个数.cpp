/*
题号：0504        题目:输入一行字符，按字符分类统计个数        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
输入一行字符，分别统计其中英文字母、空格、数字和其他字符的个数。
例：
（1）输入：I love hebeu! 输出：character:10,space:2,digit:0,others:1
（2）输入：2017, have a brilliant year! 输出：character:18,space:4,digit:4,others:2
*/
#include<stdio.h>
int main(){
	char c;
	int character,space,digit,others;
	character=space=digit=others=0;
	c=getchar();
	while(c!='\n'){
		if (c>='0'&&c<='9'){
			digit++;
		}
		else if(c==' '){
			space++;
		}
		else if(c>='A'&&c<='Z'||c>='a'&&c<='z'){
			character++;
		}
		else others++;
		c=getchar();
	}
	printf("character:%d,space:%d,digit:%d,others:%d",character,space,digit,others);
	return 0;
} 
