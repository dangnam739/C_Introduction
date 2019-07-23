#include<stdio.h>
#include<math.h>

int main(){
	double x,e,exp, gt, EPSILON=0.00001;
	printf("Nhap x= ");
	scanf("%lf", &x);
	int	i=0;
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

	return 0;
}
