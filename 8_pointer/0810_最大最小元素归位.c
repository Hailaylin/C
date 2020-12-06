/**
 * @file 0810_最大最小元素归位.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-05
 * 
 * @copyright Copyright (c) 2020
 * 	题号：0810        题目:最大元素最小元素归位        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
将一个5*5的矩阵中最大的元素放在中心，4个角分别放4个最小的元素（顺序为从左到右，从上到下依次从小到大存放），写一函数实现之。用main函数调用。
从键盘上输入5*5矩阵中的各元素，输出；将最大元素与4个最小元素归位，再输出。
输出时每个元素的最小宽度为8。
例：
（1）输入：
34 2 45 34 6
345 6 7 5 345
36 74 345 76 36
90 899 898 78 78
9 22 34 66 776 44
输出：
 请注意，main()函数必须按如下所示编写：
int main()
{
    void input(int *p);
    void output(int (*p)[N]);
    void change(int *p); 
    
    int a[N][N];
    int n;     
    
    input(&a[0][0]); // input(a[0]);
    output(a);    
    change(a[0]);
    printf("The result is:\n");
    output(a);

    return 0;
}
 */
#include<stdio.h>
#include<stdlib.h>
#define N 5

int main()
{
    void input(int *p);
    void output(int (*p)[N]);
    void change(int *p); 
    
    int a[N][N];
    int n;     
    
    input(&a[0][0]); // input(a[0]);
    output(a);    
    change(a[0]);
    printf("The result is:\n");
    output(a);

    return 0;
}

void input(int *p)
{
    int i;
    for(i=0;i<N*N;i++){
        scanf("%d",p+i);
    }
    char s[N];
    gets(s);
}

void output(int (*p)[N])
{
    int i, j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            printf("%8d",*(*(p+i)+j));
        }
        printf("\n");
    }
}

void change(int *p)
{
    void swap(int *a,int *b);
    int cmp(const void *a, const void *b);

    int i,j,ci;   //导入到新数组排序后改变四个角的值？和原来的值交换
    int order_min_col=0, order_min_row=0;       //记录要交换的row行,column列
    int order_max_col=0, order_max_row=0;       //最大值交换的col列，row行
    int tmp[N][N];
    //把*p的数组元素给tmp缓存
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            tmp[i][j]=*(p+i*N+j);
        }
    }
    //qsort排序
    qsort(tmp,N*N,sizeof(tmp[0][0]),cmp);
    //printf("%5d",tmp[N-1][N-1]);
    //printf("\n");
    //匹配，交换
    int flag_min,flag_max=0;
    order_max_col=order_max_row=(N-1)/2;
    for(ci=0;ci<4;ci++){   //第一层循环，交换次数4次，4个角
        //选择每次交换的角的角标
        flag_min=0;
        switch (ci) {
            case 0 :{
                order_min_col=0, order_min_row=0;
                break;
            }
            case 1 :{
                order_min_col=0, order_min_row=N-1;
                break;
            }
            case 2 :{
                order_min_col=N-1, order_min_row=0;
                break;
            }
            case 3 :{
                order_min_col=N-1, order_min_row=N-1;
                break;
            }
            default: break;
        }
        //遍历交换最小元素
        for(i=0;flag_min==0 && i<N;i++){
            for(j=0;flag_min==0 && j<N;j++){
                if(*(p+i*N+j)==tmp[0][ci]){
                    swap((p+i*N+j),(p+order_min_col*N+order_min_row));
                    flag_min==1;
                }
            }
        }
        //遍历交换最大元素,只交换一次
        for(i=0;flag_max==0 && i<N;i++){
            for(j=0;flag_max==0 && j<N;j++){
                if(*(p+i*N+j)==tmp[N-1][N-1]){
                    swap((p+i*N+j),(p+order_max_col*N+order_max_row));
                    flag_max==1;
                }
            }
        }
    }
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int cmp(const void *a, const void *b)
{
    return (*(int *)a - *(int*)b);      //要从小到大输出
}

    /*  测试输出tmp的值
    for(i=0;i<4;i++){
        printf("%5d",tmp[0][i]);
    }
    printf("\n");
    */
       //输出测试
    //output(tmp);