#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 200

void mahoa(char s[], int offset);
void giaima(char s[], int offset);

int main()
{
	char s[MAX+1];
	int offset;
	puts("Nhap doan van ban muon ma hoa:");
	gets(s);
	puts("Nhap buoc dich chuyen:");
	scanf("%d", &offset);

	mahoa(s,offset);
	puts("Doan van ban sau khi ma hoa la:");
	puts(s);

	puts("Doan van sau khi duoc giai ma la:");
	giaima(s, offset);
	puts(s);
	

	return 0;
}

void mahoa(char s[], int offset){
  	for(int i=0; i<strlen(s); i++){
		if(isalpha(s[i]) )
			if(s[i] <= 'z'-offset)
			s[i] = s[i] + offset;
	   		else
			s[i] = s[i]-'z'+ 'a'+offset-1;
	}
}

void giaima(char s[], int offset){
	for(int i=0; i<strlen(s); i++){
		if(isalpha(s[i]) )
			if(s[i] >= 'a'+offset)
			s[i] = s[i] - offset;
	   		else
			s[i] = s[i]-'a'+ 'z'+offset-1;
	}	
}
