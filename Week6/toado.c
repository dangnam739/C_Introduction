#include<stdio.h>
#include<math.h>

int main()
{
	double x1, y1, x2, y2, d;
	printf("Jane, Nhap toa do cua ban: ");
	scanf("%lf%lf", &x1, &y1);
	printf("John, Nhap toa do cua ban: ");
	scanf("%lf%lf", &x2, &y2);


	printf("\nDe gap Jane, John di ve huong: ");

	if ((x1==0) && (y1==0)) printf("Trung tam\n");
	else 
	if (y1>y2)
		if (x1>x2)
			printf("Dong Bac\n");
		else if(x1 == x2)
		    printf("Chinh Bac\n");
		else
			printf("Tay Bac\n");
	else if (y1==y2)
			if (x1>x2)
				printf("Chinh Dong\n");
			else if(x1 != x2)
				printf("Chinh  Tay\n");
			else ("Hai ban dang cung o mot vi tri\n");
	else
		if(x1>x2)
			printf("Dong Nam\n");
		else if (x1==x2)
			printf("Chinh Nam\n");
		else
			printf("Tay Nam\n");

	
	d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	printf("Khoang cach giua ban va Jane la: %.2lf km\n", d);
	
	return 0;
}
 
