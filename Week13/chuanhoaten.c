#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

void trimBlank(char str[]);
void toupperStr(char str[]);

int main()
{
	char str[MAX+1];
	puts("Enter your name: ");
	gets(str);

	trimBlank(str);
	toupperStr(str);
	printf("Your name is: %s\n", str);

	return 0;
}

void trimBlank(char str[])
{
	// trimLeft
	while(str[0] == ' '){
		strcpy(&str[0], &str[1]);
		}

	//trimMiddle
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

	//trimRight
	char s[MAX+1];
	int pos;

	strcpy(s,str);
	for(i=strlen(str)-2; i>=0; i--){
		if(! isblank(str[i]))
			break;
	}
	pos=i;
	str[pos+1]='.';
	str[pos+2]='\0';
}

void toupperStr(char str[]){
	int i;
	for( i=0; i<strlen(str); i++)
		str[i]=tolower(str[i]);

	str[0] = toupper(str[0]);
	i=1;
	while(str[i] != '\0'){
		if(isblank(str[i]))
			str[i+1]=toupper(str[i+1]);
		i++;
	}
	
}
