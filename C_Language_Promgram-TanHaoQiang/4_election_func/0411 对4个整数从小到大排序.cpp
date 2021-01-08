/*题号：0411        题目:对4个整数从小到大排序        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
输入4个整数，要求按由小到大顺序输出。
例：
（1）输入：4 3 2 1 输出：1 2 3 4
（2）输入：1 3 2 4 输出：1 2 3 4
（3）输入：1 2 3 4 输出：1 2 3 4
（4）输入：2 3 4 1 输出：1 2 3 4
（5）输入：2 1 3 4 输出：1 2 3 4
*/
#include<stdio.h>
int main(){
	int a,b,c,d,tmp;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	//判断数的大小并且交换
	if (c>d){
		tmp=d;
		d=c;
		c=tmp;
	}
	if (b>d){
		tmp=d;
		d=b;
		b=tmp;
	}
	if (a>d){
		tmp=d;
		d=a;
		a=tmp;
	}
	if (b>c){
		tmp=c;
		c=b;
		b=tmp;
	}
	if (a>c){
		tmp=c;
		c=a;
		a=tmp;
	}
	if (a>b){
		tmp=b;
		b=a;
		a=tmp;
	}
	printf("%d %d %d %d",a,b,c,d);
	return 0;
} 
