#include<stdio.h>
#include<stdlib.h>

typedef struct              //定义结构体players
{
    char name[60];          //姓名
    char faculty[30];       //学院
    char song[100];         //歌曲名
    double point[12+1];     //评委打分
    double aver;            //平均分
}players;

int cmp(const void *a,const void *b)    //自定义排序评委打分
{
    return *(double*)b-*(double*)a;
}

int compare(const void *a,const void *b)    //自定义排序结构体
{
    return (*(players*)b).aver-(*(players*)a).aver;
}

int main()
{
    int num=0;

    scanf("%d\n",&num);     //输入选手数量

    players *player=NULL;       //定义结构体类型的指针

    player=(players*)calloc(num,sizeof(players));   //动态内存分配，
                                                    //calloc和malloc都是动态内存分配，区别为calloc会将所有开辟的内存所有字节初始化成0；
                                                    //分配成功以后player可以看作是一个指向players类型数组的指针

    if (player != NULL)     //如果开辟失败则会返回NULL，所以动态内存分配必须进行判断
    {
        for (int i = 1;  i <= num ; i++)        //对每个选手的数据分别处理
        {
            //p.s. player是players类型的指针，*代表解引用，故*player可以理解为是players类型的变量
            //     故(*player).xxx表示结构体中的元素，注：括号不可省

            scanf("%s%s%s",(*player).faculty,(*player).name,(*player).song);     //输入选手学院，姓名，歌曲名

            printf("现在有请%d号选手登场，来自%s学院的%s，他的参赛歌曲为《%s》\n",i,(*player).faculty,(*player).name,(*player).song);//报幕

            for (int t = 1; t <= 12; t++)           //输入评委打分并计算总分
            {
                scanf("%lf",&(*player).point[t]);
                (*player).aver+=(*player).point[t];
            }

            printf("请各位评委亮分\n");         //报幕

            for (int t = 1; t <= 12; t++)           //输出每个评委的打分
            {
                printf("%.1lf\t",(*player).point[t]);
            }
            printf("\n");

            qsort((*player).point+1,12,sizeof((*player).point[1]),cmp);       //对评委的打分进行排序（p.s.此处可不排序，）
                                                                            //方法为输入一个处理一个，将最大最小值进行记录，每输入一个分数就进行比较，就可找到最大最小值 

            //qsort为c语言库函数，作用是快速排序
            //qsort使用方法：qsort有四个参数，第一个为要排序的初始元素的地址，第二个为要排序的数量，第三个为单个元素所占内存，第四个为比较函数
            //比较函数说明：该函数表示以什么方式排序，如升序降序，或者结构体没办法直接比大小，就可以通过该函数规定比较方式 
            //函数形式为：cmp(const void *a,const void *b)

            (*player).aver=((*player).aver-(*player).point[1]-(*player).point[12])/10;      //计算去掉最高分最低分后的平均分
        
            printf("去掉一个最高分%lf，去掉一个最低分%lf，%d号选手%s的最后分数为%.1lf\n",(*player).point[1],(*player).point[12],i,(*player).name,(*player).aver);   

            player++;       //使指针指向数组下一个元素
        }
    }

    else        //开辟失败则退出程序
    {
        exit;
    }
    
    player-=num;    //使指针重新指向第一个元素

    qsort(player,num,sizeof(*player),compare);        //对结构体排序

    printf("我宣布，本次大赛最后的成绩是：\n");     

    for (int i = 1; i <= 3; i++)        //输出 此处可根据奖项数量进行修改
    {
        printf("第%d名，来自%s学院的%s，他的参赛歌曲为《%s》，最后的得分为%.1lf\n",i,(*player).faculty,(*player).name,(*player).song,(*player).aver);
        player++;
    }
    
    return 0;
}
