#include<stdio.h>
#define column 3
#define line 5

void hienthi(int a[line][column]);
int menu(int ch);

int main(){
	int a[line][column]={0};	
	int	i, j, ch, rw, col;
	int b[line][column];
	int sum=0;
	int bt;
	
	do{
		ch = menu(ch);
			 
		switch(ch){
		case 1:
				printf("\n\tBAT TAT THEO HANG\n");
				printf("Ban muon bat(1) hay tat(0) ? ");
				scanf("%d", &bt);
				if (bt == 1){
					do{
						printf("Chon hang ban muon bat den: "); scanf("%d", &rw);
						if(rw>5 || rw<1) printf("Vui long nhap lai ! So hang chi co tu 1 den 5 !\n");
					} while(rw>5 || rw<1);
			
					for (i=0; i<line; i++){
							for (j=0; j<column; j++)
								if(i+1==rw)   a[i][j] = 1;
						}
				}
				
			    if (bt == 0){
					do{
			printf("Chon hang ban muon tat den: "); scanf("%d", &rw);
			if(rw>5 || rw<1) printf("Vui long nhap lai ! So hang chi co tu 1 den 5 !\n");
			} while(rw>5 || rw<1);
			
			for (i=0; i<line; i++){
				for (j=0; j<column; j++)
						if(i+1==rw)   a[i][j] = 0;
			}
				} 

			hienthi(a);
				
			break;

		case 2:
			printf("\n\tBAT TAT THEO COT\n");
				printf("Ban muon bat(1) hay tat(0) ? ");
				scanf("%d", &bt);
				if (bt == 1){
				   do{
			printf("Chon cot ban muon bat den: "); scanf("%d", &col);
			if(col>3 || col<1) printf("Vui long nhap lai ! So cot chi co tu 1 den 3 !\n");
			} while(col>5 || col<1);
			for (i=0; i<line; i++){
					for (j=0; j<column; j++) {
					if(j+1==col) a[i][j] = 1;
					}
				}
				
			}			   
				
			    if (bt == 0){
			do{
			printf("Chon cot ban muon tat den: "); scanf("%d", &col);
			if(col>3 || col<1) printf("Vui long nhap lai ! So cot chi co tu 1 den 3 !\n");
			} while(col>5 || col<1);
			for (i=0; i<line; i++){
					for (j=0; j<column; j++) {
					if(j+1==col) a[i][j] = 0;
					}
			}
				} 

			hienthi(a);
			break;

		case 3:
			printf("\n\tBAT TAT THEO VI TRI\n");
				printf("Ban muon bat(1) hay tat(0) ? ");
				scanf("%d", &bt);
				if (bt == 1){
			printf("\n\tChon vi tri ban muon bat den: \n");
				printf("Vi tri hang: "); scanf("%d", &rw);
				printf("Vi tri cot : "); scanf("%d", &col);
			for (i=0; i<line; i++){
					for (j=0; j<column; j++) {
					if((i+1==rw) && (j+1==col)) a[i][j] = 1;
					}
			}	   
				
			}			   
				
			    if (bt == 0){
			printf("\n\tChon vi tri ban muon tat den: \n");
				printf("Vi tri hang: "); scanf("%d", &rw);
				printf("Vi tri cot : "); scanf("%d", &col);
			for (i=0; i<line; i++){
					for (j=0; j<column; j++) {
					if((i+1==rw) && (j+1==col)) a[i][j] = 0;
					}
			}
				} 

			hienthi(a);
			break;

		case 4:
		   	for (i=0; i<line; i++){
					for (j=0; j<column; j++) {
						if(a[i][j] == 1) {
						 	if(((i+1)%2==1) && ((j+1)%2==1)) b[i][j]=10;
							else if(((i+1)%2==0) && ((j+1)%2==0)) b[i][j]=20;
							else b[i][j]=15;
					}
						else b[i][j]=0;
						sum+=b[i][j];
					}
			}

			printf("\nCong suat tieu thu hien thoi la: %d W\n\n", sum);
			break;

		case 5:
			printf("Thoat ! Hen gap lai !\n");
			break;

		default :
			 printf("Ban da nhap sai ! Vui long nhap lai ! \nLua chon la so tu nhien tu 1 den 5\n");
			 break;
		}
			
	}while (ch != 5);
	
	return 0;
}

int menu(int ch){
	   	printf("\tMENU - CONG TAC DEN\n");
		printf("1. Bat tat theo hang\n");
		printf("2. Bat tat theo cot\n");
		printf("3. Bat tat theo vi tri\n");
		printf("4. Cong suat tieu thu cua den theo trang thai hien thoi\n");
		printf("5. THOAT\n");
		printf("\n\tLua chon cua ban la: ");
		scanf("%d", &ch);
		return ch;
}

void hienthi(int a[line][column]){
			for(int i=0; i<line; i++){
				printf("===================\n");
				for(int j=0; j<column; j++){
					printf("|  %1d  ", a[i][j]);
				}
				printf("|\n");
			}
			printf("===================\n");	
			}
