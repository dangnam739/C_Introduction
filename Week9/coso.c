#include<stdio.h>
#include<math.h>

void printBinary(int n);
void printOctal(int n);
void printHexa(int n);
	
int main(){
	int n;
	do{
	printf("Nhap so thap phan n= ");
	scanf("%d", &n);
	if (n<0) printf("Ban da nhap sai ! Vui long nhap lai ! \n");
	} while (n<0);
	printBinary(n);
	printOctal(n);
	printHexa(n);
	return 0;
}

void printBinary (int n){
	int a, b;
	a = log(n)/log(2);
	printf("So thap phan %d duoc bieu dien trong he nhi phan la: ", n);
	for (int i=a; i>=0; i--){
		b = n/pow(2,i);
		printf("%d", b);
		n = n - b*pow(2,i);
	}
	printf("\n");
}

void printOctal(int n){
	int a, b;
	a = log(n)/log(8);
	printf("So thap phan %d duoc bieu dien trong he bat phan la: ", n);
	for (int i=a; i>=0; i--){
		b = n/pow(8,i);
		printf("%d", b);
		n = n - b*pow(8,i);
	}
	printf("\n");
}

void printHexa(int n){
	int a, b;
	a = log(n)/log(16);
	printf("So thap phan %d duoc bieu dien trong he hexa la    : ", n);
	for (int i=a; i>=0; i--){
		b = n/pow(16,i);
		if (b==15) printf("F");
		if (b==14) printf("E");
		if (b==13) printf("D");
	    if (b==12) printf("C");
	    if (b==11) printf("B");
	    if (b==10) printf("A");
		if (b<10)  printf("%d", b);
		n = n - b*pow(16,i);
	}
	printf("\n");
}
