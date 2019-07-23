#include<stdio.h>


int main()
{
  int d, m, y, h1, h2, m1, m2, stt;
  char lh[20], mh[20]; 
  printf("Thong tin su dung phong thuc hanh \n");
  printf("Luot su dung: ");
  scanf("%d", &stt);
  printf("Ngay su dung(dd/mm/yyyy): ");
  scanf("%d%*c%d%*c%d", &d, &m, &y);
  while(getchar()!='\n');
  printf("Lop hoc: ");
  scanf("%[^\n]", lh);
  while(getchar()!='\n');
  printf("Ten mon hoc: ");
  scanf("%[^\n]", mh);
  while(getchar()!='\n');
  printf("Thoi gian hoat dong: \n");
  printf("\tBat dau(8:00,...)   : ");
  scanf("%d%*c%d", &h1, &m1);
  printf("\tKet thuc(15:30,...) : ");
  scanf("%d%*c%d", &h2, &m2);

  
  printf("\n \t\tNHAT KY SU DUNG PHONG THUC HANH VIET NHAT\n");
  printf("____________________________________________________________________________________\n");
  printf("|%3s| %-11s|%-20s|%-20s| %-10s| %-10s|\n", "STT", "Ngay Thang", "Ten lop", "Ten mon hoc", "Bat dau", "Ket thuc");
  printf("|==================================================================================|\n");
  printf("|%-3d| %02d/%02d/%-5d|%-20s|%-20s| %4d:%-5d| %4d:%-5d|\n", stt, d, m, y, lh, mh, h1, m1, h2, m2); 
  printf("|__________________________________________________________________________________|\n");
  return 0;
}
