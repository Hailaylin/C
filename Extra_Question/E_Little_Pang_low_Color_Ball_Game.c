/*
6班孙洪涛写的代码
http://c.biancheng.net/view/2043.html
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 100
int main()
{
	int n;
	int cred[N][6],cblue[N];
	int i,k,j;
	int leap,t;
	scanf("%d",&n);
	for(i=0;i<n;i++)//取n注双色球 
	{
		srand((unsigned)time(NULL)>>i);//通过改变播种确保每注双色球不相同 
		for(k=0;k<6;k++)
		{
			do//如果和之前数相同就重新赋值 确保六个红球数不相同
			{
				leap=0;//找不到相同的数
				cred[i][k]=rand()%33+1;
				for(j=k-1;j>=0;j--)//和前面的数进行比较
				{
					if(cred[i][k]==cred[i][j])//如果和前面的数相同
					{
						leap=1;
                        break;
					}
				}
			}
			while(leap);
		}
		for(k=0;k<5;k++)//冒泡排序 
		{
			for(j=0;j<5-k;j++)
			{
				if(cred[i][j]>cred[i][j+1])
				{
					t=cred[i][j];
					cred[i][j]=cred[i][j+1];
					cred[i][j+1]=t;
				}
			}
		}
		cblue[i]=rand()%16+1;
	}
	for(i=0;i<n;i++)//输出 
	{
		for(k=0;k<5;k++)
		{
			printf("%02d,",cred[i][k]);
		}
		printf("%02d:",cred[i][5]);
		printf("%02d\n",cblue[i]);
	}
    return 0;
}