/**
 * @file 结构体sort交换.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-27
 * 
 * @copyright Copyright (c) 2020
 * 
 */

#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#define N 100

struct Student
{
    char name;
    int id;
    double score;
    char sex;
}stu[100];

bool cmp(Student a,Student b)
{
    if(a.score<a.score) return a.score<b.score;
    else if(a.name<a.name) return a.name<a.name;
}
using namespace std;
int main(){
    char a[100][81];
    int i;
    for(i=0;i<100;i++)
    {
        cin.getline(a[i],81);
        cout<<'\n'<<a[i]<<endl;
    }
        
    cout<<"输出cin.getline(a,81)"<<endl;
    

    sort(a[i],a[i]+N,cmp);

    return 0;
}