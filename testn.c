#include<stdio.h>

int main(){
	
	float n;
	printf("nhap mot so thuc:");
	scanf("%f", &n);
	
	int phannguyen = n;
    float phanthapphan = n - phannguyen;

    printf("Phan nguyen: %d\n", phannguyen);
    printf("Phan thap phan: %.2f\n", phanthapphan);


	int x= phannguyen + phanthapphan ;
	printf("ket qua la: %08d",x);
	
	return 0;
	
}
