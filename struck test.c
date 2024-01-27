#include <stdio.h>
#include <string.h>
#define MAX 1000
#define YEAR 2024

struct HocVien {
	char ten[51];
	int ns;
	char gt; // F, M
	float diem;
	int tuoi;
};

void disHV(struct HocVien hv) {
	printf("%s \t%d \t%c \t%.2f \t%d \n", hv.ten, hv.ns, hv.gt, hv.diem, hv.tuoi);
}

void inpHV(struct HocVien *hv) {
	fflush(stdin);
	printf("Nhap ten: ");
	gets(hv->ten);
	printf("Nhap ns: ");
	scanf("%d", &hv->ns);
	printf("Nhap gt(F/M): ");
	scanf(" %c", &hv->gt); //luu y co dau cach truoc %c
	printf("Nhap diem: ");
	scanf("%f", &hv->diem);
	hv->tuoi = YEAR-hv->ns;
}

// Nhap xuat thong tin hoc vien
int main() {
//	struct HocVien hv, hv2;
//	inpHV(&hv);
//	inpHV(&hv2);
//	
//	disHV(hv);
//	disHV(hv2);

	
	struct HocVien hvs[MAX];
	int n;
	printf("Nhap so luong hoc vien: ");
	scanf("%d", &n);
	
	int i;
	for (i = 0; i<n; i++) {
		printf("==Nhap info HV %d:\n", i);
		inpHV(&hvs[i]);
	}
	
	for (i = 0; i<n; i++) {
		disHV(hvs[i]);
	}
	
	return 0;
}


