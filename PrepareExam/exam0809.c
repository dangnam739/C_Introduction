#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define ROW 3
#define LINE 5

typedef struct{
	char name[50];
	int color;
	int score;
} player;

int menu();
void chuanhoaName(char name[]);
void nhapktcolor(int ktcolor[LINE][ROW]);
void printColor(int ktcolor[LINE][ROW]);
	
int main(){
	int ktcolor[LINE][ROW]={
		{0,1,2},
		{1,2,0},
		{2,1,0},
		{0,2,1},
		{1,2,0}
	};
	int ch, i, m;
	player play[4];
	
	do{
		ch = menu();

		switch(ch){
		case 1:
			printf("\n\t1. Tao ma tran o mau\n");
			
			printColor(ktcolor);
			printf("==========================================\n");
			break;

		case 2:
			printf("\n\t2. Thay doi tran o mau\n");
			nhapktcolor(ktcolor);
			printColor(ktcolor);
			printf("==========================================\n");
			break;

		case 3:
			printf("\n\t3. Thuc hien tro choi\n");
			for(int i=0; i<4; i++){
				printf("Nguoi choi thu %d\n", i+1);
				printf("\tHo ten nguoi choi: ");
				gets(play[i].name);
				chuanhoaName(play[i].name);
				printf("\tTen cua ban la: %s.\n", play[i].name);
				
				do{
				printf("\tMau ban chon (0-Xanh, 1-Vang, 2-Do): ");
				scanf("%d%*c", &play[i].color);

				if(play[i].color<0 || play[i].color>2) printf("Khong co mau ban chon\nVui long nhap lai !\n");
				} while(play[i].color<0 || play[i].color>2);

				play[i].score = 0;
			  	for(int j=0; j< LINE; j++){
					printf("Hang %d\n", j+1);
					printf("\tO ma ban dat chan: ");
					scanf("%d%*c", &m);

					if(play[i].color == ktcolor[j][m-1])   
						play[i].score++;
				}
				printf("\n");
		   	}
			printf("==========================================\n");
			break;

		case 4:
			printf("\n\t4. Hien thi ket qua\n");
			printf("%-10s %-30s %-12s %-6s\n", "Luot choi", "Nguoi choi", "Mau lua chon", "Diem");
			for(int i=0; i<4; i++){
				if(play[i].color == 0)
					printf("%-10d %-30s %-12s %-6d\n", i+1, play[i].name,"Xanh", play[i].score );
				if(play[i].color == 1)
					printf("%-10d %-30s %-12s %-6d\n", i+1, play[i].name,"Vang", play[i].score );
				if(play[i].color == 2)
					printf("%-10d %-30s %-12s %-6d\n", i+1, play[i].name,"Do", play[i].score );
			}
			printf("\n");			
			printf("==========================================\n");
			break;

		case 5:
			printf("\n\t5. Thoat chuong trinh \n");
			printf("==========================================\n");
			break;
			
		}
	}while(ch != 5);

	return 0;
}


int menu(){
	int ch;
	printf("\tGHI NHO BUOC CHAN\n");
	printf("1. Tao ma tran o mau\n");
	printf("2. Thay doi ma tran o mau\n");
	printf("3. Thuc hien tro choi\n");
	printf("4. Hien thi ket qua\n");
	printf("5. Thoat chuong trinh !\n");
	printf("==========================================\n");
	do{
	printf("\tNhap lua chon cua ban la: ");
	scanf("%d%*c", &ch);
	if( ch <=0 || ch >5) printf("Ban da nhap sai !\n Lua chon la mot so tu nhien tu 1 den 5 !\n Vui long nhap lai !\n");
	}while(ch<=0 || ch>5);
	printf("==========================================\n");

	return ch;
}

void printColor(int ktcolor[LINE][ROW]){
	for(int i=0; i<LINE; i++){
		printf("----------------------\n");
		for(int j=0; j<ROW; j++)
		{
			if(ktcolor[i][j] == 0) printf("| %4s ","Xanh");
			if(ktcolor[i][j] == 1) printf("| %4s ","Vang");
			if(ktcolor[i][j] == 2) printf("| %4s ", "Do");
		   	
		}
		printf("|\n");
	}
		printf("----------------------\n");
	
}

void nhapktcolor(int ktcolor[LINE][ROW]){

	int a=1;
	for(int i=0; i< LINE; i++){
		for(int j=0; j<ROW; j++){
			do{
			a=1;
			printf("Mau o cot %d hang %d: ", j+1, i+1);
			scanf("%d", &ktcolor[i][j]);
			if(ktcolor[i][j]<0 || ktcolor[i][j]>2)
			{	a=0;
				printf("Ban da nhap sai !Ki hieu mau la cac so 0, 1, 2\n");
			}

			for(int k=0; k<j; k++)
				if(ktcolor[i][k] == ktcolor[i][j]) {
					a=0;
					printf("Ki hieu mau da co\nNhap lai ki hieu mau khac !\n");
				}
					
			}while(a != 1);
		}
		printf("\n");
	}
	
}

void chuanhoaName(char name[]){
	int i;
	//trimBlank
	//trimLeft
	while(name[0] == ' '){
		strcpy(&name[0], &name[1]);
	}
	//trimeMiddle
	for(i=0; i<strlen(name)-1; i++){
		if(name[i]==' ' && name[i+1]==' ')
		{
			strcpy(&name[i], &name[i+1]);
			i--;
		}
	}
	//trimRight
	while(name[strlen(name)-1] == ' '){
		strcpy(&name[strlen(name)-1], &name[strlen(name)]);
	}

	//Chuan hoa viet hoa chu cai dau
	//Dua tat ca cac chu cai ve chu thuong
	for( i=0; i<strlen(name); i++)
		name[i]=tolower(name[i]);
	//Viet hoa cac chu cai dau
	name[0] = toupper(name[0]);
	i=1;
	while(name[i] != '\0'){
		if(isblank(name[i]))
			name[i+1]=toupper(name[i+1]);
		i++;
	}
	
}
