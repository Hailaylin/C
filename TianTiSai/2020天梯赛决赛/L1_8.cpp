/**
 * @file L1_8.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-11-28
 * 
 * @copyright Copyright (c) 2020
 * L1-8 刮刮彩票 (20分)
“刮刮彩票”是一款网络游戏里面的一个小游戏。如图所示：

-362960_55cb6a89bf693.png

每次游戏玩家会拿到一张彩票，上面会有 9 个数字，分别为数字 1 到数字 9，数字各不重复，并以 3×3 的“九宫格”形式排布在彩票上。

在游戏开始时能看见一个位置上的数字，其他位置上的数字均不可见。你可以选择三个位置的数字刮开，这样玩家就能看见四个位置上的数字了。最后玩家再从 3 横、3 竖、2 斜共 8 个方向中挑选一个方向，方向上三个数字的和可根据下列表格进行兑奖，获得对应数额的金币。

数字合计	获得金币	数字合计	获得金币
6	10,000	16	72
7	36	17	180
8	720	18	119
9	360	19	36
10	80	20	306
11	252	21	1,080
12	108	22	144
13	72	23	1,800
14	54	24	3,600
15	180		
现在请你写出一个模拟程序，模拟玩家的游戏过程。

输入格式:
输入第一部分给出一张合法的彩票，即用 3 行 3 列给出 0 至 9 的数字。0 表示的是这个位置上的数字初始时就能看见了，而不是彩票上的数字为 0。

第二部给出玩家刮开的三个位置，分为三行，每行按格式 x y 给出玩家刮开的位置的行号和列号（题目中定义左上角的位置为第 1 行、第 1 列。）。数据保证玩家不会重复刮开已刮开的数字。

最后一部分给出玩家选择的方向，即一个整数： 1 至 3 表示选择横向的第一行、第二行、第三行，4 至 6 表示纵向的第一列、第二列、第三列，7、8分别表示左上到右下的主对角线和右上到左下的副对角线。

输出格式:
对于每一个刮开的操作，在一行中输出玩家能看到的数字。最后对于选择的方向，在一行中输出玩家获得的金币数量。

输入样例:
1 2 3
4 5 6
7 8 0
1 1
2 2
2 3
7
输出样例:
1
5
6
180
 */

#include<stdio.h>
int main(){
    int money[30]={0,0,0,0,0,0,10000,36,720,360,80,252,108,72,54,180,72,180,119,36,306,1080,144,1800,3600};
    //获取彩票
        //如果彩票元素==0,则记录下标，等彩票元素加完再算
    int caipiao[5][5];
    int i,j,temp_sum=0;
    int zero_i=1,zero_j=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            scanf("%d",&caipiao[i][j]);
            if(caipiao[i][j]!=0)
            {
                temp_sum+=caipiao[i][j];
            }
            else
            {
                zero_i=i;
                zero_j=j;
            }
        }
    }
    caipiao[zero_i][zero_j]=45-temp_sum;
    /*
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d\t",caipiao[i][j]);
        }
        printf("\n");
    }
    */
    //获取输出刮的值
    int gua1[3],gua2[3];
    for(i=0;i<3;i++)
    {
        scanf("%d%d",&gua1[i],&gua2[i]);
    }


    //开奖,出分
    int sum=0;
    int kai;
    //char kai,c;
    //c=getchar();
    //kai=getchar();
    scanf(" %d",&kai);
    
    //算列表相加，选择相加的方式
    switch(kai){
        case 1:{
            sum=sum+caipiao[1][1]+caipiao[1][2]+caipiao[1][3];
            break;
        }
        case 2:{
            sum=sum+caipiao[2][1]+caipiao[2][2]+caipiao[2][3];
            break;
        }
        case 3:{
            sum=sum+caipiao[3][1]+caipiao[3][2]+caipiao[3][3];
            break;
        }
        case 4:{
            sum=sum+caipiao[1][1]+caipiao[1][2]+caipiao[1][3];
            break;
        }
        case 5:{
            sum=sum+caipiao[2][1]+caipiao[2][2]+caipiao[2][3];
            break;
        }
        case 6:{
            sum=sum+caipiao[3][1]+caipiao[3][2]+caipiao[3][3];
            break;
        }
        case 7:{
            sum=sum+caipiao[1][1]+caipiao[2][2]+caipiao[3][3];
            break;
        }
        case 8:{
            sum=sum+caipiao[3][1]+caipiao[2][2]+caipiao[1][3];
            break;
        }
        default :
            break;
    }
    for(i=0;i<3;i++)
    {
        printf("%d\n",caipiao[gua1[i]][gua2[i]]);
    }
    //kai=kai-'0';
    printf("%d",money[sum]);
    return 0;
}