#include <stdio.h>

int soN(int n, int i) {
   
    if (n < 0) {
        return 0;
    }

    
    if (n == 0) {
        return 1;
    }

   
    int soN = 1;
    for (i = 1; i <= n; i++) {
        soN *= i;
    }

    return soN;
}

int main() {
    
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    
    int i= 1;
	int SoN = soN(n,i);
    
    

    
    printf("n! = %d\n", SoN);

    return 0;
}

