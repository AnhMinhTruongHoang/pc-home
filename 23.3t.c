#include <stdio.h>
#include <string.h>
#define MAX 1000

//int kyTuInHoa (char str[MAX]){
//	int i;
//	char KTIH;
//	
//		for (i=0;i<strlen(str);i++){
//				if(str[i] >= 'A' && str[i] <= 'Z'){
//					KTIH=str[i];
//					return KTIH;
//					
//				}
//			
//		}
//		  return 0;
//}
// 	
// 		
// 	 
// 
//int main() {
//	
//	char str[MAX];
//    printf("Nhap chuoi: ");
//    fgets(str, MAX, stdin);
//    
//    char KTIH=  kyTuInHoa(str);
//    
//	if (KTIH){
//    	printf("ky tu in hoa la: %c", KTIH);
//    	
//    }
//    else{
//    	printf("khong co kt tu in hoa. \n");
//    }
//	
//
//    return 0;
//}




#include <stdio.h>
#include <string.h>
#define MAX 1000

void kyTuInHoa(char str[MAX]) {
    int i;
    printf("Ky tu in hoa la: ");

    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c ", str[i]);
        }
        
    }

    printf("\n");
}

int main() {
    char str[MAX];
    printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);

    kyTuInHoa(str);
    
    return 0;
}

