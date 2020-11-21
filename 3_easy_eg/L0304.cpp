/*题号：L0304        题目:输入三角形的边长，求三角形的面积        得分：0  
  
作业提交截止时间：2020/10/25 23:59:00	 
 	
题目内容：
从键盘上输入三角形的三个边长 a b c（以空格间隔），求三角形的面积area。
要求：所有变量的类型都为double，输出面积时保留3位小数。
  计算公式如下图所示：
例：
（1）输入：3 4 5    输出：6.000
（2）输入：3.67 5.43 6.21  输出：9.903
*/
#include<stdio.h>
#include<math.h>

int main(){
	double a,b,c,s,area;
	scanf("%lf%lf%lf",&a,&b,&c);
	s=(a+b+c)/2.0;
	//printf("%.3lf",s);
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("%.3lf",area);
	return 0;
}
