#include<stdio.h>
#include<math.h>

int main()
{

	int count=0, ch;
	unsigned long n, i, j, sum;
	
	do{
		printf("\t\tMENU TOAN HOC\n\n");
		printf("1. Nhap so N\n");
		printf("2. Liet ke cac so hoan hao tu 1 den N\n");
		printf("3. Liet ke cac so nguyen to tu 1 den N\n");
		printf("4. Liet ke cac uoc so cua N\n");
		printf("5. Thoat\n");
		printf("\n\tLua chon cua ban la: ");
		scanf("%d", &ch);

		switch(ch){
		case 1:
			printf("\nNhap so N= ");
			scanf("%ld", &n);
			printf("==============================================\n");
			break;
			
		case 2:
			printf("\nCac so hoan hao tu 1 den %ld la: \n", n);
			for(i=2; i<=n; i++){
				sum = 0; //tong cac uoc
				 
				for( j=1; j<i;j++){
					if(i%j==0)
						sum=sum+j;
			   	}
					if(sum==i){
						count++; // dem de xuong dong khi in du 10 so
						printf("%10ld", i);
						if((count%10 == 0) && (count > 1)) printf("\n");
					}
				
			}
			printf("\n==============================================\n");
			break;
			
		case 3:
			printf("\nCac so nguyen to tu 1 den %ld la: \n", n);
			count=0;
			for(i=2; i<=n; i++){
				int ngt=0; 
				for( j=2; j<=sqrt(i);j++){
					if(i%j==0) 
						ngt++;
					}
				if(ngt==0) {
					count++;
					printf("%10ld", i);
					if((count%10 == 0) && (count > 1)) printf("\n");
				}
				}
			printf("\n==============================================\n");
			break;
			
		case 4:
			printf("\nCac uoc cua %ld la: \n", n);
			count=0;
			for ( i=1; i<=n; i++){
					if (n%i == 0){
						count++;
						printf("%10ld", i);
						if((count%10==0) && (count > 1)) printf("\n");
					}
				}
			printf("\n==============================================\n");
			break;

		case 5:
			printf("Thoat.\n");
			printf("==============================================\n");
			break;

		default:
			printf("Ban da nhap sai lua chon ! Vui long nhap lai ! \n\n");
				printf("==============================================\n");
		}

	} while (ch != 5);

	return 0;
}


	
