/*
分析：
    函数输出?暂时不会，先不整
        1：计算空间向量模长 double SV_ModuleLength()
        2：判断是否同向int SV_SameDirection()
        3：判断是否垂直int SV_Vertical()
    结构体，只有一个变量 OK
*/
#include<stdio.h>
#include<math.h>
struct SpaceVector
{
    double a;
    double b;
    double c;
};

int main()
{
    struct SpaceVector sv,sv1;
    int n;
    double ModuleLenth;
    printf("[INFO] 1 to ModuleLenth, 2 to Space direction,\n3 to Vertical: ");
    scanf("%d",&n);
    
    switch(n)
    {
        case 1:
        {
            ModuleLenth=sqrt(sv.a*sv.a+sv.b*sv.b+sv.c*sv.c);
            printf("[INFO] Space Vector ModuleLenth is %.6lf\n",ModuleLenth);
            break;
        }
        case 2:
        {
            scanf("%lf,%lf,%lf",&sv.a,&sv.b,&sv.c);
            scanf("%lf,%lf,%lf",&sv1.a,&sv1.b,&sv1.c);
            if((sv.a==0&&sv.b==0&&sv.c==0)||(sv1.a==0&&sv1.b==0&&sv1.c==0))
            {
                printf("[INFO] Space Vector has the same direction.\n");
            }
            else if(sv.a/sv1.a==sv.c/sv1.c&&sv.b/sv1.b==sv.c/sv1.c)
                printf("[INFO] Space Vector has the same direction.\n");
            else printf("[INFO] Space Vector has not the same direction.\n");
            break;
        }
        case 3:
        {
            scanf("%lf,%lf,%lf",&sv.a,&sv.b,&sv.c);
            scanf("%lf,%lf,%lf",&sv1.a,&sv1.b,&sv1.c);
            if(sv.a*sv1.a+sv.b*sv1.b+sv.c*sv1.c==0)
                printf("[INFO] Space Vector is Vertical.\n");
            else printf("[INFO] Space Vector is not Vertical.\n");
            break;
        }
        default :
        {
            printf("[ERROR] Input ERROR.\n");
            break;
        }
    }
    return 0;
}
