//Hossein delara 9733025
//Seyed Nami Modarressi 9733069
//Ali Monfaredi 9733074


#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

void delay(int n,int m){
	
	int i;
	int j;
	
	for(i=0;i<n;i++){

		for(j=0;j<m;j++){
			
			
		}
	}
}

void gotoxy(int x, int y) {
	
	COORD coord;
	coord.X = x;
	coord.Y = y;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(handle, coord);	
}

void splashscreen(){
	
	int i;
	
	system("color 2");
	
	for(i=1;i<20;i++){
	
	system("CLS");
	
	gotoxy(44,30-i);
	
	printf("S");
	
	delay(10000,1000);
	
	
	}
	
	for(i=1;i<20;i++){
	
	system("CLS");
	
	gotoxy(44,30-i);
	
	printf(" N");
	
	gotoxy(44,10);
	
	printf("S");
	
	delay(10000,1000);
	
	
	}
	
	for(i=1;i<20;i++){
	
	system("CLS");
	
	gotoxy(44,30-i);
	
	printf("  A");
	
	gotoxy(44,10);
	
	printf("SN");
	
	delay(10000,1000);
	
	
	}
	
	for(i=1;i<20;i++){
	
	system("CLS");
	
	gotoxy(44,30-i);
	
	printf("   K");
	
	gotoxy(44,10);
	
	printf("SNA");
	
	delay(10000,1000);
	
	
	}
	
	for(i=1;i<21;i++){
	
	system("CLS");
	
	gotoxy(44,30-i);
	
	printf("    E");
	
	gotoxy(44,10);
	
	printf("SNAK");
	
	delay(10000,1000);
	
	
	}
	
	gotoxy(44,10);
	
	printf("SNAKE");
	
	for(i=0;i<50;i++){
		
		system("CLS");
			
		gotoxy(44,10);
	
		printf("SNAKE");
		
		gotoxy(10+i,15);
		
		printf("OOOOO");
		
		delay(10000,1000);
	}
	
}

void loadingpage(){
	
	int i;
	
	system("color 2");
	
	gotoxy(48,5);
	
	
	printf("Loading Your Records")	;
	
	printf("\n");
	printf("\n");
	
	for(i=0; i<40;i++){
		
		delay(10000,1000);
		
		gotoxy(40+i,6);
		
		printf(".");
		
	}
	
	
		
}

void frame(){
	
	int i;
	
	gotoxy(10,5);
	for(i=10;i<90;i++){
		
		printf("_");
		
	}   
	
	
	for(i=7;i<25;i++){
		gotoxy(10,i);
		
		printf("|");
		
		gotoxy(90,i)	;
		
		printf("|\n");
		
		
	}
	
	
	gotoxy(10,25);
	for(i=10;i<90;i++){
		
		printf("_");
		
	}   
	
}

void drawsnake(int x[100],int y[100],int lenght){
	
	int i;
	
	for(i=0;i<lenght;i++){
		
		gotoxy(x[i],y[i]);
		
		printf("O");
		
		
	}
	
}

void removesnake(int x[100],int y[100],int lenght){
	
	int i;
	
	for(i=0;i<lenght;i++){
		
		gotoxy(x[i],y[i]);
		
		printf(" ");
		
	}
	
}

void shift(int x[100],int y[100],int lenght){
	
	int i;
	for(i=lenght;i>0;i--){
		
		x[i]=x[i-1];
		y[i]=y[i-1];
		
	}
	
	
}

void move(int x[100],int y[100],char move[100],int move_number[100], int z, int lenght){
	
	int i=0;
	
	for(i=0;i<z;i++){
	
	if(move_number[i]>0){
		
		shift(x,y,lenght);
		
		move_number[i]=move_number[i]-1;
		
		if(move[i]=='l'){
			
			x[0]=x[1]-1;
			
		}
		
		if(move[i]=='r'){
			
			x[0]=x[1]+1;
			
		}
		
		if(move[i]=='u'){
			
			y[0]=y[1]-1;
			
		}
		
		if(move[i]=='d'){
			
			y[0]=y[1]+1;
			
		}
		
		break;
		
	}
	
	
	
	}
	
}

int smash(int x[100],int y[100],int lenght){

int i;

if(x[0]==10||x[0]==90||y[0]==5||y[0]==25)	{
	gotoxy(0,0);
	return 1;
}

for(i=1;i<lenght;i++){
	
	if(x[0]==x[i]&&y[0]==y[i]){
		gotoxy(0,0);
		return 1;
	}
	
}
return 0;
	
}

int main() {

char mmove[100];
int move_number[100];
int lenght;
int i=0;
int j;
int x[100];
int y[100];

splashscreen();

delay(10000,100000);

system("CLS");

loadingpage();

delay(10000,10000);

system("CLS");

printf ("Snake Game :");

printf("\n\n");

printf("Please Enter Any Key To Play\n");

printf("\n\n");

printf("________________________________\n\n");

printf("Your Record : Coming soon!");

printf("\n\n________________________________\n\n");

printf("About Us : \n\n");

printf("Hossein Delara\n\n");

printf("Seyed Nami Modarressi\n\n");

printf("Ali Monfaredi\n\n");

printf("________________________________\n\n");

printf("version 1.0\n\n");

printf("________________________________\n\n");

getch();

system("CLS");

printf("Instruction :\n");

printf("1.Directions :");

printf("\n\t\tright => r");

printf("\n\t\tleft => l");

printf("\n\t\tup => u");

printf("\n\t\tdown => d");

printf("\n2.Enter The command as \"direction number\" (for example => r 5 ) ");

printf("\n3.To run the program enter f\n");

printf("4.Do not enter \"r\" after \"l\" and vice versa and Do not enter \"u\" after \"d\" and vice versa\n\n");

printf("5.do not enter \"r\" as the first move\n");

printf("Enter your movement(s) (Max number of moves = 100) :\n");

while(1){

	scanf("%c",&mmove[i]);
	
	if(mmove[i]=='f'){
		
		break;
		
	}
	scanf("%d",&move_number[i]);
	
	getchar();
	
	i++;
	
}

delay(1000,1000);

printf("\n\n Enter Snake Length\n");

scanf("%d",&lenght);

system("CLS");

for(j=0;j<lenght;j++){
	
	y[j]=15;
	x[j]=45+j;
}

frame();
drawsnake(x,y,lenght);

for(j=0;move_number[i-1]>0;j++){
	
	removesnake(x,y,lenght);
	move(x,y,mmove,move_number,i,lenght);
	
	drawsnake(x,y,lenght);
	
	delay(100000,1000);
	
		if(smash(x,y,lenght)){
		system("CLS");
		gotoxy(40,10);
		printf("Game Over !");
		break;
	}

}
	gotoxy(10,28);
	system("pause");

}

