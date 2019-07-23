#include <stdio.h>

int main ()
{
  printf(" _________________________________________________________ \n"); 
  printf("|\t\t%-42s|\n", "TRUONG DAI HOC BACH KHOA HA NOI");
  printf("|\t\t%20s%22c|\n", "THE SINH VIEN", ' ');
  printf("|=========================================================|\n");
  printf("|  ________ %-9s%-37d|\n", " MSSV:", 20176830);
  printf("|%2c\t%4c%-9s%-37s|\n", '|', '|'," Ho ten:", "KIEU DANG NAM");
  printf("|%2c\t%4c%-13s%-12s%-21s|\n", '|', '|'," Ngay sinh", "07/03/1999", "NAM");
  printf("|%2c\t%4c%-10s%-36s|\n", '|', '|'," Ho khau:", "Quoc Oai-Ha Noi");
  printf("|%2c\t%4c%-6s%-40s|\n", '|', '|'," Lop:", "TT.CNTT VIET NHAT B");
  printf("|%2c\t%4c%-11s%-4s%-20s%11s|\n", '|', '|'," Khoa hoc:", "K62", "Co gia tri den ngay:", "31/08/2022");
  printf("| |________| %45c|\n", ' ');
  printf("||%-17s%-37s%2c|\n", "NPH:20/12/2017", "| || || |||| || ||| || ||| | || || |", ' ');
  printf("| %-17s%-37s%2c|\n", " ", "| || || |||| || ||| || ||| | || || |", ' ');
   printf("|_________________________________________________________|\n"); 
  
  return 0;
}
  
