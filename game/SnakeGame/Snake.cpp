sn#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#include<windows.h>

#include"SnakeMap.h"
#include"SnakeOperate.h" 

#define LengthWall 50    //墙的长度 
#define WidthWall 25 	//墙的宽度 


//隐藏控制台的光标
void HiddenConsoleCursor(){
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);	 //获取控制台光标信息
	CursorInfo.bVisible = false;				 //隐藏控制台光标
	SetConsoleCursorInfo(handle, &CursorInfo);   //设置控制台光标状态
}
int main(){	

	int n=0,nn=0,m=0,mm=0,t=0,tt=0;
	HiddenConsoleCursor();
	system("color F0");
	Snake snake=NULL;
	gotoxy(40,5);
	printf("贪吃蛇\n"); 
	gotoxy(40,7);
	printf("1:W A S D控制方向(此控制需要在大写形式下使用)\n");
	gotoxy(40,9);
	printf("2:←↑→↓控制方向\n");
	gotoxy(40,11);
	printf("请选择:\n");	
	gotoxy(40,12);
	scanf("%d",&n);
	switch(n){
		case 1:nn=1;break;
		case 2:nn=2;break;
	}
	srand((unsigned)time(NULL));
	
	system("cls");
	gotoxy(40,5);
	printf("贪吃蛇\n"); 
	gotoxy(40,7);
	printf("1:闯关模式\n");
	gotoxy(40,9);
	printf("2:休闲模式\n");
	gotoxy(40,11);
	printf("请选择:\n");
	gotoxy(40,12);
	scanf("%d",&m);
	switch(m){
		case 1:mm=1;DifficultyLevel=100;break;
		case 2:mm=2;break;
	}
	if(mm==1)
	{
		
		system("cls");
		FirstMap(snake);	
		SnakeFood(snake,food);	
		if(nn==1)
		SnakeMove1(snake,true);
		else if(nn==2)
		SnakeMove2(snake,true);
		
		system("cls");
		SecondMap(snake);	
		SnakeFood(snake,food);	
		if(nn==1)
		SnakeMove1(snake,true);
		else if(nn==2)
		SnakeMove2(snake,true);
		
		system("cls");
		ThirdMap(snake);	
		SnakeFood(snake,food);	
		if(nn==1)
		SnakeMove1(snake,true);
		else if(nn==2)
		SnakeMove2(snake,true);
		
	}
	if(mm==2)
	{
		system("cls");
		gotoxy(40,5);
		printf("贪吃蛇\n"); 
		gotoxy(40,6);
		printf("请选择地图:\n");
		gotoxy(40,8);
		printf("1:图一\n");
		gotoxy(40,10);
		printf("2:图二\n");
		gotoxy(40,12);
		printf("3:图三\n");
		gotoxy(40,14);
		printf("请选择:\n");
		gotoxy(40,15);
		scanf("%d",&t);
		switch(t){
			case 1:tt=1;break;
			case 2:tt=2;break;
			case 3:tt=3;break;
		}
		system("cls");
		gotoxy(40,5);
		printf("贪吃蛇\n"); 
		gotoxy(40,6);
		printf("请选择难度:\n");
		gotoxy(40,7);
		printf("1:手残党\n");
		gotoxy(40,8);
		printf("2:普通人类\n");
		gotoxy(40,9);
		printf("3:手指灵活\n");
		gotoxy(40,10);
		printf("4:非人类\n");
		gotoxy(40,11);
		printf("请选择:\n");
		gotoxy(40,12);
		scanf("%d",&n);
		switch(n){
			case 1:DifficultyLevel=200;break;
			case 2:DifficultyLevel=100;break;
			case 3:DifficultyLevel=50;break;
			case 4:DifficultyLevel=20;break;
		}
		system("cls");
		if(tt==1)
		FirstMap(snake);	
		else if(tt==2)
		SecondMap(snake);
		else if(tt==3)
		ThirdMap(snake);
		SnakeFood(snake,food);	
		if(nn==1)
		SnakeMove1(snake,false);
		else if(nn==2)
		SnakeMove2(snake,false);
	}	
	return 0;
}

