#include<stdio.h>

int main(){
	
	int a;
	printf("nhap don gia:");
	scanf("%d", &a);
	
	int b;
	printf("nhap so luong:");
	scanf("%d", &b);
	
	int c= a*b;
	
	
	
    int giamgia = 0;
  
   if(c> 100) {
    giamgia = c* 3 / 100;
  }

  int tongtien = c - giamgia;

  printf("Thành tien: %d\n",c);
  printf("Giam giá: %d\n", giamgia);
  printf("Tong tien phai tra: %d\n", tongtien);

  return 0;
}
