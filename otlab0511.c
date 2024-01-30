#include <stdio.h>
#include <string.h>
#define MAX 1000

int chuoiKyTu (char kt[MAX]){
int i;
	
	
 for (i = 0; i < strlen(kt); i++){
	

 if(kt[i]=='A'||kt[i]=='a'){
		printf("ada");
	
	}
	else if (kt[i]=='B'||kt[i]=='b'){
		printf("Basic");
	}
	else if (kt[i]=='C'||kt[i]=='c'){
		printf("COBOL");
	}
	else if (kt[i]=='D'||kt[i]=='D'){
		printf("dBase lll");
	}
	else if (kt[i]=='F'||kt[i]=='f'){
		printf("fortran");
	}
	else if (kt[i]=='P'||kt[i]=='p'){
		printf("Pascal");
	}
	else if (kt[i]=='P'||kt[i]=='p'){
		printf("Pascal");
	}
	else if (kt[i]=='V'||kt[i]=='v'){
		printf("Visual C++");
	}
	
}
	 

 	 printf ("\n");
 }
 if(kt[i] != 'A' || 'a', 	'B'|| 'b', 	'C'|| 'c', 	'D' || 'd', 	'P' || 'p', 	'v' || 'v'){
			printf("\nBao khong co ngon ngu lap trinh tuong ung\n");
			return;
}
 
 
int main() {
	
	char kt[MAX];
    printf("Nhap chuoi: ");
    fgets(kt, MAX, stdin);
    
    
    chuoiKyTu(kt);
    
    

    return 0;
}
