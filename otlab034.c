// normal
#include <stdio.h>
#include <string.h>
#define MAX 1000


 
int main() {
	
	int lcb;
    printf("Nhap lcb: ");
    scanf("%d", &lcb);
    
    float da=12/100*lcb;
    const hra=150;
    const ta=120;
    int khac=450;
    //thue
	float fp=14/100*lcb;
	float it=15/100*lcb;
	
	int luongThucLanh= lcb+da+hra+ta+khac-(fp+it);
	
	printf("luong thuc lanh la:  %d$",luongThucLanh);
    

    


    return 0;
}

