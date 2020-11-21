/*
7-4 一帮一 (15分)
“一帮一学习小组”是中小学中常见的学习组织方式，老师把学习成绩靠前的学生跟学习成绩靠后的学生排在一组。本题就请你编写程序帮助老师自动完成这个分配工作，即在得到全班学生的排名后，在当前尚未分组的学生中，将名次最靠前的学生与名次最靠后的异性学生分为一组。

输入格式：
输入第一行给出正偶数N（≤50），即全班学生的人数。此后N行，按照名次从高到低的顺序给出每个学生的性别（0代表女生，1代表男生）和姓名（不超过8个英文字母的非空字符串），其间以1个空格分隔。这里保证本班男女比例是1:1，并且没有并列名次。

输出格式：
每行输出一组两个学生的姓名，其间以1个空格分隔。名次高的学生在前，名次低的学生在后。小组的输出顺序按照前面学生的名次从高到低排列。

输入样例：
8
0 Amy
1 Tom
1 Bill
0 Cindy
0 Maya
1 John
1 Jack
0 Linda
输出样例：
Amy Jack
Tom Linda
Bill Maya
Cindy John


分析：
    boy[25] girl[25]分别存?x 他怎么给怎么存，开两个数组
    n人数
    匹配:第i个和从n-1到第一个!sex[sexo_rd]
*/
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,m,sex[50],cele;
    char name[50][10],;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d %s",&sex[i],name[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d %s\n",sex[i],name[i]);
    }

    for(i=0;i<n/2;i++)
    {
        m=n-i-1;
        for(j=m;j>=n/2;j--)
        {
            if(sex[i]!=sex[j])
            {
                strcpy(cele,name[j]);
            } 
            break;
        }
        printf("%s %s\n",name[i],cele);
    }
    return 0;
}