// normal
#include <stdio.h>
#include <string.h>
#define MAX 1000


 
int main() {
	
	const h=20000;
	const nuoc=20000;
	
	
	int gioVao;
    printf("\nNhap Gio vao: ");
    scanf("%d", &gioVao);
    
    int gioRa;
    printf("\nnhap gio ra: ");
    scanf("%d", &gioRa);
    
    
    int tongGio= gioRa-gioVao;
    
    int tienGio=tongGio*h;
    printf("\ntong tien gio la: %d\n",tienGio);
    
    int soChaiNuocDaUong;
    printf("\nnhap so luong chai nuoc:  ");
    scanf("%d", &soChaiNuocDaUong);
    
    int tienNuoc= soChaiNuocDaUong*nuoc;
    printf("\ntien nuoc la: %d\n", tienNuoc);
    
    
    int tongCong= tienGio + tienNuoc;
    printf("\ntong tien la: %d vnd", tongCong);
    
    
    

    return 0;
}

