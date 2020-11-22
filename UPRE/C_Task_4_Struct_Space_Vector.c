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
    struct SpaceVector sv;
    int n;
    double ModuleLenth;
    printf("[INFO] 1 to ModuleLenth, 2 to Space Vector ModuleLenth,\n3 to Vertical: ");
    scanf("%d",&n);
    scanf("%lf,%lf,%lf",&sv.a,&sv.b,&sv.c);
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
            if(sv.a/sv.b==sv.a/sv.c&&sv.b/sv.c==sv.a/sv.c)
                printf("[INFO] Space Vector has the same direction.\n");
            else printf("[INFO] Space Vector has not the same direction.\n");
            break;
        }
        case 3:
        {
            if(sv.a+sv.b==0)
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
