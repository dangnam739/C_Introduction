#include<stdio.h>
#include<string.h>
#include<math.h>
#define Total 5


typedef struct{
	char name[25];
	int old;
	float suggest[6];
	float accuracy;
} Result;

int menu();
int play(Result *s, float n);

int main()
{
	Result person[Total];
	int ch, M, i, j, mark[Total];//Mang vi tri dung chuong trinh cua nguoi choi
	float N;
	
	do{
		ch=menu();
		
		switch(ch){
		case 1:
			printf("\n\t1. Khoi dong tro choi\n");
			do{
			printf("Nhap so thuc can doan: ");
			scanf("%f%*c", &N);
			if(N<1 || N>100) printf("Ban da nhap sai !\nSo can doan nam trong doan [1,100]\n");
			}while(N<1 || N>100);

			do{
			printf("Nhap tong so nguoi choi: ");
			scanf("%d%*c", &M);
			if(M<0 || M>5) printf("Nhap lai ! So nguoi choi > 0, toi da la 5 nguoi\n");
			} while(M<0 || M>5);

			printf("\nNhap ho ten cua nhung nguoi choi \n");
			for(i=0; i<M; i++)
				do{
					printf("Nguoi choi %d: ", i+1);
					gets(person[i].name);
					if(strchr(person[i].name, ' ') == 0) printf("Ten nguoi choi phai co dau cach !\nVui long nhap lai !\n");
				}while(strchr(person[i].name, ' ') == 0);

			printf("==========================================\n");
			break;	
			
		case 2:
			printf("\n\t2. Choi doan so\n");
			for(i=0; i<M;i++){
				printf("Nguoi choi thu %d: %s\n", i+1, person[i].name );
				mark[i] = play(&person[i], N);
			
				printf("%f\n", person[i].accuracy);
				printf("\n");
			}
			
			printf("\n%-20s   %-2s    %-2s    %-2s    %-2s    %-2s    %-2s \n", "Ho va ten", "L1", "L2", "L3", "L4", "L5", "L6");
			for(i=0; i<M; i++){
				printf("%-20s", person[i].name);
				for(j=0; j<mark[i]; j++)
					printf(" %-3.2f", person[i].suggest[j]);
				printf("\n");				
			}
			printf("==========================================\n");
			break;

		case 3:
				printf("\n\t3. Tong hop ket qua\n");
				printf("\n%-3s %-20s %-15s\n", "STT", "Ho va ten", "Do sai lech");
				for(i=0; i<M; i++){
					printf(" %1d  %-20s %-f\n", i+1, person[i].name, person[i].accuracy);
				}
			printf("==========================================\n");
			break;

		case 4:
			printf("\n\t4. Thoat chuong trinh\n");
			printf("==========================================\n");
			break;
		}
	
	}while(ch != 4);
	return 0;	
}


int menu(){
	int ch;
	printf("\tTRO CHOI DOAN SO\n");
	printf("1. Khoi dong tro choi\n");
	printf("2. Choi doan so\n");
	printf("3. Tong hop ket qua\n");
	printf("4. Thoat chuong trinh\n");
	printf("==========================================\n");
	do{
	printf("\tNhap lua chon cua ban la: ");
	scanf("%d%*c", &ch);
	if( ch <=0 || ch >4) printf("Ban da nhap sai !\n Lua chon la mot so tu nhien tu 1 den 4 !\n Vui long nhap lai !\n");
	}while(ch<=0 || ch>4);
	printf("==========================================\n");

	return ch;
}

int play(Result *s, float n){
	int mark=0;
	for(int i=0; i<6; i++){
		printf("Luot %d\n", i+1);
		printf("\tSo ban doan la: ");
		scanf("%f%*c", &s->suggest[i]);
		mark++;
		
		if(s->suggest[i] == n)
		{
			printf("\tBan da doan trung\n");
			break;
		}
		else printf("\tBan da doan sai\n");
		s->accuracy = fabs((s->suggest[mark]/n)-1);
	}
	return mark;	
}
