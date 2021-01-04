#include<windows.h>
#include"SnakeMap.h"
#ifndef SNAKEOPERATE_H 
#define SNAKEOPERATE_H

int GameScore=0;	//用于统计游戏得分 
int DifficultyLevel; //难度等级 


struct Food{
	int foodX,foodY;
};

Food food; 			//全局变量 


//打印蛇的身体
void SnakeBody(Snake &snake){	
	Snake p=snake->SnakeNext;
	gotoxy(p->x,p->y);
	printf("O");
	while(p->SnakeNext)
	{
		gotoxy(p->SnakeNext->x,p->SnakeNext->y);
		printf("+");
		p=p->SnakeNext;
	}
}


//食物产生 
void SnakeFood(Snake &snake,Food &food){
	Snake p=snake;
	int x,y;
	bool result=true;
	while(result)
	{
		food.foodX=rand()%(LengthWall-2)+2;
		food.foodY=rand()%(WidthWall-2)+2;
		if(Map[food.foodX][food.foodY]==1)
		continue;
		while(p->SnakeNext)
		{
			if(food.foodX==p->SnakeNext->x&&food.foodY==p->SnakeNext->y)break;
			p=p->SnakeNext;
		}		
		if(p->SnakeNext==NULL)result=false;
	}
	gotoxy(food.foodX,food.foodY);
	printf("*");
}


//判断蛇是否吃到东西 
bool SnakeEat(Snake &snake){
	Snake p=snake->SnakeNext;
	if(p->x==food.foodX&&p->y==food.foodY)
	{
		GameScore++;
		SnakeFood(snake,food);
		return true;
	}
	else
	return false;
}


//游戏结果 
void GameResult(){
	system("cls");
	gotoxy(40,5);
	printf("Game Over\n");
	gotoxy(40,7);
	printf("游戏分数：%d\n",GameScore);
	gotoxy(40,9);
	printf("不要灰心,再接再厉\n");
	system("PAUSE");
	exit(0);

}

//判断蛇是否死亡 
void SnakeDead(Snake &snake) 
{

	Snake p=snake->SnakeNext;
	if(Map[p->x][p->y]==1)
	GameResult();
	p=snake->SnakeNext->SnakeNext;
	while(p->SnakeNext)
	{
		if(snake->SnakeNext->x==p->x&&snake->SnakeNext->y==p->y)
		GameResult();		
		p=p->SnakeNext;
	}
}

//蛇的向上向下向左向右移动 
void SnakeUp(Snake &snake)
{
	Snake p=snake;
	int x1,y1,x2,y2;
	if(!SnakeEat(snake))
	{
		while(p->SnakeNext)p=p->SnakeNext;
		gotoxy(p->x,p->y);
		printf(" ");
		p=snake;
		x1=snake->SnakeNext->x;
		y1=snake->SnakeNext->y;
		y1--;
		while(p->SnakeNext)
		{
			x2=p->SnakeNext->x;y2=p->SnakeNext->y;
			p->SnakeNext->x=x1;p->SnakeNext->y=y1;
			x1=x2;y1=y2;
			p=p->SnakeNext;
		}
	}
	else{
		Snake val,temp;
		val=(Snake)malloc(sizeof(SNAKE));	
		val->x=snake->SnakeNext->x;
		val->y=snake->SnakeNext->y-1;
		temp=snake->SnakeNext;
		snake->SnakeNext=val;
		val->SnakeNext=temp;					
	}
	SnakeDead(snake);
	SnakeBody(snake);
}
void SnakeDown(Snake &snake)
{	
	int x1,y1,x2,y2;
	Snake p=snake;
	if(!SnakeEat(snake))
	{
		while(p->SnakeNext)p=p->SnakeNext;
		gotoxy(p->x,p->y);
		printf(" ");
		p=snake;
		x1=snake->SnakeNext->x;
		y1=snake->SnakeNext->y;
		y1++;
		while(p->SnakeNext)
		{
			x2=p->SnakeNext->x;y2=p->SnakeNext->y;
			p->SnakeNext->x=x1;p->SnakeNext->y=y1;
			x1=x2;y1=y2;
			p=p->SnakeNext;
		}
	}
	else{
		Snake val,temp;
		val=(Snake)malloc(sizeof(SNAKE));
		val->x=snake->SnakeNext->x;
		val->y=snake->SnakeNext->y+1;
		temp=snake->SnakeNext;
		snake->SnakeNext=val;
		val->SnakeNext=temp;	
	}
	SnakeDead(snake);
	SnakeBody(snake);
}
void SnakeLeft(Snake &snake)
{	
	Snake p=snake;
	int x1,y1,x2,y2;
	if(!SnakeEat(snake))
	{
		while(p->SnakeNext)p=p->SnakeNext;
		gotoxy(p->x,p->y);
		printf(" ");
		p=snake;
		x1=snake->SnakeNext->x;
		y1=snake->SnakeNext->y;
		x1--;
		while(p->SnakeNext)
		{
			x2=p->SnakeNext->x;y2=p->SnakeNext->y;
			p->SnakeNext->x=x1;p->SnakeNext->y=y1;
			x1=x2;y1=y2;
			p=p->SnakeNext;
		}
	}
	else{
		Snake val,temp;
		val=(Snake)malloc(sizeof(SNAKE));
		val->x=snake->SnakeNext->x-1;
		val->y=snake->SnakeNext->y;
		temp=snake->SnakeNext;
		snake->SnakeNext=val;
		val->SnakeNext=temp;
	}
	SnakeDead(snake);
	SnakeBody(snake);
}
void SnakeRight(Snake &snake)
{
	Snake p=snake;
	int x1,y1,x2,y2;
	if(!SnakeEat(snake))
	{
		while(p->SnakeNext)p=p->SnakeNext;
		gotoxy(p->x,p->y);
		printf(" ");
		p=snake;
		x1=snake->SnakeNext->x;
		y1=snake->SnakeNext->y;
		x1++;
		while(p->SnakeNext)
		{
			x2=p->SnakeNext->x;y2=p->SnakeNext->y;
			p->SnakeNext->x=x1;p->SnakeNext->y=y1;
			x1=x2;y1=y2;
			p=p->SnakeNext;
		}
	}
	else{
		Snake val,temp;
		val=(Snake)malloc(sizeof(SNAKE));
		val->x=snake->SnakeNext->x+1;
		val->y=snake->SnakeNext->y;
		temp=snake->SnakeNext;
		snake->SnakeNext=val;
		val->SnakeNext=temp;	
	}
	SnakeDead(snake);
	SnakeBody(snake);
}


//控制方向wasd 
void SnakeMove1(Snake &snake,bool model){
		char direction1='A';
		char direction2='D';//表示与蛇前进的反方向 
		bool a,b;		
	while(1){
		if(model){
			gotoxy(70,8);
			if(GameScore>=0&&GameScore<=15)
			{
				a=true;
				printf("第一关\n");
			}
			else if(GameScore>15&&GameScore<=30)
			{
				b=true;
				printf("第二关\n");		
			}
			else
			printf("第三关\n");
			
			gotoxy(70,10);
			printf("GameScore:%d",GameScore);
			
			if(GameScore>15&&GameScore<=30&&a){
				a=false;
				system("cls");
				gotoxy(40,5);
				printf("恭喜你第一关闯关成功\n"); 
				gotoxy(40,6);
				printf("即将进入第二关\n");
				Sleep(1000);
				break;
			}		
			else if(GameScore>30&&b){
				b=false;
				system("cls");
				gotoxy(40,5);
				printf("恭喜你第二关闯关成功\n"); 
				gotoxy(40,6);
				printf("即将进入第三关\n");
				Sleep(1000);
				break;
			}	
		}
		else{
				gotoxy(70,10);
				printf("GameScore:%d",GameScore);
			}
		Sleep(DifficultyLevel);
		if(kbhit())
		direction1=getch();
		if(direction1!=direction2)
		{
			switch(direction1){
				case 'W':direction2='S';SnakeUp(snake);break;
				case 'A':direction2='D';SnakeLeft(snake);break;
				case 'S':direction2='W';SnakeDown(snake);break;
				case 'D':direction2='A';SnakeRight(snake);break;	
			}
		}
		else
		{
			switch(direction1){
				case 'S':SnakeUp(snake);break;
				case 'D':SnakeLeft(snake);break;
				case 'W':SnakeDown(snake);break;
				case 'A':SnakeRight(snake);break;		
			}
		}
	}	
}

//控制方向的另一种方式 
void SnakeMove2(Snake &snake,bool model){				//上: 72 下:80  左:75  右:77 
	char direction1=75;
	char direction2=77;//表示与蛇前进的反方向 
	bool a,b;
	while(1){
		if(model){
			gotoxy(70,8);
			if(GameScore>=0&&GameScore<=15)
			{
				a=true;
				printf("第一关\n");
			}
			else if(GameScore>15&&GameScore<=30)
			{
				b=true;
				printf("第二关\n");		
			}
			else
			printf("第三关\n");
			
			gotoxy(70,10);
			printf("GameScore:%d",GameScore);
			
			if(GameScore>15&&GameScore<=30&&a){
				a=false;
				system("cls");
				gotoxy(40,5);
				printf("恭喜你第一关闯关成功\n"); 
				gotoxy(40,6);
				printf("即将进入第二关\n");
				Sleep(1000);
				break;
			}		
			else if(GameScore>30&&b){
				b=false;
				system("cls");
				gotoxy(40,5);
				printf("恭喜你第二关闯关成功\n"); 
				gotoxy(40,6);
				printf("即将进入第三关\n");
				Sleep(1000);
				break;
			}	
		}
		else{
				gotoxy(70,10);
				printf("GameScore:%d",GameScore);
			}
		Sleep(DifficultyLevel);
		if(kbhit())
		direction1=getch();
		if(direction1!=direction2)
		{
			switch(direction1){
				case 72:direction2=80;SnakeUp(snake);break;
				case 75:direction2=77;SnakeLeft(snake);break;
				case 80:direction2=72;SnakeDown(snake);break;
				case 77:direction2=75;SnakeRight(snake);break;	
			}
		}
		else
		{
			switch(direction1){
				case 80:SnakeUp(snake);break;
				case 77:SnakeLeft(snake);break;
				case 72:SnakeDown(snake);break;
				case 75:SnakeRight(snake);break;		
			}
		}
	}	
} 

#endif
