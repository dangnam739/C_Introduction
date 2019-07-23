#include<stdio.h>
#define M 3000000

int menu(int ch);
void nhaplieu(int a[], int s[],int chedo[]);
void maxmin(int a[]);

int main(){
	int cd, ch;
	int a[12], s[12], chedo[12];
	

	do{
		ch = menu(ch);


		switch(ch){
		case 1:
			printf("\nChon Che do chi tieu: \n ");
			printf("\tAN TOAN (1)\n");
			printf("\tLINH HOAT(2)\n");
			printf("Che do ban chon la: ");
			scanf("%d", &cd);
			printf("============================\n");
			break;

		case 2:
			printf("\nNhap lieu\n");
			nhaplieu(a,s,chedo);
			printf("============================\n");
			break;

		case 3:
			printf("\nBang ke ca nam \n");
			printf("Thang | Che do chi tieu | So tien chi tieu | So tien du \n");
			for(int i=0; i<12; i++){
				if(chedo[i] == 1)
					printf("  %2d  |     AN TOAN     |   %7d VND    |   %8d VND \n", i+1, a[i], s[i]);
			   	if(chedo[i] == 2 )
					printf("  %2d  |    TIET KIEM    |   %7d VND    |   %8d VND \n", i+1, a[i], s[i]);
			}
			printf("\n");
			break;

		case 4:
			printf("\nBao cao ca nam \n");
			maxmin(a);
			printf("So tien con lai sau mot nam la: %d VND\n", s[11]);
			break;

		case 5:
			printf("\nTHOAT ! Hen gap lai ban !\n");
			printf("===================================\n");
			break;

		default :
			printf("Ban da nhap sai lua chon ! Vui long nhap lai !\nLua chon la mot so tu 1 den 5\n");
			break;
			
		}
	}while(ch != 5);

	return 0;
}

int menu(int ch){
	   	printf("\tHEDSPI MONEY LOVER PROGRAM\n");
		printf("1. Che do chi tieu\n");
		printf("2. Nhap lieu\n");
		printf("3. Bang ke ca nam\n");
		printf("4. Bao cao thong ke\n");
		printf("5. THOAT\n");
		printf("\n\tLua chon cua ban la: ");
		scanf("%d", &ch);
		return ch;
}

void nhaplieu(int a[], int s[], int chedo[]){
	   
		int b[12];
		printf("Thang 1 \n");
		printf("\tChe do(AN TOAN: 1, TIET KIEM: 2): ");
		scanf("%d", &chedo[0] );
		printf("\tSo tien da chi tieu la(VND): ");
		scanf("%d", &a[0]);
		b[0]=M-a[0];
		s[0]= b[0];
			
	for(int i=1; i<12; i++){
		printf("Thang %d \n", i+1);
		printf("\tChe do(AN TOAN: 1, TIET KIEM: 2): ");
		scanf("%d", &chedo[i] );
		if(chedo[i] == 1){
		do{
			printf("\tSo tien da chi tieu la(VND): ");
			scanf("%d", &a[i]);
			b[i]=M-a[i];
			s[i]=s[i-1] + b[i];
		}while( a[i] > M);
	
		}

		if(chedo[i] == 2){
			do{
			printf("\tSo tien da chi tieu la(VND): ");
			scanf("%d", &a[i]);
			b[i]=M-a[i];
			s[i]=s[i-1] + b[i];
				} while( (a[i] < M) || (a[i] > M+s[i]) );
			}
		}
}

void maxmin(int a[]){
	int max= 0, min=0;
	for(int i=1; i<12; i++){
		if(a[i] >= a[i-1]) max=i;
		if(a[i] <= a[i-1]) min=i;
	}
	printf("Thang chi tieu nhieu nhat la: %d\n", max);
	printf("Thang chi tieu tiet kiem nhat la: %d\n", min);
}
	
