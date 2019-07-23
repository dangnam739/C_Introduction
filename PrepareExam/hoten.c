#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int main(){
	char hoten[MAX], ten[30], tendem[30], ho[30];
	int i=0, j=0, posL, posR;

	printf("Nhap ho ten cua ban: ");
	gets(hoten);

	//tach ho
	for(i=0; i<strlen(hoten); i++)
		if(isblank(hoten[i]))
			break;
	posL=i;
	for(i=0; i<posL; i++){
		ho[j] = hoten[i];
		j++;
	}
			
	ho[j]='\0';
	//tach ten
	for(i=strlen(hoten)-1; i>=0; i--)
		if(isblank(hoten[i]))
			break;
	posR=i;
	j=0;
	for(i=posR+1; i<strlen(hoten); i++)
	{
		ten[j] = hoten[i];
		j++;
	}
	ten[j]='\0';
	//tach ten dem
	j=0;
	for(i=posL+1; i<posR; i++){
		tendem[j]=hoten[i];
		j++;
	}
	tendem[j]='\0';

	printf("\nHo: %s\nTen dem: %s\nTen: %s\n", ho, tendem, ten);
	return 0;
}
