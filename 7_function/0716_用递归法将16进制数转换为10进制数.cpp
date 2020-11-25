/**
 * @file 0716_用递归法将16进制数转换为10进制数.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-25
 * 
 * @copyright Copyright (c) 2020
 * 	       C语言程序设计	 
题号：0716        题目:十六进制转换为十进制        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入一下十六进制的数，将其转换为十进制的数。
可考虑使用递归方法。
例：
（1）输入：a 输出：10
（2）输入：10 输出：16
（3）输入：FF 输出：255
（4）输入：abcdef 输出：11259375
 */

#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 100
int main()
{
    //现不用递归，用循环
    int i,j,len;
    double sum10;
    char num[N];
    int num10[N];
    gets(num);
    //len可以不测，循环判断用num[i]!='\0'判断
    len=strlen(num);
    //把大写字母转换为小写字母，减少重复判断
    strlwr(num);
    //倒叙转换字符为数字并存放
    for(i=len-1,j=0;i>=0;i--)
    {
        if(num[i]>='0'&&num[i]<='9')
        {
            num10[j++]=num[i]-'0';
        }
        else if(num[i]>='a' && num[i]<='f')
        {
            num10[j++]=num[i]-'a'+10;
        }
    }
    //测试用代码
    /*
    for(i=0;i<len;i++)
    {
        printf("%d\t",num10[i]);
    }
    printf("\n %d\n",j);
    */
    //计算该16进制数对应的10进制数值：位权法
    /*for(i=0,sum10=0;i<j;i++)
    {
        sum10=sum10+pow(16,i)*num10[i];
    }*/
    //或者用不那么复杂的方法
    for(i=0,sum10=0;i<j;i++)        //j是上面存的数组的数最大下标
    {
        sum10=sum10*16+num10[i];
    }
    printf("%.0f",sum10);
    //int geshu=sizeof(num10)/sizeof(int); //获取不了已使用的数组大小qaq,只能获取定义大小
    //printf("\ngehsu=%d\n",geshu);
    return 0;
}