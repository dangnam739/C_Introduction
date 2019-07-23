#include<stdio.h>
#define column 3
#define row 5

int main(){
	int a[row][column]={0,1};	
	int	i, j, k, rw, col;
	int b[row][column];
	//printf("===================\n");

					printf("\n\tChon cot ban muon bat den: "); scanf("%d", &col);
			for (i=0; i<row; i++){
				
				for (j=0; j<column; j++) {
					if(j+1==col) a[i][j] = 1;
					else  a[i][j] = 0;
				}
			}

			for(i=0; i<row; i++){
				printf("===================\n");
				for(j=0; j<column; j++){
					
					printf("|  %1d  ", a[i][j]);
				}
				printf("|\n");
			}
			printf("===================\n");
		
			return 0;
}
