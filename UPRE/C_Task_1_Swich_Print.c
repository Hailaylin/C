/*
UPRE Task 1

输入：0                     ；1      ；2        ；3
输出：打印名字，专业年级，性别；名字    ；专业年级 ；性别

Written by HailayLin 2020年11月10日11:01:48


*/

#include<stdio.h>
int main()
{
    char name[]="林嘉濠",age[]="计算机类2007",sex[]="男";
    int n,flag=1;

    while(flag)
    {
        printf("[Switch_Print]Please enter a number to choose print:");
        scanf("%d",&n);                     //scanf又没加&
        switch (n)
        {
        case 0:
            puts(name);                     //putchar(age[1]); 只输出数组的一个元素！
            puts(age);
            puts(sex);
            flag=0;
            break;
        case 1:
            puts(name);
            flag=0;
            break;
        case 2:
            puts(age);
            flag=0;
            break;
        case 3:
            puts(sex);
            flag=0;
        default:
            printf("[Switch_Print]Your input char is a mistake. Please put your char again.\n");
            break;
        }
        printf("[Switch_Print]Do you want to run this little program again? Enter 1 to continue,0 to end:");
        scanf("%d",&flag);
    }

    printf("[HailayLin]Thank you for your using this easy program.");
    return 0;
}