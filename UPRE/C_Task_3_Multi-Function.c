/*
    Task_3 Multi-Function
    
    函数功能块power(a底数,b指数){
        b个a相乘，循环
        返回结果
    }

    函数功能块equation(a二次项系数,b一次项系数,c常数项,数组返回结果){
        判断方程有解
            有解：返回1；计算x1和x2结果
            无解：返回0
    }

    输出：保留两位小数

    # 进阶版 #
    做一个小计算器？
    功能：+-*\/，%，可以不用“ ”间隔，包含小数
    输入：计算式，获取数和运算符——>获取字符
    运算：各个函数功能
    输出：结果
    难度判断：字符数组转化为数字，有难度。留作无聊的消遣。
*/

#include<stdio.h>
#include<math.h>

double power(double a,double b); 

int equation(double a,double b,double c,double result[2]);

int main()
{
    int f,flag=1;
    double g,h,i,j,k,re[2],e; 

    while(flag)
    {
    printf("[Multi-Function] Please choose function to test,1 to power;2 to equation;0 to end:");
    scanf("%d",&f);
        switch (f)
        {
        case 0: 
            flag=0;
            break;
        case 1:
            printf("[power] Please enter [base,power]:");
            scanf("%lf,%lf",&g,&h);
            printf("[power] Result is:%.2lf\n",power(g,h));
            break;
        case 2:
            printf("[equation] Please enter ax``+bx+c a,b,c:");
            scanf("%lf,%lf,%lf",&i,&j,&k);
            printf("[equation] Result:");
            e=equation(i,j,k,re);
            if(e==0) printf("Equation has not real root.\n");
            else printf("x1=%.2f,x2=%.2f\n",re[0],re[1]);
            break;
        default:
            printf("[Multi-Function] Your input is error. Please try again.\n");
            break;
        }
    //printf("[equation] Do you want to run this program again?1 again,0 to end:");
    //scanf("%lf",&flag);
    }
    return 0;
}

double power(double a,double b)
{
    double re=1;
    int i;
    for (i=1;i<=b;i++)
    {
        re=re*a;
    }
    return re;
}

int equation(double a,double b,double c,double result[2])
{
    double delta,p,q;
    delta=b*b-4*a*c;         //power(b,2) 就会报错，有点奇怪
    
    if(delta<0) return 0;
    else
    {
        p=-b/2/a;
        q=sqrt(delta)/2/a;
        if(delta=0)
        {
            result[0]=p+q;
        }
        else 
        {
            result[0]=p+q;
            result[1]=p-q;
        }
        return 1;
    }
}