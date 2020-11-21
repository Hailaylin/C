/*
1021 个位数统计 (15分)
https://pintia.cn/problem-sets/994805260223102976/problems/994805300404535296
给定一个 k 位整数 N=d
​k−1
​​ 10
​k−1
​​ +⋯+d
​1
​​ 10
​1
​​ +d
​0
​​  (0≤d
​i
​​ ≤9, i=0,⋯,k−1, d
​k−1
​​ >0)，请编写程序统计每种不同的个位数字出现的次数。例如：给定 N=100311，则有 2 个 0，3 个 1，和 1 个 3。

输入格式：
每个输入包含 1 个测试用例，即一个不超过 1000 位的正整数 N。

输出格式：
对 N 中每一种不同的个位数字，以 D:M 的格式在一行中输出该位数字 D 及其在 N 中出现的次数 M。要求按 D 的升序输出。

输入样例：scanf &
100311
输出样例： 
0:2
1:3
3:1

分析：
N<1000 ;用char num[N]存储。
循环利用switch计算0~9的数
*/

#include<stdio.h>
#include<string.h>
#define N 1000
int main()
{
    char num[N];
    int CountNum[10];
    int i,len;

    scanf("%s",num);
    //gets(num);
    //puts(num);
    /*
    gets()用了会报错
    # 报错信息
a.c: In function ‘main’:
a.c:10:5: warning: ‘gets’ is deprecated [-Wdeprecated-declarations]
     gets(num);
     ^~~~
In file included from /usr/include/stdio.h:936:0,
                 from a.c:1:
/usr/include/x86_64-linux-gnu/bits/stdio2.h:233:1: note: declared here
 gets (char *__str)
 ^~~~
a.c:10:5: warning: ignoring return value of ‘gets’, declared with attribute warn_unused_result [-Wunused-result]
     gets(num);
     ^~~~~~~~~
/tmp/ccN3ZgRu.o: In function `main':
a.c:(.text.startup+0x32): warning: the `gets' function is dangerous and should not be used.
    */

    //init CountNum[]
    for(i=0;i<10;i++)
    {
        CountNum[i]=0;
    }

    len=strlen(num);
    for(i=0;i<len;i++)
    {
        switch(num[i])
        {
            case '0': 
                CountNum[0]++;
                break;
            case '1':
                CountNum[1]++;
                break;
            case '2':
                CountNum[2]++;
                break;
            case '3':
                CountNum[3]++;
                break;
            case '4':
                CountNum[4]++;
                break;
            case '5':
                CountNum[5]++;
                break;
            case '6':
                CountNum[6]++;
                break;
            case '7':
                CountNum[7]++;
                break;
            case '8':
                CountNum[8]++;
                break;
            case '9':
                CountNum[9]++;
                break;
            default: break;
        }
    }

    //output
    for(i=0;i<10;i++)
    {
        if(CountNum[i]!=0)
            printf("%d:%d\n",i,CountNum[i]);
    }
    return 0;
}