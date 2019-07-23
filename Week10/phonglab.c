#include<stdio.h>
#define arraySize 40

int menu(int ch);
void dungmay(int a[], int b[], int c[]);
void roimay(int a[]);
void trangthai(int a[]);
void diennang(int c[], int d[] );
void thanhtoan(int d[]);
void maxmin(int c[]);

int main()
{
	int a[arraySize]={0};
	int b[arraySize];
	int c[arraySize]={0};//so lan su dung
	int d[arraySize]={0}; // dien nang tung may
	int ch;	

	for(int i=0; i<arraySize; i++){
		b[i]=a[i];
		if(a[i] == 1) c[i]=1;
	}
	
	do{
		ch = menu(ch);
		switch(ch){
		case 1:
			dungmay(a, b, c);
			break;

		case 2:
			roimay(a);
			break;

		case 3:
			trangthai(a);
			break;

		case 4:
			diennang(c,d);
			break;

		case 5:
			thanhtoan(d);
			break;

		case 6:
			maxmin(c);
			break;

		case 7:
			printf("\nTHOAT ! Hen gap lai ban !\n");
			break;

		default :
			printf("Ban da nhap sai lua chon ! Vui long nhap lai !\nLua chon la mot so tu 1 den 7 !\n");
		}
	} while (ch != 7);

	return 0;
}


int menu(int ch){
	   	printf("\tMENU - PHONG LAB 813\n");
		printf("1. Dung may\n");
		printf("2. Roi may\n");
		printf("3. In ra trang thai cac may\n");
		printf("4. In ra dien nang tieu thu tich luy tren cac may den thoi diem hien tai\n");
		printf("5. In ra tong dien nang tieu thu va tien dien thanh toan\n");
		printf("6. In ra may duoc dung nhieu nhat va it nhat\n");
		printf("7. THOAT\n");
		printf("\n\tLua chon cua ban la: ");
		scanf("%d", &ch);
		return ch;
}

void dungmay(int a[], int b[], int c[]){
	int may;
	do{
		do{
		printf("\nChi dinh so hieu may ban muon su dung: ");
		scanf("%d", &may);
		if(may>40 || may<1) printf("Khong co so hieu may nay ! vui long nhap lai ! So hieu may tu 1 den 40 !\n\n");
		}	while(may>40 || may<1);

		if(a[may-1] == 0) {
			printf("May %d con trong ! Ban co the su dung !\n\n", may);
			a[may-1] = 1;
			c[may-1]++;
			b[may-1] = 1;
		}
		else {
			printf("May %d dang su dung ! Vui long chon may khac !\n", may);
			b[may-1]=0;
		}
   	 } while(b[may-1] != 1);
	printf("============================================\n");
	
}

void roimay(int a[]){
	int may;
	printf("May ban dang su dung co so hieu la: ");
	scanf("%d", &may);
	printf("May %d da tro ve trang thai roi\n", may);
	a[may-1] = 0;
	printf("============================================\n");
}

void trangthai(int a[]){
	printf("Trang thai cac may la \n\n");
		printf("So hieu may  |  Trang thai\n");
		printf("==========================\n");
		for(int i=0; i<arraySize; i++){
		if(a[i] == 1)
			printf("    %2d     |  Dang su dung \n ", i+1);
		else
			printf("    %2d     |       Tat     \n ", i+1);
		}
		printf("============================================\n");
}

void diennang( int c[], int d[]){
		printf("So hieu may  | Dien nang tieu thu\n");
	for(int i=0; i<arraySize; i++){
		d[i]= 400*c[i];
		printf("    %2d       |   %5d W\n", i+1, d[i]);
	 	}
	printf("\n");
		printf("============================================\n");
}

void thanhtoan(int d[]){
	int sum1=0, sum2=0;
	for(int i=0; i<arraySize; i++){
		sum1 += d[i];
	}
	sum2= sum1*750;
	printf("\nTong dien nang tieu thu la: %d W\n", sum1);
	printf("Tien dien thanh toan la: %d VND\n", sum2);
	printf("============================================\n");
}

void maxmin(int c[]){
	int max, min;
	max=c[0];
	min=c[0];

	printf("\nMay duoc su dung nhieu lan nhat la: ");
	for(int i=0; i<arraySize; i++){
		if(c[i] >= max) max=c[i];
		if(c[i] <= min) min=c[i];
	}
	for(int i=0; i<arraySize; i++){
		if(c[i] == max) printf("%2d, ", i+1);
	}

	printf("\nMay duoc su dung it lan nhat la: ");
	for(int i=0; i<arraySize; i++){
		if(c[i] == min) printf("%2d, ", i+1);
	}
	printf("\n");
	printf("============================================\n");
}
