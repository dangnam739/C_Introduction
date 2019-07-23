#include<stdio.h>

int leapyear(int year);
int day(int month, int year);

int main(){
	int year, month;
	printf("Nhap thang, nam ban muon biet so ngay\n");
	do{
   	printf("\tThang: "); scanf("%d", &month);
	if((month<=0) || (month>12)) printf("Ban nhap thang sai ! Vui long nhap lai !\n");
	}while((month<=0) || (month>12));

	do{
	printf("\tNam  : "); scanf("%d", &year);
	if(year<=0) printf("Ban nhap sai nam ! Vui long nhap lai !\n");
	} while (year <= 0);
	
	printf ("==> So ngay cua thang %d nam %d la %d \n ", month, year, day(month,year));
	return 0;
}

int leapyear(int year){
	if(((year%4==0) && (year%100 != 0)) || (year%400 == 0))
		return 1;
	else return 0;
}

int day(int month, int year){
	int day;
	if((month==4)||(month==6)||(month==9)||(month==11)) day = 30;
	else if(month==2) {
		if (leapyear(year)) day=29;
		else day=28;
	}
	else day=31;
return day;
}
