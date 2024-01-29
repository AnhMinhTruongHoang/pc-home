// normal
#include <stdio.h>
#include <string.h>
#define MAX 1000


 
int main() {
	
	int so_W;
    printf("Nhap so W tieu thu: ");
    scanf("%d", &so_W);
    
    if (so_W >=1 && so_W <=100){
    	printf("tien dien la: 5$");
    	
    }
	else if(so_W >=101 && so_W <=150){
    	printf("tien dien la: 7$");
    }
    else if(so_W >=151 && so_W <=200){
    	printf("tien dien la: 10$");
    }
    else if(so_W >=201 && so_W <=300){
    	printf("tien dien la: 15$");
    }
    else{
    	printf("tien dien la: 20$");
    }
    
    

    return 0;
}

