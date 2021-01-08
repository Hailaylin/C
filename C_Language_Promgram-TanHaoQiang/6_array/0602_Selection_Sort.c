/*
题目内容：
从键盘上输入10个整数，用选择法进行从大到小排序。
     选择排序的基本思想是：每一趟在n-i+1（i=1，2，…n-1）个记录中选取关键字最小的记录作为有序序列中第i个记录。
     基于此思想的算法主要有简单选择排序、树型选择排序和堆排序。
     简单选择排序的基本思想：第1趟，在待排序记录r[1]~r[n]中选出最小的记录，将它与r[1]交换；
     第2趟，在待排序记录r[2]~r[n]中选出最小的记录，将它与r[2]交换；
     以此类推，第i趟在待排序记录r[i]~r[n]中选出最小的记录，将它与r[i]交换，使有序序列不断增长直到全部排序完毕。
    以下为简单选择排序的存储状态，其中大括号内为无序区，大括号外为有序序列：
    初始序列：{49 27 65 97 76 12 38}
第1趟：12与49交换：12{27 65 97 76 49 38}
第2趟：27不动　：12 27{65 97 76 49 38}
第3趟：65与38交换：12 27 38{97 76 49 65}
第4趟：97与49交换：12 27 38 49{76 97 65}
第5趟：76与65交换：12 27 38 49 65{97 76}
第6趟：97与76交换：12 27 38 49 65 76 97 完成

输入时用空格或者回车间隔，输出时每个元素的最小宽度为5。
例：
（1）输入：9 8 6 7 5 4 3 2 1 0  输出：    9    8    7    6    5    4    3    2    1    0
（2）输入：1 2 3 9 8 7 4 5 6 0  输出：    9    8    7    6    5    4    3    2    1    0

要求
	• 函数操作函数化、结构化
算法步骤：
分析单次步骤
	1. 把数组第一个数num[0]给max
	2. 遍历num[0]后面的所有数，找出比max大的数,交换
	3. 找到num[0]后面最大的数max,与num[0]交换
	4. 遍历num[1]后面的所有数，找出比max大的数,交换
	5. ……

一般规律
	1. 把数组的第i个数num[i]给max
	2. j=i+1;j<=I;j++ 遍历num[i]后面所有数，找比max大的数num[j]，交换
	3. 把max与num[i+1]交换
	4. 重复1，2，3


*/

#include<stdio.h>

#define N 10                   //排序的数组大小

//void exchange(int *a,int *b);

//void SelectionSort(int n,int array[N]);

int main()
{
    int i,num[15],temp;
    int m;
    for(i=0;i<N;i++)            //输入
    {
        scanf("%d",&num[i]);
    }
    
    int j,max,n=N;

    for(i=0;i<N-2;i++)                  //i<n-1?i<=n?
    {
        max=i;
        
        printf("[i=%d趟]\n",i);
        
        for(m=0;m<N;m++)            //输出
        {
        printf("%5d",num[m]);
        }
        printf("\n");
        
        for(j=i+1;j<N-1;j++)              //j<n? j<=i?
        {
            if(num[max]<num[j]) max=j;
                               //结束本轮寻找再交换
            printf("[j=%d]\n",j);
            for(m=0;m<N;m++)            //输出
            {
            printf("%5d",num[m]);
            }
            printf("\n");
            
        }
        temp=num[max];            //交换的对象找错
        num[max]=num[i];
        num[i]=temp;
    }
    //SelectionSort(N,&num[N]);

    for(i=0;i<N;i++)            //输出
    {
        printf("%5d",num[i]);
    }

    return 0;
}
/*
void SelectionSort(int n,int array[N])
{
    int i,j,max;

    for(i=0;i<n-1;i++)                  //i<n-1?i<=n?
    {
        max=array[i];
        for(j=i+1;j<n;j++)              //j<n? j<=i?
        {
            if(max>array[j])
            {
                exchange(&max,&array[j]);
            }
        }
        exchange(&max,&array[i+1]);
    }
}


void exchange(int * a,int * b)
{
    int temp;

    temp=*a;
    *a=*b;
    *b=temp;
}
*/