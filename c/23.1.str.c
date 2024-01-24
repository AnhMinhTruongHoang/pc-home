#include <stdio.h>
#include <string.h>
#define MAX 100


void inChuCaiDau(char str[]) {
	int i;
	if (str[0] >='A' && str[0] <='Z') {
		printf("%c", str[0]);
	}
	
	for (i = 1; i<strlen(str); i++) {
		if(str[i-1] == ' ' && str[i] >='A' && str[i] <='Z') {
			printf("%c", str[i]);
		}
	}
}

int main () {
	char str[MAX]; // [A][p][t][e][c][h][\0][][][].....[][][][][]
	printf("Nhap: ");
	gets(str); // => Aptech 
	
//	int count = demTieng(str);
//	
//	printf("Res: %d", count);
	inTungPhanCuaTen(str);
	
	return 0;
}

