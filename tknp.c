#include <stdio.h>
#define LENGTH 10

int *nhap() {
  static int arr[LENGTH];
  int i;
  for(i=0; i<LENGTH;i++){
    scanf("%d", &arr[i]);
  }
  return arr;
}

void hienthi(const int arr[]){
  int i;
  for (i=0; i<LENGTH; i++){
    printf("%5d", arr[i]);
  }
  printf("\n");
}

int linearSearch(int arr[], int x){
  int i;
  for(i=0; i<LENGTH;i++){
    if(arr[i]==x)
      return 1;
  }
  return 0;
}

int main () {
  int *arr;
  arr = nhap();
  int x;
  printf("Nhap x= ");
  scanf("%d", &x);
  if (linearSearch(arr,x)){
      printf("Ton tai gia tri x trong mang");
    }
    else {
      printf("Khong ton tai gia tri x trong mang");
    }
  return 0;
}
  
