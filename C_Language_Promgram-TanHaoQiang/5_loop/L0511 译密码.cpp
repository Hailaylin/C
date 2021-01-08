/*
题号：L0511        题目:译密码        得分：0  
  
作业提交截止时间：2020/11/15 0:00:00	 
 	
题目内容：
从键盘上输入一行字符，要求输出其相应的密码。字符变为密码的规律：
（1）从a~v、A~V的字母变为其后的第4个字母：b变为f
（2）w变为a，x变为b，y变为c，z变为d（大写也一样）。
（3）非字母字符保持原状。

例：
（1）输入：China!  输出：Glmre!
（2）输入：uvwxyz 输出：yzabcd
*/
/*
#include<stdio.h>
int main(){
	char c;
	while(c=getchar()!=EOF){
		if(!(c>=65&&c<=90)||!(c>=97&&c<=122)) c=c;
		else if(c<=87||c<=119){
			c=c+4;
		}
			else c=c+4-26;
	printf("%c",c);
	}
	return 0;
}
*/
#include<stdio.h>
int main(){
	char c;
	c=getchar();
	while(c!='\n'){
		if(c>='A'&&c<='Z'||c>='a'&&c<='z'){
			if(c>='W'&&c<='Z'||c>='w'){
				c=c+4-26;
			}
			else c=c+4;
		}
	printf("%c",c);
	c=getchar();
	}
	return 0;
}
