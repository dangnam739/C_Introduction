#include<stdio.h>
#include<string.h>
#define MAX 100

typedef struct{
	char name[30];
	char description[50];
	float rating;
	char address[100];
}Restaurant;

void getRes(Restaurant *res);
int menu(int ch);
void printRes(Restaurant res);
int findName(Restaurant res, char s[]);
int findDes(Restaurant res, char s[]);
void swap(Restaurant *s1, Restaurant *s2);
void sortDesRating(Restaurant res[], int n);
	
int main(){
	int ch, n=0, m=0, count, count1=0;
	Restaurant res[MAX];
	char s[MAX];
	
	do{
		ch = menu(ch);
		if(ch == 1) count1++;
		switch(ch) {
		case 1:
			if(count1>=2){
			printf("\n\t1. Nhap thong tin nha hang\n");
			printf("Nhap so luong nha hang ban muon nhap them thong tin: ");
			scanf("%d%*c", &m);
		   
			for(int i=n; i<n+m; i++){
				printf("Nha hang %d\n", i+1);
				getRes(&res[i]);
			}
			n=n+m;
			
			printf("==========================================\n");
			}
			else {
			printf("\n\t1. Nhap thong tin nha hang\n");
			printf("Nhap so luong nha hang: ");
			scanf("%d%*c", &n);
			for(int i=0; i<n; i++){
				printf("Nha hang %d\n", i+1);
				getRes(&res[i]);
			}
			printf("==========================================\n");
			}
						
			break;

		case 2:
			printf("\n\t2. In thong tin cac nha hang\n");
		   
			for(int i=0; i<n; i++){
				printf("Nha hang %d: \n", i+1);
				printRes(res[i]);
			}
			printf("==========================================\n");
			break;

		case 3:
			count = 0;
			
			printf("\n\t3.Tim kiem theo ten\n");
			printf("Nhap ten nha hang ban muon tim kiem: ");
			gets(s);
			printf("\n");
			
			for(int i=0; i<n; i++)	
				if(findName(res[i], s)){
					printRes(res[i]);
					printf("\n");
					count++;
				}

			if(count == 0) printf("Khong tim thay ten nha hang ma ban nhap \n");
			printf("==========================================\n");
			break;
			
		case 4:
			printf("\n\t4. Tim kiem theo mo ta\n");
			count = 0;
			
			printf("Nhap ten mon an ban muon tim kiem: ");
			gets(s);
			printf("\n");

			
			for(int i=0; i<n; i++)	
				if(findDes(res[i], s)){
					printRes(res[i]);
					printf("\n");
					count++;
				}

			if(count == 0) printf("Khong tim thay nha hang co mon an ma ban nhap \n");
			printf("==========================================\n");
			break;						

		case 5:
			printf("\n\t5. Sap xep cac nha hang theo thu tu giam dan rating \n");
			
			sortDesRating(res, n);
			for(int i=0; i<n; i++){
				printf("Nha hang %d: \n", i+1);
				printRes(res[i]);
				printf("\n");
			}
			printf("==========================================\n");
			break;
			
		case 6:
			printf("\n\tThoat ! Hen gap ban lan sau !\n");
			printf("==========================================\n");
			break;
   
		}
	}while(ch != 6);
}


 int menu(int ch){
	printf("\tTHONG TIN NHA HANG\n");
	printf("1. Nhap thoing tin cac nha hang\n");
	printf("2. In thong tin cac nha hang\n");
	printf("3. Tim kiem theo ten\n");
	printf("4. Tim kiem theo mo ta\n");
	printf("5. Sap xep\n");
	printf("6. Thoat !\n");
	printf("==========================================\n");
	do{
	printf("\tNhap lua chon cua ban la: ");
	scanf("%d%*c", &ch);
	if( ch <=0 || ch >6) printf("Ban da nhap sai !\n Lua chon la mot so tu nhien tu 1 den 6 !\n Vui long nhap lai !\n");
	}while(ch<=0 || ch>6);
	printf("==========================================\n");

	return ch;
	
}


void getRes(Restaurant *res){
		printf("\tNhap ten nha hang: ");
		gets(res->name);

		printf("\tNhap cac mon an: ");
		gets(res->description);

		do{
		printf("\tNhap danh gia trung binh: ");
		scanf("%f%*c", &res->rating);
		if(res->rating < 0 || res->rating>5) printf("Vui long nhap lai, danh gia la mot so thuc trong doan [0,5]\n");
		}while(res->rating < 0 || res->rating>5);
		
		printf("\tNhap dia chi nha hang: ");
		gets(res->address);

		printf("\n");	
}

void printRes(Restaurant res){
	printf("Name: %s\n", res.name);
	printf("Description: %s\n", res.description);
	printf("Rating: %f\n", res.rating);
	printf("Address: %s\n", res.address);
	printf("\n");
}

int findName(Restaurant res, char s[]){
	if (strcasestr(res.name, s) == NULL)
		return 0;
	return 1;
}

int findDes(Restaurant res, char s[]){
if (strcasestr(res.description, s) == NULL)
		return 0;
	return 1;
}

void swap(Restaurant *s1, Restaurant *s2){
		Restaurant tmp;
	   	tmp = *s1;
	   	*s1 = *s2;
	   	*s2 = tmp;
}

void sortDesRating(Restaurant res[], int n){

	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(res[i].rating < res[j].rating)
				swap(&res[i], &res[j]);		
   
}
