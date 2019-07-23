#include<stdio.h>

void printfchar(int ch, int n);
int kitu(char ch);

int main(){
	char ch;
	int count=1;
	printf("\t* right triangle 5x5\n");
	for(int i=1; i<=5; i++){
		printfchar('*', i);
		printf("\n");
	}
	printf("\n");

	printf("\tSquare 9x9\n");
	for(int i=1; i<=9; i++){
		if ((i==1)||(i==9)) 
			printfchar('*', 9);
		else {
			printf("*");
			printfchar(' ', 7);
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	do{
	printf("Nhap ki tu: ");
	scanf("%c%*c",&ch);
	if(kitu(ch)) printf("%c\n", ch);
	else {
		printf("#\n");
		//	printf("Ban da nhap sai %d lan \n", count);
		count++;
	}
	
	}while (kitu(ch)==0 && count<=3);
		
	return 0;
	
}

void printfchar(int ch, int n){
	for (int i=0; i<n; i++){
		printf ("%c", ch);
	}
}

int kitu(char ch){
	if((ch>=65 && ch<=90)||(ch>=97 && ch<=122)||(ch>=48 && ch<=57))
		return 1;
	else return 0;
}
