#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100


int main()
{
	char str[MAX+1];
	puts("Nhap xau: ");
	gets(str);

	
	char s1[MAX+1], s2[MAX+1]="";
	int i,j, posL, posR, mark1, mark2;
	for(i=0; i<strlen(str); i++)
		if(! isblank(str[i])) break;
	posL=i;

	for(i=strlen(str)-1; i>=0; i--)
		if(! isblank(str[i])) break;
	posR=i;

	i=posL;
	strcpy(s1, str);
	strncat(s2, s1, posL);
	mark2=posL;
	mark1=0;
	
	while(strlen(s1) != strlen(str)-posR-1){

		i=mark2;
		
		while(s1[i] != '\0'){
			if(isblank(s1[i])) break;
			i++;
		}
		mark1=i;

		strncat(s2,s1, mark1-mark2+1);

	   	while(s1[i] != '\0'){
			if(! isblank(s1[i])) break;
			i++;
		}
		mark2=i;

		j=0;
	   	while(str[i] != '\0'){
			s1[j]=str[i];
			j++;
			i++;
		}
		s1[j]='\0';
	}

	printf("%s", s1);

	return 0;
}
