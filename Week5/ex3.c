#include<stdio.h>

int main()
{
  int tl, tv, lt, a, b, c, sum,  max1, max2, min1, min2;
  char s1[]="Tu lanh Electrolux", s2[]="Tivi LCD Sony", s3[]="Laptop HP";

  
  printf("SIEU THI VIET LONG\n");
  //Nhap thong tin
  printf("Nhap Du lieu ban hang(don vi: chiec) :\n");
  printf("%-20s: ", s1);
  scanf("%d", &tl);
  printf("%-20s: ", s2);
  scanf("%d", &tv);
  printf("%-20s: ", s3);
  scanf("%d", &lt);
  a=8*tl; b=15*tv; c=12*lt;
  sum=a+b+c;
  
  printf("==========================================================\n");

  printf("1. Doanh so cua tung mat hang:\n");
  printf("\t%-20s     : %-5d trieu VND\n", s1, a);
  printf("\t%-20s     : %-5d trieu VND\n", s2, b);
  printf("\t%-20s     : %-5d trieu VND\n", s3, c);
  printf("2. Tong Doanh so la              : %-5d trieu VND\n", sum);

  //Ban chay nhat 
   max1= (tl>tv) ? tl : tv;   max1= (max1>lt) ? max1 : lt;
   (max1==tl)  ?
   printf("3. Mat hang ban chay nhat la     : %s\n", s1) :
   (max1==tv) ?
   printf("3. Mat hang ban chay nhat la     : %s\n", s2)  :
   printf("3. Mat hang ban chay nhat la     : %s\n", s3);

  //Ban e nhat
   min1= (tl<tv) ? tl : tv;   min1= (min1<lt) ? min1 : lt;
   (min1==tl)  ?
   printf("4. Mat hang ban e nhat la        : %s\n", s1) :
   (min1==tv) ?
   printf("4. Mat hang ban e nhat la        : %s\n", s2)  :
   printf("4. Mat hang ban e nhat la        : %s\n", s3);


   
  //Doanh so cao nhat 
  max2= (a>b) ? a : b;     max2= (max2>c) ? max2 : c;
  (max2==a) ?
  printf("5. Mat hang doanh so cao nhat la : %s\n", s1) :
  (max2==b) ?
  printf("5. Mat hang doanh so cao nhat la : %s\n", s2) :
  printf("5. Mat hang doanh so cao nhat la : %s\n", s3) ;

  //Doanh so thap nhat 
  min2= (a<b) ? a : b;    min2= (min2<c) ? min2 : c;
  (min2==a) ?
  printf("6. Mat hang daonh so thap nhat la: %s\n", s1) :
  (min2==b) ?
  printf("6. Mat hang daonh so thap nhat la: %s\n", s2) :
  printf("6. Mat hang daonh so thap nhat la: %s\n", s3);

  return 0;
}
