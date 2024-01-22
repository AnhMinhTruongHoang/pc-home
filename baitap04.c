#include <stdio.h>

int main(){

	//3
	int  lcb;

	printf("luong co ban:");
	scanf("%d", &lcb);
	
	const DA = 12/100;
	const HRA = 150;
	const K= 450;
	const TA= 120;
	
	float  t;

	printf("thue:");
	scanf("%f", &t);
	
	float PF= 14/100,IT=15/100;
	
	int LTL = lcb+DA+HRA+TA+K-(PF+IT);
	printf("luong thuc lanh:%d",LTL);
	
	return 0;
	
}


