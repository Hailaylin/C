/**
 * @file 0205_两个有序序列的中位数.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 7-5 两个有序序列的中位数 (25分)
已知有两个等长的非降序序列S1, S2, 设计函数求S1与S2并集的中位数。有序序列A
​0
​​ ,A
​1
​​ ,⋯,A
​N−1
​​ 的中位数指A
​(N−1)/2
​​ 的值,即第⌊(N+1)/2⌋个数（A
​0
​​ 为第1个数）。

输入格式:
输入分三行。第一行给出序列的公共长度N（0<N≤100000），随后每行输入一个序列的信息，即N个非降序排列的整数。数字用空格间隔。

输出格式:
在一行中输出两个输入序列的并集序列的中位数。

输入样例1:
5
1 3 5 7 9
2 3 4 5 6
输出样例1:
4
输入样例2:
6
-100 -10 1 1 1 1
-50 0 2 3 4 5
输出样例2:
1
(25分)
作者
DS课程组
单位
浙江大学
代码长度限制
16 KB
时间限制
200 ms
内存限制
64 MB
 */

//并查集，不用看
//动态分配内存？？555555555

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num;
    cin>>num;
    int *a=(int *)calloc(num*2,sizeof(int));
    
    if(a!=NULL)
    {
        for (int i = 0; i < 2*num; i++)
        {
            cin>>*(a+i);
        }
    }

    sort(a,a+num*2);
    printf("%d",*(a+num-1));
    free(a);
    return 0;
}