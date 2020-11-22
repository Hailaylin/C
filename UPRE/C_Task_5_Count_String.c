/*
统计不超过50个字符的大小写字母分别有多少
连续的 UPRE

输入输出结果
1312341#@!#$3wrefvmkQPRJPVMCQ<RCASCXIRMEqUPREsd
U：小写0个，大写1个
P：小写0个，大写3个
R：小写1个，大写4个
E：小写1个，大写2个
UPRE：1个
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],cmpUPRE[5];
    int U,u,P,p,R,r,E,e;
    int UPRE;
    int i,len;
    gets(str);
    len=strlen(str);
    U=u=P=p=R=r=E=e=UPRE=0;
    /*
    strncpy_s(cmpUPRE, sizeof(cmpUPRE), str + 2, 4);
    puts(cmpUPRE);
    printf("%d",strcmp(cmpUPRE,"UPRE"));
    */
    for(i=0;i<len;i++)
    {
        switch(str[i])
        {
            case 'U' :
            {
                U++;
                strncpy_s(cmpUPRE, sizeof(cmpUPRE), str + i, 4);
                if(strcmp(cmpUPRE,"UPRE")==0)
                    UPRE++;
                break;
            }
            case 'u' :
            {
                u++;
                break;
            }
            case 'P' :
            {
                P++;
                break;
            }
            case 'p' :
            {
                p++;
                break;
            }
            case 'R' :
            {
                R++;
                break;
            }
            case 'r' :
            {
                r++;
                break;
            }
            case 'E' :
            {
                E++;
                break;
            }
            case 'e' :
            {
                e++;
                break;
            }
            default:
                break;
        }
    }
    printf("U：小写%d个，大写%d个\n",u,U);
    printf("P：小写%d个，大写%d个\n",p,P);
    printf("R：小写%d个，大写%d个\n",r,R);
    printf("E：小写%d个，大写%d个\n",e,E);
    printf("UPRE：%d个\n",UPRE);
    return 0;
}