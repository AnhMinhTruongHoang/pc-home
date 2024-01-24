
    define MAX 1000

 	int daoNguocMang (char str[MAX]){
 	int i,j;
 	int temp;
 
 	for (i = 0, j = strlen(str) - 1; i < j; i++, j--){
 			temp = str[i];
        	str[i] = str[j];
        	str[j] = temp;
 			
 	}
 		
 	
 	 return temp;
 }
 
 
int main() {
	
	char str[MAX];
    printf("Nhap chuoi: ");
    fgets(str, MAX, stdin);
    
    int temp= daoNguocMang(str);
    printf("mang dao nguoc la: %s",str);
    

    return 0;
}
