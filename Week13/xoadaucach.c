#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

void trimRight(char str[]);
void trimLeft(char str[]);
void trimMiddle(char str[]);

int main()
{
	char str[MAX+1];
	puts("Nhap xau: ");
	gets(str);
	
	trimRight(str);
	trimLeft(str);
	trimMiddle(str);

	printf("Xau sau khi xoa bo cac dau cach lien nhau la: %s\n", str);
	return 0;
}

void trimLeft(char str[])
{
	char s[MAX+1];
	strcpy(s,str);
	int i=0, pos;

	for(i=0; i<strlen(str); i++){
		if(! isblank(str[i]))
			break;
	}

	pos=i;
	i=0;
	while(s[pos] != '\0'){
		str[i]=s[pos];
		pos++;
		i++;
	}
	str[i]='\0';
}

void trimRight(char str[])
{
	char s[MAX+1];
	int i=0, pos;

	strcpy(s,str);
	for(i=strlen(str)-2; i>=0; i--){
		if(! isblank(str[i]))
			break;
	}
	pos=i;
	str[pos+1]='.';
	str[pos+2]='\0';
}

void trimMiddle(char str[]){
	int i,j, posL, posR;
	for(i=0; i<strlen(str); i++)
		if(! isblank(str[i])) break;
	posL=i;

	for(i=strlen(str)-2; i>=0; i--)
		if(! isblank(str[i])) break;
	posR=i;

	for(i=posL; i<posR; i++){
		if(str[i]==' ' && str[i+1] == ' '){
			strcpy(&str[i], &str[i+1]);
			i--;
		}
	}
}



/* Cach 2 viet ham trimLef, trimRight
void trimLeft(char str[]){
	while(str[0] == ' '){
		strcpy(&str[0], &str[1]);
}
}

void trimRight(char str[]){
	while(str[strlen(str)-1] == ' '){
		strcpy(&str[strlen(str)-1], &str[strlen(str)]);
}
}
*/

