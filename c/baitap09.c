#include <stdio.h>

int main(){
	
	int x;
	printf("so nguyen:");
	scanf("%d", &x);
	
    float fx =((3.0 * x * x) + (4.0 * x) + 5.0) / (2.0 * x + 1.0);
    printf("Gia Tri Cua f(x) = %.2f", fx);

	return 0;
}
