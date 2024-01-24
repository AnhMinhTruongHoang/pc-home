//#include <stdio.h>
//#include <string.h>
//#define MAX 1000
//
//void demTutrongChuoi (char str[MAX]){
//	int i;
//	int count =0;
//	
//	
//	for (i=0; i<strlen(str);i++){
//		if (str[i] == '' || str[i] == ''){
//				count++;
//			
//	
//			
//		}
//	}
//	printf("\nSo thu tu trong chuoi la: %s", count);
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
//    demTutrongChuoi(str);
//    
//    
//
//    return 0;
//}

#include <stdio.h>
#include <string.h>
int demSoTu(char *chuoi) {
    int dem = 0;
    int i, n;

    n = strlen(chuoi); 

    
    while (chuoi[0] == ' ') {
        chuoi++;
        n--;
    }

    
    while (n > 0 && chuoi[n - 1] == ' ') {
        n--;
    }

    
    for (i = 0; i < n; i++) {
        if (chuoi[i] == ' ') {
            
            if (chuoi[i - 1] != ' ') {
                dem++;
            }
        }
    }

   
    if (n > 0 && chuoi[n - 1] != ' ') {
        dem++;
    }

    return dem;
}

int main() {
    char chuoi[] = "chuc cac ban thi tot";

    int soTu = demSoTu(chuoi);

    printf("Chuoi co %d tu.\n", soTu);

    return 0;
}


