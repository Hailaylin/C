/*题号：L0406        题目:按照考试成绩的等级输出百分制分数段        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
从键盘上输入学生成绩（字符型），按照考试成绩的等级输出百分制分数段。
A等为85分以上，B等为70-85分，C等为60-69分，D等为60分以下。
例：
（1）输入：A  输出：Your score:85~100
（2）输入：B  输出：Your score:70~84
（3）输入：C  输出：Your score:60~69
（4）输入：D  输出：Your score:<60
*/
#include<stdio.h>
int main(){
	char l,*o[1];		//l=students score level,o=output score
	scanf("%c",&l);
	switch(l){
		case 'A':	o[0]="85~100";break;
		case 'B':	o[0]="70~84";break;
		case 'C':	o[0]="60~69";break;
		case 'D':	o[0]="<60";break;
	} 
	printf("Your score:%s",*o);
	return 0;
} 
