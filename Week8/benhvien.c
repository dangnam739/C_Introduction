#include<stdio.h>

int main(){
	char lbh;
	int ch, count=0,  ngay,  pnt, thuoc, pt, tpt, vp, g=0, s=0, c=0;
	float  sum=0, tong=0, tienbaohiem=0, max=0;
	

	do{
		printf("\n\tBENH VIEN ABC\n");
		printf("1. Nhap thong tin va in ra hoa don vien phi cua benh nhan\n");
		printf("2. In ra bao cao\n");
		printf("3. Quit");
		printf("\n\tLua chon cua ban la: ");
	   	scanf("%d", &ch);
		while (getchar() != '\n');


		switch (ch){
		case 1 :
			tpt=0;	//tien phau thuat
			count ++;	//dem so benh nhan
			printf("\n\tNhap thong tin cua benh nhan va in hoa don vien phi\n");
			do{
			printf("\tLoai BHYT(Dien G, S, C Gold: G, Silver: S, Citizen: C, neu khong co dien: 0) : ");
			//lbh = getchar();		// nhap loai the bao hiem
			scanf("%c%*c", &lbh);
			if((lbh != 'G')&& (lbh != 'S') && (lbh != 'C') && (lbh !='0')) printf("Ki tu khong hop le ! Vui long nhap lai !\n");
			}while((lbh != 'G')&& (lbh != 'S') && (lbh != 'C') && (lbh !='0'));

			do{
			printf("\tBenh nhan co phau thuat khong ? (Dien 1 hoac 0 Co: 1, Khong: 0): ");
			scanf("%d", &pt);
			if((pt != 1) && (pt != 0)) printf("Ki tu khong hop le ! Vui long nhap lai !\n");
			} while((pt != 1) && (pt != 0));
			
			if(pt==1){
			printf("\t\tTien phau thuat la:  ");
			scanf("%d", &tpt);
			}
			printf("\tSo ngay nam vien: ");
			scanf("%d", &ngay);
			pnt=500000*ngay; //phi noi tru
			printf("\tTien thuoc      : ");
			scanf("%d", &thuoc);

			vp = pnt+thuoc+tpt; //tong vien phi chua su dung the bao hiem
			sum=vp;	//tong vien phi phai tra sau khi su dung bao hiem

			if (lbh == 'G') {
				sum=0.3*sum;
				g++;
			}
			if (lbh == 'S') {
				sum=0.5*sum;
				s++;
			}
			if (lbh == 'C') {
				sum=0.7*sum;
				c++;
			}

			tienbaohiem = vp - sum;  //so tien huong loi tu bao hiem 

			if(tienbaohiem >= max) max=tienbaohiem; //max: so tien huong loi nhieu nhat tu bao hiem

			tong=tong+sum; //tong vien phi cua tat ca benh nhan

			// In ra hoa don vien phi cua benh nhan
		   	printf("Hoa don vien phi cua benh nhan la: \n\n");
			printf("%3s %-20s %-10s %-8s %-10s   %-13s\n", "STT", "Danh muc", "Loai BHYT","So ngay","Don gia", "Thanh Tien" );
			printf("%-3s %-20s %-10s %-8d %6d VND    %9d VND\n", "1", "Phi noi tru", " ", ngay, 500000, pnt  );
			printf("%-3s %-20s %-10s %-8s %-10s   %10d VND\n", "2", "Tien Thuoc", " ", " ", " ", thuoc);
			printf("%-3s %-20s %-10s %-8s %-10s   %10d VND\n", "3", "Tien phau thuat", " ", " ", " ", tpt);
			printf("%-3s %-20s     %c  %-8s %-10s   %13s\n", "4", "Loai BHYT", lbh, " ", " ", " ");
			printf("%-3s %-20s %-10s %-8s %-10s   %10d VND\n", " ", "Tong vien phi", " ", " ", " ", vp);
			printf("%-3s %-20s %-10s %-8s %-10s     %10.2f VND\n", " ", "So tien phai tra: ", " ", " ", " ", sum);
			printf("=============================================================================\n");
			break;


		case 2 :
			printf("\n\tBao cao\n");
			printf("1. So luong benh nhan: %d nguoi\n", count);
			printf("2. Tong so tien vien phi la: %.2f VND\n", tong);
			printf("3. So loai the bao hiem da su dung: %d\n", g+s+c);
			printf("\t\tGold   : %d\n", g);
			printf("\t\tSilver : %d\n", s);
			printf("\t\tCitizen: %d\n", c);
			printf("4. So tien benh nhan duoc huong loi nhieu nhat tu bao hiem la: %.2f VND\n", max);
			printf("=============================================================================\n");
			break;
			
		case 3 :
			printf("\nQuit.\n");
			printf("=============================================================================\n");
			break;

		default:
			printf("Ban da nhap sai lua chon ! Vui long nhap lai !\n\n");
			printf("=============================================================================\n");
	   	}

	}  while (ch != 3);

	return 0;
}
