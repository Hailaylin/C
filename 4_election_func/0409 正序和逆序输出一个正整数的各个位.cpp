/*题号：0409        题目:正序和逆序输出一个正整数的各个位        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
从键盘上输入一个不多于5位（包括5位）的正整数，要求：
（1）求出它是几位数；
（2）分别输出每一位数字（数据最小宽度为2）；
（3）按逆序输出各位数字（数据最小宽度为2）。
例：
（1）输入：3   输出：num=1,natural order: 3,reverse order: 3
（2）输入：56  输出：num=2,natural order: 5 6,reverse order: 6 5
（3）输入：123  输出：num=3,natural order: 1 2 3,reverse order: 3 2 1
（4）输入：4569  输出：num=4,natural order: 4 5 6 9,reverse order: 9 6 5 4
（5）输入：36987  输出：num=5,natural order: 3 6 9 8 7,reverse order: 7 8 9 6 3
*/
//printf("num[%d]=%c\t",i,num[i]);
#include <stdio.h>
int main(){
	char num[4];
	int i,total_num=0;
	scanf("%s",&num);
	
/*			计算num位数		*/
/*	输出前半条输出内容		*/
	for(i=0;i<=4;i++) {
		if (num[i]!=0) total_num++;
	}
	printf("num=%d,natural order:",total_num); 
	
/*		  	正序输出		*/							 
	for(i=0;i<=4;i++) {
		if (num[i]!=0) printf("%2c",num[i]);
	}
	printf(",reverse order:");

/*		倒序输出后半部分	*/
	for(i=4;i>=0;i--) {
		if (num[i]!=0) printf("%2c",num[i]);
	}
	return 0;
}
 
