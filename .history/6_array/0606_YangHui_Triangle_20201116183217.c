/*
题号：0606        题目:输出n行杨辉三角形        得分：0  
  
作业提交截止时间：2020/11/30 0:00:00	 
 	
题目内容：
    杨辉，字谦光，汉族，钱塘（今浙江省杭州）人，南宋杰出的数学家。
    他曾担任过南宋地方行政官员，为政清廉，足迹遍及苏杭一带。
    他在总结民间乘除捷算法、“垛积术”、纵横图以及数学教育方面，均做出了重大的贡献。
    他是世界上第一个排出丰富的纵横图和讨论其构成规律的数学家。还曾论证过弧矢公式，时人称为“辉术”。
    与秦九韶、李冶、朱世杰并称“宋元数学四大家”。
    主要著有数学著作5种21卷，即《详解九章算法》12卷（1261），
    《日用算法》2卷（1262），《乘除通变本末》3卷（1274），《田亩比类乘除捷法》2卷（1275）
    和《续古摘奇算法》2卷（1275）（其中《详解》和《日用算法》已非完书）。后三种合称为《杨辉算法》。
    朝鲜、日本等国均有译本出版，流传世界。

从键盘上输入n（0<n<11），输出n行杨辉三角形，每个数组元素输出时的最小宽度为5。
例：
（1）输入：1
输出：1
（2）输入：10


老师视频的思路：找相同自变量变化范围的规律
    (1) array YangHui[i][j] , N 10
    (2) i=0~N-1 , YangHui[i][0]=1,YangHui[i][i]=1;
    (3) center number : i=1~n-1;j<=i
        YangHui[i][j]=YangHui[i-1][j]+YangHui[i-1][j-1];

思考：用递归法如何实现？ 旧值推新值
*/
#include<stdio.h>
#define N 10

int main()
{
    int i,j,n;
    int YangHui[N][N];

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        YangHui[i][0]=1;
        YangHui[i][i]=1;
    }

    for(i=1;i<n;i++)
    {
        for(j=1;j<i;j++)
        {
            YangHui[i][j]=YangHui[i-1][j]+YangHui[i-1][j-1];
        }
    }
    //  输出，i=0~9()
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%5d",YangHui[i][j]);
        }
        printf("\n");
    }
    return 0;
}
