#include <stdio.h>
#include <string.h>
#define MAX 1000

 	int doDaiAMang (char str[MAX]){
 	int count=0;
 	int i;
 	for (i=0;i< strlen(str)-1; i++){
 		count++;
 		
 	}
 	 return count;
 }
 
 
int main() {
	
	char str[MAX];
    printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);
    
    doDaiAMang(str);
    printf("do dai cua chuoi la: %d", doDaiAMang(str));
    

    return 0;
}

