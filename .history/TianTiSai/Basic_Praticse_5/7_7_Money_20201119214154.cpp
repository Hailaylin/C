/*
7-7 名人堂与代金券 (25分)
对于在中国大学MOOC（http://www.icourse163.org/ ）
学习“数据结构”课程的学生，想要获得一张合格证书，总评成绩必须达到 60 分及以上，并且有另加福利：
总评分在 [G, 100] 区间内者，可以得到 50 元 PAT 代金券；在 [60, G) 区间内者，可以得到 20 元PAT代金券。
全国考点通用，一年有效。
同时任课老师还会把总评成绩前 K 名的学生列入课程“名人堂”。
本题就请你编写程序，帮助老师列出名人堂的学生，并统计一共发出了面值多少元的 PAT 代金券。

输入格式：
输入在第一行给出 3 个整数，分别是 N（不超过 10 000 的正整数，为学生总数）、G（在 (60,100) 区间内的整数，
为题面中描述的代金券等级分界线）、K（不超过 100 且不超过 N 的正整数，为进入名人堂的最低名次）。
接下来 N 行，每行给出一位学生的账号（长度不超过15位、不带空格的字符串）和总评成绩（区间 [0, 100] 内的整数），其间以空格分隔。
题目保证没有重复的账号。

输出格式：
首先在一行中输出发出的 PAT 代金券的总面值。
然后按总评成绩非升序输出进入名人堂的学生的名次、账号和成绩，其间以 1 个空格分隔。
需要注意的是：成绩相同的学生享有并列的排名，排名并列时，按账号的字母序升序输出。

输入样例：
10 80 5
cy@zju.edu.cn 78
cy@pat-edu.com 87
1001@qq.com 65
uh-oh@163.com 96
test@126.com 39
anyone@qq.com 87
zoe@mit.edu 80
jack@ucla.edu 88
bob@cmu.edu 80
ken@163.com 70
输出样例：
360
1 uh-oh@163.com 96
2 jack@ucla.edu 88
3 anyone@qq.com 87
3 cy@pat-edu.com 87
5 bob@cmu.edu 80
5 zoe@mit.edu 80


10
cy@zju.edu.cn 78
cy@pat-edu.com 87
1001@qq.com 65
uh-oh@163.com 96
test@126.com 39
anyone@qq.com 87
zoe@mit.edu 80
jack@ucla.edu 88
bob@cmu.edu 80
ken@163.com 70
*/

#include<bits/stdc++.h>
using namespace std;
struct Stu
{
    char zhanghao[15];
    int score;
}stu[10000];

bool cmp()
{
    return a.score;
}
int main()
{
    int i,j,n,g,k;
    
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>stu[i].zhanghao>>stu[i].score;
        getchar();
    }
    /*
    cout<<"\n"<<"输出测试"<<"\n";
    for(i=0;i<n;i++)
    {
        cout<<stu[i].zhanghao<<" "<<stu[i].score<<"\n";
    }
    */

    sort(a.score,b.score,cmp);
}