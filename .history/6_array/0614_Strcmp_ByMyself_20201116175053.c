/*
题号：0614        题目:字符串比较        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
编写一个程序，将两个字符串s1和s2进行比较，
若s1>s2，输出一个正数（第一个不相同的字符的ASCII码差值）；
若s1=s2，输出0；
若s1<s2，输出一个负数（第一个不相同的字符的ASCII码差值）。
例：
（1）输入：
abc
abc
输出：0
（2）输入：
ab
abc
输出：-99
（3）输入：
ddd
cde
输出：1
*/
#include<stdio.h>
#include<string.h>
#define N 10
int main()
{
    char str[2][N];
    int i,len[2],output=0;
    
    for(i=0;i<2;i++)
    {
        scanf("%s",str[i]);
    }
    
    for(i=0;i<N;i++)        //i 字符标号
    {
        if(str[0][i]=='\0'&&str[1][i]=='\0') break;
        else 
        {
            if(str[0][i]-str[1][i])
        }
    }

    //char a='c',b='\0';
    printf("%d",output);
    return 0;
}
    /*
    if((len=strlen(str[1]))==strlen(str[0]))
    {
        for(i=0;i<len;i++)
        {
            if(str[0][i]==str[1][i]) continue;
            
        }
    }
    */
    //判断逻辑有问题，没这么简单
    /*
    for(i=0;i<len;i++)
    {
        if(str[0][i]!=str[1][i])
        {
            output=str[0][i]-str[1][i];
            break;
        }
        else output=0;
    }
    */
       /*
    遍历每一个元素，'\0'=0
    有两个字符数组长度不同的情况，进行标记......strcmp干了这事了
    strcmp
    */
   /*
   if((len[0]=strlen(str[0]))==(len[1]=strlen(str[1])))
   {
       output=strcmp(str[0],str[1]);
   }
   else 
   {
       //比较两者的ascii值
   }*/