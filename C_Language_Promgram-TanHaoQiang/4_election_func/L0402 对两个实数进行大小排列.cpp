/*
题号：L0402        题目:对两个实数进行大小排列        得分：0  
  
作业提交截止时间：2020/11/5 23:59:00	 
 	
题目内容：
输入两个实数，按数值从大到小的顺序输出这两个数（保留1位小数）。（要求变量值的互换）
例：
（1）输入：1.1,2.2 输出：2.2,1.1
（2）输入：3.3,2.2 输出：3.3,2.2
*/
/*viod compare(float a1, float a2){
    float tmp;
        if (a2>a1){
            a2=tmp;
            a2=a1;
            a1=tmp;
        }
    return a1; 
    }*/
#include<stdio.h>
int main(){
    float a,b,tmp;
    scanf("%f,%f",&a,&b);
    if (b>a) {
    	tmp=b;
    	b=a;
        a=tmp;
    	}
    printf("%.1f,%.1f",a,b);
}

