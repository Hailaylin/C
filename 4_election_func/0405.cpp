/*
题号：0405        题目:计算平方根        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
从键盘上输入一个小于或者等于1000的正整数，要求输出它的平方根
（如果平方根不是整数，则输出其整数部分）。
要求在输入数据后先对其进行检查是否为小于1000的正数。若不是，则要求重新输入。
例：
（1）输入：15   输出：3
（2）输入：16   输出：4
（3）
输入：1003
输出：Please reinput(0<n<1001):1000  （1000为输入）
输出：31
*/
#include<stdio.h>
#include<math.h>
int main(){
	int i=1;
	double a;
	while (i==1) {
		scanf("%lf",&a);
		if (a>1000) printf("Please reinput(0<n<1001):");
		else break;
	} 
	printf("%d",(int)sqrt(a));
	return 0;
}
