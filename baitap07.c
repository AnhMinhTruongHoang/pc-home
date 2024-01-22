#include <stdio.h>

int main() {
    const int MOT_GIO = 20000;
    const int Tien_Mot_Binh_Nuoc = 20000;

    int gioVao;
    printf("Gio vao: ");
    scanf("%d", &gioVao);

    int gioRa;
    printf("Gio ra: ");
    scanf("%d", &gioRa);

    int thoiGianThue = gioRa - gioVao;
    int giaTien = thoiGianThue * MOT_GIO;

    int binhNuocDaUong;
    printf("binh nuoc da uong:");
    scanf("%d", &binhNuocDaUong);
    
    int tienNuoc = binhNuocDaUong*Tien_Mot_Binh_Nuoc;
    printf("tien nuoc la:%.2d dong\n", tienNuoc);
    
    int tong= giaTien + tienNuoc;
    printf("Tong tien thue san la: %d dong\n", giaTien);
    printf("tong tien la:%d\n", tong);
	
	return 0;
    
}
