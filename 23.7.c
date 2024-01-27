#include <stdio.h>
#include <string.h>
#define MAX 1000

int kyTuNguyenAm (char str[MAX]){
	int i;
	char n=0;
	
	for (i=0;i< strlen(str); i++){
		if (str[i] > 'a','A' && str[i]<='z','Z'){
					n=str[i];
		
		switch(n){
		
			case 'u':
			case 'U':
			case 'e':
			case 'E':
			case 'o':
			case 'O':
			case 'a':
			case 'A':	
			case 'i':
			case 'I':
				printf("phu am la: %c\n" ,n);
				n=0;
				break;
				
				
		 }
		
		}	
	}
				if (!n){
				printf("khong phai phu am\n");
		}
 	
 		
 	
 	 return '\0';
 }
 
 
int main() {
	
	char str[MAX];
    printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);
    
    char kq= kyTuNguyenAm(str);
	if (kq != '\0'){
		 printf("phu am la:", kq);
		
	}  
   
    

    return 0;
}

