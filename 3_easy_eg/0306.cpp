/*题号：0306        题目:密码译制        得分：0  
  
作业提交截止时间：2020/10/25 23:59:00	 
 	
题目内容：
从键盘上输入5个字符（可用scanf()函数或者getchar()）函数，将它们译制成密码并输出(用putchar函数)，密码规律：用原来字母后面第4个字母代替原来的字母。例如，字母'A'后面第4个字母是'E'，用'E'来代替'A'。
例：
（1）输入：China  输出：Glmre
（2）输入：Korea 输出：Osvie
（3）输入：xyzXY 输出：|}~\]
*/

#include<stdio.h>
int main(){
	char str[5];
	int i=0;
	while((*(str+i++)  = getchar() + 4) != '\n' + 4);
	*(str+i) = '\0';
	printf("%s",str);
	return 0;
}
