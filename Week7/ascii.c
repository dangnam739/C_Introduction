#include<stdio.h>

int main()
{
	int  i, j;

//In bang ma ASCII
	printf("1. Bang ma ASCII \n\n");
	for(i=0; i<16; i++){
		for(j=i;j<=(256+i-16); j=j+16){
			if((j==127)||(j==i)||(j==7)||(j==8)||(j==9)||(j==10)||(j==13))
					printf(" %03d%2c ", j,' ' );
			   	else
					printf(" %03d%2c ", j, j);
			}
		printf("\n");
	}
	
//in ra bang cuu chuong
	printf("\n2. Bang Cuu Chuong:\n\n");
	for(i=1; i<10; i++){
		for(j=1; j<10; j++){
			printf("%1d x %1d = %2d    ", j, i, i*j);
		}
		printf("\n");
	}
	
	return 0;
}
