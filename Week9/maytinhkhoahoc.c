#include<stdio.h>
#include<math.h>

double tinhsin( double x, double ss);
double tinhcan( double x, double ss);
double tinhex(double x, double ss);
double nhaplieux(double x);
double nhaplieuss(double ss);
char menu(char ch);
int main(){
	char ch;
	double  x, ss;

	do{
		ch = menu(ch);

		switch (ch){

		case 'N':
			printf("\n\tNhap Lieu\n");
			x = nhaplieux(x);
			ss = nhaplieuss(ss);
			printf("============================================\n");
			break;

		case 'S':
			
			printf("\n===> Gia tri cua sin(%lf) la: %lf\n", x, tinhsin(x,ss));
			printf("============================================\n");
			break;

		case 'C':
			
			printf("\n===> Can bac hai cua %lf la: %lf\n", x, tinhcan(x,ss));
			printf("============================================\n");
			break;

		case 'E':
			
			printf("\n===> Gia tri cua e mu %lf la: %lf\n", x, tinhex(x,ss));
			printf("============================================\n");
			break;

		case 'T':
			printf("\nThoat ! Hen gap lai ban !\n");
			printf("============================================\n");
			break;
			
		default :
			printf("Ban da nhap sai ! Vui long nhap lai ! \n\n");			}
			
	} while (ch != 'T');
	return 0;
}

double tinhsin(double x, double ss){
	double sin=0 , lastsin, gt=1, k=x;
	int i=1;
	do{
		lastsin = sin;
		sin = sin + k/gt;
		i+=2;
		k= k*x*(-x); // x^i voi i le va dan dau 
		gt=gt*i*(i-1); //i giai thua
	}while (fabs (sin-lastsin) >= ss);
	return sin;
}

double tinhcan(double x, double ss){
	double xn, ketqua;
	xn=(x+1)/2;
	do{
		ketqua=xn;
		xn=0.5*(xn + x/xn);
	}while (fabs(xn-ketqua) >= ss);
	return xn;
}

double tinhex(double x, double ss){
	int i=0;
	double gt=1, e=1, exp=0, lastexp;
	do{
		lastexp = exp;
		exp = exp + e/gt;
		i++;
		gt = gt*i; // i giai thua
		e=e*x; // x^i
	} while(fabs(exp-lastexp) >= ss);
	return exp;
}

double nhaplieux(double x){
			
			//Dieu kien nhap n
			do{
			printf("Nhap so x= ");
			scanf("%lf%*c", &x);
			if(x<=0) printf("Ban da nhap sai, n la so thuc duong ! Vui long nhap lai !\n");
			}while (x<=0);
			return x;
}

double nhaplieuss(double ss){
		do{
			printf("Nhap do chinh xac can tinh = ");
			scanf("%lf%*c", &ss);
			if((ss<0)||(ss>1)) printf("Ban da nhap sai ! Vui long nhap lai !\n");
			} while((ss<0)||(ss >1));
			return ss;
}

char menu(char ch){
			printf("\tMENU -MAY TINH KHOA HOC\n");
		printf("1. Nhap lieu (N)\n");
		printf("2. SIN(X) (S)\n");
		printf("3. CAN BAC HAI (C)\n");
		printf("4. E MU X (E)\n");
		printf("5. THOAT (T)\n");
		printf("\n\tLua chon cua ban la: ");
		scanf("%c%*c", &ch);
		return ch;
}
