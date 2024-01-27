#include <stdio.h>
#include <string.h>
#define MAX 1000

struct sinhVien{
	char msv[10];
	char name[50];
	char gender;
	int year;
	char email[50];
};

void displaySinhVien(struct sinhVien sv){
	printf("%s \%s \t%c \t%d \t%s \n", sv.msv,sv.name,sv.gender,sv.year,sv.email);
}

void inputSinhVien(struct sinhVien *sv) {
	fflush(stdin);
	printf("Nhap ma sinh vien: ");
	gets(sv->msv);
	
	printf("Nhap name: ");
	gets(sv->name);
	
	printf("Nhap gt(F/M): ");
	scanf(" %c", &sv->gender); 
	
	printf("Nhap year: ");
	scanf(" %d", &sv->year); 
	
	fflush(stdin);
	printf("Nhap email: ");
	gets(sv->email);
}

 
int main() {
	
	struct sinhVien svs[MAX];
	int n;
    printf("Nhap so luong sv: ");
    scanf("%d", &n);
    
    int i;
	for (i = 0; i<n; i++) {
		printf("\nNhap info SV %d:\n", i);
		inputSinhVien(&svs[i]);
	}
	
	for (i = 0; i<n; i++) {
		displaySinhVien(svs[i]);
	}
    

    return 0;
}

