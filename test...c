#include <stdio.h>

int main(){
	
	int ly;
	printf("nhap diem ly:");
	scanf("%d", &ly);
	
    int hoa;
	printf("nhap diem hoa:");
	scanf("%d", &hoa);
	
	int toan;
	printf("nhap diem toan:");
	scanf("%d", &toan);

	float trung_Binh_Cong= ly + hoa + toan /3;
	printf("trung binh cong:%.2f", trung_Binh_Cong);
	
    return 0;

}



	
	
	
