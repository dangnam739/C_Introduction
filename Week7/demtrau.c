#include<stdio.h>

int main()
{
	int dung, nam, gia, count=1;

	printf("Giai bai toan dan gian:\n");
	printf("\tTram trau tram co\n\tTrau dung an nam\n\tTrau nam an ba\n\tLu khu trau gia\n\tBa con mot bo\nHoi so trau moi loai va chi tiet so bo co moi loai da an ?\n\n==> Ket qua la: \n\n");
	for(dung = 1; dung <=20 ; dung ++){
		for(nam=1; nam<=33 ; nam ++){
		  	if (((100-dung-nam)%3==0) && ((dung*5+nam*3+(100-dung-nam)/3)==100)) {
				gia =100 - dung - nam;
				printf("%d.\n", count);
				printf("  So trau dung la: %3d\tSo bo co da an: %-3d\n", dung, dung*5);
	     		printf("  So trau nam  la: %3d\tSo bo co da an: %-3d\n", nam, nam*3);
				printf("  So trau gia  la: %3d\tSo bo co da an: %-3d\n\n", gia, gia/3);
				count++;		
		    }
		}
	}
	

	return 0;
}
