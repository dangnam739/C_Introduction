#include<stdio.h>
#include<math.h>

int main()
{
	char ch;
	double a, gt,  EPSILON,  xn, ketqua;
	double x, sin=0, k=0;
	int i=0;
	double exp=0, e=0;

	do{
		printf("\tMENU -MAY TINH KHOA HOC\n");
		printf("1. Nhap lieu (N)\n");
		printf("2. SIN(X) (S)\n");
		printf("3. CAN BAC HAI (C)\n");
		printf("4. E MU X (E)\n");
		printf("5. THOAT (T)\n");
		printf("\n\tLua chon cua ban la: ");
		scanf("%c%*c", &ch);
		//	while( getchar() != '\n');

		switch (ch){
			
		case 'N':
			printf("\n\tNhap Lieu\n");
			//Dieu kien nhap n
			do{
			printf("Nhap so n= ");
			scanf("%lf%*c", &a);
			if(a<=0) printf("Ban da nhap sai, n la so thuc duong ! Vui long nhap lai !\n");
			}while (a<=0);
			//dieu kien nhap sai so
			do{
			printf("Nhap do chinh xac can tinh = ");
			scanf("%lf%*c", &EPSILON);
			if(EPSILON >= 1) printf("Ban da nhap sai, sai so nho hon 1 ! Vui long nhap lai !\n");
			} while (EPSILON >= 1);
			printf("============================================\n");
			break;

		case 'C':
			xn = (a+1)/2;
			do{
				ketqua = xn;
				xn = 0.5 * (xn + a/xn); // lay gia tri trung binh cua so doan va  a/xn
			} while (fabs(xn-ketqua) >= EPSILON);
			printf("\n===> Can bac hai cua %lf la: %lf\n", a, xn);
			printf("============================================\n");
			break;

		case 'S':
			sin=0; //Bien tinh sinx
			x=a; //lua gia tri de tinh sin
			gt=1;//giai thua
			k=x; //luy thua cua x
			i=1; //bien tang
			//CT Taylor tinh  sinx= (-1)^(2i-1/2)*(x^i)/(i)! tu i la so le tu 1-n
			do{
				sin = sin + k/gt; 
				i+=2;						   
				k=k*x*(-x);				//x^i dan dau nhau, bat dau la + sau la -
				gt=gt*i*(i-1);      //i giai thua;
			} while( fabs(k/gt) >= EPSILON ); //dieu kien thoa man sai so
			
			printf("\n===> Gia tri cua sin(%lf) la: %lf\n", x, sin);
			printf("============================================\n");
			break;

		case 'E':
			x=a;
			i=0;
			gt=1;
			//CT chuoi Taylor tinh e^x=x^i/i! i chay tu 0-n
			e=1; // e=x^i, voi gia tri ban dau la 1 voi i=0
			exp=0;	//bien  e^x
			do{
				exp=exp+e/gt;
				i++;	
  				gt=gt*i;  // i giai thua
				e=e*x; // x^i
			}while( fabs(e/gt) >= EPSILON);

			printf("\n===> Gia tri cua e mu %lf la: %lf\n", x, exp);
			printf("============================================\n");
			break;


		case 'T':
			printf("\nThoat ! Hen gap lai ban !\n");
			printf("============================================\n");
			break;
			
		default :
			printf("Ban da nhap sai ! Vui long nhap lai ! \n\n");
		}

		
	}while(ch != 'T');


	return 0;
}
