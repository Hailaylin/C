
/*
	       C语言程序设计	 
题号：B0701        题目:对5个字符串进行从小到大排序        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入5个字符串，对它们进行从小到大排序并输出。
例：
（1）输入：
China
India
Korea
Japan
America
输出：
After sorting:
America
China
India
Japan
Korea

（2）输入：
Rose
Lotus
Lily
Jasmine
Sunflower
输出：
After sorting:
Jasmine
Lily
Lotus
Rose
Sunflower
 请注意，main()函数必须按如下所示编写：
int main()
{
    void input(char str[][81],int n);  //输入n个字符串 
    void output(char str[][81],int n); //输出n个字符串 
    void seleSort(char str[][81],int n); //对n个字符串进行选择法排序
    char str[N][81];
        
    input(str,N);
    seleSort(str,N);
    printf("After sorting:\n");
    output(str,N); 
    
    return 0;
}
*/
#include<stdio.h>
#include<string.h>
#define N 5
int main()
{
    void input(char str[][81],int n);  //输入n个字符串 
    void output(char str[][81],int n); //输出n个字符串 
    void seleSort(char str[][81],int n); //对n个字符串进行选择法排序
    char str[N][81];
        
    input(str,N);
    seleSort(str,N);
    printf("After sorting:\n");
    output(str,N); 
    
    return 0;
}

void input(char str[][81],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
}

void output(char str[][81],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        puts(str[i]);
    }
}

void seleSort(char str[][81],int n)
{
    int i,j,m;
    char temp[81];
    for(i=0;i<N-1;i++)              //i从0~N-2
    {
        m=i;                        //m赋值i初始化
        for(j=i+1;j<N;j++)          //j从i的后一个数开始比较，到数组最后一个元素，下标N-1
        {
            if(strcmp(str[m],str[j])>0) m=j;    //降序排序，如果前一个字符串比后一个数大，就让j给m
        }                           //（从小到大，如果最小值m比现有str[j]元素大，就让更小的str[j]当最小值）
        if(m!=i)                    //当元素不相等时交换
        {
            strcpy(temp,str[m]);
            strcpy(str[m],str[i]);
            strcpy(str[i],temp); 
        }
    }
}