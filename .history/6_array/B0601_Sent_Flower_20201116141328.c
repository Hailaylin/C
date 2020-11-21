/*
题号：B0601        题目:送花        得分：0  
  
作业提交截止时间：2020/11/17 0:00:00	 
 	
题目内容：
林**非常喜欢孙**，拿了一朵玫瑰花要送给孙**。孙**虽然对林**有好感，但没有别的意思，又不好意思拒绝。思考了一下，就对林**说：“你要真心喜欢我，就给我送一个月的玫瑰花，今天1朵，明天2朵，后天4朵，送一个月如何？”
请你帮助林**计算一下每天所要送的玫瑰的朵数和总朵数。

输出：

day=%d,flower=%d day,flower[day]
*/
#include<stdio.h>
#include<math.h>
#define MONTH 30

int main()
{
    int day=0,SumFlower,flower[MONTH+1];
    
    flower[1]=1;
    for(day=1;day<=MONTH;day++)
    {
        flower[day]=pow(2,day);
        SumFlower=SumFlower+flower[day];
        printf("day=%d,flower=%d\n",day,flower[day]);
    }

    printf("sum=%d",);
    return 0;   
}