#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 100

int main(){
	char s[MAX+1];
	int offset;
	puts("Nhap doan van ban muon ma hoa:");
	gets(s);
	puts("Nhap buoc dich chuyen:");
	scanf("%d", &offset);

   	for(int i=0; i<strlen(s); i++){
		if(isalpha(s[i]) )
			if(s[i] <= 'z'-offset)
			s[i] = s[i] + offset;
	   		else
			s[i] = s[i]-'z'+ 'a'+offset-1;
	}

	puts(s);

	for(int i=0; i<strlen(s); i++){
		if(isalpha(s[i]) )
			if(s[i] >= 'a'+offset)
			s[i] = s[i] - offset;
	   		else
			s[i] = s[i]-'a'+ 'z'+offset-1;
	}
	puts(s);
	return 0;
}
