/*
题号：B0602        题目:查找数组中的最大值与最小值        得分：0  
  
作业提交截止时间：2020/11/17 0:00:00	 
 	
题目内容：
从键盘上输入6个整数，依次存放到数组中。查找这个数组中的最大值与最小值，并输出它们及它们的下标。
例：
（1）输入：2 5 3 56 7 0 输出：max=56,ind1=3;min=0,ind2=5 
*/
#include<stdio.h>
int main()
{
    int i,max,min,ind1,ind2;
    int num[6];

    for(i=0;i<6;i++)
    {
        scanf("%d",&num[i]);
    }

    max=min=num[0];         //数值
    ind1=ind2=0;            //下标
    for(i=0;i<6;i++)
    {
        /*  错误的比较方法
        if(num[i]<num[i+1])
        {
            min=num[i];
            ind2=i;
        }
        if(num[i]>num[i+1])
        {
            max=num[i];
            ind1=i;
        }
        */
       if(max<num[i])       //如果
       {
           max=num[i];
           ind1=i;
       }
       if(min>num[i])
       {
           min=num[i];
           ind2=i;
       }
    }
    
    printf("max=%d,ind1=%d;min=%d,ind2=%d",max,ind1,min,ind2);
    return 0;
}