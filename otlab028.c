// normal
#include <stdio.h>
#include <string.h>
#define MAX 1000


 
int main() {
	
	int x;
    printf("Nhap x: ");
    scanf("%d", &x);
    
    float fx = (3*pow(x,2) + (4*x +5)/(2*x +1));
    printf("\ngia tri bieu thuc la: %d", fx);

    return 0;
}

