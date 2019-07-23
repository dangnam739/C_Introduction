#include<stdio.h>
#include<string.h>
#define MAX 100

int main(){

	char name[MAX];
		do{
			printf("Nhap ho ten cua nguoi choi: ");			
	   		gets(name);
			if(strchr(name,' ') == 0)	printf("Ten nguoi choi phai co dau cach !\nVui long nhap lai !\n");
		   	}while(strchr(name, ' ') = 0);
		return 0;
}
