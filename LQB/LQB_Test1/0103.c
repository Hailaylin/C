/**
 * @file 0103.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2020-12-06
 * 
 * @copyright Copyright (c) 2020
 * 小明要做一个跑步训练。初始时，小明充满体力，体力值计为 10000。如果小明跑步，每分钟损耗600 的体力。如果小明休息，每分钟增加 300 的体力。体力的损耗和增加都是均匀变化的。

 小明打算跑一分钟、休息一分钟、再跑一分钟、再休息一分钟……如此循环。如果某个时刻小明的体力到达 0，他就停止锻炼。  请问小明在多久后停止锻炼。为了使答案为整数，请以秒为单位输出答案。

答案中只填写数，不填写单位。
 */

#include<stdio.h>

int main()
{
    int total=10000;
    int add=300;
    int jian=600;
    int min;
    for( min=1;total>0;min++){
        if((min+1)%2==0){       //单数分钟,跑
            total-=jian;
        }
        else total+=add;
    }

    printf("total=%d,min=%d,s=%d\n",total,min,65*60+40);
    return 0;
}