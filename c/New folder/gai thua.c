#include <stdio.h>

int main(){
	
	int n;
	printf("nhap mot so:");
	scanf("%d", &n);
	
	int i; 
    int gt = 1;

    for (i = n; i >= 1; i--){
   		gt=gt*i;
   	
   	
   	
    
   }
	printf("%d",gt);
    return 0;
}
