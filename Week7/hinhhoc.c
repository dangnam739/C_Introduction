#include<stdio.h>

int main()
{
	int n, i, j;
    printf("Nhap n= ");
	scanf("%d", &n);
	//in ra tam giac can co chieu cao la h

	printf("Tam giac can chieu cao %d la: \n\n", n);
	for(i=1; i<=n; i++){
		for(j= 1; j<=(2*n-1); j++) {
			if(((n-i+1) <= j) && (j <= (n+i-1)))  printf("* ");
			else printf("  ");
		}
		printf("\n");
	}

	//in ra hinh thoi chieu cao la 2h-1

	printf("\nHinh thoi co chieu cao %d la: \n\n", 2*n-1);
	for(i=1; i<=n; i++){
		for(j= 1; j<=(2*n-1); j++) {
			if(((n-i+1) <= j) && (j <= (n+i-1)))  printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	for(i=n-1; i>=1; i--){
		for(j= 1; j<=(2*n-1); j++) {
			if(((n-i+1) <= j) && (j <= (n+i-1)))  printf("* ");
			else printf("  ");
		}
		printf("\n");
	}

	//in ra hinh vuong canh n
	printf("\nHinh vuon co canh bang %d la:\n\n", n);
	for(i=1; i<=n; i++){
		if((i==1)||(i==n)) {
			for(j=1; j<=n; j++) printf("* ");
			printf("\n");
		}
		else {
			for (j=1; j<=n; j++){
				if((j==1)||(j==n)) printf("* ");
				else printf("  ");
			}
			printf("\n");
		}
	}

	//in ra chu Z
	printf("\nHinh chu Z la: \n\n");
	for (i=1; i<=n; i++){
		if((i==1)||(i==n)) {
			for(j=1; j<=n;j++) printf("* ");
			printf("\n");
		}
		else{
			for(j=1; j<=n; j++){
				if(j==(n-i+1)) printf("* ");
				else printf("  ");
			}
			printf("\n");
		}
	}

	//in hinh e

	printf("\nHinh chu X trong o vuong la: \n\n");
	for (i=1; i<=n; i++){
		if((i==1)||(i==n)) {
			for(j=1; j<=n;j++) printf("* ");
			printf("\n");
		}
		else{
			for(j=1; j<=n; j++){
				if((j==1)||(j==i)||(j==(n-i+1))||(j==n)) printf("* ");
				else printf("  ");
			}
			printf("\n");
		}
	}
	return 0;
}
