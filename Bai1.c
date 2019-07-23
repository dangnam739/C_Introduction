#include <stdio.h>

int main()
{
  int n, sum=0, i=0;
  printf("Nhap so nguyen n= ");
  scanf("%d", &n);
  for(int i=1; i<=n; i++){
    sum+=i;
  }
  printf("Tong cac so tu 1 den n la: %d.\n", sum);
  return 0;
}
