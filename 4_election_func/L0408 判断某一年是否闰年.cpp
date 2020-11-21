/*题号：L0408        题目:判断某一年是否闰年        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
从键盘上输入一个年份，判断是否为闰年，输出相应结果。
闰年的条件：能够被4整除，但不能够被100整除的年份；能够被400整除的也是闰年。
例：
（1）输入：100   输出：100 is not a leap year.
（2）输入：200   输出：200 is not a leap year.
（3）输入：304   输出：304 is a leap year.
（4）输入：400   输出：400 is a leap year.
*/
#include<stdio.h>
int main(){
	int y;
	scanf("%d",&y);
	if (y%4==0&&y%100!=0||y%400==0) 
		printf("%d is a leap year.",y);
	else 
		printf("%d is not a leap year.",y);
	return 0;
}
