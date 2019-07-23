#include<stdio.h>

int main(){
   
	int th, ch;
	
	float tg, lsn=6.8, lst;

	do{
		printf("       TAI KHOAN TIEN GUI ACB\n\n");
		printf("Cac dich vu cua ACB: \n");
		printf("\t1. Gui tien va thoi han\n");
		printf("\t2. Lai suat nam\n");
		printf("\t3. Chi tiet lai suat(bang ke)\n");
		printf("\t4. Thoat\n\n");
		printf("Lua chon cua ban la: ");
		scanf("%d", &ch);
	   
		switch(ch){
		case 1 :
			printf("\n\tGui tien va thoi han\n");
			printf("So tien ban gui la   : ");
			scanf("%f", &tg);
			printf("Thoi han gui (thang) : ");
			scanf("%d", &th);
			printf("===============================================\n");
			printf("\n");
			break;

		case 2 :
			lst=lsn/12;
			printf("\n\tLai suat nam\n");
			printf("Lai suat theo nam la  : %f %%/nam\n", lsn);
			printf("Lai suat theo thang la: %f %%/thang\n\n", lst);
			printf("===============================================\n\n");
			break;
			
		case 3 :
			printf("\n\tChi tiet lai suat(bang ke)            (Don vi: VND)\n\n");
			//	printf("So tien ban gui la   : ");
			//	scanf("%f", &tg);
			//	printf("Thoi han gui (thang) : ");
			// 	scanf("%d", &th);
			//	printf("Bang ke la: \n");
			printf("%6s %-15s %-10s %-15s\n", "Thang", "Tien dau ky", "Tien lai", "Tien cuoi ky");
			for(int i=1; i<=th; i++){
				lst=(float)(lsn/12)/100;
				printf("   %2d %13.2f %13.2f %13.2f\n", i, tg, tg*lst, tg+tg*lst);
				tg=tg+tg*lst;
			}
			printf("===============================================\n");
			printf("\n");
			break;

		case 4 :
			printf("\nThoat\n");
			break;

		default:
			printf("Quy khach nhap sai lua chon ! Vui long nhap lai !\n\n");
			printf("===============================================\n");			
		
			}
		  
	} while(ch != 4);


	return 0;
}
