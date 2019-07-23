#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 100

typedef struct{
	float distance;
	int id; //ma so tram thu phat
	char name[30]; //ho ten nguoi truong tram
	int x, y; // hoanh do va tung do cua diem dat tram
	int r; // ban kinh phu song 1<= r <= 100
} station ;

int menu();
void getStation(station *s);
float distance(int x, int y);
void swap(station *s1, station *s2);
void sort(station s[], int n);
//int checkID(station s[], int i);

int main(){
	station list[50]; //mang luu tru danh sach cac tram thu phat
	int ch, n=0, i, j, m=0, a;
	float d;
	
	do{
		ch = menu();

		switch(ch){
		case 1:
			printf("\n\t1.Nhap moi tram thu phat\n");
			do{
			printf("\nNhap so luong tram thu phat can nhap: ");
			scanf("%d%*c", &n);

			if(n<1 || n>50) printf("Ban da nhap so luong tram sai !\nSo luong tram la mot so trong doan [1, 50]\n");
			} while(n<1 || n>50);

			for(i=0; i<n; i++)
			{
				printf("Nhap thong tin tram %d\n", i+1);
				a=1;
				do{
				printf("\tID: ");
				scanf("%d%*c", &list[i].id);
				if(list[i].id < 0)
				{
					a=0;
					printf("ID la mot so nguyen duong ! Vui long nhap lai !\n");
				}
				
				for(j=0; j<i; j++)
					if(list[i].id == list[j].id) {
						a=0;
						printf("ID nay da ton tai ! Vui long nhap lai !\n");
					}

			   	}while (a != 1);
				
				getStation(&list[i]);
				printf("\n");
				}
			printf("==========================================\n");
			
			break;

		case 2:
			printf("\n\t2.Bo sung tram thu phat\n");
			do{
			printf("\nNhap so luong tram thu phat can bo sung: ");
			scanf("%d%*c", &m);

			if(m<=0 || (n+m)>50) printf("So luong tram bo sung da qua gioi han cho phep!\nSo luong tram bo sung lon hon 0 va nho hon %d\n", 50-n);
			} while(m<=0 ||(n+m)>50);			

			for(i=n; i<n+m; i++){
				printf("Nhap thong tin tram %d\n", i+1);
				a=1;
				do{
				printf("\tID: ");
				scanf("%d%*c", &list[i].id);
				if(list[i].id < 0)
				{
					a=0;
					printf("ID la mot so nguyen duong ! Vui long nhap lai !\n");
				}
				
				for(j=0; j<i; j++)
					if(list[i].id == list[j].id) {
						a=0;
						printf("ID nay da ton tai ! Vui long nhap lai !\n");
					}

			   	}while (a != 1);
				
				getStation(&list[i]);
				printf("\n");
				}
			printf("==========================================\n");
		

			break;

		case 3:
			printf("\n\t3. Xem dang sach tram\n");
			printf("\n");
			printf("%-5s  %-20s  %-8s  %-10s\n", "ID", "Ho Ten", "Toa do", "Ban kinh");
			for(int i=0; i<n+m; i++){
				printf("%-5d  %-20s  (%3d,%-3d)   %-10d\n", list[i].id, list[i].name, list[i].x, list[i].y, list[i].r);
			}
			printf("==========================================\n");
			break;

		case 4:
			printf("\n\t4. Tinh toan khoang cach\n");
			printf("%-5s  %-20s  %-8s  %-10s  %-20s\n", "ID", "Ho Ten", "Toa do", "Ban kinh", "Khoang cach");
			for(int i=0; i<n+m; i++)
				printf("%-5d  %-20s  (%3d,%-3d)   %-10d  %-.2f\n", list[i].id, list[i].name, list[i].x, list[i].y, list[i].r, list[i].distance );			
			printf("\n");
			
			sort(list, (n+m));
			printf("%-5s  %-20s  %-8s  %-10s  %-20s\n", "ID", "Ho Ten", "Toa do", "Ban kinh", "Khoang cach");
			for(int i=0; i< n+m ; i++)
				printf("%-5d  %-20s  (%3d,%-3d)   %-10d  %-.2f\n", list[i].id, list[i].name, list[i].x, list[i].y, list[i].r, list[i].distance );
			
			printf("\n");
			printf("==========================================\n");
			break;

		case 5:
			printf("\n\t5. Thoat chuong trinh !\nHen gap lai ban !\n");
			printf("==========================================\n");
			break;
		}		
		
	}while(ch != 5);
	
	return 0;
}

int menu(){
	int ch;
	printf("\tQUAN LI TRAM THU PHAT\n");
	printf("1. Nhap moi tram thu phat\n");
	printf("2. Bo sung tram thu phat\n");
	printf("3. Xem danh sach tram\n");
	printf("4. Tinh toan khoang cach\n");
	printf("5. Thoat chuong trinh !\n");
	printf("==========================================\n");
	do{
	printf("\tNhap lua chon cua ban la: ");
	scanf("%d%*c", &ch);
	if( ch <=0 || ch >5) printf("Ban da nhap sai !\n Lua chon la mot so tu nhien tu 1 den 6 !\n Vui long nhap lai !\n");
	}while(ch<=0 || ch>5);
	printf("==========================================\n");

	return ch;
}

void getStation(station *s){
				printf("\tNhap ho ten truong tram: ");
				gets(s->name);

				printf("\tNhap toa do cua diem dat tram:\n");
				printf("\t\tHoanh do x= ");
				scanf("%d%*c", &s->x);
				printf("\t\tTung do y= ");
				scanf("%d%*c", &s->y);
				s->distance= sqrt((s->x)*(s->x) + (s->y)*(s->y));
				do{
				printf("\tNhap ban kinh phu song: ");
				scanf("%d%*c", &s->r);
				if(s->r < 1 || s->r > 100)
					printf("Ban kinh phu song sai !\nBan kinh phu song trong doan [1,100]\n");
				}while(s->r < 1 || s->r > 100);

}

void swap(station *s1, station *s2){
	station tmp;
	tmp=*s1;
	*s1=*s2;
	*s2=tmp;
}

void sort(station s[], int n){
	int i, j;
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++){
			if(	s[j].distance > s[i].distance)		   
				swap(&s[i], &s[j]);
		}
	}
}

/*int checkID(station s[], int i){
	int j;
	for(j=0; j<i; j++)
	 	if(s[j].id == s[i].id){
			return 0;
			break;
		}
	return 1;
	}*/
