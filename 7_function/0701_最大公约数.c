/**
 * @file 0701_最大公约数.c
 * @author HailayLin (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-24
 * 
 * @copyright Copyright (c) 2020
 * 
 *
 * 题号：0701        题目:最大公约数与最小公倍数        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入两个整数，用两个函数分别计算它们的最大公约数与最小公倍数。
例：
（1）输入：6,1 输出：1,6
（2）输入：2,3 输出：1,6
（3）输入：3,27 输出：3,27

 请注意，main()函数必须按如下所示编写：
int main()
{
    int m,n;
    int max,min;
    int gy(int m,int n); //计算最大公约数
        
    scanf("%d,%d",&m,&n);
    max=gy(m,n);
    min=m*n/max;
    printf("%d,%d",max,min);

    return 0;
}
 * 
 * 
 * 
 * /
*/
#include<stdio.h>
int gy(int m,int n); //计算最大公约数

int main()
{
    int m,n;
    int max,min;
        
    scanf("%d,%d",&m,&n);
    max=gy(m,n);
    min=m*n/max;
    printf("%d,%d",max,min);

    return 0;
}

int gy(int m,int n)
{
    int c,d,r;
    c=m;d=n;
	while(n!=0){
		r=m%n;
		if(r==0){
			return n;
		}
		m=n;
		n=r;
	}
}