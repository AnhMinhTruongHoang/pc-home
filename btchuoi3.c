#include <stdio.h>
#include <string.h>
#define MAX 1000

int kyTuInHoa (char str[MAX]){
	int i;
	char KTIH= '';
	
		for (i=0;i<strlen(str);i++){
				if(str[i] >= 'a' && str[i] <= 'z'){
					KTIH=str[i] -'a'+'A';
					break;
					
				}
			
		}
		  return LTIH;
}
 	
 		
 	 
 
int main() {
	
	char str[MAX];
    printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);
    
    char KTIH=  kyTuInHoa(str);
    
	if (KTIH){
    	printf("ky tu in hoa la: %c", KTIH);
    	
    }
    else{
    	printf("khong co kt tu in hoa. \n");
    }
	

    return 0;
}

