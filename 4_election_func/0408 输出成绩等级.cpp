/*题号：0408        题目:输出成绩等级        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
给出一百分制成绩，要求输出成绩等级：
（1）90分以上为A
（2）80~89分为B
（3）70~79分为C
（4）60~69分为D
（5）60分以下为E

例：
（1）输入：100  输出：grade=A
（2）输入：93   输出：grade=A
（3）输入：81   输出：grade=B
（4）输入：70   输出：grade=C
（5）输入：69   输出：grade=D
（6）输入：33   输出：grade=E
*/
#include<stdio.h>
int main(){
	char g;		//g=grade
	int s;  	//s=score
	scanf("%d",&s);
				//match score and grade
	if(s>=90&&s<=100)	g='A';
	if(s>=80&&s<=89)	g='B';
	if(s>=70&&s<=79)	g='C'; 
	if(s>=60&&s<=69)	g='D';
	if(s>=0&&s<=59)  	g='E';
	
	printf("grade=%c",g);
	return 0; 
} 
