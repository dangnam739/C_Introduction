#include<stdio.h>
#include<string.h>
#define MAX 10

typedef struct{
	char hoten[30];
	int diem[5];
	int count;
	int sum;
} ketquathidau;

int menu();
void swap(ketquathidau *s1, ketquathidau *s2);
void sort(ketquathidau vdv[], int n);
int max2(ketquathidau vdv[], int n);
int max3(ketquathidau vdv[], int n);

int main()
{
	ketquathidau vdv[MAX];
   	int ch, n, i, j, stt;
	do{
		ch = menu();

		switch (ch){
		case 1:
			printf("\n\t1.Dang ki van dong vien\n");
			do{
			printf("So luong van dong vien: ");
			scanf("%d%*c", &n);
			if(n<0 || n>10) printf("So luong VDV trong moi luot thi toi da la 10 !\nVui long nhap lai !\n");
			}while(n<0 || n>10);

			for(i=0; i<n; i++)
			{
				printf("Nhap ten VDV %d: ", i+1);
				gets(vdv[i].hoten);
			}

			printf("\n\tDanh sach cac VDV\n");
			for(i=0; i<n; i++)
				printf("%d. %s\n", i+1, vdv[i].hoten);
			printf("==========================================\n");
			break;

		case 2:
			printf("\n\t2. Thi dau\n");
			for(int i=0; i<n; i++){
				printf("Ket qua thi dau cua vdv %d: %s\n", i+1, vdv[i].hoten);
				vdv[i].sum=0;
				for(int j=0; j<5; j++){
					do{
						printf("\tLuot %d: ", j+1);
						scanf("%d", &vdv[i].diem[j]);
						if(vdv[i].diem[j]<0 || vdv[i].diem[j]>10) printf("Khong ton tai diem nay !\nDiem hop le nam trong doan [0,10]\n");
					}while(vdv[i].diem[j]<0 || vdv[i].diem[j]>10);
					vdv[i].sum += vdv[i].diem[j];
				}
				printf("\n");
			}

			puts("\tBang ket qua\n");
			printf("%-20s %5d %5d %5d %5d %5d\n", "Ho ten", 1, 2, 3, 4, 5);
			for(i=0; i<n; i++){
				printf("%-20s ", vdv[i].hoten);
				for(j=0; j<5; j++)
					printf("%5d ", vdv[i].diem[j]);
				printf("\n");
			}
			printf("==========================================\n");
			break;
			
		case 3:
			printf("\n\t3. Xep hang\n");
			sort(vdv,n);
			printf("%-20s %-8s %-15s\n", "Ho va ten", "Giai", "Tong diem");
			for(i=0; i<n; i++)
				if(vdv[i].sum == vdv[0].sum)
					printf("%-20s %-8s %-2d\n", vdv[i].hoten, "Gold", vdv[i].sum);
		
			for(i=0; i<n; i++)
				if(vdv[i].sum == max2(vdv,n))
		  			printf("%-20s %-8s %-2d\n", vdv[i].hoten, "Silver", vdv[i].sum);

			for(i=0; i<n; i++)
				if(vdv[i].sum == max3(vdv,n))
		  			printf("%-20s %-8s %-2d\n", vdv[i].hoten, "Bronze", vdv[i].sum);
				   	
			printf("==========================================\n");
			break;
			
		case 4:
			printf("\n\t4. Sieu xa thu\n");
			printf("Danh sach cac sieu xa thu la: \n");
			stt = 1;
			for(i=0; i<n; i++)
				for(j=0; j<3; j++)
					if(vdv[i].diem[j] == 10 && vdv[i].diem[j+1] == 10 && vdv[i].diem[j+2] == 10){
						printf("%d. %s\n",stt, vdv[i].hoten);
						stt++;
						break;
					}

			printf("==========================================\n");			
			break;

		case 5:
			printf("\n\t5. Thoat chuong trinh\n");
			printf("==========================================\n");			
			break;
		}
		
	}while(ch != 5);
   
}

int menu(){
	int ch;
	printf("\tQUAN LI KET QUA THI DAU BAN SUNG\n");
	printf("1. Dang ki van dong vien\n");
	printf("2. Thi dau\n");
	printf("3. Xep hang\n");
	printf("4. Sieu xa thu\n");
	printf("5. Thoat chuong trinh\n");
	printf("==========================================\n");
	do{
	printf("\tNhap lua chon cua ban la: ");
	scanf("%d%*c", &ch);
	if( ch <=0 || ch >5) printf("Ban da nhap sai !\n Lua chon la mot so tu nhien tu 1 den 5 !\n Vui long nhap lai !\n");
	}while(ch<=0 || ch>5);
	printf("==========================================\n");

	return ch;
}

void swap(ketquathidau *s1, ketquathidau *s2){
	ketquathidau tmp;
	tmp = *s1;
	*s1=*s2;
	*s2=tmp;
}


void sort(ketquathidau vdv[], int n){
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(vdv[j].sum > vdv[i].sum)
				swap(&vdv[i], &vdv[j]);
}

int max2(ketquathidau vdv[], int n){
	int max2;
	for(int i=0; i<n; i++)
				if(vdv[i].sum < vdv[0].sum){
					vdv[i].sum=max2;
		  			break;
				}
			return max2;
}

int max3(ketquathidau vdv[], int n){
	int max3;
			for(int i=0; i<n; i++)
				if(vdv[i].sum < max2(vdv,n)){
					vdv[i].sum=max3;
		  			break;
				}
			return max3;
}
