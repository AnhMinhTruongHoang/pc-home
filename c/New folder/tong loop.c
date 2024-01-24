#include <stdio.h>

int main(){
	
	int n;
	printf("nhap mot so:");
	scanf("%d", &n);
	
	int i; 
    int kq = 0;

    for (i = 1; i <= n; i++){
   		kq=kq+i;
   	
   	
   }
	printf("ket qua la:%d",kq);
    return 0;
}
