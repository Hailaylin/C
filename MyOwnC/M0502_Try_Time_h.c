/**
 * @file mtsm.c
 * @author HailayLin (hailay@qq.com)
 * @brief MilkTown (Minecraft) Servers Manager
 *  一个用c/c++写的，用来管理Minecraft的小程序
 * 功能：备份、日志查看、查看后台、输入指令然后查看返回结果、一个指令更新paper服务端
 * TODO 服务器到docker运行
 * TODO 变成一个服务？守护进程？……不必，整一个crontab定时任务就行
 * @version 0.1
 * @date 2021-01-03
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 
 */

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<time.h>

#define Xmx "20"
#define Xms "10"
#define CoreName "core.jar"
#define PORT 25566
#define ServerDIR "/mc/je/2021/"
#define BackupDIR "/mc/je/backup/"
#define authlib_injector_NAME "authlib-injector-1.1.34.jar"
#define authentication_server_URL "https://mcskin.hailay.site/api/yggdrasil"

void startJarCore();        //启动服务端
void stopJarCore();         //停止客户端
void attachScreen();        //连接后台终端
void help();                //帮助文档
void attachScreen();        //连接
void backupall();           //备份全部文件

int main(int argc, char **argv){
    if (argc>1){
        if (strcmp(*(argv+1), "start")==0){
            startJarCore();
        }
        if (!strcmp(argv[1], "stop")){      //这样比前面写得更专业简洁
            stopJarCore();
        }
        if (!strcmp(argv[1], "attach") || !strcmp(argv[1], "a")){
            attachScreen();
        }
        if (!strcmp(argv[1], "backup")){
            if (!strcmp(argv[2], "all")){
                backupall();
            }
        }
    }
    else help();
    return 0;
}

void startJarCore()
{
    puts("[Info] 服务器正在启动.");
    char java_jar_command[1000]="java";
    strcat(java_jar_command, " -Xmx");
    strcat(java_jar_command, Xmx);
    strcat(java_jar_command, "G -Xms");
    strcat(java_jar_command, Xms);
    strcat(java_jar_command, "G -javaagent:");
    strcat(java_jar_command, authlib_injector_NAME);
    strcat(java_jar_command, "=");
    strcat(java_jar_command, authentication_server_URL );
    strcat(java_jar_command, " -jar ");
    strcat(java_jar_command, ServerDIR);
    strcat(java_jar_command, CoreName);
    char startScreenCommand[1000]="screen -x -S 2021 -p 0 -X stuff \"";
    strcat(startScreenCommand, java_jar_command);
    strcat(startScreenCommand, "\n\"\n");
    printf("[Info] 正在以 Xmx%3sG, Xms%3sG 启动服务器. 启动指令如下:\n", Xmx, Xms);
    puts(java_jar_command);
    system("screen -dmS 2021");
    system(startScreenCommand);
}

void stopJarCore(){
    char stopCommand[50]="screen -x -S 2021 -p 0 -X stuff \"stop\n\"\n";    //stop后回车；screen 指令后回车……两个回车不是一个地方233
    system(stopCommand);
}

void help(){
    puts("——————— MilkTown Servers Manager Help —————————");
    puts("      start 启动服务器");
    puts("      stop 向服务端发出停服指令");
    puts("      attach 进入终端Screen");
    puts("      backup all 服务器整体打包备份");
    puts("             worlds 只备份地图");
    puts("      coreupdate 升级服务器核心");
    puts("      corecheck 检查服务器核心是否为最新");
}

void attachScreen(){
    char attachCommand[]="screen -r 2021\n";
    system(attachCommand);
}

void backupall(){
    char backallCommand[50]="zip -r ";
    strcat(backallCommand, " ");               //以时间和备份文件名作为备份后文件存贮名字，所以需要time.h
    //system(backallCommand);
}