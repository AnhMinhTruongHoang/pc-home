// normal
#include <stdio.h>
#include <string.h>
#define MAX 1000
#define year 2024



 
int main() {
	
	int ngay,thang,nam;
    
	printf("Nhap ngay sinh: ");
    scanf("%d", &ngay);
    
    printf("Nhap thang sinh: ");
    scanf("%d", &thang);
    
    printf("Nhap nam sinh: ");
    scanf("%d", &nam);
    
	int tuoi=year-nam;
		if(ngay >=32 && thang > 12){
			printf("ngay khong hop le");
		}
    	
		else if(ngay< 29 && thang>1 && nam <2024 ){
    		tuoi--;
    	}
    	else {
    		tuoi=year-nam;
    	}
    
    
    printf ("\ntuoi la: %d" ,tuoi);

    return 0;
}

