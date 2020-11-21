/*
题号：L0204        题目:反序输出字符        得分：100  
  
作业提交截止时间：2020/10/21 12:00:00	 
 		for(i=0;i<=5;i++)
		output[5-i]=input[i];(5-i出错，应该是4)
		printf("%s",output);
题目内容：
从键盘上输入5个任意字符，反序输出它们。
例：
（1）输入：ABCDE  输出：EDCBA
（2）输入：Ac3%#   输出：#%3cA
*/
#include<stdio.h>
int main(){
	char input[5];
	int i;
	scanf("%s",input);
	for(i=0;i<=4;i++){
		printf("%c",input[4-i]);	
	}
	return 0;
}
