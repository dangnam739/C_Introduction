#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int stt, sm, s, count ;
	int s1, s2, s3, s4, s5, s6, m1, m2, m3, m4, m5, m6;

	srand((unsigned)time(NULL));
	stt = rand() % 1000000;
	s=stt;
	printf("Nhap so trong ve so ma ban da mua: ");
    scanf("%d", &sm);
	if (sm>=1000000){
		printf("Ban da nhap sai !\n");
		printf("Nhap lai so trong ve so ma ban da mua: ");
	  	scanf("%d", &sm);
	}
	
	printf("So cua ban la: %06d\n", sm);

	s1=stt%10; stt/=10;   m1=sm%10; sm/=10;
	s2=stt%10; stt/=10;   m2=sm%10; sm/=10;
	s3=stt%10; stt/=10;   m3=sm%10; sm/=10;
	s4=stt%10; stt/=10;   m4=sm%10; sm/=10;
	s5=stt%10; stt/=10;   m5=sm%10; sm/=10;
	s6=stt%10; stt/=10;   m6=sm%10; sm/=10;
	
	if (m1==s1)
		if(m2==s2)
			if(m3==s3)
				if(m4==s4)
					if(m5==s5)
						if(m6==s6)
							count=6;
						else count=5;
					else count=4;
				else count=3;
			else count=2;
		else count=1;
	else count=0;

	printf("\nSo trung thuong giai DAC BIET la: %06d\n", s);
	if (count == 6) printf("Chuc mung ban da trung giai DAC BIET !\nGiai thuong cua ban la: 3ty VND\n");
	if (count == 5) printf("Chuc mung ban da trung giai NHAT !\nGiai thuong cua ban la: 200 trieu VND\n");
	if (count == 4) printf("Chuc mung ban da trung giai NHI !\nGiai thuong cua ban la: 100 trieu VND\n");
	if (count == 3) printf("Chuc mung ban da trung giai BA !\nGiai thuong cua ban la: 10 trieu VND\n");
	if (count == 2) printf("Chuc mung ban da trung giai KHUYEN KHICH !\nGiai thuong cua ban la: 500 nghin VND\n");
	if ((count == 0) || (count == 1)) printf("Rat tiec ban da khong trung thuong !\nChuc ban may man lan sau !\n");
	
	return 0;
}