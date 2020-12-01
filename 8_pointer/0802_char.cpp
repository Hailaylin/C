/**
 * @file 0802_交换char变量.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-29
 * 
 * @copyright Copyright (c) 2020
 * 	题号：0802        题目:对3个字符串按由小到大排序        得分：0  
  
作业提交截止时间：2020/12/13 23:59:00	 
 	
题目内容：
输入3个字符串，进行从小到大排序并输出。
例：
（1）输入：
abc
abcd
ab
输出：
ab
abc
abcd
 请注意，main()函数必须按如下所示编写：
int main()
{
    void swap(char *p1, char *p2);
    char str1[81],str2[81],str3[81];
    
    gets(str1);
    gets(str2);
    gets(str3);
    
    if(strcmp(str1,str2)>0) { swap(str1,str2);}
    if(strcmp(str1,str3)>0) { swap(str1,str3);}
    if(strcmp(str2,str3)>0) { swap(str2,str3);}
    
    puts(str1);
    puts(str2);
    puts(str3);
    
    return 0;
}
 */
#include<stdio.h>
#include<string.h>
/*
void swap(char *p1, char *p2){          //找了一节课的bug，两个问题：
                                        //1.数组名可以近似地理解为一个常量指针，不能作为左值修改
                                        //2.这样修改的只是*p1,*p2指向的地址，只是一个swap函数内的形参，main函数调用它时传进去的str1,str2值并没有修改
    char *tmp=NULL;
    printf("1.p1=%x\t p2=%x\t %tmp=%x\n",p1,p2,tmp);
    tmp=p1;
    p1=p2;
    p2=tmp;
    printf("2.p1=%x\t p2=%x\t %tmp=%x\n",p1,p2,tmp);
}
*/
void swap(char *p1, char *p2){
    char tmp[81];
    strcpy(tmp,p1);
    strcpy(p1,p2);
    strcpy(p2,tmp);
}
int main()
{
    void swap(char *p1, char *p2);
    char str1[81],str2[81],str3[81];
    
    gets(str1);
    gets(str2);
    gets(str3);
    
    if(strcmp(str1,str2)>0) { swap(str1,str2);}
    //printf("3.p1=%x\t p2=%x\t p3=%x\n",str1,str2,str3);
    //swap(str1,str2);
    if(strcmp(str1,str3)>0) { swap(str1,str3);}
    //printf("4.p1=%x\t p2=%x\t p3=%x\n",str1,str2,str3);
    if(strcmp(str2,str3)>0) { swap(str2,str3);}
    //printf("5.p1=%x\t p2=%x\t p3=%x\n",str1,str2,str3);
    puts(str1);
    puts(str2);
    puts(str3);
    
    return 0;
}