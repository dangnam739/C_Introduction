#include<stdio.h>

int main()
{
  int a, b, net;
  float dis;
  printf("Welcome to Topcase Supermarket !!!\n");
  printf("You buy: \n");
  printf("The number of Ipod(148USD/P): ");
  scanf("%d", &a);
  printf("The number of Ipad(288USD/P): ");
  scanf("%d", &b);
  net = a*148 + b*288;
  dis = ((a>=3)&&(b>2))||(net>1020) ? net*10/100 : 0;

  /*in hoa don*/
  printf("=====================================\n\n");
  printf("TOPCASE SUPERMARKET-BILL\n");
  printf("* %-10s\t%5d x 148 =  %-5d USD\n", "Ipod", a, a*148);
  printf("* %-10s\t%5d x 288 =  %-5d USD\n", "Ipad", b, b*288);
  printf("* %-10s\t%11c =  %-5d USD\n", "Net",' ', net );
  printf("* %-10s\t%5d x 10%% =  %-5.2f USD\n\n", "Discount",net , dis );
  printf("* %-10s %5d - %-5.2f =  %-5.2f USD\n", "You pay:", net, dis, net-dis  );
  
  return 0;
}
