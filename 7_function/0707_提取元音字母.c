/*
	       C语言程序设计	 
题号：0707        题目:从字符串中提取元音字母，组成另外一个字符串        得分：0  
  
作业提交截止时间：2020/12/20 0:00:00	 
 	
题目内容：
写一个函数，将一个字符串中的元音字母复制到另一字符串，然后输出。
元音字母：A、E、I、O、U（小写也是）
例：
（1）输入：abcdef 输出：ae
（2）输入：I am a student. I love hebeu. 输出：IaaueIoeee
 请注意，main()函数必须按如下所示编写：
int main()
{
    void tiqu(char s1[],char yy[],char s2[]);
    char yueyin[]="aoeiuAOEIU";
    char str1[81];
    char str2[82];
    
    gets(str1);
    tiqu(str1,yueyin,str2);
    puts(str2);
    
    return 0;
}

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
*/
#include<stdio.h>
#include<string.h>
/*
写一个函数，将一个字符串中的元音字母复制到另一字符串，然后输出。
元音字母：A、E、I、O、U（小写也是）
*/
void tiqu(char s1[],char yy[],char s2[])
{
    int i,j,s2_order,len=strlen(s1);
    //len=strlen(s1);                     //测量s1的字符串长度给len
    s2_order=0;                         //初始化s2_order=0
    for(i=0;i<len;i++)                  //从s1[0]开始，比较是否有元音字母
    {
        for(j=0;j<10;j++)               //遍历元音字母，0~9
        {
            if(s1[i]==yy[j])
            {
                s2[s2_order++]=yy[j];   //把检测到的元音字母给s2
            }
        }
    }
    s2[s2_order]='\0';                  //最后赋值最后一个元素'\0'
}

int main()
{
    void tiqu(char s1[],char yy[],char s2[]);
    char yueyin[]="aoeiuAOEIU";
    char str1[81];
    char str2[82];
    
    gets(str1);
    tiqu(str1,yueyin,str2);
    puts(str2);
    
    return 0;
}

