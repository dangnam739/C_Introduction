#include <stdio.h>
int main ()
{
  int ms, d, m, y, kh;
  char  ten[30], gt[10], hk[20], l[20];
  printf("THONG TIN VE THE SINH VIEN CUA BAN: \n"); 
  printf("Ho va ten: ");
  scanf("%[^\n]", ten);
  while(getchar()!='\n');
  printf("MSSV: ");
  scanf("%d", &ms);
  while(getchar()!='\n');
  printf("Ngay sinh(dd/mm/yyyy): ");
  scanf("%d%*c%d%*c%d", &d, &m, &y);
  while(getchar()!='\n');
  printf("Gioi tinh: ");
  scanf("%[^\n]",gt);
  while(getchar()!='\n');
  printf("Ho khau( Huyen(Quan)-Tinh(TP) ): ");
  scanf("%[^\n]",hk);
  while(getchar()!='\n');
  printf("Lop: ");
  scanf("%[^\n]",l);
  while(getchar()!='\n');
  printf("Khoa hoc(K61, K62,...): K");
  scanf("%d", &kh);
  
  printf("The Sinh Vien cua ban: \n\n ");
  printf("__________________________________________________________ \n");
  printf("| |------|                                                |\n");
  printf("| |      |\t    %-38s|\n", "TRUONG DAI HOC BACH KHOA HA NOI");
  printf("| |------|\t    %20s%18c|\n", "THE SINH VIEN", ' ');
  printf("|=========================================================|\n");
  printf("|  ________ %-9s%-37d|\n", " MSSV:", ms);
  printf("|%2c\t%4c%-9s%-37s|\n", '|', '|'," Ho ten:", ten);
  printf("|%2c\t%4c%-15s%02d/%02d/%-8d%-17s|\n", '|', '|'," Ngay sinh:", d, m, y, gt);
  printf("|%2c\t%4c%-10s%-36s|\n", '|', '|'," Ho khau:", hk);
  printf("|%2c\t%4c%-6s%-40s|\n", '|', '|'," Lop:", l);
  printf("|%2c\t%4c%-12s%-3d%-20s%11s|\n", '|', '|'," Khoa hoc: K", kh, "Co gia tri den ngay:", "31/08/2022");
  printf("| |________| %45c|\n", ' ');
  printf("||%-17s%-37s%2c|\n", "NPH:20/12/2017", "| || || |||| || ||| || ||| | || || |", ' ');
  printf("| %-17s%-37s%2c|\n", " ", "| || || |||| || ||| || ||| | || || |", ' ');
   printf("|_________________________________________________________|\n"); 
  
  return 0;
}
  
