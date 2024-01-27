#include <stdio.h>
#include <string.h>
#define MAX 1000

int kiemTraTinhDoiXung(char str[MAX]) {
    int i,j;
    
	for (i = 0, j = strlen(str)-1;i<j;i++,j--) {
        while (str[i] == ' ') {
            i++;  
        }
        while (str[j] == ' ') {
            j--;  
        }

        if (str[i] != str[j]) {
            return 0;  
        }
    }
    return 1;  
}

int main() {
    
	char str[MAX];
    printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);

    
    str[strcspn(str, "\n")] = '\0';
   
    kiemTraTinhDoiXung(str);
    
     
	if (kiemTraTinhDoiXung(str)) {
        printf("Mang doi xung\n");
    } else {
        printf("Khong doi xung\n");
    }

    
	return 0;
}

