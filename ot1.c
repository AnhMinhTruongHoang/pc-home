// normal
#include <stdio.h>
#include <string.h>
#define MAX 1000


 
int main() {
	
	int a;
    printf("Nhap a: ");
    scanf("%d", &a);
    
    int b;
    printf("nhap b:");
    scanf("%d", &b);
    
    int tong= a+b;
    printf("\ntong la: %d" ,tong);
    
	int hieu= a-b;
	printf("\nhieu la: %d", hieu);
	
    int tich= a*b;
	printf("\ntich la: %d", tich);
    
	float thuong= a/b;
	printf("\nthuong la %.2f", thuong);
    
    return 0;
}

