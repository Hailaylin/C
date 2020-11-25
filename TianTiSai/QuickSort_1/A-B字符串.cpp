/*
 * @Author: HailayLin
 * @Date: 2020-11-24 19:56:07
 * @LastEditTime: 2020-11-24 20:22:29
 * @HailayLin: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C\TianTiSai\QuickSort_1\A-B字符串.c
 */

/**
 * @brief 7-4 A-B (20分)
本题要求你计算A−B。不过麻烦的是，A和B都是字符串 
—— 即从字符串A中把字符串B所包含的字符全删掉，
剩下的字符组成的就是字符串A−B。

输入格式：
输入在2行中先后给出字符串A和B。两字符串的长度都不超过10
​4
​​ ，并且保证每个字符串都是由可见的ASCII码和空白字符组成，
最后以换行符结束。

输出格式：
在一行中打印出A−B的结果字符串。

输入样例：
I love GPLT!  It's a fun game!
aeiou
输出样例：
I lv GPLT!  It's  fn gm!
 * 
 */

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,len,len2;
    //获取字符
    string str;
    string str2;
    getline(cin,str);
    getline(cin,str2);
    //判断字符是否与前面的一致
    //长度
    len=str.length();
    len2=str2.length();
    for(i=0;i<len;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(str[i]==str2[j])
            {
                str.erase(str.begin()+i);
            }
        }
    }
    cout<<str<<'\n';
    return 0;
}