// normal
#include <stdio.h>
#include <string.h>
#define MAX 1000
#define pi 3.14 


 
int main() {
	
	
	int banKinh;
    printf("Nhap ban kinh: ");
    scanf("%d", &banKinh);
    
    int chuVi= pow(banKinh,2)*pi;
    printf("\nchu vi la: %d", chuVi);
    
    int dienTich= pow(banKinh,2)*pi;
    printf("\ndien tich hinh tron la: %d", dienTich);
    
    
    
    
    

    return 0;
}

