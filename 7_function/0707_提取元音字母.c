/*
	       C���Գ������	 
��ţ�0707        ��Ŀ:���ַ�������ȡԪ����ĸ���������һ���ַ���        �÷֣�0  
  
��ҵ�ύ��ֹʱ�䣺2020/12/20 0:00:00	 
 	
��Ŀ���ݣ�
дһ����������һ���ַ����е�Ԫ����ĸ���Ƶ���һ�ַ�����Ȼ�������
Ԫ����ĸ��A��E��I��O��U��СдҲ�ǣ�
����
��1�����룺abcdef �����ae
��2�����룺I am a student. I love hebeu. �����IaaueIoeee
 ��ע�⣬main()�������밴������ʾ��д��
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

�뽫���Ժõĳ���Դ���루��main����������ಿ�֣����Ƶ������ı���Ȼ���ٵ�����ύ����ť��                     
*/
#include<stdio.h>
#include<string.h>
/*
дһ����������һ���ַ����е�Ԫ����ĸ���Ƶ���һ�ַ�����Ȼ�������
Ԫ����ĸ��A��E��I��O��U��СдҲ�ǣ�
*/
void tiqu(char s1[],char yy[],char s2[])
{
    int i,j,s2_order,len=strlen(s1);
    //len=strlen(s1);                     //����s1���ַ������ȸ�len
    s2_order=0;                         //��ʼ��s2_order=0
    for(i=0;i<len;i++)                  //��s1[0]��ʼ���Ƚ��Ƿ���Ԫ����ĸ
    {
        for(j=0;j<10;j++)               //����Ԫ����ĸ��0~9
        {
            if(s1[i]==yy[j])
            {
                s2[s2_order++]=yy[j];   //�Ѽ�⵽��Ԫ����ĸ��s2
            }
        }
    }
    s2[s2_order]='\0';                  //���ֵ���һ��Ԫ��'\0'
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

