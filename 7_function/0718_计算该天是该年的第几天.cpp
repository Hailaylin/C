/**
 * @file 0718_计算该天是该年的第几天.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-25
 * 
 * @copyright Copyright (c) 2020
 * 
 * 	       C语言程序设计	 
题号：0718        题目:输入年月日，计算是该年的第几天        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
输入年月日，计算是该年的第几天。
例：
（1）输入：2016,12,31 输出：366
（2）输入：2016,10,25 输出：299
（3）输入：2016,2,29 输出：60
（4）输入：2016,1,1 输出：1
 请注意，main()函数必须按如下所示编写：
int main()
{
    int sum_day(int year, int month, int day);
    int year,month,day;
    scanf("%d,%d,%d",&year, &month, &day);
    printf("%d\n",sum_day(year,month,day));
    
    return 0;
} 
 */

#include<stdio.h>
int sum_day(int year, int month, int day)
{
    int run(int year);
    int i,sum=0;
    int month_day[13]={31,28,31,30,31,30,31,31,30,31,30,31};//月从下标0开始
    /*
        if(run(year)==0 || (run(year)==1 && (month<=2)))        //不是闰年的时候或者在闰年的前两个月
    {
        for(i=0;i<month-1;i++)  //加到前一个月
        {
            sum+=month_day[i];
        }
        return sum+=day;
    }
    else if(run(year)==1 && month>2)
    {
        month_day[1]=29;
        for(i=0;i<month-1;i++)  //加到前一个月
        {
            sum+=month_day[i];
        }
        return sum+=day;
    }
    */
    //更好的逻辑
    if(run(year)==1 && month>2) month_day[1]=29;
    for(i=0;i<month-1;i++)  //加到前一个月
        {
            sum+=month_day[i];
        }
        return sum+=day;
}

//判断是否是闰年
int run(int year)
{
    if (year%4==0&&year%100!=0||year%400==0) 
        return 1;
	else return 0;
}

int main()
{
    int sum_day(int year, int month, int day);
    int year,month,day;
    scanf("%d,%d,%d",&year, &month, &day);
    printf("%d\n",sum_day(year,month,day));
    
    return 0;
} 