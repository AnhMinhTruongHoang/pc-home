#include <stdio.h>

int main(){
	
	char b;
	printf("nhap ky tu:");
	scanf("%c", &b);
	
	if (b>= 'A' && b<= 'Z'){
		printf("la ky tu in hoa");
	}
	
	else if (b>= 'a' && b<= 'z'){
		printf("la ky tu thuong");
	}
	else{
		printf("la ky tu khac");
	}
	
	return 0;
}
	

