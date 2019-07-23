#include<stdio.h>
#define arraySize 10

void rotateArray(int a[], int offset){
	int b[arraySize];
	for(int i=0; i<arraySize; i++){
		b[i]=a[i];
	}

	for(int i=0; i<arraySize; i++){
		a[i]=b[i+offset];
		if(i>arraySize-1-offset){
			a[i]=b[i-(arraySize-offset)];
				}
	}

	for(int i=0; i<arraySize; i++){
		printf("%5d", a[i]);
	}
	printf("\n");
	
}

int main(){
	int a[arraySize], offset;
	printf("Nhap mang\n");
	
	for(int i=0; i<arraySize; i++){
		printf("\ta[%d]= ", i);
		scanf("%d", &a[i]);
	}

	printf("Nhap buoc chuyen: ");
	scanf("%d", &offset);

	printf("Mang truoc khi xoay la: \n");
	for(int i=0; i<arraySize; i++){
		printf("%5d", a[i]);
	}
	printf("\n");

	printf("Mang sau khi xoay la: \n");
	rotateArray(a, offset);

	return 0;
}
