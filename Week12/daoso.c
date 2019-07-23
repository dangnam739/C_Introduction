#include<stdio.h>
#include<math.h>

int reverseInt(int *p){
	int b, c, m=0;
	do {
		c=log10(*p);
		b=*p%10;
		m+=b*pow(10,c);
		*p/=10;
	}while(c!=0);
	return m;
}

int main(){
	unsigned int a;

  	do{
	printf("Enter the number: ");
	scanf("%d", &a);
	if(a<=0) printf("You are enter the wrong number !\nThe correct number > 0 !\nPlease enter again !\n");
	}while(a<=0);

	a = reverseInt(&a);
	printf("The number after reverse is: %d\n", a);
	return 0;
}
