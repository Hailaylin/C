#include<stdio.h>
int main()
{
	int n,i,sum;
	for(n=1;n<=1000;n++)
	{
     sum=0;	
     for(i=1;i<=n/2;i++)
	 {
		if(n%i==0) //i是n的因子 
		sum+=i; //因子之和 
		if(sum==n) //是完数 
		{
			printf("%d its factors are 1",n);
			
           for(i=2;i<=n/2;i++)
		{	
		    if(n%i==0) //i是n的因子 
			printf(",%d",i); 
		}	  
		 printf("\n");
		}

	 }

    }
     return 0;
 }