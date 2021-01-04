#include<stdlib.h> 

#ifndef SNAKEMAP_H 
#define SNAKEMAP_H

#define LengthWall 50    //墙的长度 
#define WidthWall 25 	//墙的宽度 

int Map[LengthWall+1][WidthWall+1];	//创建初始地图 


typedef struct snake{
	int x,y;
	struct snake *SnakeNext;
}SNAKE,*Snake;


//用于移动光标
void gotoxy(int x,int y){		
COORD pos;       
pos.X = x-1;    
pos.Y = y-1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}


void FirstMap(Snake &snake){            // 图一 
	for(int i=1;i<=LengthWall;i++){
		for(int j=1;j<=WidthWall;j++){
			if(j==1||j==WidthWall)
			Map[i][j]=1;
			else if((j>=2&&j<=WidthWall-1)&&(i==1||i==LengthWall))
			Map[i][j]=1;
		}
	}
	
	for(int i=1;i<=LengthWall;i++){
		for(int j=1;j<=WidthWall;j++){
			if((j==1||j==WidthWall)&&Map[i][j]==1)
			{
				gotoxy(i,j);
				printf("=");  
			}
			else if((j>=2&&j<=WidthWall-1)&&(i==1||i==LengthWall)&&Map[i][j]==1)
			{
				gotoxy(i,j);
				printf("|");  
			}
		}
	}	
	snake =(Snake)malloc(sizeof(Snake));
	Snake p=snake,s;
	for(int i=LengthWall-4;i<=LengthWall-2;i++)
	{
		
		s=(Snake)malloc(sizeof(SNAKE));
		s->x=i;s->y=12;
		p->SnakeNext=s;
		p=s;
	}
	p->SnakeNext=NULL;		
	p=snake->SnakeNext;
	gotoxy(p->x,p->y);
	printf("O");
	p=snake;
	while(p->SnakeNext)
	{
		gotoxy(p->SnakeNext->x,p->SnakeNext->y);
		printf("+");
		p=p->SnakeNext;
	}
}

void SecondMap(Snake &snake){            // 图二 
	for(int i=1;i<=LengthWall;i++){
		for(int j=1;j<=WidthWall;j++){
			if(j==1||j==WidthWall)
			Map[i][j]=1;
			else if((j>=2&&j<=WidthWall-1)&&(i==1||i==LengthWall))
			Map[i][j]=1;
		}
	}
	for(int i=6;i<=18;i++)
	Map[25][i]=1;
	for(int i=1;i<=LengthWall;i++){
		for(int j=1;j<=WidthWall;j++){
			if((j==1||j==WidthWall)&&Map[i][j]==1)
			{
				gotoxy(i,j);
				printf("=");  
			}
			else if((j>=2&&j<=WidthWall-1)&&(i==1||i==LengthWall)&&Map[i][j]==1)
			{
				gotoxy(i,j);
				printf("|");  
			}
			else if(Map[i][j]==1)
			{
				gotoxy(i,j);
				printf("#");  
			}
		}
	}		
	snake =(Snake)malloc(sizeof(Snake));
	Snake p=snake,s;
	for(int i=LengthWall-4;i<=LengthWall-2;i++)
	{
		
		s=(Snake)malloc(sizeof(SNAKE));
		s->x=i;s->y=12;
		p->SnakeNext=s;
		p=s;
	}
	p->SnakeNext=NULL;		
	p=snake->SnakeNext;
	gotoxy(p->x,p->y);
	printf("O");
	p=snake;
	while(p->SnakeNext)
	{
		gotoxy(p->SnakeNext->x,p->SnakeNext->y);
		printf("+");
		p=p->SnakeNext;
	}
}

void ThirdMap(Snake &snake){            // 图三 
	for(int i=1;i<=LengthWall;i++){
		for(int j=1;j<=WidthWall;j++){
			if(j==1||j==WidthWall)
			Map[i][j]=1;
			else if((j>=2&&j<=WidthWall-1)&&(i==1||i==LengthWall))
			Map[i][j]=1;
		}
	}
		
	for(int i=12;i<=35;i++)
	Map[i][12]=1;
	for(int i=6;i<=18;i++)
	Map[25][i]=1;
	for(int i=1;i<=LengthWall;i++){
		for(int j=1;j<=WidthWall;j++){
			if((j==1||j==WidthWall)&&Map[i][j]==1)
			{
				gotoxy(i,j);
				printf("=");  
			}
			else if((j>=2&&j<=WidthWall-1)&&(i==1||i==LengthWall)&&Map[i][j]==1)
			{
				gotoxy(i,j);
				printf("|");  
			}
			else if(Map[i][j]==1)
			{
				gotoxy(i,j);
				printf("#");  
			}
		}
	}		
	snake =(Snake)malloc(sizeof(Snake));
	Snake p=snake,s;
	for(int i=LengthWall-4;i<=LengthWall-2;i++)
	{
		
		s=(Snake)malloc(sizeof(SNAKE));
		s->x=i;s->y=12;
		p->SnakeNext=s;
		p=s;
	}
	p->SnakeNext=NULL;		
	p=snake->SnakeNext;
	gotoxy(p->x,p->y);
	printf("O");
	p=snake;
	while(p->SnakeNext)
	{
		gotoxy(p->SnakeNext->x,p->SnakeNext->y);
		printf("+");
		p=p->SnakeNext;
	}
}

#endif

