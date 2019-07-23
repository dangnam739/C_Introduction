#include<stdio.h>

int main()
{
	int ngay,  pnt, thuoc, pt, tpt, vp;
float  sum;
char lbh;
printf("Vui long dien thong tin cua benh nhan\n");
printf("\tLoai BHYT(Dien G, S, C Gold: G, Silver: S, Citizen: C, neu khong co dien: 0) : ");
lbh = getchar();
printf("\tBenh nhan co phau thuat khong ? (Dien 1 hoac 0 Co: 1, Khong: 0): ");
scanf("%d", &pt);
if(pt==1){
	printf("\t\tTien phau thuat la:  ");
	scanf("%d", &tpt);
}
printf("\tSo ngay nam vien: ");
scanf("%d", &ngay);
pnt=500000*ngay;
printf("\tTien thuoc      : ");
scanf("%d", &thuoc);

vp = pnt+thuoc+tpt;
sum=vp;

if (lbh == 'G') sum=0.3*sum;
if (lbh == 'S') sum=0.5*sum;
if (lbh == 'C') sum=0.7*sum;




printf("==============================================================================\n");
printf("Hoa don vien phi cua benh nhan la: \n");
printf("%3s %-20s %-10s %-8s %-10s   %-13s\n", "STT", "Danh muc", "Loai BHYT","So ngay","Don gia", "Thanh Tien" );
printf("%-3s %-20s %-10s %-8d %6d VND    %9d VND\n", "1", "Phi noi tru", " ", ngay, 500000, pnt  );
printf("%-3s %-20s %-10s %-8s %-10s   %10d VND\n", "2", "Tien Thuoc", " ", " ", " ", thuoc);
printf("%-3s %-20s %-10s %-8s %-10s   %10d VND\n", "3", "Tien phau thuat", " ", " ", " ", tpt);
printf("%-3s %-20s     %c  %-8s %-10s   %13s\n", "4", "Loai BHYT", lbh, " ", " ", " ");
printf("%-3s %-20s %-10s %-8s %-10s   %10d VND\n", " ", "Tong vien phi", " ", " ", " ", vp);
printf("%-3s %-20s %-10s %-8s %-10s     %10.2f VND\n", " ", "So tien phai tra: ", " ", " ", " ", sum);


	return 0;
}
