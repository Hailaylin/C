#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,end=0,xinxi=0,huoguo=0,first=-1;
    char massage[101][80];
    char c;
    
    for(i=0;i<100;i++)
    {
        cin.getline(massage[i],81,'\n');
        if(massage[i][0]=='.') break;
    }
    printf("%d\n",xinxi=i);

    for(i=0;i<xinxi;i++)
    {
        for(j=0;j<strlen(massage[i]);j++)
        {
            char temp[15];
            //strncpy_s(temp,massage[i],1,1);
            if(massage[i][j]=='c')//匹配火锅
            {
                for(int m=0;m<14;m++)
                {
                    temp[m]=massage[i][j+m];  
                }
                if(strcmp(temp,"chi1 huo3 guo1")==0)
                {
                    huoguo++;
                    if(first==-1) first=i+1;
                    break;
                }
            }

        }
    }
    if(huoguo!=0)
        printf("%d %d\n",first,huoguo);
    else printf("-_-#\n");
    /*
    for(i=0;i<xinxi-1;i++){
        puts(massage[i]);
    }
    */
    return 0;
}
/**
 * @brief 
 *         for(j=0;j<80;j++)
        {
            c=getchar();
            massage[i][j]=c;
            if(c=='\n')
            {
                xinxi++;
                massage[i][j+1]='\0';
                break;
            }
            if(c=='.')
            {
                end=1;
                break;
            }
        }
        if(end==1)
        {
            break;
        }
 */
/*
    for(i=1;i<=100;i++)//1~100条消息
    {
       for(j=0;(massage[i][j]=getchar())!='\n';j++)
        {
            if(massage[i][j]=='.')
            {
                end=1;
                break;
            }
        }
        if(end==1)
        {
            break;
        }
    }*/