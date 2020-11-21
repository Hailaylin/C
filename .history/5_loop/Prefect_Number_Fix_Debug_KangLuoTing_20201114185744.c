/*
题号：0509        题目:完数        得分：0  
  
作业提交截止时间：2020/11/29 0:00:00	 
 	
题目内容：
一个数如果恰好等于它的因子之和，这个数就是“完数”。例如：6的因子是1，2，3，而6=1+2+3，因此6是完数。编程找出1000之内的所有完数，并按下面格式输出其因子：
6 its factors are 1,2,3
28 its factors are 1,2,4,7,14

(共3个)
*/
#include<stdio.h>
int main()
{
	int n,i,sum;
	for(n=1;n<=1000;n++)        //n=1~1000
	{
        sum=0;	
        for(i=1;i<n/2;i++)     //i=1~n/2;若i<=n/2;24 its factors are 1,2,3,4,6,8,12
	    {
		    if(n%i==0) sum+=i;  //i是n的因子 
		    //因子之和 
		    if(sum==n) //是完数 
		    {
		        printf("%d its factors are 1",n);

                for(i=2;i<=n/2;i++)
		        {	
		        if(n%i==0) printf(",%d",i);//i是n的因子 
		        }	  
		    printf("\n");
		    }
	    }
    }
    return 0;
 }