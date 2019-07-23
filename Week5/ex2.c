#include<stdio.h>

int main()
{
  
  int a1, a2, a, b1, b2, b, h1, h2, h, ag1, ag2;
  char n1[10], n2[10];

  printf("Login - Enter your height (cm): ");
  scanf("%d", &h);
  printf("\n");

  printf("Hello !!!\n");
  printf("\tWhat is your name?_________: ");
  scanf("%s", n1);
  printf("\tHow old are you?___________: ");
  scanf("%d", &ag1);
  a1= ag1<=16 ? -2 : ag1<21 ? 5 : 2;
  printf("\t                            (%d)\n", a1);
  printf("\tWhat's your height?________: ");
  scanf("%d", &h1);
  a2= (h1>h) ? -1 : (h-h1)>30 ? -2 : 3;
  printf("\t                            (%d)\n", a2);
  a=a1+a2;

  printf("\n");
  printf("Hello !!!\n");
  printf("\tWhat is your name?_________: ");
  scanf("%s", n2);
  printf("\tHow old are you?___________: ");
  scanf("%d", &ag2);
  b1= ag2<=16 ? -2 : ag2<21 ? 5 : 2;
  printf("\t                            (%d)\n", b1);
  printf("\tWhat's your height?________: ");
  scanf("%d", &h2);
  b2= (h2>h) ? -1 : (h-h2)>30 ? -2 : 3;
  printf("\t                            (%d)\n", b2);
  b=b1+b2;

  printf("\n");
  printf("Your decision:\n");
  (a>b) ? printf("%s, are you free on Saturday ?\n", n1) : (a==b) ?
  printf("%s, are you free on Saturday ?\n%s, are you free on Sunday ? \n", n1, n2) :
  printf("%s, are you free on Saturday ?\n", n2);



  return 0;
}
