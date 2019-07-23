#include<stdio.h>
#include<string.h>
#define MAX 100

typedef struct{
	int numerator;
	int denominator;
} fraction;

void fractionInput(fraction *ps);
void fractionOutput(fraction ps);
void fractionArrayInput(fraction dsps[], int n);
void fractionArrayOutput(fraction dsps[], int n);
int fractionCmp(fraction ps1, fraction ps2);
void inverseArray(fraction dsps[], int n);

int main(){
	fraction ps1, ps2;
	fraction dsps[MAX];
	int n;

	printf("Enter the number of fraction in array: ");
	scanf("%d", &n);
	puts("=======================================================");
   	fractionArrayInput(dsps, n);
	puts("=======================================================");
	fractionArrayOutput(dsps, n);
	puts("=======================================================");
	
	inverseArray(dsps, n);
	puts("=======================================================");
	puts("\tCompare two fraction");
	puts("Enter the fraction 1");
	fractionInput(&ps1);
	fractionOutput(ps1);
	puts("Enter the fraction 2");
	fractionInput(&ps2);
	fractionOutput(ps2);

	if(fractionCmp(ps1, ps2)) printf("The fraction 1 is greater\n");
	else printf("The fraction 2 is greater\n");
	puts("=======================================================");

	return 0;
}

void fractionInput(fraction *ps){
	printf("\tEnter the numerator: ");
	scanf("%d", &ps->numerator);

	printf("\tEnter the denominator: ");
	scanf("%d", &ps->denominator);
}

void fractionOutput(fraction ps){
	printf("\t                            %d\n", ps.numerator );
	printf("\tThe fraction you enter is: ---- \n");
	printf("\t                            %d\n", ps.denominator );
}

void fractionArrayInput(fraction dsps[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("Enter the fraction %d\n", i+1);
		fractionInput(&dsps[i]);
		fractionOutput(dsps[i]);
	}
}

void fractionArrayOutput(fraction dsps[], int n){
	int i;
	puts("Array of fraction is: ");
	for(i=0; i<n; i++)
	printf("\t %d",dsps[i].numerator );
	printf("\n");
	
	for(i=0; i<n; i++)
	printf("\t----");
	printf("\n");
	
	for(i=0; i<n; i++)
	printf("\t %d",dsps[i].denominator );
	printf("\n");
	
}

int fractionCmp(fraction ps1, fraction ps2){
	double a, b;
	a = (double)ps1.numerator/(double)ps1.denominator;
	b = (double)ps2.numerator/(double)ps2.denominator;

	if(a>b) return 1;
	return 0;
}

void inverseArray(fraction dsps[], int n){
	int i;
	puts("The array of fraction after inverse all the fraction is: ");
	for(i=0; i<n; i++)
	printf("\t %d", dsps[i].denominator );
	printf("\n");
	
	for(i=0; i<n; i++)
	printf("\t----");
	printf("\n");
	
	for(i=0; i<n; i++)
	printf("\t %d", dsps[i].numerator );
   	printf("\n");
	
}
