#include<stdio.h>
#include<math.h>

int main(){
	int a=598;
	int b, c;
	b=log(a)/log(8);
	for(int i=b; i>=0; i--){
		c = a / pow(8,i);
		a=a-c*pow(8,i);
		printf("%d", c);
		/*	if(c>=0){
			printf("1");
			a=c;
		}
		else printf("0");*/
	}
	printf("\n");
	char ch;
	scanf("%c", &ch);
	if(ch>65 ) printf ("%c", ch);
	int i=65;
	printf("%c\n", i);
	return 0;
}
