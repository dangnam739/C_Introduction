#include<stdio.h>

int main()
{
  int a, b, c, sum;


  printf("Wellcome to The BK Library DVD Shop ! \n");
  printf("The shop has three rental rates: \n");
  printf("\t1. Overnight:\t $7.00\n");
  printf("\t2. Three-day:\t $5.00\n");
  printf("\t3. Weekly   :\t $3.00\n");
  printf("============================================================\n");
  printf("\tThe number of Overnight: ");
  scanf("%d", &a);
  printf("\tThe number of Three-day: ");
  scanf("%d", &b);
  printf("\tThe number of Weekly   : ");
  scanf("%d", &c);
  sum=a*7+b*5+c*3;
  printf("============================================================\n");
  printf("\tThis is the bill\n");
  printf("____________________________________________________________\n");
  printf("|%3s|%-20s|%13s|%8s|%10s|\n", " ", "Type of rent", "Rent per disk", "Quanlity", "Total");
   printf("|___|____________________|_____________|________|__________|\n");
  printf("|%3d|%-20s|%13s|%8d|$%6d.00|\n",1, "Overnight", "$   7.00", a, a*7);
  printf("|%3d|%-20s|%13s|%8d|$%6d.00|\n",2, "Three-day", "$   5.00", b, b*5);
  printf("|%3d|%-20s|%13s|%8d|$%6d.00|\n",3, "Weekly", "$   3.00", c, c*3);
   printf("|___|____________________|_____________|________|__________|\n");
  printf("|%3s|%-20s|%13s|%8s|$%6d.00|\n", " ", "You pay", " ", " ", sum);
  printf("|___|____________________|_____________|________|__________|\n");

  return 0;
}
