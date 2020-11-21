/*
题号：L0202        题目:鸡兔同笼（补充）        得分：0  
  
作业提交截止时间：2020/10/21 12:00:00	 
 	
题目内容：
    在一个笼子里同时养着一些鸡和兔子，你想了解有多少只鸡和多少只兔，主人对你说：我只告诉你鸡和兔的总头数是16，总脚数是40，你能不能自己计算出多少只鸡和多少只兔。
    从键盘上输入鸡和兔的总头数与总脚数，输出鸡与兔的个数。
例：
（1）输入：16 40 输出：chicken=12,rabbits=4
（2）输入：16 32 输出：chicken=16,rabbits=0
（3）输入：6912 25180 输出：chicken=1234,rabbits=5678
*/
#include<stdio.h>
int main(){
	int chicken,rabbits,total_head,total_foot;
	scanf("%d%d",&total_head,&total_foot);
	chicken=(4*total_head-total_foot)/2;
	rabbits=(total_foot-2*total_head)/2;
	printf("chicken=%d,rabbits=%d",chicken,rabbits);
	return 0;
}
