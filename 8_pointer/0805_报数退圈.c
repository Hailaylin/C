/**
 * @file 0805_报数退圈.c
 * @author HailayLin (hailay@qq.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-10
 * 
 * @copyright Copyright (c) 2020  Hailay.site & Xihe.ai
 * 题号：0805        题目:报数退圈        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
有n个人围成一圈，顺序排号。从第1个人开始报数（从1到3报数），凡报到3的人退出圈子，问最后留下的是原来几号的那位。
从键盘上输入n(n<100)，输出最后剩下人的号。
例：
（1）输入：1 输出：1
（2）输入：2 输出：2
（3）输入：3 输出：2
（4）输入：9 输出：1

数组下标     i, 0~n-1,
序号        k=1~n
退圈        j=1~3,3不可取


 */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, k, n;
    
    scanf("%d", &n);
    int *people=(int *)calloc(n,sizeof(int));

    for (i=0; i<n; i++){        //数组下标,赋值k序号
        *(people+i)=i+1;
    }
    //主要逻辑
    int count=n;                //总人数为count=n
    for (i=0, j=0; count>1; ){  //总人数到1时退出循环。这里用while更合适，不过for可以顺带初始化，都行
        if (*(people+i)!=0)     //如果人的序号!=0就让报数j++
            j++;
        if (j == 3){            //如果报数j到3，就标记那个人为0，退出游戏
            *(people+i)=0;
            count--;            //并且让游戏人数-1
            j=0;                //报数归零
        }
        i++;                    //到下一个人报数
        if (i == n){            //如果自增后到n,(也就是原本是i=n-1),就让数组下标i重新回到0,围成一个圈
            i=0;
        }
    }

    //输出数组不为0的数，也就是留下来的那个人
    for (i=0; i<n; i++){
        if ( *(people+i) != 0 ){
            printf("%d", *(people+i));
        }
    }
    //释放分配到堆(heap)的动态内存
    if (people!=NULL)            //杜哥说这样好：如果这个people分配到了动态内存才释放，那也可以在前面整体加上people!=Null再进行后面的操作，安全
        free(people);
    return 0;
}