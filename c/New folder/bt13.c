#include<stdio.h>

int main(){
	//he so 2
	float t;
	printf("nhap diem toan:");
	scanf("%f", &t);
	
	float nv;
	printf("nhap diem N.van:");
	scanf("%f", &nv);
	
	float a;
	printf("nhap diem anh van:");
	scanf("%f", &a);
	
	float TBM_kh=(t+nv+a) / 3;
	
	// he so 2
	
	float l;
	printf("nhap diem ly:");
	scanf("%f", &l);
	
	float h;
	printf("nhap diem hoa:");
	scanf("%f", &h);
	
	float s;
	printf("nhap diem sinh:");
	scanf("%f", &s);
	
	
	float TBM_tn=(l+h+s) / 3;
	
	//he so 1
	
	float su;
	printf("nhap diem su:");
	scanf("%f", &su);
	
	float d;
	printf("nhap diem dia:");
	scanf("%f", &d);
	
	float TBM_sd=(su+d) / 1;
	
	printf("diem trung binh khoa hoc la: %.2f\n",TBM_kh);
	printf("diem trung binh tu nhien la: %.2f\n",TBM_tn);
	printf("diem trung binh su+dia: %.2f\n",TBM_sd);
	
	if (TBM_kh,TBM_tn,TBM_sd >= 9.0){
		printf("xep loai xuat sac");
	}
	else if (TBM_kh,TBM_tn,TBM_sd >= 8.0){
		printf("xep loai xuat gioi");	
	}
	else if (TBM_kh,TBM_tn,TBM_sd >= 6.5){
		printf("xep loai xuat kha");
    }
    else if (TBM_kh,TBM_tn,TBM_sd >= 5.5){
		printf("xep loai trung binh");
    }
    else{
    	printf("xep loai yeu");
    }
		

	return 0;
}
