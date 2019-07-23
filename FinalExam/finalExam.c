#include<stdio.h>
#include<string.h>

#define

typedef struct{

	
};

int menu();


int main()
{


	int ch;

	do{
		ch = menu();
		
		switch(ch){
			
		case 1:
			printf("\n\t1.  \n");

			printf("==========================================\n");
			break;


		case 2:
			printf("\n\t2. \n");
			
			printf("==========================================\n");
			break;

		case 3:
			printf("\n\t3.  \n");
			
			printf("==========================================\n");
			break;

		case 4:
			printf("\n\t4. \n");
			printf("==========================================\n");
			break;

		case 5:
			printf("\n\t5. Thoat Chuong Trinh\n");
			
			printf("==========================================\n");
			break;
		
		}
		
	}while (ch != );
	
	return 0;
}

int menu(){
	int ch;
	printf("\t\n");
	printf("1.\n");
	printf("2.\n");
	printf("3.\n");
	printf("4.\n");
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
