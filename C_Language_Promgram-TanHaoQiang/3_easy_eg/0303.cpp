/*题号：0303        题目:购房还贷        得分：0  
  
作业提交截止时间：2020/10/25 23:59:00	 
 	
题目内容：
    购房时从银行贷了一笔款d，准备每月还款额为p，月利率为r，计算多少月能还清。从键盘上输入d、p、r，输出月数。月数保留1位小数，对第2位进行四舍五入处理。(第3版P26页例2.2)
例：
（1）输入：300000 3000 0.001 输出：105.4
（2）输入：600000 3000 0.0015 输出：238.0
*/

#include<stdio.h>
#include<math.h>
int main(){
	double d,p,r,m,tmp1;
	double a,b,c;
	scanf("%lf%lf%lf",&d,&p,&r);
	m=(log10(p)-log10(p-d*r))/log10(1+r);

	tmp1=m*10; 
	//printf("tmp1=%f",tmp1);
	tmp1+=0.5;
	//printf("tmp1+0.5=%f",tmp1);
	int x;x=tmp1;m=x/10.0;
	
	printf("%.1f",m);
	//printf("%.1f",m);
	return 0;
}
