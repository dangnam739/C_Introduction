#include<stdio.h>
#include<ctype.h>

int main(){
	char c='e';
	if(isdigit(c)) printf("%c is digit\n", c);
	else  printf("%c is not digit\n", c);


	return 0;
}
