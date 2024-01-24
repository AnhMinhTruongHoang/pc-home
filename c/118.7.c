int kiemtrasochan(int n) {
   
    if (n == 0) {
        return 0; 
    }
    
    if (n%2==0){
        printf("n la so chan:");
    }
    else{
    	printf("n la so le");
    }


}

int main() {
    
    int n;
    printf("Nhap n:");
    scanf("%d", &n);
    
    int ktsc= kiemtrasochan(n);
    
    
    
    
    return 0;
}
    
