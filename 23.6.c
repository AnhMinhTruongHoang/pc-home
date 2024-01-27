#include <stdio.h>
#include <string.h>
#define MAX 1000

int tuLapTrongCau(char str[MAX]){
	int i;
	int count=0;
	
	
	for (i=0;i<strlen(str);i++){
		
		if (str[i]=='b' || str[i]=='B'){
				count++;
			
		}
		  
	} 
	
 	return count;
 }
 
 
int main() {
	
	char str[MAX];
	printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);
    

    int kq = tuLapTrongCau(str); 
    printf("\nso lan lap trong cau la:%d\n", kq);
    

    return 0;
}

