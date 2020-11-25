/*
	       C语言程序设计	 
题号：0708        题目:字符串中添加空格        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
从键盘上输入一个字符串，然后将字符串中的字符间添加空格：
例：
（1）输入：abc 输出：a b c
（2）输入：2016 输出：2 0 1 6
 请注意，main()函数必须按如下所示编写：
int main()
{
    void insertspace(char str[]) ;
    char str[81];
        
    gets(str);
    insertspace(str);
    puts(str); 
    
    return 0;
}


请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                   
*/
#include<stdio.h>
#include<string.h>
void insertspace(char str[])
{
    int i,j,len;
    char temp[81];             //设置缓存字符数组
    len=strlen(str);
    //printf("len=%d\n",len);
    for(i=0,j=0;i<len;i++)      //数位不对?对了
    {
        if(str[i+1]!='\0')
        {
            temp[j]=str[i];
            j++;
            temp[j]=' ';
            j++;          //在奇数位添加空格
        }
        else 
        {
            temp[j]=str[i];
            j++;
        }
    }
    temp[j]='\0';
    //temp[j+2]='\0';
    //把temp数组给str[]
    for(i=0;temp[i]!='\0';i++)   //i<len*2 ，这里数组名写成str就会少输出一半
    {
        str[i]=temp[i];
    }
    str[i]='\0';
}


int main()
{
    void insertspace(char str[]) ;
    char str[81];
        
    gets(str);
    insertspace(str);
    puts(str); 
    
    return 0;
}