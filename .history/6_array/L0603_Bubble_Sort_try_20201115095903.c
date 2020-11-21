/*
尝试使用冒泡排序

输入：不输入，直接数组 a[5]={7,5,6,3,4}
运算：冒泡排序 ——> 看视频找到规律
输出：最大最小值

HailayLin 2020年11月9日14:49:21

耗时30min+
*/

#include<stdio.h>

#define N 10                     //定义N好看一点

int main()
{
    int a[N];
    int i,j,temp;

    //printf("[冒泡排序]请输入5个数，以空格间隔，回车键确定:");

    for(i=0;i<N;i++)            //输入要排序的元素
    {
        scanf("%d",&a[i]);      //数组元素要加&，和普通的int型一个用法
    }                           //数组不用加&，数组（名）本身是一个地址
    
    for(i=0;i<N-1;i++)          //i=走i趟；循环要找规律而来，而不是光想……
    {
        for(j=0;j<N-1-i;j++)    //第i趟里面的j次排序；常量N一般直接用#define N 5，放在编译与处理搞定
        {
            if (a[j]>a[j+1])    //如果前一个数a[j]>后一个数a[j+1]，就相互交换
            {
                temp=a[j];      //两个数互换容易错，要检查一下逻辑
                a[j]=a[j+1];
                a[j+1]=temp;    //原来写a[j]=temp;看老师的答案才发现错误……[错误输出]直接输出未排序数
            }
        }
    }

    //printf("[冒泡排序]从小到大输出:\n");

    for(j=0;j<N-1;j++)         //循环输出每一个元素
    {
        printf("%5d",a[j]);
        //printf("a[%d]=%d\n",j,a[j]);
    }

    return 0;
}