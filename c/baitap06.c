#include <stdio.h>

int main(){
	
	int a;
	printf("nhap so a:");
	scanf("%d", &a);
	
	if (a != 0) { 
        printf("a lon hon 0\n");
    } 
	else {
        printf("a bang 0\n");
    }
    
	
	int b;
	printf("nhap so b:");
	scanf("%d", &b);
	
	float x;
	printf("nhap so x:");
	scanf("%f", &x);
	
	int ptbn= a*x+b;
	printf("phuong trinh bac nhat la:%d",ptbn);
	
	return 0;
	
}
