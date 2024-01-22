#include<stdio.h>

int main(){
	
    	
	int lcb;
	printf("luong co ban la:");
	scanf("%d", &lcb);
	
	float da= 12/100*lcb;
	int hra= 150;
	int ta= 120;
	int khac= 450;
	float pf= 14/100*lcb;
	float it= 14/100*lcb;
	
		
	float ltl= lcb+da+hra+ta+khac-(pf+it);
	printf("luong thuc lanh la:%f", ltl);
	

	return 0;
}
	
	
